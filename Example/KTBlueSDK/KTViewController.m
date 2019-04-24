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

@end

@implementation KTViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
     [KTFindCarManager initSDKWithBaseURL:@"https://ts.keytop.cn/fc_test"];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
