#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>


@interface InterfaceController : WKInterfaceController

@property (weak, nonatomic, readonly) WKInterfaceLabel *titleLabel;
@property (weak, nonatomic, readonly) WKInterfaceImage *image;
@property (weak, nonatomic, readonly) WKInterfaceSeparator *separator;
@property (weak, nonatomic, readonly) WKInterfaceButton *actionButton;
@property (weak, nonatomic, readonly) WKInterfaceDate *date;
@property (weak, nonatomic, readonly) WKInterfaceSwitch *theSwitch;
@property (weak, nonatomic, readonly) WKInterfaceButton *noActionButton;
@property (weak, nonatomic, readonly) WKInterfaceButton *seguePushButton;
@property (weak, nonatomic, readonly) WKInterfaceButton *segueModalButton;

@end
