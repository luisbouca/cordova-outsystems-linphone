/*
 * Copyright (c) 2010-2020 Belledonne Communications SARL.
 *
 * This file is part of linphone-iphone
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#import <UIKit/UIKit.h>

//#import "VideoZoomHandler.h"
#import "UICamSwitch.h"

#import "CallPausedTableView.h"

//#import "TPMultiLayoutViewController.h"
#import "UIMutedMicroButton.h"
#import "UIPauseButton.h"
#import "UISpeakerButton.h"
#import "UIVideoButton.h"
#import "UIHangUpButton.h"
#import "UIDigitButton.h"
#import "UIRoundedImageView.h"
#import "UIBouncingView.h"

@class VideoView;

@interface CallView : UIViewController <UIGestureRecognizerDelegate> {
  @private
    UITapGestureRecognizer *singleFingerTap;
    NSTimer *hideControlsTimer;
    NSTimer *videoDismissTimer;
    BOOL videoHidden;
    BOOL callRecording;
}

@property(nonatomic, strong) IBOutlet CallPausedTableView *pausedCallsTable;

@property(nonatomic, strong) IBOutlet UIView *videoGroup;
@property(nonatomic, strong) IBOutlet UIView *videoView;
@property(nonatomic, strong) IBOutlet UIView *videoPreview;
@property(nonatomic, strong) IBOutlet UICamSwitch *videoCameraSwitch;
@property(nonatomic, strong) IBOutlet UIActivityIndicatorView *videoWaitingForFirstImage;
@property(weak, nonatomic) IBOutlet UIView *callView;

@property(nonatomic, strong) NSString *restConfiguration;
@property(nonatomic, strong) NSString *dmftConfiguration;

@property(nonatomic, strong) IBOutlet UIPauseButton *callPauseButton;
@property(nonatomic, strong) IBOutlet UIVideoButton *videoButton;
@property(nonatomic, strong) IBOutlet UIMutedMicroButton *microButton;
@property(nonatomic, strong) IBOutlet UISpeakerButton *speakerButton;
@property(nonatomic, strong) IBOutlet UIToggleButton *routesButton;
@property(nonatomic, strong) IBOutlet UIHangUpButton *hangupButton;
@property(nonatomic, strong) IBOutlet UIView *numpadView;
@property(nonatomic, strong) IBOutlet UIView *routesView;
@property(nonatomic, strong) IBOutlet UIButton *routesEarpieceButton;
@property(nonatomic, strong) IBOutlet UIButton *routesSpeakerButton;
@property(nonatomic, strong) IBOutlet UIButton *routesBluetoothButton;
@property(nonatomic, strong) IBOutlet UIToggleButton *numpadButton;
@property(weak, nonatomic) IBOutlet UIPauseButton *conferencePauseButton;

@property(weak, nonatomic) IBOutlet UIView *bottomBar;
@property(nonatomic, strong) IBOutlet UIDigitButton *oneButton;
@property(nonatomic, strong) IBOutlet UIDigitButton *twoButton;
@property(nonatomic, strong) IBOutlet UIDigitButton *threeButton;
@property(nonatomic, strong) IBOutlet UIDigitButton *fourButton;
@property(nonatomic, strong) IBOutlet UIDigitButton *fiveButton;
@property(nonatomic, strong) IBOutlet UIDigitButton *sixButton;
@property(nonatomic, strong) IBOutlet UIDigitButton *sevenButton;
@property(nonatomic, strong) IBOutlet UIDigitButton *eightButton;
@property(nonatomic, strong) IBOutlet UIDigitButton *nineButton;
@property(nonatomic, strong) IBOutlet UIDigitButton *starButton;
@property(nonatomic, strong) IBOutlet UIDigitButton *zeroButton;
@property(nonatomic, strong) IBOutlet UIDigitButton *hashButton;
@property(weak, nonatomic) IBOutlet UIRoundedImageView *avatarImage;
@property(weak, nonatomic) IBOutlet UILabel *nameLabel;
@property(weak, nonatomic) IBOutlet UILabel *durationLabel;
@property(weak, nonatomic) IBOutlet UIView *pausedByRemoteView;
@property(weak, nonatomic) IBOutlet UIView *noActiveCallView;
@property(weak, nonatomic) IBOutlet UIView *conferenceView;
@property(strong, nonatomic) IBOutlet CallPausedTableView *conferenceCallsTable;
@property (weak, nonatomic) IBOutlet UIView *waitView;
@property (weak, nonatomic) IBOutlet UIView *infoView;
@property(nonatomic, strong) IBOutlet UIIconButton *customButton2;
@property (weak, nonatomic) IBOutlet UIIconButton *customButton1;

- (IBAction)onRoutesClick:(id)sender;
- (IBAction)onRoutesBluetoothClick:(id)sender;
- (IBAction)onRoutesEarpieceClick:(id)sender;
- (IBAction)onRoutesSpeakerClick:(id)sender;
- (IBAction)onNumpadClick:(id)sender;
- (IBAction)onCustomButton1Click:(id)sender;
- (IBAction)onCustomButton2Click:(id)sender;

@end
