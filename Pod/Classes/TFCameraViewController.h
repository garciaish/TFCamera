//
//  TFCameraViewController.h
//  camera
//
//  Created by Tarik Fayad on 4/2/16.
//  Copyright © 2016 Tarik Fayad. All rights reserved.
//

#import <UIKit/UIKit.h>
/*!
 Call the following to init the Camera VC for display
 
 TFCameraViewController *cameraVC = [[TFCameraViewController alloc] initWithNibName:@"CameraOverlay" bundle:nil];
 */


@class TFCameraViewController;
@protocol TFCameraViewControllerDelegate <NSObject>
/*!
 Camera notifies the delegate that a photo was taken and sends the photo;
 */
- (void)cameraDidTakePhoto:(UIImage *)photo;

/*!
 Camera notifies the delegate that a video was taken and send the video;
 */
- (void)cameraDidTakeVideo:(NSURL *)videoURL;

@end

@interface TFCameraViewController : UIViewController

@property (nonatomic, weak) id<TFCameraViewControllerDelegate> delegate;

@property (nonatomic) BOOL enableDoubleTapSwitch;
@property (nonatomic) BOOL enableSelfieFlash;


/*!
 This is the default instantion method. Incudes regular and selfie flash, video recording, camera swapping, tap to focus, and doubletap to switch cameras.
 */
- (instancetype) initWithInterface;

@end
