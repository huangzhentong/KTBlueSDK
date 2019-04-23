//
//  KTIBeaconModel.h
//  Network
//
//  Created by KT--stc08 on 2019/4/3.
//  Copyright © 2019 KT--stc08. All rights reserved.
//

#import "BaseModel.h"

NS_ASSUME_NONNULL_BEGIN
//蓝牙信息
@interface KTIBeaconModel : BaseModel
@property(nonatomic)double x;                      //x
@property(nonatomic)double y;                      //y
@property(nonatomic,copy)NSString * rssi;                      //x
@property(nonatomic,copy)NSString * accuracy;
@property(nonatomic,copy)NSString * proximity;                      //y
@property(nonatomic,copy)NSString * minor;                      //y
@property(nonatomic,copy)NSString * major;                      //y
@property(nonatomic,copy)NSString* uuid;                      //y
@end

NS_ASSUME_NONNULL_END
