//
//  LSIContactController.h
//  Contacts MRC
//
//  Created by Waseem Idelbi on 10/5/20.
//

#import <Foundation/Foundation.h>
#import "LSIContact.h"

NS_ASSUME_NONNULL_BEGIN

@interface LSIContactController : NSObject

/// Properties
@property (nonatomic, retain) NSMutableArray<LSIContact *> *contacts;

/// Methods
-(instancetype)init;
- (void)addContact:(LSIContact *)contact;

@end

NS_ASSUME_NONNULL_END
