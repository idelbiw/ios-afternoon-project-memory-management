//
//  LSIContactController.m
//  Contacts MRC
//
//  Created by Waseem Idelbi on 10/5/20.
//

#import "LSIContactController.h"

@implementation LSIContactController

- (instancetype)init {
    if (self = [super init]) {
        _contacts = [[NSMutableArray alloc] init];
    }
    return self;
}

- (void)addContact:(LSIContact *)contact {
    [_contacts addObject:contact];
}

@end
