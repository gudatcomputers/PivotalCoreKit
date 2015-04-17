#import "Cedar.h"
#import "WKInterfaceDevice.h"

using namespace Cedar::Matchers;
using namespace Cedar::Doubles;

SPEC_BEGIN(WKInterfaceDeviceSpec)

describe(@"WKInterfaceDevice", ^{
    __block WKInterfaceDevice *subject;

    beforeEach(^{
        subject = [[WKInterfaceDevice alloc] init];
    });

    describe(@"public methods", ^{
        __block NSString *name;

        beforeEach(^{
            name = @"image-name";
        });

        it(@"should record the invocation for addCachedImage:name:", ^{
            UIImage *image = [[UIImage alloc] init];

            [subject addCachedImage:image name:name];

            subject should have_received(@selector(addCachedImage:name:))
            .with(image, name);
        });

        it(@"should record the invocation for addCachedImageWithData:name:", ^{
            NSData *imageData = [[NSData alloc] init];
            [subject addCachedImageWithData:imageData name:name];

            subject should have_received(@selector(addCachedImageWithData:name:))
            .with(imageData, name);
        });

        it(@"should record the invocation removeCachedImageWithName:", ^{
            [subject removeCachedImageWithName:name];

            subject should have_received(@selector(removeCachedImageWithName:))
            .with(name);
        });

        it(@"should record the invocation for removeAllCachedImages", ^{
            [subject removeAllCachedImages];

            subject should have_received(@selector(removeAllCachedImages));
        });
    });
});

SPEC_END
