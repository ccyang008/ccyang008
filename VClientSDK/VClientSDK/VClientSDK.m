//
//  VClientSDK.m
//  VClientSDK
//
//  Created by 杨承传 on 16/10/24.
//  Copyright © 2016年 天玑科技. All rights reserved.
//

#import "VClientSDK.h"
#import "VidyoClient.h"

@implementation VClientSDK


+ (instancetype)instance{
    
    static VClientSDK *client = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        
    });
    return client;
}

- (void)vinit{
    
    NSString *path = [NSTemporaryDirectory() stringByAppendingString:@"hello"];
    
    if(![[NSFileManager defaultManager] fileExistsAtPath:path]) {
        NSLog(@"创建");
        
        if(![[NSFileManager defaultManager] createFileAtPath:path contents:NULL attributes:NULL]) {
            
        }
        
    }else{
        NSLog(@"已存在");
    }

}

- (double)versionNumber{
    
    return 1.00000;
}

- (NSString*)versionString{

    return @"";
}

@end
