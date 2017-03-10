//
//  SYNetworking.h
//  SYNetworking
//
//  Created by 沈云翔 on 2017/3/10.
//  Copyright © 2017年 shenyunxiang. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  网络状态
 */
typedef NS_ENUM(NSInteger, SYNetworkStatus) {
    /**
     *  未知网络
     */
    SYNetworkStatusUnknown             = 1 << 0,
    /**
     *  无法连接
     */
    SYNetworkStatusNotReachable        = 1 << 1,
    /**
     *  WWAN网络
     */
    SYNetworkStatusReachableViaWWAN    = 1 << 2,
    /**
     *  WiFi网络
     */
    SYNetworkStatusReachableViaWiFi    = 1 << 3
};

/**
 网络库
 */
@interface SYNetworking : NSObject



@end
