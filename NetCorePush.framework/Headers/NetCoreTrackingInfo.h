

#ifndef NetCoreTrackingInfo_h
#define NetCoreTrackingInfo_h

enum AppTrackingEvents{
    tracking_PageBrowse = 1,
    tracking_AddToCart  = 2,
    tracking_CheckOut = 3,
    tracking_CartExpiry = 4,
    tracking_RemoveFromCart = 5,
    tracking_AppExit = 6,
    tracking_FirstLaunch = 20,
    tracking_AppLaunch = 21,
    tracking_AppUnInstall = 24
};


static NSString * const event_PageBrowse =  @"PageBrowse";
static NSString * const event_AddToCart = @"AddToCart";
static NSString * const event_CheckOut  = @"CheckOut";
static NSString * const event_CartExpiry  = @"CartExpiry";
static NSString * const event_RemoveFromCart  = @"RemoveFromCart";
static NSString * const event_AppExit = @"AppExit";
static NSString * const event_AppLaunch =  @"AppLaunch";
static NSString * const event_FirstLaunch = @"FirstLaunch";
static NSString * const event_AppUnInstall = @"AppUnInstall";

#endif /* NetCoreTrackingInfo_h */
