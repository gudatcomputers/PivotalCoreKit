@protocol WKExtensionDelegate;

//@interface WKExtension : NSObject
//
//+ (WKExtension *)sharedExtension;
//
//- (void)openSystemURL:(NSURL *)url;
//
//@property (nonatomic, weak, nullable) id<WKExtensionDelegate> delegate;
//@property (nonatomic,readonly, nullable) WKInterfaceController *rootInterfaceController;
//
//@end

@class UILocalNotification;

@protocol WKExtensionDelegate <NSObject>

@optional

- (void)applicationDidFinishLaunching;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;

- (void)handleActionWithIdentifier:(NSString *)identifier forRemoteNotification:(NSDictionary *)remoteNotification; // when the app is launched from a notification. If launched from app icon in notification UI, identifier will be empty
- (void)handleActionWithIdentifier:(NSString *)identifier forLocalNotification:(UILocalNotification *)localNotification; // when the app is launched from a notification. If launched from app icon in notification UI, identifier will be empty
- (void)handleActionWithIdentifier:(NSString *)identifier forRemoteNotification:(NSDictionary *)remoteNotification withResponseInfo:(NSDictionary *)responseInfo; // when the app is launched from a notification. If launched from app icon in notification UI, identifier will be empty
- (void)handleActionWithIdentifier:(NSString *)identifier forLocalNotification:(UILocalNotification *)localNotification withResponseInfo:(NSDictionary *)responseInfo; // when the app is launched from a notification. If launched from app icon in notification UI, identifier will be empty
- (void)handleUserActivity:(NSDictionary *)userInfo;

- (void)didReceiveRemoteNotification:(NSDictionary *)userInfo;
- (void)didReceiveLocalNotification:(UILocalNotification *)notification;

@end