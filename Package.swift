// swift-tools-version:5.8
import PackageDescription

let package = Package(
    name: "BlueBillywigNativePlayerKit-iOS",
    platforms: [ .iOS(.v14) ],
    products: [
        .library(name: "BlueBillywigNativePlayerKit-iOS", targets: ["BBNativePlayerKitTargets"])
    ],
    dependencies: [
        .package(url: "https://github.com/bluebillywig/bbnativeshared-cocoapod", branch: "7.125")
    ],
    targets: [
        .binaryTarget(
            name: "google-ima-sdk-ios",
            url: "https://imasdk.googleapis.com/native/downloads/ima-ios-v3.19.1.zip",
            checksum: "d34b186079068cd2d7aa85198429b38939b37e21186800ad27e2fb240abd2494"
        ),
        .binaryTarget(
            name: "google-cast-sdk-ios",
            url: "https://dl.google.com/dl/chromecast/sdk/ios/GoogleCastSDK-ios-4.8.0_dynamic_xcframework.zip",
            checksum: "4224724dc454b71eeab3debfe5c99e8a52ca9404d482f3b93c62e1c37be8dde4"
        ),
        .binaryTarget(
            name: "GoogleUserMessagingPlatform",
            url: "https://dl.google.com/googleadmobadssdk/f0f50864216a2469/googleusermessagingplatformios-spm-2.1.0.zip",
            checksum: "f0f50864216a24690725f246df0b289d2eb6cc699b9da476857a0c135aeced84"
        ),
        .binaryTarget(
            name: "BBNativePlayerKit",
            path: "BBNativePlayerKit.xcframework"
        ),
        .target(
            name: "BBNativePlayerKitTargets",
            dependencies: [
                .product(name: "BlueBillywigNativeShared-iOS", package: "bbnativeshared-cocoapod"),
                .target(name: "google-ima-sdk-ios"),
                .target(name: "google-cast-sdk-ios"),
                .target(name: "GoogleUserMessagingPlatform"),
                .target(name: "BBNativePlayerKit")
            ]
        )
    ]
)
