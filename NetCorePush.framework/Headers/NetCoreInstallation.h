/*
 @header NetCoreInstallation.h
 
 @brief This is the header file where my super-code is contained.
 
 NetCoreInstallation : -use to setup all network communication methods
 
 @author NetCore
 @copyright  2016 NetCore
 @version    1.0.0
 */
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <NetCorePush/NetCoreConstant.h>

@interface NetCoreInstallation : NSObject

/*
 @Method sharedInstance:- use to return NetCoreSharedManager manage class Object
 @return NetCoreSharedManager instance
 */
+(instancetype)sharedInstance;
/*
 netCorePushRegisteration return response block
 */
-(void)netCorePushRegisteration:(NSString *)strIdentity Block:(NetCoreStatusBlock)block;
/*
 netCorePushLogin taking input as Identity and return response block
 */
-(void)netCorePushLogin:(NSString *)strIdentity Block:(NetCoreStatusBlock)block;
/*
 netCorePushLogout taking input as Identity and return response block
 */
-(void)netCorePushLogout:(NetCoreStatusBlock)block;
/*
 netCorePushDelivered taking input  as Identity,strTrid,latitude,longitude and return response block
 */
-(void)netCorePushDelivered:(NSString *)strTrid Block:(NetCoreStatusBlock)block;
/*
 netCorePushOpened taking input  as Identity,strTrid,latitude,longitude and return response block
 */
-(void)netCorePushOpened:(NSString *)strTrid  Block:(NetCoreStatusBlock)block;
@end
