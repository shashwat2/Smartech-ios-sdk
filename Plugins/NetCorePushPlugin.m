
#import "NetCorePushPlugin.h"
#import <NetCorePush/NetCorePush.h>
@implementation NetCorePushPlugin

-(void)sendInAppActivity:(CDVInvokedUrlCommand *)command {
    
    if ([command.arguments count]>0){
        NSInteger activityType= [[command.arguments objectAtIndex:0] integerValue];
        id activityMetaData = nil;
        if ([command.arguments count]>1){
            activityMetaData = [command.arguments objectAtIndex:1];
        }
        [[NetCoreAppTracking    sharedInstance]sendAppTrackingEventWithCustomPayload:activityType Payload:activityMetaData Block:^(NSInteger statusCode) {
            [self sendResult:statusCode Command:command];
        }];
    }
}
-(void)pushLogin:(CDVInvokedUrlCommand *)command{
    
    if ([command.arguments count]>0){
        NSString *strId = [command.arguments objectAtIndex:0];
        if (strId != nil){
            [[NetCoreInstallation sharedInstance]netCorePushLogin:strId Block:^(NSInteger statusCode) {
                [self sendResult:statusCode Command:command];
            }];
        }
    }
}
-(void)pushLogout:(CDVInvokedUrlCommand *)command{
    
    [[NetCoreInstallation sharedInstance]netCorePushLogout:^(NSInteger statusCode) {
        [self sendResult:statusCode Command:command];
    }];
}
-(void)sendResult:(NSInteger)statusCode Command:(CDVInvokedUrlCommand *)command{
    
    CDVPluginResult *pluginResult = [CDVPluginResult resultWithStatus:statusCode == 200 ? CDVCommandStatus_OK:CDVCommandStatus_ERROR  messageAsNSInteger:statusCode];
    [self.commandDelegate sendPluginResult:pluginResult callbackId:command.callbackId];
    
}
-(void)profilePush:(CDVInvokedUrlCommand *)command{
    
    
    
    if ([command.arguments count]>0){
        NSString *strId = [command.arguments objectAtIndex:0];
        id activityMetaData = nil;
        if ([command.arguments count]>1){
            activityMetaData = [command.arguments objectAtIndex:1];
        }
        [[NetCoreInstallation sharedInstance]netCoreProfilePush:strId Payload:activityMetaData Block:^(NSInteger statusCode) {
            [self sendResult:statusCode Command:command];
         }];
    }
}
@end
