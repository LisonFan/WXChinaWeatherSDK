Pod::Spec.new do |spec|
  
  spec.name = "WXChinaWeatherSDK"
  spec.version = "0.0.2"
  spec.summary = "中国天气网 SDK"

  spec.homepage = "https://github.com/LisonFan/WXChinaWeatherSDK"
  spec.license = "MIT"
  spec.author = { "LisonFan" => "lisonfan1996@gmail.com" }

  spec.platform = :ios
  spec.ios.deployment_target = "9.0"
  spec.source = { :git => "https://github.com/LisonFan/WXChinaWeatherSDK.git", :tag => "#{spec.version}" }

  spec.source_files = "WXChinaWeatherSDK/*.framework/Headers/*.h"
  spec.public_header_files = "WXChinaWeatherSDK/*.framework/Headers/*.h"
  spec.vendored_frameworks = "WXChinaWeatherSDK/*.framework"

  spec.frameworks = "UIKit"
  spec.requires_arc = true

  spec.dependency "SDWebImage"
  spec.dependency "Masonry"

end
