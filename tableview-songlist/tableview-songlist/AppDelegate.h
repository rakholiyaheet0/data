//
//  AppDelegate.h
//  tableview-songlist
//
//  Created by Hemant Gupta on 23/03/17.
//  Copyright © 2017 Hemant Gupta. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

