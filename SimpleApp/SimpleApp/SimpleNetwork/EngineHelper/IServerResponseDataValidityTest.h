//
//  IServerResponseDataValidityTest.h
//  SimpleApp
//
//  Created by idoplay_cch on 2017/7/10.
//  Copyright © 2017年 leqoqo. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ErrorBean;

// 服务器返回的数据有效性检测(这是业务层面有效性检测, 比如说, 调用后台一个搜索接口, 传入关键字,
// 在后台没有搜索到结果的情况下, 在业务层面, 我们认为是失败的)
// 在这里主要是检查跟服务器约定好的 errorCode 和 errorMessage
@protocol IServerResponseDataValidityTest <NSObject>

/**
 *  测试服务器返回的数据, 在业务上是否有效
 *
 *  @param serverResponseDataDictionary 数据字典
 *  @param errorOUT 如果业务上无效, 就通过这个参数回传外部调用者
 *
 *  @return YES : 业务上有效, NO : 业务上无效.
 */
- (BOOL)isServerResponseDataValid:(in NSDictionary *)serverResponseDataDictionary
                         errorOUT:(out ErrorBean **)errorOUT;
@end
