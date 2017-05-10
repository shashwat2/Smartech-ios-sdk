

#ifndef NetCoreTrackingInfo_h
#define NetCoreTrackingInfo_h

enum AppTrackingEvents{
    
    tracking_PageBrowse = 1,
    tracking_AddToCart  = 2,
    tracking_CheckOut = 3,
    tracking_CartExpiry = 4,
    tracking_RemoveFromCart = 5,
    tracking_AppExit = 6,
    tracking_PushSubscribe = 10,
    tracking_PushDelivered = 12,
    tracking_PushOpened = 13,
    tracking_FirstLaunch = 20,
    tracking_AppLaunch = 21,
    tracking_Login = 22,
    tracking_Logout = 23,
    tracking_AppUnInstall = 24,
    tracking_Register = 25
};


static NSString * const event_PageBrowse =  @"PageBrowse";
static NSString * const event_AddToCart = @"AddToCart";
static NSString * const event_CheckOut  = @"CheckOut";
static NSString * const event_CartExpiry  = @"CartExpiry";
static NSString * const event_RemoveFromCart  = @"RemoveFromCart";
static NSString * const event_AppExit = @"AppExit";
static NSString * const event_AppLaunch =  @"AppLaunch";
static NSString * const event_FirstLaunch = @"FirstLaunch";
static NSString * const event_Logout = @"Logout";
static NSString * const event_AppUnInstall = @"AppUnInstall";
static NSString * const event_Register = @"Register";
static NSString * const event_Login = @"Login";
static NSString * const event_PushSubscribe = @"PushSubscribe";
static NSString * const event_PushDelivered = @"PushDelivered";
static NSString * const event_PushOpened = @"PushOpened";

#endif /* NetCoreTrackingInfo_h */
