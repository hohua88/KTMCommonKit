//
//  KTMCommonUtils.h
//  NewCandyAD
//
//  Created by walle on 11/16/15.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, KTMGoogleTemViewType) {
    KTMGoogleTemViewSmallType = 0,
    KTMGoogleTemViewMediumType = 1
};

extern NSString *const KTMLoadAdSourceItemId; //回调广告itemId
extern NSString *const KTMLoadPlaceCodeId; //回调广告Code
extern NSString *const KTMLoadAdAppId; //回调广告AppId
extern NSString *const KTMLoadAdAppKey; //回调广告AppKey

extern NSString *const KTMCallbackADID;
extern NSString *const KTMCallbackState;
extern NSString *const KTMCallbackStateOpenSuccess;
extern NSString *const KTMCallbackStateOpenFail;
extern NSString *const KTMCallbackStateGiveReward;
extern NSString *const KTMCallbackStateLoadSuccess;
extern NSString *const KTMCallbackStateLoadFail;
extern NSString *const KTMCallbackStateAdClicked;
extern NSString *const KTMCallbackStateAdClosed;
extern NSString *const KTMCallbackStateCloseSuccess;

extern NSString *const KTMOpenInAppStore;


#define NativeProject 0

@interface KTMCommonUtils : NSObject

+ (NSString *)currentVersion;
/**
 *  + (UIViewController *)getADDisplayViewController;
 *  用于显示banner/ message/ plaque的穿透广告视图控制器
 *  当用户点击位置存在广告视图时，控制器的View会将事件分发到广告视图上。
 *  当用户点击位置没有广告视图时，控制器的View会将事件分发到游戏视图控制器上。
 *  特别注意：
 *  banner 和 message 需要使用 [vcView insertSubview:self.bannerView atIndex:0] 方法将广告视图插入控制器最底层，防止层级混乱
 *  plaque直接使用控制器视图或控制器即可
*/
+ (UIViewController *)getADDisplayViewController;
+ (UIViewController *)getUIViewController;
+ (UIViewController *)getCurrentVCFrom:(UIViewController *)rootVC;


+ (CGRect)getGoogleTemFrameWithType:(KTMGoogleTemViewType)type;

+ (void)setOpenAppStore:(BOOL)flag ;

+ (BOOL)isRetinaDisplay;
+ (BOOL)isIPad;
+ (NSString*)getIdfa;
+ (NSString*)getMacAddress;
+ (NSString*)getIPAddress;
+ (NSString*)getPackageName:(NSString*) key;
+ (NSString *)getNetWorkStates;
+ (CGRect)getBannerFrame;
@end
