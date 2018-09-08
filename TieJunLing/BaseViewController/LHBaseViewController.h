//
//  LHBaseViewController.h
//  TieJunLing
//
//  Created by macbook on 2018/9/7.
//  Copyright © 2018年 macbook. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LHBaseViewController : UIViewController
- (void)createNavLeftItem:(NSString *)leftImageName rightItem:(NSString *)rightImageName;
- (void)leftItemTap:(UIBarButtonItem *)sender;
- (void)rightItemTap:(UIBarButtonItem *)sender;
@end
