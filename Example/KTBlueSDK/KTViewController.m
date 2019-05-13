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

@property (weak, nonatomic) IBOutlet UITextField *parkTF;
@property (weak, nonatomic) IBOutlet UITextField *carNumberTF;
@end

@implementation KTViewController


- (void)viewDidLoad
{
    
    
    
    [super viewDidLoad];
    self.parkTF.text = @"2513";
    self.carNumberTF.text = @"闽C661s9";
    [KTFindCarManager initSDKWithBaseURL:@"https://ts.keytop.cn/fc_test"];
    
}
- (IBAction)startBtnEvent:(id)sender {
    [KTFindCarManager openKTFindCarWithLotID:@"2513" withCarNumber:@"闽C661s9" withViewController:nil];
}
- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
