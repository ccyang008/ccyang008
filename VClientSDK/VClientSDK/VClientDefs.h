//
//  VClientDefs.h
//  VClientSDK
//
//  Created by 杨承传 on 16/10/24.
//  Copyright © 2016年 天玑科技. All rights reserved.
//



/*!
 *  @VClentStatus
 *  @brief  vidyo 状态维护
 */
typedef  NS_ENUM(NSInteger, VClentStatus) {
    VClientStatusNone = 0 << 1,         /*!<none>*/
    VClentStatusInit = 1 << 1,          /*!<客户端正在初始化>*/
    VClentStatusInitSucceed = 2 << 1,   /*!<客户端初始化成功>*/
    VClentStatusInitFail = 3 << 1,      /*!<客户端初始化成功>*/
    VClentStatusStart = 4 << 1,         /*!<客户端启动>*/
    VClentStatusStartSucceed = 5 << 1,  /*!<客户端启动成功>*/
    VClentStatusStartFail = 6 << 1,     /*!<客户端启动失败>*/
    VClentStatusJoin = 7 << 1,          /*!<客户端准备加入会议室>*/
    VClentStatusJoinSucceed = 8 << 1,   /*!<客户端加入会议室成功>*/
    VClentStatusJoinFail = 9 << 1,      /*!<客户端加入会议室失败>*/
    VClentStatusLeave = 10 << 1,        /*!<客户端准备离开会议室>*/
    VClentStatusLeaveSucceed = 11 << 1, /*!<客户端离开会议室成功>*/
    VClentStatusLeaveFail = 12 << 1     /*!<客户端离开会议室失败>*/
};

typedef NS_ENUM(NSInteger,VClientDevice) {
    VClientDeviceMicrophone,
    VClientDeviceCamera,
    VClientDeviceSpeaker = 2
};

/**
 * 会议室当前状态，操作结果见回调
 */
typedef NS_ENUM(NSInteger,VClientConferenceStatus) {
    VClientConferenceFree = 0,
    VClientConferenceBusy = 1,
    VClientConferenceJoining = 2,
    VClientConferenceLeaveing = 3
};

typedef NS_ENUM(NSInteger, VClientDeviceStatus) {
    VClientDeviceMute = 0,
    VClientDeviceUnMute = 1,
    VClientDeviceBack = 2,
    VClientDeviceFront = 3
};

typedef NS_ENUM(NSInteger,VCMessageType) {
    VCMessageTypeText
};

/*!
 *  @protocol
 *  @brief  vidyo 消息回调
 */
@protocol VClientDelegate <NSObject>

@end

@protocol VConferenceDelegate <NSObject>
/*!
 *  @brief 设置状态变化回调
 */
- (void)vclientDevice:(VClientDevice)device change:(BOOL)mute;

/*!
 *  @brief 参与者变化回调
 *  @para participant:成员变化信息
          isAddOrRemove:成员是进会或离会
 */
- (void)vclientParticipantChange:(NSString*)participant action:(BOOL)isAddOrRemove;

@end

@protocol VClientStatusDelegate <NSObject>
/*!
 *  @brief vidyo 状态变化回调
 */
- (void)vclientStatusChangeFrom:(VClentStatus)fromStatus to:(VClentStatus)toStatus;

@end

@protocol VClientMessageDelegte <NSObject>
/*!
 *  @brief vidyo 接收到消息的回调
 */
- (void)receiveMessage:(NSString*)message
                  form:(NSString*)from
               isGroup:(NSString*)isGroup;

@end
