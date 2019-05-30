//
//  KTARView.h
//  cocore
//
//  Created by KT--stc08 on 2019/4/10.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <KTFindCarSDK/KTSDKHeader.h>
NS_ASSUME_NONNULL_BEGIN

@interface KTARView : UIView
@property(nonatomic,strong)AVCaptureSession *session;
@property(nonatomic,strong)UIImageView *directionImage;
//@property(nonatomic,weak)
-(void)updateCarNumber:(NSString*)carNumber withParkNo:(NSString*)parkNo;

-(void)naviEnd:(void(^)(void))block;

@end

NS_ASSUME_NONNULL_END
