//
//  StepCountManager.h
//  WMDemo
//
//  Created by KT--stc08 on 2019/5/22.
//  Copyright © 2019 刘东. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMotion/CoreMotion.h>
NS_ASSUME_NONNULL_BEGIN

@interface StepCountManager : NSObject
@property (nonatomic, strong) CMMotionManager *motionManager;   // 加速度传感器

@property (nonatomic) NSInteger step;                       // 运动步数（总计）
+(instancetype)shareInstance;
//-(void)initAccelerometer;
-(void)startAccelerometer;
-(void)stopAccelerometer;
@end

NS_ASSUME_NONNULL_END

@interface Steps : NSObject
//步数模型
@property(nonatomic,strong) NSDate *date;

@property(nonatomic,assign) int record_no;

@property(nonatomic, strong) NSString *record_time;

@property(nonatomic,assign) int step;

//g是一个震动幅度的系数,通过一定的判断条件来判断是否计做一步
@property(nonatomic,assign) double g;

@end
