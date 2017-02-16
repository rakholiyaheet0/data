//
//  ViewController2.m
//  image transfer viewtoview
//
//  Created by hitesh rakholiya on 16/02/17.
//  Copyright (c) 2017 hitesh rakholiya. All rights reserved.
//

#import "ViewController2.h"

@interface ViewController2 ()

@end

@implementation ViewController2
@synthesize imgView,theImage;

- (void)viewDidLoad {
    [super viewDidLoad];
    self.imgView.image=self.theImage;
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}
@end
