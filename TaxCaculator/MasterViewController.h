//
//  MasterViewController.h
//  TaxCaculator
//
//  Created by Jing Zhang on 28/05/2013.
//  Copyright (c) 2013 JingZhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
