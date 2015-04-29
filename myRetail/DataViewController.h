//
//  DataViewController.h
//  myRetail
//
//  Created by Vijay Pratap Singh on 23/04/15.
//  Copyright (c) 2015 Vijay Pratap Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController <UITableViewDataSource,
UITableViewDelegate>
{
    IBOutlet UITableView *showCategories;
    NSMutableArray *category;
}

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end

