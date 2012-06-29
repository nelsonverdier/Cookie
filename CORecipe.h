//
//  CORecipe.h
//  Cookie
//
//  Created by nelson verdier on 6/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CORecipe : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *summary; // tmp, might change

/*
 * Entrée, plat ou dessert.
 */
@property (retain, nonatomic) NSNumber *category;
@property (retain, nonatomic) NSImage  *image;
@property (retain, nonatomic) NSNumber *rating;
@property (retain, nonatomic) NSMutableArray *ingredients;

- (id)initWithName:(NSString *)aName andCategory:(NSNumber *)aCategory;

@end
