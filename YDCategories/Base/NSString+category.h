//
//  NSString+category.h
//  dispatch_semaphore
//
//  Created by Yang on 2018/10/19.
//  Copyright © 2018年 Yang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (category)

/**
 判断是否为空
 */
-(BOOL)isEmpty;

+(CGSize)getLengthOfString:(NSString *)str boundingRectWithSize:(CGSize)rectSize andFont:(float)font;


@end
