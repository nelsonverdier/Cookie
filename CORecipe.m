//
//  CORecipe.m
//  Cookie
//
//  Created by nelson verdier on 6/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "CORecipe.h"

@implementation CORecipe

@synthesize name;
@synthesize summary;
@synthesize category;
@synthesize image;
@synthesize rating;
@synthesize ingredients;



- (id)initWithName:(NSString *)aName andCategory:(NSNumber *)aCategory
{
    self = [super init];
    if (self)
    {
        self.name = aName;
        self.category = aCategory;
        self.ingredients = [[NSMutableArray alloc] init];
    }
    return self;
}

- (void)dealloc
{
    [name release];
    [category release];
    [image release];
    [rating release];
    [ingredients release];
    
    [super dealloc];
}

@end
