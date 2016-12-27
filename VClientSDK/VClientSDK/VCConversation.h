//
//  VCConversation.h
//  VClientSDK
//
//  Created by 杨承传 on 16/10/25.
//  Copyright © 2016年 天玑科技. All rights reserved.
//

#import <Foundation/Foundation.h>

@class VCConference;
@class VCChat;

@interface VCConversation : NSObject

@property (nonatomic) VClientConferenceStatus status;

@property (nonatomic, strong) VCConference *conference;

@property (nonatomic, strong) VCChat *chat;

@property (nonatomic, weak) id<VClientStatusDelegate>delegate;

- (void)join;

- (void)leave;

@end

/*!
 *  @brief 会议室视频管理
 */
@interface VCConference : NSObject

@property (nonatomic, weak) id<VConferenceDelegate>delegate;

@property (nonatomic) VClientConferenceStatus status;

- (void)resolution;
- (void)mode;

- (void)deviceChange;

@end

/*!
 *  @brief 聊天会话管理
 */
@interface VCChat : NSObject

@property (nonatomic, weak) id<VClientMessageDelegte>delegate;

- (void)sendMessage:(NSString*)message;

@end


/*!
 *  @brief 硬件设备管理
 */
@interface VCDevice : NSObject


//@property (nonatomic, weak) id<vc>


@end
