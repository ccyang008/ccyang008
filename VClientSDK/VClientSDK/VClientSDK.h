//
//  VClientSDK.h
//  VClientSDK
//
//  Created by 杨承传 on 16/10/24.
//  Copyright © 2016年 天玑科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VClientDefs.h"
#import "VCConversation.h"

/*!
 *  @class
 *  @brief 版本号
 */
@interface VClientSDK : NSObject

@property (nonatomic, weak) id<VClientDelegate>delegate;

@property (nonatomic)   VClentStatus status;

//@property (nonatomic,assign) VClientDeviceStatus microphoneStatus;
//
//@property (nonatomic) VClientDeviceStatus cameraStatus;
//
//@property (nonatomic) VClientDeviceStatus speakerStatus;
//
//@property (nonatomic, strong) VCConversation *conversation;


+ (instancetype)instance;

- (void)vinit;

- (void)start;

- (void)stop;

- (void)uninit;

- (void)back;


/*!
 *  @method
 *  @brief 版本号
 */
- (double)versionNumber;

/*!
 *  @method
 *  @brief 版本更新信息
 */
- (NSString*)versionString;

@end



