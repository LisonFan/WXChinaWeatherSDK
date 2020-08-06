//
//  Plugin_SDK_iOS.h
//  Plugin_SDK_iOS
//
//  Created by he on 2019/5/13.
//  Copyright © 2019 SynopticNetworkTianQi. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Plugin_SDK_iOS.
FOUNDATION_EXPORT double Plugin_SDK_iOSVersionNumber;

//! Project version string for Plugin_SDK_iOS.
FOUNDATION_EXPORT const unsigned char Plugin_SDK_iOSVersionString[];


/* 当前版本 2020-07-20 2.0 */

/*
 1.请将frameWork加入项目中，导入头文件#import <Plugin_SDK_iOS/Plugin_SDK_iOS.h>
 */

/*
 2.本项目依赖于 'SDWebImage' 'Masonry'请确保您的项目中已经安装这两个类库
 */

/*
 3.sdk需要开启定位权限，请在工程plist.info文件中添加NSLocationAlwaysAndWhenInUseUsageDescription和NSLocationWhenInUseUsageDescription
 */

/*
 4.请在info.plist文件添加NSAppTransportSecurity ->Allow Arbitrary Loads元素，同时设为 YES
 */
#import <Plugin_SDK_iOS/SynopticNetworkPluginView.h>

#import "Plugin_SDK_iOS/SynopticNetworkConfigModel.h"


