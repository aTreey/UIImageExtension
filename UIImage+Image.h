//
//  UIImage+Image.h
//
//  Created by Apeng on 15/6/26.
//  Copyright (c) 2015年 Apeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Image)


// 快速的返回一个最原始的图片
+ (instancetype)imageWithOriRenderingImage:(NSString *)imageName;


// 快速拉伸图片
+ (instancetype)imageWithStretchableImageName:(NSString *)imageName;

@end
