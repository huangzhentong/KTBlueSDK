//
//  iBeaconFindCar.h
//  iBeaconFindCar
//
//  Created by KT--stc08 on 2019/3/28.
//  Copyright © 2019 KT--stc08. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface iBeaconFrameworkCenter : NSObject
//初始化
+(int)initiNavagation:(NSDictionary*)dict;
//获取路径
+(id)getPathAlgorithm:(CGPoint)beginPoint withEndPoint:(CGPoint)endPoint;

//蓝牙信号
//angle 角度
//stepNumber 步数
+(id)iBeaconLocate:(NSArray *)Inbeacons
         withAngle:(CGFloat)angle
    withStepNumber:(NSInteger)stepNumber;
//退出SDK
+(int)navigationExitSDK;

@end
