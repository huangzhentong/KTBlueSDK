//
//  KTFloorsViewController.h
//  cocore
//
//  Created by KT--stc08 on 2019/4/8.
//

#import <UIKit/UIKit.h>
#import <KTFindCarSDK/KTParkDetailModel.h>
NS_ASSUME_NONNULL_BEGIN
//楼层选择
@interface KTFloorsViewController : UIViewController
@property(nonatomic,copy)NSArray <KTParkInfoModel*> *dataArray;
@end

NS_ASSUME_NONNULL_END
