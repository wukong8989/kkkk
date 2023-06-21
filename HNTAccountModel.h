//
//  HNTAccountModel.h
//  demo
//
//  Created by 东哥 on 2022/4/12.
//

#import <Foundation/Foundation.h>

#import "HNHotspotInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HNTAccountModel : NSObject

/// 账户地址
@property (nonatomic , copy)NSString    *address;

@property(nonatomic ,strong)NSArray<HNHotspotInfoModel*> *listHotspot;

/// 当前区块高度
@property (nonatomic , assign)NSInteger  block;

/// 账户余额
@property (nonatomic , assign)NSInteger  balance;


/// 账户热点数量
@property (nonatomic , assign)int         hotspot_count;

@property (nonatomic , assign)NSDecimalNumber       *money;

@end

NS_ASSUME_NONNULL_END
