
#import <Foundation/Foundation.h>
#import <DWebRTC/RTCCameraVideoCapturer.h>

@interface VideoCaptureController : NSObject

-(instancetype)initWithCapturer:(RTCCameraVideoCapturer *)capturer
                 andConstraints:(NSDictionary *)constraints;
-(void)startCapture;
-(void)stopCapture;
-(void)switchCamera;

@end
