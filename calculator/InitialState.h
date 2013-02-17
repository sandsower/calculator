//
//  InitialState.h
//  calculator
//
//  Created by Sojin Kim on 13. 1. 31..
//  Copyright (c) 2013년 Sojin Kim. All rights reserved.
//

#import "BrainState.h"

@class CalculatorBrain;

@interface InitialState : BrainState

+ (InitialState *)brainStateOfBrain:(CalculatorBrain *)myBrain;
@end
