//
//  COIngredient.m
//  Cookie
//
//  Created by nelson verdier on 6/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "COIngredient.h"

@implementation COIngredient

@synthesize quantity;
@synthesize description;

- (id)initWithDescription:(NSString *)desc andQuantity:(NSNumber *)quant
{
    self = [super init];
    
    if (self)
    {
        self.description = desc;
        self.quantity = quant;
    }
    return self;
}

- (void)dealloc
{
    [quantity release];
    [description release];

    [super dealloc];
}

@end
