//
//  KeychainUUID.h
//  TestUUIDKeychain
//
//  Created by dengyanzhou on 15/3/20.
//  Copyright (c) 2015年 dyz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KeychainUUID : NSObject {
    
}

+ (NSString *)KeychainIdentifier;
/**
 *  获取设备唯一id
 *
 *  @return <#return value description#>
 */
+ (NSString*)value;
/**
 *  重置
 */
+ (void)Reset;

@end