// Copyright 2018-present 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <ABI38_0_0UMCore/ABI38_0_0UMSingletonModule.h>
#import <ABI38_0_0EXNotifications/ABI38_0_0EXPushTokenListener.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ABI38_0_0EXPushTokenManager

- (void)addListener:(id<ABI38_0_0EXPushTokenListener>)listener;
- (void)removeListener:(id<ABI38_0_0EXPushTokenListener>)listener;

@end

@interface ABI38_0_0EXPushTokenManager : ABI38_0_0UMSingletonModule <UIApplicationDelegate, ABI38_0_0EXPushTokenManager>

- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
