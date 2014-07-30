//
//  Deck.h
//  Matchismo
//
//  Created by Stuart Claghorn on 11/28/13.
//  Copyright (c) 2013 CS193p. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void) addCard:(Card *) card atTop:(BOOL) atTop;
- (void) addCard:(Card *) card;

- (Card *) drawRandomCard;

@end
