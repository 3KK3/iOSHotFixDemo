//
//  Felix.h
//  LYFix
//
//  Created by YZY on 2018/11/16.
//  Copyright © 2018 Xly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <JavaScriptCore/JavaScriptCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface Felix : NSObject
+ (void)fixIt;
+ (void)evalString:(NSString *)javascriptString;
@end

NS_ASSUME_NONNULL_END
