//
//  Card.m
//  cs193p_test
//
//  Created by lio on 2020/12/21.
//  Copyright © 2020 lio. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards {
    int score = 0;
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    return score;
}

@end
