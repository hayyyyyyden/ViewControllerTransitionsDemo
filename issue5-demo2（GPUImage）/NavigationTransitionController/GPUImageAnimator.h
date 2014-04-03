//
//  GPUImageAnimator.h
//  NavigationTransitionTest
//
//  Created by Chris Eidhof on 9/28/13.
//  Copyright (c) 2013 Chris Eidhof. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Animator.h"

@class GPUImageDissolveBlendFilter;
@class GPUImagePicture;
@class GPUImagePixellateFilter;
@class GPUImageView;


@interface GPUImageAnimator : NSObject
<UIViewControllerAnimatedTransitioning,
UIViewControllerInteractiveTransitioning>

@property (nonatomic) BOOL interactive;
@property (nonatomic) CGFloat progress;

- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;

@end
