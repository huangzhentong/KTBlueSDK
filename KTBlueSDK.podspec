
Pod::Spec.new do |spec|


  spec.name         = "KTBlueSDK"
  spec.version      = "1.0.0"
  spec.summary      = "A short description of KTBlueSDK."

    spec.description  = <<-DESC
TODO: Add long description of the pod here.
                       DESC
                  
  spec.homepage     = "https://github.com/huangzhentong/KTBlueSDK"




   spec.license      = { :type => "MIT" }

    spec.source           = { :git => 'https://github.com/huangzhentong/KTBlueSDK.git', :tag => #{s.version} }
  # ――― Author Metadata  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Specify the authors of the library, with email addresses. Email addresses
  #  of the authors are extracted from the SCM log. E.g. $ git log. CocoaPods also
  #  accepts just a name if you'd rather not provide an email address.
  #
  #  Specify a social_media_url where others can refer to, for example a twitter
  #  profile URL.
  #

  spec.author             = { "黄振桐" => "huangzhentong@keytop.com.cn" }
 


spec.source_files  = "Class"


  spec.ios.vendored_frameworks = 'Class/KTFindCarSDK.framework'
spec.dependency 'Masonry'
spec.dependency 'IQKeyboardManager'
spec.dependency 'coobjc'
spec.dependency 'YYModel'
spec.dependency 'YYWebImage'
spec.dependency 'YYCategories'
spec.dependency 'AFNetworking'
spec.dependency 'SVProgressHUD'


end
