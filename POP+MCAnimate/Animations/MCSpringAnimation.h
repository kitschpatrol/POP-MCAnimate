//
//  MCSpringAnimation.h
//  POP+MCAnimate
//
//  Created by Matthew Cheok on 29/4/14.
//  Copyright (c) 2014 Matthew Cheok. All rights reserved.
//

#import "MCAnimationProxy.h"
#import "MCShorthand.h"
#import "POPPropertyAnimation.h"

@interface MCSpringAnimation : MCAnimationProxy

@property (assign, nonatomic) CGFloat springBounciness;
@property (assign, nonatomic) CGFloat springSpeed;
@property (assign, nonatomic) POPAnimationClampFlags springClampMode;

@end

@interface NSObject (MCSpringAnimation)

@property (assign, nonatomic) CGFloat pop_springBounciness;
@property (assign, nonatomic) CGFloat pop_springSpeed;
@property (assign, nonatomic) POPAnimationClampFlags pop_springClampMode;

- (instancetype)pop_spring;

@end

#ifdef MCANIMATE_SHORTHAND

@interface NSObject (MCSpringAnimation_DropPrefix)

@property (assign, nonatomic) CGFloat springBounciness;
@property (assign, nonatomic) CGFloat springSpeed;
@property (assign, nonatomic) POPAnimationClampFlags springClampMode;

- (instancetype)spring;

@end

@implementation NSObject (MCSpringAnimation_DropPrefix)

MCSHORTHAND_PROPERTY(springBounciness, SpringBounciness, CGFloat)
MCSHORTHAND_PROPERTY(springSpeed, SpringSpeed, CGFloat)
MCSHORTHAND_PROPERTY(springClampMode, SpringClampMode, POPAnimationClampFlags)
MCSHORTHAND_GETTER(spring, instancetype)

@end

#endif
