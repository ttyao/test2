//
//  DetailViewController.h
//  test2
//
//  Created by Henry Tianheng Yao on 3/4/14.
//  Copyright (c) 2014 Henry Tianheng Yao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
