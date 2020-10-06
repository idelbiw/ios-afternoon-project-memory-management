//
//  LSIContact.m
//  Contacts MRC
//
//  Created by Waseem Idelbi on 10/5/20.
//

#import "LSIContact.h"

@implementation LSIContact

- (instancetype)initWithName:(NSString *)name email:(NSString *)email phoneNumber:(NSNumber *)phoneNumber {
    if (self = [super init]) {
        _name = name;
        _email = email;
        _phoneNumber = phoneNumber;
    }
    return self;
}

@end
