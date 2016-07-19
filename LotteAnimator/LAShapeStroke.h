//
//  LAShapeStroke.h
//  LotteAnimator
//
//  Created by Brandon Withrow on 12/15/15.
//  Copyright © 2015 Brandon Withrow. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LAAnimatableColorValue;
@class LAAnimatableNumberValue;

@interface LAShapeStroke : NSObject

- (instancetype)initWithJSON:(NSDictionary *)jsonDictionary frameRate:(NSNumber *)frameRate;

@property (nonatomic, readonly) BOOL fillEnabled;
@property (nonatomic, readonly) LAAnimatableColorValue *color;
@property (nonatomic, readonly) LAAnimatableNumberValue *opacity;
@property (nonatomic, readonly) LAAnimatableNumberValue *width;

@end