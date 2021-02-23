#import "WebRTCModule.h"
#import <DropRTC/RTCDataChannel.h>

@interface RTCDataChannel (React)

@property (nonatomic, strong) NSNumber *peerConnectionId;

@end

@interface WebRTCModule (RTCDataChannel) <RTCDataChannelDelegate>

@end
