//
//  XWCommon.h
//  SixNews
//
//  Created by mac on 15/12/1.
//  Copyright © 2015年 张声扬. All rights reserved.
//

#ifndef XWCommon_h
#define XWCommon_h

#import "UIImage+CH.h"
#import "UIView+MJ.h"
#import "UIBarButtonItem+CH.h"

//定义屏幕的宽和高
#define ScreenWidth   [UIScreen mainScreen].bounds.size.width
#define ScreenHeight   [UIScreen mainScreen].bounds.size.height
//定义颜色的宏
#define XWColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

#define XWColorRGBA(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a]
//随机色
#define  XWRandomColor XWColor(arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256))
// 判断是什么型号的手机
#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size)) : NO)

#define iPhone6P ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2001), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size)) : NO)

#define IOS8 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)


//判断是否 Retina视网膜屏、设备是否%fhone 5、是否是iPad
#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)


//定义一个监听
#define XWNotification  [NSNotificationCenter defaultCenter]
//定义checkout复选框 通知的名字
#define checkBoxName @"checkBoxName"
//定义一个清空缓存的通知名字
#define clearDataName @"clearDataName"
//定义一下载完毕后发送的通知
#define downdidFinishName @"downdidFinishName"
//定义一个夜间模式的通知
#define nightName @"nightName"
//定义一个日间模式的通知
#define dayName @"dayName"


#endif /* XWCommon_h */
