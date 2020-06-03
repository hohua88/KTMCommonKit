#
#  Be sure to run `pod spec lint IOSMaven.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "KTMCommonKit"
  spec.version      = "1.0.0"
  spec.summary      = "动能无限基础模块"
  spec.description  = <<-DESC
                动能无限基础模块，包含一些基础功能
                   DESC

  spec.homepage     = "https://github.com/hohua88/KTMCommonKit.git"
  
  #spec.license      = "MIT (example)"
  # spec.license      = { :type => "MIT", :file => "FILE_LICENSE" }
 
  spec.author    = "动能无限"
  spec.social_media_url   = "http://www.vimedia.cn"

 spec.platform     = :ios, "9.0"
 spec.source       = { :git => "https://github.com/hohua88/KTMCommonKit.git", :tag => spec.version }
  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  spec.vendored_frameworks = 'KTMCommonKit/*.framework'
end
