//
//  ViewController.h
//  image transfer viewtoview
//
//  Created by hitesh rakholiya on 16/02/17.
//  Copyright (c) 2017 hitesh rakholiya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITextFieldDelegate>
{
    IBOutlet UIButton *btn_next;
}

@property (strong, nonatomic) IBOutlet UIImageView *image1;
@end

