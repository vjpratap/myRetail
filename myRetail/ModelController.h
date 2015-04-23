//
//  ModelController.h
//  myRetail
//
//  Created by Vijay Pratap Singh on 23/04/15.
//  Copyright (c) 2015 Vijay Pratap Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end


