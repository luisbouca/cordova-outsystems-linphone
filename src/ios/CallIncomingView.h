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

//#import "TPMultiLayoutViewController.h"
#import "UIRoundedImageView.h"
#import <linphone/linphonecore.h>
//#include "LinphoneManager.h"

@protocol IncomingCallViewDelegate <NSObject>

- (void)incomingCallAccepted:(LinphoneCall *)call evenWithVideo:(BOOL)video;
- (void)incomingCallDeclined:(LinphoneCall *)call;
- (void)incomingCallAborted:(LinphoneCall *)call;

@end

@interface CallIncomingView : UIViewController {
}

@property(nonatomic) Boolean earlyMedia;
@property(nonatomic) LinphoneCore * core;

@property(weak, nonatomic) IBOutlet UILabel *nameLabel;
@property(nonatomic, strong) IBOutlet UILabel *addressLabel;
@property(nonatomic, strong) IBOutlet UIRoundedImageView *avatarImage;
@property(nonatomic, assign) LinphoneCall *call;
@property(nonatomic, strong) id<IncomingCallViewDelegate> delegate;
@property(weak, nonatomic) IBOutlet UIView *tabVideoBar;
@property(weak, nonatomic) IBOutlet UIView *tabBar;
@property (weak, nonatomic) IBOutlet UIView *earlyMediaView;

- (IBAction)onAcceptClick:(id)event;
- (IBAction)onDeclineClick:(id)event;
- (IBAction)onAcceptAudioOnlyClick:(id)sender;

@end
