//
//  STDemoBarButtonItemFactory.h
//  CJStandardProjectDemo
//
//  Created by ciyouzen on 2018/10/12.
//  Copyright © 2018年 dvlproad. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface STDemoBarButtonItemFactory : NSObject

UIBarButtonItem *demoDoneBarButtonItem(id target, SEL action);

UIBarButtonItem *cjBarButtonItem(id target, NSString *title, SEL action);

@end
