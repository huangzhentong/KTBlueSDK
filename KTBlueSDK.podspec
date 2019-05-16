#
# Be sure to run `pod lib lint KTBlueSDK.pods' to ensure this is a
# valid s before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Pods see https://guides.cocoapods.org/syntax/pods.html
#

Pod::Spec.new do |s|
  s.name             = 'KTBlueSDK'
  s.version          = '0.1.7'
  s.summary          = 'A short description of KTBlueSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/huangzhentong/KTBlueSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '181310067@qq.com' => 'huangzhentong@keytop.com.cn' }
  s.source           = { :git => 'https://github.com/huangzhentong/KTBlueSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'KTBlueSDK/Classes/**'
  s.resource = 'KTBlueSDK/Assets/*'
   

  # s.public_header_files = 'Pod/Classes/**/*.h'
   s.frameworks = 'UIKit', 'CoreLocation', 'CoreMotion','Foundation','AVFoundation','CoreBluetooth'

s.library = 'c++'
 
s.dependency  'Masonry'
s.dependency 'IQKeyboardManager'
s.dependency 'BasisModule'
s.dependency 'YYModel'
s.dependency 'YYWebImage'
#s.dependency 'YYCategories'

s.dependency 'SVProgressHUD'
s.vendored_frameworks = 'KTBlueSDK/Classes/KTFindCarSDK.framework'

end
