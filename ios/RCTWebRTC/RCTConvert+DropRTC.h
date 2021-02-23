#import <React/RCTConvert.h>
#import <DropRTC/RTCDataChannelConfiguration.h>
#import <DropRTC/RTCConfiguration.h>
#import <DropRTC/RTCIceServer.h>
#import <DropRTC/RTCSessionDescription.h>
#import <DropRTC/RTCIceCandidate.h>

@interface RCTConvert (DropRTC)

+ (RTCIceCandidate *)RTCIceCandidate:(id)json;
+ (RTCSessionDescription *)RTCSessionDescription:(id)json;
+ (RTCIceServer *)RTCIceServer:(id)json;
+ (RTCDataChannelConfiguration *)RTCDataChannelConfiguration:(id)json;
+ (RTCConfiguration *)RTCConfiguration:(id)json;

@end
