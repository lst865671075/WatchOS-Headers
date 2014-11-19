//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, SPInterfaceViewController;

@protocol SPInterfaceViewControllerDelegate <NSObject>
- (void)interfaceViewController:(SPInterfaceViewController *)arg1 setValue:(id)arg2 forKey:(NSString *)arg3;
- (void)interfaceViewController:(SPInterfaceViewController *)arg1 sendAction:(NSString *)arg2 withValue:(id)arg3;
- (void)interfaceViewControllerDidDeactivate:(SPInterfaceViewController *)arg1;
- (void)interfaceViewControllerWillActivate:(SPInterfaceViewController *)arg1;
- (void)interfaceViewControllerRelease:(SPInterfaceViewController *)arg1;
- (void)interfaceViewController:(SPInterfaceViewController *)arg1 createCompanionControllerClass:(NSString *)arg2 properties:(NSArray *)arg3;

@optional
- (void)launchGizmoAppForCompanionAppWithIdentifier:(NSString *)arg1 withURLString:(NSString *)arg2;
- (void)appWithRootInterfaceViewController:(SPInterfaceViewController *)arg1 performActionForUserActivity:(NSDictionary *)arg2;
- (void)appWithRootInterfaceViewController:(SPInterfaceViewController *)arg1 performActionWithItemID:(NSString *)arg2 forNotificationID:(NSString *)arg3;
- (struct UIEdgeInsets)interfaceViewControllerContentInsets:(SPInterfaceViewController *)arg1;
@end

