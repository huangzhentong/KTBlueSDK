# KTBlueSDK

[![CI Status](https://img.shields.io/travis/181310067@qq.com/KTBlueSDK.svg?style=flat)](https://travis-ci.org/181310067@qq.com/KTBlueSDK)
[![Version](https://img.shields.io/cocoapods/v/KTBlueSDK.svg?style=flat)](https://cocoapods.org/pods/KTBlueSDK)
[![License](https://img.shields.io/cocoapods/l/KTBlueSDK.svg?style=flat)](https://cocoapods.org/pods/KTBlueSDK)
[![Platform](https://img.shields.io/cocoapods/p/KTBlueSDK.svg?style=flat)](https://cocoapods.org/pods/KTBlueSDK)

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

## Installation

KTBlueSDK is available through [CocoaPods](https://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod 'KTBlueSDK'
```

## Author

181310067@qq.com, huangzhentong@keytop.com.cn

## License

1.项目中使用到了摄像头，定位及http请求
需要在plist 中添加 Privacy - Location When In Use Usage Description
Privacy - Camera Usage Description
App Transport Security Settings
这三个权限

测试服： https://ts.keytop.cn/fc_test/
正式服： https://cloud.keytop.cn/fc/
2.使用中记得先设置BaseURL 如
[KTFindCarManager initSDKWithBaseURL:@"https://ts.keytop.cn/fc_test"];
完整的URL如下
https://ts.keytop.cn/fc_test/app-api/getParkingInfo

3.调用SDK视图
 [KTFindCarManager openKTFindCarWithLotID:@"2513" withCarNumber:@"闽C661s9" withViewController:nil];


