//
//  KTBluetoothView.h
//  AFNetworking
//
//  Created by KT--stc08 on 2019/5/20.
//

#import <UIKit/UIKit.h>
#import <KTFindCarSDK/KTSDKHeader.h>
NS_ASSUME_NONNULL_BEGIN

@interface KTBluetoothView : UIView
@property(nonatomic,strong)UIImageView *mapImageView;           //地图
@property(nonatomic)CGFloat maxScale;           //地图


-(CALayer*)drawPathWithPathPoints:(NSArray*)pathArray withScaleW:(CGFloat)scaleW withScaleH:(CGFloat)scaleH;
@end

NS_ASSUME_NONNULL_END
