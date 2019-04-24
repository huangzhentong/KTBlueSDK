//
//  BaseClient.m
//  BasisModule
//
//  Created by huang on 2016/11/4.
//  Copyright © 2016年 huang. All rights reserved.
//

#import "BaseClient.h"
#import "MGJRouter.h"
#import "RequestModelManager.h"
@interface BaseClient ()
@property(nonatomic,copy)NSString *requestURL;
@end

@implementation BaseClient

static NSString *baseURL=nil;

+(void)setBaseURL:(NSString*)url
{
    baseURL = [url copy];
}

-(instancetype)init
{
    self = [super init];
    if (self) {
        
        self.baseUrl = baseURL?:BASE_URL;
        self.requestType=HttpRequestUrlType_Post;

    }
    return self;
}
-(NSString*)requestURL
{
    return [NSString stringWithFormat:@"%@%@",self.baseUrl,self.url?:@""];
}
-(void)dealloc
{
    
}

-(NSDictionary*)dictionaryWithModel{
    NSMutableDictionary *dic = [NSMutableDictionary dictionary];
   
    if (self.baseUrl) {
        dic[ClientUrl]=self.requestURL;
    }
    else
    {
        dic[ClientUrl]=self.url?:@"";
    }
    
    dic[ClientParameters] = self.parameters?:@{};
    if (self.type==nil) {
        switch (self.requestType) {
            case HttpRequestUrlType_Post:
            {
                self.type=@"post";
            }
                break;
            case HttpRequestUrlType_Get:
            {
                self.type=@"get";
            }
                break;
            case HttpRequestUrlType_Put:
            {
                self.type=@"put";
            }
                break;
            case HttpRequestUrlType_Patch:
            {
                self.type=@"patch";
            }
                break;
            case HttpRequestUrlType_Delete:
            {
                self.type=@"delete";
            }
                break;
                
            default:
            {
                self.type=@"post";
            }
                break;
        }
    }
    dic[ClientType] = self.type?:@"post";
    dic[ClientIsCache] = @(self.isCache);
    if (self.progress) {
        dic[ClientProgress]=self.progress;
    }
    return dic;
    
}
-(NSString*)description
{
    return  [NSString stringWithFormat:@"%@",[self dictionaryWithModel] ];
}
//发起请求
-(void)request:(void(^)(id result))completion
{
    
    [self request:completion withFailure:nil];
}
-(void)request:(void(^)(id result))completion withFailure:(void(^)(NSError *error))failure
{

    [self requestStart];
    [MGJRouter openURL:BaseGeneralRequest withUserInfo:[self dictionaryWithModel] completion:^(id result) {
 
        id nresult = result;
        NSError *error = nil;
        id<RequestModelDelegate> delegate = self.delegate ? :[RequestModelManager delegate];
        if (delegate && [delegate respondsToSelector:@selector(requestLogicDispose: withClass:)]) {
            nresult =  [delegate requestLogicDispose:result withClass:self.modelClass];
        }
        
        
        if (([nresult isKindOfClass:[NSError class]])) {
            error = nresult;
            nresult = nil;
            if (failure) {
                failure(error);
            }
        }
        else
        {
            error = nil;
          
            if (completion) {
                completion(nresult);
            }
        }
        [self requestComplete:nresult withError:error];
    }];
    
}

//-(id )requestEndLogic:(id)dict
//{
//
//    if ([dict isKindOfClass:[NSError class]])
//    {
//        NSError *error = dict;
//        //取消请求
//        if (error.code==NSURLErrorCancelled) {
//            return nil;
//
//        }
//        NSError *newError = [NSError errorWithDomain:@"服务器请求失败" code:error.code userInfo:error.userInfo];
//        return newError;
//
//    }
//    else if(dict[@"code"]==nil)
//    {
//        NSError *error  = [NSError errorWithDomain:@"未知错误" code:99999 userInfo:nil];
//        return error;
//    }
//    else if([dict[@"code"] intValue]!=200)
//    {
//        NSError *error  = [NSError errorWithDomain:dict[@"msg"] code:[dict[@"code"] intValue] userInfo:nil];
//        return error;
//
//    }
//    else
//    {
//        return dict;
//    }
//    return dict;
//}



-(void)requestStart
{
    if(self.startBlock)
    {
        self.startBlock();
    }
    
    id<RequestModelDelegate> delegate = self.delegate ? :[RequestModelManager delegate];
    if (delegate && [delegate respondsToSelector:@selector(requestWillStart)]) {
       [delegate requestWillStart];
    }
   
    
    
    
}
-(void)requestComplete:(id)reslut withError:(NSError *)error;
{
    if (self.completeBlock) {
        self.completeBlock(reslut, error);
    }
    id<RequestModelDelegate> delegate = self.delegate ? :[RequestModelManager delegate];
    if (delegate && [delegate respondsToSelector:@selector(requestComplete:withError:)]) {
        [delegate requestComplete:reslut withError:error];
    }
    
    
}
-(BOOL)isRequesting
{
    return [[MGJRouter objectForURL:HRequestUrlIsRequest withUserInfo:@{@"url":self.requestURL}] boolValue];
}


/**
 判断是否请求中
 
 @param url 完整的URL
 @return YES表示请求中，NO表示未请求
 */
+(BOOL)isRequestingWithURL:(NSString*)url
{
    if ([url rangeOfString:@"http"].location !=NSNotFound) {
        url = [NSString stringWithFormat:@"%@%@",baseURL,url];
    }
    return [[MGJRouter objectForURL:HRequestUrlIsRequest withUserInfo:@{@"url":url}] boolValue];
    
}
//取消请法庭
+(void)cancelRequestURL:(NSString *)url
{
    BaseClient *base=[BaseClient new];
    if ([url rangeOfString:@"http"].location !=NSNotFound) {
        base.baseUrl=@"";
    }
    base.url=url;
    base.type=@"cancel";
    [base request:nil];
    
}
@end

