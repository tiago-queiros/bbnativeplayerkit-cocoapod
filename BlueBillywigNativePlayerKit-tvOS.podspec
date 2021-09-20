
Pod::Spec.new do |spec|


  spec.name         = "BlueBillywigNativePlayerKit-tvOS"
  spec.version      = "0.1-7-beta"
  spec.summary      = "Blue Billywig native player kit"

  spec.description  = <<-DESC
  Blue Billywig native player kit is used to play Blue Billywig mediaclips using the native tvos player
                   DESC

  spec.homepage     = "https://www.bluebillywig.com/"
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }
  spec.author       = { "Blue Billywig" => "tech@bluebillywig.com" }
  spec.platform     = :tvos, "13.4"

  #  When using multiple platforms
  # spec.ios.deployment_target = "5.0"
  # spec.osx.deployment_target = "10.7"
  # spec.watchos.deployment_target = "2.0"
  
  spec.tvos.deployment_target = "13.4"
  spec.tvos.vendored_frameworks = 'BBNativePlayerKit_tvOS.framework'
  spec.source       = { :git => "https://github.com/bluebillywig/bbnativeplayerkit-cocoapod.git", :tag => "#{spec.version}" }




  spec.framework  = "UIKit", "Foundation", "AVFoundation"
  # spec.frameworks = "SomeFramework", "AnotherFramework"

end
