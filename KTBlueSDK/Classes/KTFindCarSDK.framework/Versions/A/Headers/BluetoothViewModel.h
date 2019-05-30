//
//  BluetoothViewModel.h
//  AFNetworking
//
//  Created by KT--stc08 on 2019/5/21.
//

#import <Foundation/Foundation.h>
#import <KTFindCarSDK/KTSDKHeader.h>
#import <KTFindCarSDK/KTParkInfoManager.h>
#import <KTFindCarSDK/KTBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface BluetoothViewModel : NSObject

@property(nonatomic)NSInteger ibeaconNullCount;                 //未获取到蓝牙次数
@property(nonatomic,strong)RACSignal *floorSignal;                   //请求楼层
@property(nonatomic,strong)RACSubject *subject;
@property(nonatomic,strong,nullable) KTFloorInfoModel *floorInfoModel;   //楼层信息
@property(nonatomic)BOOL isLocationEnabel;
@property(nonatomic,weak)KTBaseViewController *viewController;
@property(nonatomic,strong)NSArray *virtualArray;                       //虚拟数据
//-(void)addListBluetoothState;
-(void)startIbeaconSearch;
-(void)stop;

@end

NS_ASSUME_NONNULL_END
