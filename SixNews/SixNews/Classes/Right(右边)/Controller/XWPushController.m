//
//  XWPushController.m
//  SixNews
//
//  Created by 祁 on 15/11/30.
//  Copyright © 2015年 张声扬. All rights reserved.
//

#import "XWPushController.h"

@interface XWPushController ()

@end

@implementation XWPushController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor=[UIColor whiteColor];
    
    //2.设置导航栏上面的按钮
    [self setupNavButton];
}

#pragma mark 设置导航栏上面的按钮
-(void)setupNavButton
{
    //1.添加右边的导航栏的按钮
    UIBarButtonItem *rightItem=[UIBarButtonItem itemWithRightIcon:@"search_close_btn" highIcon:nil target:self action:@selector(quit)];
    self.navigationItem.rightBarButtonItem=rightItem;
    //2.添加右边的按钮
    UIBarButtonItem *leftitem=[UIBarButtonItem itemWithLeftTitle:@"管理" target:self action:@selector(manager)];
    self.navigationItem.leftBarButtonItem=leftitem;
    
}

-(void)manager
{
    
}

-(void)quit
{
    [self dismissViewControllerAnimated:YES completion:nil];
}


@end
