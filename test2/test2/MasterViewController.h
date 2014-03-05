//
//  MasterViewController.h
//  test2
//
//  Created by Henry Tianheng Yao on 3/4/14.
//  Copyright (c) 2014 Henry Tianheng Yao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
