

#import <Cordova/CDVPlugin.h>
@interface NetCorePushPlugin : CDVPlugin
-(void)sendInAppActivity:(CDVInvokedUrlCommand *)command;
-(void)pushLogin:(CDVInvokedUrlCommand *)command;
-(void)pushLogout:(CDVInvokedUrlCommand *)command;
-(void)profilePush:(CDVInvokedUrlCommand *)command;

@end
