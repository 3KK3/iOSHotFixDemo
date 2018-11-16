//
//  ViewController.m
//  iOSHotFixDemo
//
//  Created by YZY on 2018/11/16.
//  Copyright © 2018 ZMJ. All rights reserved.
//

#import "ViewController.h"
#import "MightyCrash.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    MightyCrash *mc = [[MightyCrash alloc] init];
    [mc divideUsingDenominator:1];
}


@end
