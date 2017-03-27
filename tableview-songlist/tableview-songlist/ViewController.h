//
//  ViewController.h
//  tableview-songlist
//
//  Created by Hemant Gupta on 23/03/17.
//  Copyright © 2017 Hemant Gupta. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TableViewCell.h"

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
{
    IBOutlet UITableView *tab;
    
}


@end

