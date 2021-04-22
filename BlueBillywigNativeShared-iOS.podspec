
Pod::Spec.new do |spec|

  spec.name         = "BlueBillywigNativeShared-iOS"
  spec.version      = "0.0.14"
  spec.summary      = "Blue Billywig native shared framework"

  spec.description  = <<-DESC
  Blue Billywig native shared framwork is a share code base used in BlueBillywigNativePlayerKit
                   DESC

  spec.homepage     = "https://www.bluebillywig.com/"
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }
  spec.author       = { "Blue Billywig" => "tech@bluebillywig.com" }
  spec.platform     = :ios, "11.0"

  #  When using multiple platforms
  # spec.ios.deployment_target = "5.0"
  # spec.osx.deployment_target = "10.7"
  # spec.watchos.deployment_target = "2.0"
  # spec.tvos.deployment_target = "9.0"
  
  spec.ios.deployment_target = '11.0'
  spec.ios.vendored_frameworks = 'bbnativeshared.framework'
  spec.source       = { :git => "https://github.com/bluebillywig/bbnativeplayerkit-cocoapod.git", :tag => "#{spec.version}" }

  # spec.frameworks = "SomeFramework", "AnotherFramework"

  spec.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
end
