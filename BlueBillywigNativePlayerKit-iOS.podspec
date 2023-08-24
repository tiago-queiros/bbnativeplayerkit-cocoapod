
Pod::Spec.new do |spec|


  spec.name         = "BlueBillywigNativePlayerKit-iOS"
  spec.version      = "7.114.1"
  spec.summary      = "Blue Billywig native player kit"

  spec.description  = <<-DESC
  Blue Billywig native player kit is used to play Blue Billywig mediaclips using the native ios player
                   DESC

  spec.homepage     = "https://www.bluebillywig.com/"
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }
  spec.author       = { "Blue Billywig" => "tech@bluebillywig.com" }
  spec.platform     = :ios, "12.0"

  
  spec.ios.deployment_target = '12.0'
  spec.ios.vendored_frameworks = 'BBNativePlayerKit.framework'
  spec.source       = { :git => "https://github.com/bluebillywig/bbnativeplayerkit-cocoapod.git", :tag => "#{spec.version}" }

  spec.dependency   'GoogleAds-IMA-iOS-SDK', '3.16.3'
  spec.dependency   'google-cast-sdk-dynamic-ios-bb'
  spec.dependency   'BlueBillywigNativeShared-iOS', '7.113'

  spec.framework  = "UIKit", "Foundation", "AVFoundation"

  spec.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
end
