//
//  Deck.h
//  cs193p_test
//
//  Created by lio on 2020/12/21.
//  Copyright © 2020 lio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

NS_ASSUME_NONNULL_BEGIN

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end

NS_ASSUME_NONNULL_END
