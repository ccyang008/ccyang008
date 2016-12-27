//
//  VCMessage.h
//  VClientSDK
//
//  Created by 杨承传 on 16/10/24.
//  Copyright © 2016年 天玑科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VClientDefs.h"

@interface VCMessage : NSObject

/*!
 @property
 @brief 消息来源用户名
 */
@property (nonatomic, copy) NSString *from;

/*!
 @property
 @brief 消息目的地用户名
 */
@property (nonatomic, copy) NSString *to;

/*!
 @property
 @brief 消息发送或接收的时间
 */
@property (nonatomic) long long timestamp;

/*!
 @property
 @brief 文本信息
 */
@property (nonatomic, strong) NSString *txt;

/*!
 @property
 @brief 消息类型
 */
@property (nonatomic) VCMessageType messageType;

/*!
 @property
 @brief 此消息是否是群聊消息
 */
@property (nonatomic) BOOL isGroup;

/*!
 @property
 @brief 群聊消息里的发送者用户名
 */
@property (nonatomic, copy) NSString *groupSenderName;

/*!
 @method
 @brief 创建消息实例
 @param messageId 消息id
 @param sender   消息发送方
 @param receiver 消息接收方
 @param bodies 消息体列表
 @result 消息实例
 */
- (id)initMessageWithID:(NSString *)messageId
                 sender:(NSString *)sender
               receiver:(NSString *)receiver
                 bodies:(NSArray *)bodies;


@end
