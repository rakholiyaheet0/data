//
//  TableViewCell.h
//  tableview-songlist
//
//  Created by Hemant Gupta on 23/03/17.
//  Copyright © 2017 Hemant Gupta. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewCell : UITableViewCell
@property(strong,nonatomic)IBOutlet UILabel *title;

@property(strong,nonatomic)IBOutlet UILabel *subtitle;
@end
