//
//  KTParkInfoManager.h
//  cocore
//
//  Created by KT--stc08 on 2019/4/3.
//

#import <Foundation/Foundation.h>
//#import <KTFindCarSDK/KTParkDetailModel.h>
#import <CoreLocation/CoreLocation.h>
#import "KTParkDetailModel.h"
#import  "CLBeacon+ToDic.h"
@class KTParkDetailModel;
NS_ASSUME_NONNULL_BEGIN
//车场信息管理
@interface KTParkInfoManager : NSObject
@property(nonatomic,copy)KTParkDetailModel *detalModel;

+(instancetype)shareInstance;


+(void)pushToPathFindCar:(UIViewController*)vc withParkFloorInfoModel:(KTParkInfoModel*)model;

//判断是否在同一楼层
+(BOOL)floorInfoManage:(KTFloorInfoModel*)model withSureBlock:(void(^)(void))sureBlock withCancelBlock:(void(^)(void))cancel ;

@end

NS_ASSUME_NONNULL_END



@interface KTParkInfoManager (iBeacon)
@property(nullable,nonatomic,strong)NSMutableDictionary *ibeaconDic;
//获取存储的蓝牙信号
+(nullable CLBeacon* )getIbeaconsInfo:(CLBeacon*_Nullable)beacon;
//存储蓝牙信号
+(void)saveIbeaconsInfo:(CLBeacon*_Nonnull)beacon;

@end
//车位
@interface KTParkInfoManager (CarPark)
@property(nullable,nonatomic,copy)NSArray<KTParkPointModel*> *carParkArray;
//根据坐标获取车位
+(KTParkPointModel*_Nullable)getCarParkWithPoint:(CGPoint)point;


@end

