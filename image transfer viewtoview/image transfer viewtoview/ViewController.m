//
//  ViewController.m
//  image transfer viewtoview
//
//  Created by hitesh rakholiya on 16/02/17.
//  Copyright (c) 2017 hitesh rakholiya. All rights reserved.
//

#import "ViewController.h"
#import "ViewController2.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}
- (IBAction)next:(id)sender {
    ViewController2 *v2=[self.storyboard instantiateViewControllerWithIdentifier:@"ViewController2"];
    v2.theImage=self.image1.image;
    [self.navigationController pushViewController:v2 animated:YES];
    
}
@end
