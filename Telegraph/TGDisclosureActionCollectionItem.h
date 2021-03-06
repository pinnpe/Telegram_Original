/*
 * This is the source code of Telegram for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import "TGCollectionItem.h"

@interface TGDisclosureActionCollectionItem : TGCollectionItem

@property (nonatomic, strong) NSString *title;
@property (nonatomic) SEL action;
GEMS_ADDED_PROPERTY @property (nonatomic, strong) UIImage *icon;

- (instancetype)initWithTitle:(NSString *)title action:(SEL)action;

GEMS_ADDED_METHOD
- (instancetype)initWithTitle:(NSString *)title icon:(UIImage*)icon action:(SEL)action;

@end
