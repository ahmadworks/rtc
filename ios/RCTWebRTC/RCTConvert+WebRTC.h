#import <React/RCTConvert.h>
#import <DWebRTC/RTCDataChannelConfiguration.h>
#import <DWebRTC/RTCConfiguration.h>
#import <DWebRTC/RTCIceServer.h>
#import <DWebRTC/RTCSessionDescription.h>
#import <DWebRTC/RTCIceCandidate.h>

@interface RCTConvert (WebRTC)

+ (RTCIceCandidate *)RTCIceCandidate:(id)json;
+ (RTCSessionDescription *)RTCSessionDescription:(id)json;
+ (RTCIceServer *)RTCIceServer:(id)json;
+ (RTCDataChannelConfiguration *)RTCDataChannelConfiguration:(id)json;
+ (RTCConfiguration *)RTCConfiguration:(id)json;

@end
