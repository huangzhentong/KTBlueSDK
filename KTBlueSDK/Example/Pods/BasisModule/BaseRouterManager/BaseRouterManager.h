//
//  RouterManager.h
//  BasisModule
//
//  Created by huang on 2016/11/3.
//  Copyright © 2016年 huang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseRouterManager : NSObject
+(void)reachabilityStatusChange:(void(^)(NSInteger status))block;
+(long)getReachabilityStatus;
+(void)addRequestHeader:(NSString*)header withRequestHeaderKey:(NSString*)headerKey;
+(NSURLSessionDataTask*)requestWithDic:(NSDictionary *)userInfo withBlock:(void(^)(id result))block;
@end
