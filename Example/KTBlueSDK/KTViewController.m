//
//  KTViewController.m
//  KTBlueSDK
//
//  Created by 181310067@qq.com on 04/23/2019.
//  Copyright (c) 2019 181310067@qq.com. All rights reserved.
//

#import "KTViewController.h"
//#import <KTSDKHeader.h>
#import <KTFindCarSDK/KTFindCarManager.h>

@interface KTViewController ()
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end

@implementation KTViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    
     [KTFindCarManager initSDKWithBaseURL:@"https://ts.keytop.cn/fc_test"];
	// Do any additional setup after loading the view, typically from a nib.
}
-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [KTFindCarManager openKTFindCarViewController:@"2513" withCarNumber:@"闽D669S9" withViewController:self withPush:true];
}
- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
