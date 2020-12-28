//
//  CardMatchingGame.h
//  cs193p_test
//
//  Created by lio on 2020/12/28.
//  Copyright © 2020 lio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"
#import "Deck.h"

NS_ASSUME_NONNULL_BEGIN

@interface CardMatchingGame : NSObject

- (instancetype)initWithCardCount:(NSUInteger)count usingDeck:(Deck *)deck;
- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSUInteger score;

@end

NS_ASSUME_NONNULL_END
