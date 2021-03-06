/*
 * This is the source code of Telegram for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import "TGViewController.h"

#import "ActionStage.h"

@interface TGLoginProfileController : TGViewController <ASWatcher>

@property (nonatomic, strong) ASHandle *actionHandle;
GEMS_PROPERTY_EXTERN @property (nonatomic, strong) UIView *grayBackground;
GEMS_PROPERTY_EXTERN @property (nonatomic, strong) UILabel *titleLabel;

- (id)initWithShowKeyboard:(bool)showKeyboard phoneNumber:(NSString *)phoneNumber phoneCodeHash:(NSString *)phoneCodeHash phoneCode:(NSString *)phoneCode;

@end
