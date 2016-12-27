//
//  VClientSDK+VClientAPI.h
//  VClientSDK
//
//  Created by 杨承传 on 16/10/24.
//  Copyright © 2016年 天玑科技. All rights reserved.
//

#import "VClientSDK.h"

@interface VClientSDK (VClientAPI)

- (void)start;

- (void)stop;

- (void)joinConferenceWithRoomKey:(NSString*)rooKey
                          RoomPin:(NSString*)roomPin
                         Nickname:(NSString*)nickname;

- (void)serDevice:(VClientDevice)device status:(VClientDeviceStatus)status;


- (void)leaveConference;


@end
