//
//  KTFindCarManager.h
//  KTFindCarSDK
//
//  Created by KT--stc08 on 2019/3/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KTFindCarManager : NSObject
+(instancetype)shareInstance;

//初使化SDK传放车场 ID
+(void)initSDKWithBaseURL:(nonnull NSString*)baseURL ;
//获取找车视图
+(UINavigationController*)KTFindCarViewController:(nonnull NSString*)lotID
                                    withCarNumber:(nonnull NSString*)carNumber;

//打开找车视图 传入viewController ,viewCotroller 为空时获则获取当前控制器
//isPush true 为 push 方式 。false 为present
+(void)openKTFindCarWithLotID:(nonnull NSString*)lotID
                     withCarNumber:(nonnull NSString*)carNumber
           withViewController:(nullable UIViewController*)viewController;


//获取车场ID;
+(NSString*)lotID;
//获取车牌号
+(NSString*)carNumber;
//获取基本URL
+(NSString*)baseURL;

@end

NS_ASSUME_NONNULL_END
