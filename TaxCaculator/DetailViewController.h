//
//  DetailViewController.h
//  TaxCaculator
//
//  Created by Jing Zhang on 28/05/2013.
//  Copyright (c) 2013 JingZhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
