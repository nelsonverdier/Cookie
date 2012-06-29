//
//  COIngredient.h
//  Cookie
//
//  Created by nelson verdier on 6/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface COIngredient : NSObject

@property (retain, nonatomic) NSNumber *quantity;
@property (retain, nonatomic) NSString *description;

- (id)initWithDescription:(NSString *)desc andQuantity:(NSNumber *)quant;

@end
