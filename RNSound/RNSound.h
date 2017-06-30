#if __has_include("RCTBridgeModule.h")
    #import "RCTBridgeModule.h"
#else
    #import <React/RCTBridgeModule.h>
#endif

#import <AVFoundation/AVFoundation.h>
#import <MediaPlayer/MediaPlayer.h>

@interface RNSound : NSObject <RCTBridgeModule, AVAudioPlayerDelegate>
@property (nonatomic, strong) AVPlayer *silentPlayer;
@end
