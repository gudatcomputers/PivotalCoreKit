#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "PCKMessageCapturer.h"

@class UIImage;

@interface WKInterfaceDevice : PCKMessageCapturer;

+ (WKInterfaceDevice *)currentDevice;

- (BOOL)addCachedImage:(UIImage *)image name:(NSString *)name;
- (BOOL)addCachedImageWithData:(NSData *)imageData name:(NSString *)name;
- (void)removeCachedImageWithName:(NSString *)name;
- (void)removeAllCachedImages;

@property(nonatomic,readonly) CGRect screenBounds;
@property(nonatomic,readonly) CGFloat screenScale;
@property(nonatomic,readonly,copy) NSString *preferredContentSizeCategory;
@property(nonatomic,readonly,strong) NSDictionary *cachedImages;
@property(nonatomic, readonly, copy) NSString *systemVersion;

@end
