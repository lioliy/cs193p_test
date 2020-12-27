//
//  Card.h
//  cs193p_test
//
//  Created by lio on 2020/12/21.
//  Copyright © 2020 lio. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;
@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *) otherCards;

@end

NS_ASSUME_NONNULL_END
