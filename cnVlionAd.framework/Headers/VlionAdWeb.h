//
//  VlionAdWeb.h
//  cnVlionAd
//
//  Created by 周晓旭 on 2019/12/16.
//  Copyright © 2019 周晓旭. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol VlionAdWebDelegate <NSObject>

@optional
- (void)webViewDidFinishGetWebTitle:(NSString *)title;

@end

@interface VlionAdWeb : UIView

@property (nonatomic, weak) id<VlionAdWebDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame vmediaId:(NSString *)vmediaId BUAdAppId:(NSString *)BUAdAppId;

@end

NS_ASSUME_NONNULL_END
