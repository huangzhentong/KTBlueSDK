//
//  KTPathFindCarView.h
//  KTFindCarSDK
//
//  Created by KT--stc08 on 2019/4/2.
//

#import <UIKit/UIKit.h>
#import <Masonry/Masonry.h>
#import "KTParkDetailModel.h"
#import <YYWebImage/YYWebImage.h>
NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSInteger,KTPathDirectionType) {
    Left = 0,
    Right,
    Up,
    Down
};

@interface KTPathFindCarView : UIView
@property(nonatomic,strong)UIImageView *mapImageView;           //地图
@property(nonatomic)CGFloat maxScale;           //地图
@property(nonatomic,strong)UILabel *pathLabel;             //路线信息
@property(nonatomic)KTPathDirectionType direction;
-(void)updateModel:(KTParkInfoModel*)object;
//添加路径
-(CALayer*)drawPath:(CGPoint)startPoint withEndPoint:(CGPoint)endPoint withPathPoints:(NSArray*)pathArray withScaleW:(CGFloat)scaleW withScaleH:(CGFloat)scaleH;
-(CALayer*)drawPathWithPathPoints:(NSArray*)pathArray withScaleW:(CGFloat)scaleW withScaleH:(CGFloat)scaleH;
@end

NS_ASSUME_NONNULL_END
