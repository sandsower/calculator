//
//  GettingRightOperandState.h
//  calculator
//
//  Created by Sojin Kim on 13. 1. 31..
//  Copyright (c) 2013년 Sojin Kim. All rights reserved.
//

#import "BrainState.h"

@interface GettingRightOperandState : BrainState
@property (nonatomic) double operand;

+ (GettingRightOperandState *)brainStateOfBrain:(id)myBrain;
@end
