
#import <Foundation/Foundation.h>

#import "Action.h"
#import "XcodeTool.h"

@interface TestUtil : NSObject

+ (Options *)optionsFromArgumentList:(NSArray *)argumentList;

+ (Options *)validatedOptionsFromArgumentList:(NSArray *)argumentList;

+ (void)assertThatOptionsValidateWithArgumentList:(NSArray *)argumentList;
+ (void)assertThatOptionsValidateWithArgumentList:(NSArray *)argumentList failsWithMessage:(NSString *)message;

+ (NSDictionary *)runWithFakeStreams:(XcodeTool *)tool;

@end
