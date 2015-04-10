#import <Foundation/Foundation.h>

@interface NSInvocation (Spec)

- (BOOL)matchesTarget:(id)target selector:(SEL)selector arguments:(NSArray *)arguments;

@end
