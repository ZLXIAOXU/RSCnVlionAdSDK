# RSCnVlionAdSDK
包含穿山甲
直接下载导入到工程中

1.Build Settings中Other Linker Flags 增加参数-ObjC

2. 添加依赖库
工程需要在TARGETS -> Build Phases中找到Link Binary With Libraries，点击“+”，依次添加下列依赖库
StoreKit.framework
MobileCoreServices.framework
WebKit.framework
MediaPlayer.framework
CoreMedia.framework
CoreLocation.framework
AVFoundation.framework
CoreTelephony.framework
SystemConfiguration.framework
AdSupport.framework
CoreMotion.framework
Accelerate.framework
libresolv.9.tbd
libc++.tbd
libz.tbd
libsqlite3.tbd
如果以上依赖库增加完仍旧报错，请添加ImageIO.framework。

3.SDK使用方法
使用时将SDK直接拖入工程
在要使用的控制器头文件导入
#import <cnVlionAd/VlionAdWeb.h>

VlionAdWebDelegate（代理非必须实现）
代理方法在webView加载完毕执行，返回html标题
(void)webViewDidFinishGetWebTitle:(NSString *)title;

初始化方法
// vmediaId：媒体id
// BUAdAppId：穿山甲AppID
(instancetype)initWithFrame:(CGRect)frame vmediaId:(NSString *)vmediaId BUAdAppId:(NSString *)BUAdAppId;
