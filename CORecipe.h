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

/*
 * Entrée, plat ou dessert.
 */
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSImage  *image;
@property (retain, nonatomic) NSNumber *rank;

@end
