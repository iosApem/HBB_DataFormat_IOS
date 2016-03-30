//
//  Hbb_JSONParser.h
//  HBB_DataFormatDemo
//
//  Created by CHENG DE LUO on 15/7/30.
//  Copyright (c) 2015年 CHENG DE LUO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BeanParser.h"

/**
 *  货宝宝JSON转化类
 *
 *  @author apem
 */

@interface Hbb_JSONParser : NSObject

@property (nonatomic, strong) NSString *dateFormat;             //日期转化格式
@property (nonatomic, strong) NSString *datetimeFormat;         //日期/时间转化格式

/**
 *  单例
 *
 *  @return 货宝宝JSON转化对象
 */
+ (instancetype)shared;

/**
 *  JSON字符串转化为模型对象
 *
 *  @param jsonString JSON字符串
 *  @param cls        模型对象类型
 *
 *  @return 模型对象
 */
- (id)jsonStringToBean:(NSString *)jsonString cls:(Class)cls;

/**
 *  JSON字符串转化为模型对象数组
 *
 *  @param jsonString JSON字符串
 *  @param cls        模型对象类型
 *
 *  @return 模型对象数组
 */
- (NSArray *)jsonStringToBeanArray:(NSString *)jsonString cls:(Class)cls;

/**
 *  模型对象转化为JSON字符串
 *
 *  @param bean 模型对象
 *
 *  @return JSON字符串
 */
- (NSString *)beanToJsonString:(NSObject *)bean;

/**
 *  模型对象数组转化为JSON字符串
 *
 *  @param beanArray 模型对象数组
 *  @param cls       模型对象类型
 *
 *  @return JSON字符串
 */
- (NSString *)beanArrayToJsonString:(NSArray *)beanArray cls:(Class)cls;

/**
 *  JSON字符串转化为字典
 *
 *  @param jsonString  JSON字符串
 *
 *  @return 字典
 */
- (NSDictionary *)jsonStringToDictionary:(NSString *)jsonString;

/**
 *  JSON字符串转化为字典数组
 *
 *  @param jsonString  JSON字符串
 *
 *  @return 字典数组
 */
- (NSArray *)jsonStringToDictionaryArray:(NSString *)jsonString;

/**
 *  字典转化为JSON字符串
 *
 *  @param dictionary 字典
 *
 *  @return JSON字符串
 */
- (NSString *)dictionaryToJsonString:(NSDictionary *)dictionary;

/**
 *  字典数组转化为JSON字符串
 *
 *  @param dictionaryArray  字典数组
 *
 *  @return JSON字符串
 */
- (NSString *)dictionaryArrayToJsonString:(NSArray *)dictionaryArray;

/**
 *  模型对象转化为字典
 *
 *  @param bean 模型对象
 *
 *  @return 字典
 */
- (NSDictionary *)beanToDictionary:(NSObject *)bean;

/**
 *  字典转化为模型对象
 *
 *  @param dictionary 字典
 *
 *  @return 模型对象
 */
- (id)dictionaryToBean:(NSDictionary *)dictionary cls:(Class)cls;

/**
 *  模型对象数组转化为字典数组
 *
 *  @param beanArray 模型对象数组
 *
 *  @return  字典数组
 */
- (NSArray *)beanArrayToDictionaryArray:(NSArray *)beanArray;

/**
 *  字典数组转化为对象数组
 *
 *  @param dictionaryArray 字典数组
 *  @param cls             模型对象类型
 *
 *  @return 对象数组
 */
- (NSArray *)dictionaryArrayToBeanArray:(NSArray *)dictionaryArray cls:(Class)cls;

//#pragma mark - JSONModel Parse methods
//
///**
// *  JSONModel字典数组转化为模型对象数组 (连带级联)
// *
// *  @param array JSONModel字典数组
// *  @param cls   模型对象类型
// *
// *  @return 模型对象数组
// */
//- (NSArray *)JSONModelDictionaryArrayToBeanArray:(NSArray *)array cls:(Class)cls;
///**
// *  JSON字符串转化为模型对象数组 (连带级联)
// *
// *  @param string JSON字符串
// *  @param cls    模型对象类型
// *
// *  @return 模型对象数组
// */
//- (NSArray *)JSONModelStringToBeanArray:(NSString *)string cls:(Class)cls;
//
///**
// *  字典转化为模型对象 (连带级联)
// *
// *  @param dictionary 字典
// *  @param cls        模型对象类型
// *
// *  @return 模型对象
// */
//- (id)JSONModelDictionaryToBean:(NSDictionary *)dictionary cls:(Class)cls;
//
///**
// *  JSON字符串转化为模型对象 (连带级联)
// *
// *  @param string JSON字符串
// *  @param cls    模型对象类型
// *
// *  @return 模型对象
// */
//- (id)JSONModelStringToBean:(NSString *)string cls:(Class)cls;

@end
