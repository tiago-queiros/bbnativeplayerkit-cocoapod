// Generated by Apple Swift version 5.3.2 (swiftlang-1200.0.45 clang-1200.0.32.28)
#ifndef BBNATIVEPLAYERKIT_SWIFT_H
#define BBNATIVEPLAYERKIT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVKit;
@import CoreGraphics;
@import Foundation;
@import GoogleCast;
@import UIKit;
@import bbnativeshared;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="BBNativePlayerKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


@class NSCoder;

/// PlayerView used to play media from the Blue Billywig OVP
SWIFT_CLASS("_TtC17BBNativePlayerKit18BBNativePlayerView")
@interface BBNativePlayerView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
/// :nodoc:
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
/// :nodoc:
- (void)removeFromSuperview;
@end


@class BbnativesharedEventName;

@interface BBNativePlayerView (SWIFT_EXTENSION(BBNativePlayerKit)) <BbnativesharedEventListenerInterface>
- (void)onEventEventType:(BbnativesharedEventName * _Nonnull)eventType data:(NSDictionary<NSString *, id> * _Nullable)data;
@end

@class AVPlayerViewController;
@protocol UIViewControllerTransitionCoordinator;

@interface BBNativePlayerView (SWIFT_EXTENSION(BBNativePlayerKit)) <AVPlayerViewControllerDelegate>
/// :nodoc:
- (void)playerViewController:(AVPlayerViewController * _Nonnull)playerViewController willEndFullScreenPresentationWithAnimationCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
@end



@class NSBundle;

/// :nodoc:
SWIFT_CLASS("_TtC17BBNativePlayerKit28BBNativePlayerViewController")
@interface BBNativePlayerViewController : UIViewController
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
@end

@class BbnativesharedMediaClip;
@class BbnativesharedProject;
@class BbnativesharedPhase;
@class BbnativesharedState;

SWIFT_PROTOCOL("_TtP17BBNativePlayerKit26BBNativePlayerViewDelegate_")
@protocol BBNativePlayerViewDelegate
@optional
/// Player was setup with json
/// \param playerView UIView
///
/// \param url String
///
- (void)bbNativePlayerViewWithPlayerView:(BBNativePlayerView * _Nonnull)playerView didSetupWithJsonUrl:(NSString * _Nullable)url;
/// Player embed failed
/// \param playerView UIView
///
/// \param error String
///
- (void)bbNativePlayerViewWithPlayerView:(BBNativePlayerView * _Nonnull)playerView didFailWithError:(NSString * _Nullable)error;
/// MediaClip data was loaded.
/// \param playerView UIView
///
/// \param data MediaClip Object
/// (for more information on data objects see the SAPI reference guide on the developer documentation website at: https://support.bluebillywig.com/topics/developers/)
///
- (void)bbNativePlayerViewWithPlayerView:(BBNativePlayerView * _Nonnull)playerView didTriggerMediaClipLoaded:(BbnativesharedMediaClip * _Nonnull)data;
/// The playet view has started
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerViewStarted:(BBNativePlayerView * _Nonnull)playerView;
/// The player view has finished
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerViewFinished:(BBNativePlayerView * _Nonnull)playerView;
/// Project data was loaded.
/// \param playerView UIView
///
/// \param data Project Object
/// (for more information on data objects see the SAPI reference guide on the developer documentation website at : https://support.bluebillywig.com/topics/developers/)
///
- (void)bbNativePlayerViewWithPlayerView:(BBNativePlayerView * _Nonnull)playerView didTriggerProjectLoaded:(BbnativesharedProject * _Nonnull)data;
/// The player is now ready to play.
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerCanPlay:(BBNativePlayerView * _Nonnull)playerView;
/// The duration of the media in the player has changed
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithPlayerView:(BBNativePlayerView * _Nonnull)playerView didTriggerDurationChange:(double)duration;
/// The player has executed a play command.
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerPlay:(BBNativePlayerView * _Nonnull)playerView;
/// The player is now paused.
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerPause:(BBNativePlayerView * _Nonnull)playerView;
/// The player was paused externally
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerAutoPause:(BBNativePlayerView * _Nonnull)playerView;
/// The externally paused player is now playing.
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerAutoPausePlay:(BBNativePlayerView * _Nonnull)playerView;
/// The player is now playing.
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerPlaying:(BBNativePlayerView * _Nonnull)playerView;
/// Playing the media has ended (ads included!)
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerEnded:(BBNativePlayerView * _Nonnull)playerView;
/// The player is now seeking.
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerSeeking:(BBNativePlayerView * _Nonnull)playerView;
/// The current playback position has changed by the player as a result of a seek action.
/// \param playerView UIView
///
/// \param seekOffset Double
///
- (void)bbNativePlayerViewWithPlayerView:(BBNativePlayerView * _Nonnull)playerView didTriggerSeeked:(double)seekOffset;
/// The player is trying to fetch new media data, but is unable to retrieve it and continue playing.
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerStall:(BBNativePlayerView * _Nonnull)playerView;
/// The player has encountered an error which prevents it from playing the content further.
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerMediaClipFailed:(BBNativePlayerView * _Nonnull)playerView;
/// The player changed phase
/// \param playerView UIView
///
/// \param phase Phase Enum
/// (for more information on phases, states and modes, see the developer documentation website at https://support.bluebillywig.com/player-api/events-modes-and-phases/)
///
- (void)bbNativePlayerViewWithPlayerView:(BBNativePlayerView * _Nonnull)playerView didTriggerPhaseChange:(BbnativesharedPhase * _Nullable)phase;
/// The player changed state
/// \param playerView UIView
///
/// \param state State Enum
/// (for more information on phases, states and modes, see the developer documentation website at https://support.bluebillywig.com/player-api/events-modes-and-phases/)
///
- (void)bbNativePlayerViewWithPlayerView:(BBNativePlayerView * _Nonnull)playerView didTriggerStateChange:(BbnativesharedState * _Nullable)state;
/// The player changed mode
/// \param playerView UIView
///
/// \param mode String
/// (for more information on phases, states and modes, see the developer documentation website at https://support.bluebillywig.com/player-api/events-modes-and-phases/)
///
- (void)bbNativePlayerViewWithPlayerView:(BBNativePlayerView * _Nonnull)playerView didTriggerModeChange:(NSString * _Nullable)mode;
/// The player is requesting a collapse, handle code appropriately
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidRequestCollapse:(BBNativePlayerView * _Nonnull)playerView;
/// The player is requesting an expand, handle code appropriately
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidRequestExpand:(BBNativePlayerView * _Nonnull)playerView;
/// An ad was loaded
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerAdLoaded:(BBNativePlayerView * _Nonnull)playerView;
/// An ad was not found
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerAdNotFound:(BBNativePlayerView * _Nonnull)playerView;
/// The advertisment provider encountered an error which prevents the ad from playing in the player.
/// \param playerView UIView
///
/// \param error String
///
- (void)bbNativePlayerViewWithPlayerView:(BBNativePlayerView * _Nonnull)playerView didTriggerAdError:(NSString * _Nullable)error;
/// An ad was started
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerAdStarted:(BBNativePlayerView * _Nonnull)playerView;
/// An ad reached the first quartile
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerAdQuartile1:(BBNativePlayerView * _Nonnull)playerView;
/// An ad reached the second quartile
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerAdQuartile2:(BBNativePlayerView * _Nonnull)playerView;
/// An ad reached the third quartile
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerAdQuartile3:(BBNativePlayerView * _Nonnull)playerView;
/// An ad finished
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerAdFinished:(BBNativePlayerView * _Nonnull)playerView;
/// An ads have finished
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerAllAdsCompleted:(BBNativePlayerView * _Nonnull)playerView;
/// The size of the player has changed
/// \param playerView UIView
///
/// \param width Int
///
/// \param height Int
///
- (void)bbNativePlayerViewWithPlayerView:(BBNativePlayerView * _Nonnull)playerView didTriggerResize:(NSInteger)width height:(NSInteger)height;
/// User swiped left on ad
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerAdSwipeLeft:(BBNativePlayerView * _Nonnull)playerView;
/// User swiped right on ad
/// \param playerView UIView
///
- (void)bbNativePlayerViewWithDidTriggerAdSwipeRight:(BBNativePlayerView * _Nonnull)playerView;
@end

@class GCKSessionManager;
@class GCKSession;
@class GCKRequest;
@class GCKUIMiniMediaControlsViewController;
@class GCKRemoteMediaClient;
@class GCKMediaStatus;

/// :nodoc:
SWIFT_CLASS_NAMED("ChromeCastViewController")
@interface MediaViewController : UIViewController <GCKLoggerDelegate, GCKRemoteMediaClientListener, GCKRequestDelegate, GCKSessionManagerListener, GCKUIMiniMediaControlsViewControllerDelegate>
- (void)viewDidLoad;
- (void)sessionManager:(GCKSessionManager * _Nonnull)_ didStartSession:(GCKSession * _Nonnull)session;
- (void)sessionManager:(GCKSessionManager * _Nonnull)_ didResumeSession:(GCKSession * _Nonnull)session;
- (void)sessionManager:(GCKSessionManager * _Nonnull)_ didEndSession:(GCKSession * _Nonnull)_ withError:(NSError * _Nullable)error;
- (void)logMessage:(NSString * _Nonnull)message atLevel:(GCKLoggerLevel)level fromFunction:(NSString * _Nonnull)function location:(NSString * _Nonnull)location;
- (void)requestDidComplete:(GCKRequest * _Nonnull)request;
- (void)miniMediaControlsViewController:(GCKUIMiniMediaControlsViewController * _Nonnull)miniMediaControlsViewController shouldAppear:(BOOL)shouldAppear;
- (void)remoteMediaClient:(GCKRemoteMediaClient * _Nonnull)_ didUpdateMediaStatus:(GCKMediaStatus * _Nullable)mediaStatus;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP17BBNativePlayerKit32ChromeCastViewControllerDelegate_")
@protocol ChromeCastViewControllerDelegate
- (void)chromeCastViewControllerWithChromeCastViewController:(MediaViewController * _Nonnull)chromeCastViewController sessionStarted:(GCKSession * _Nonnull)session;
- (void)chromeCastViewControllerWithChromeCastViewController:(MediaViewController * _Nonnull)chromeCastViewController sessionResumed:(GCKSession * _Nonnull)session;
- (void)chromeCastViewControllerWithChromeCastViewController:(MediaViewController * _Nonnull)chromeCastViewController sessionEnded:(BOOL)resumeInAVPlayer withError:(NSError * _Nullable)withError;
- (void)chromeCastViewControllerWithChromeCastViewController:(MediaViewController * _Nonnull)chromeCastViewController sessionFailedToStart:(NSError * _Nullable)withError;
- (void)chromeCastViewControllerWithChromeCastViewController:(MediaViewController * _Nonnull)chromeCastViewController sessionFailedToResume:(NSError * _Nullable)withError;
- (void)chromeCastViewControllerWithMediaStatusFinished:(MediaViewController * _Nonnull)chromeCastViewController;
- (void)chromeCastViewControllerWithMediaStatusError:(MediaViewController * _Nonnull)chromeCastViewController;
- (void)chromeCastViewControllerWithMediaStatusPlaying:(MediaViewController * _Nonnull)chromeCastViewController;
- (void)chromeCastViewControllerWithMediaStatusPaused:(MediaViewController * _Nonnull)chromeCastViewController;
- (void)chromeCastViewControllerWithChromeCastViewController:(MediaViewController * _Nonnull)chromeCastViewController mediaProgress:(float)position;
@end




#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
