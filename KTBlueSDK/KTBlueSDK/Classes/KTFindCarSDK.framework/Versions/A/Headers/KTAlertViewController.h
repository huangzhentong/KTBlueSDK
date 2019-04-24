//
//  KTAlertViewController.h
//  cocore
//
//  Created by KT--stc08 on 2019/4/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface KTAlertAction : NSObject
@property(nonatomic,copy)NSString *title;
@property(nonatomic,copy)void(^block)(void);

+(instancetype)actionWithTitle:(nullable NSString*)title withAction:( nullable void(^)(void))block;

@end

@interface KTAlertViewController : UIViewController
@property(nonatomic,copy)NSString *titleString;
@property(nonatomic,copy)NSAttributedString *attTitle;
@property(nonatomic,copy)NSString *message;
@property(nonatomic,copy)NSAttributedString *attMessage;
@property(nonatomic,copy)UIImage *image;
@property(nonatomic,strong)UIView * middleView;


+(instancetype)alertViewWithTitle:(nullable NSString*)title withImage:(nullable UIImage*)image withMessage:(nullable NSString*)message;

-(void)addAction:(KTAlertAction*)action;

@end







NS_ASSUME_NONNULL_END
