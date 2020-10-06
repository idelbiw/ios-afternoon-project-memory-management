//
//  LSIContact.h
//  Contacts MRC
//
//  Created by Waseem Idelbi on 10/5/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSIContact : NSObject

/// Properties
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) NSNumber *phoneNumber;

/// Methods
-(instancetype)initWithName:(NSString *)name email:(NSString *)email phoneNumber:(NSNumber *)phoneNumber;

@end

NS_ASSUME_NONNULL_END
