#import "WebRTCModule.h"
#import <DWebRTC/RTCDataChannel.h>

@interface RTCDataChannel (React)

@property (nonatomic, strong) NSNumber *peerConnectionId;

@end

@interface WebRTCModule (RTCDataChannel) <RTCDataChannelDelegate>

@end
