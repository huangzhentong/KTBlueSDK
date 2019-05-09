//
//  BaseViewController.h
//  KTFindCarSDK
//
//  Created by KT--stc08 on 2019/4/25.
//

#import <UIKit/UIKit.h>
#import <ReactiveObjC/ReactiveObjC.h>
NS_ASSUME_NONNULL_BEGIN

@interface BaseViewController : UIViewController
@property(nonatomic,strong)RACSignal *signal;
@property(nonatomic,strong)RACDisposable * disposable;
-(void)bindVM;
//请求成功处理
-(void)requestSuccess:(id)x;
-(void)requestFaild:(NSError *)error;
-(void)reloadRequest;
@end

NS_ASSUME_NONNULL_END
