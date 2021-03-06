//
//  ASEventLog.h
//  Texture
//
//  Copyright (c) 2014-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under the BSD-style license found in the
//  LICENSE file in the /ASDK-Licenses directory of this source tree. An additional
//  grant of patent rights can be found in the PATENTS file in the same directory.
//
//  Modifications to this file made after 4/13/2017 are: Copyright (c) 2017-present,
//  Pinterest, Inc.  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//

#import <Foundation/Foundation.h>
#import <AsyncDisplayKit/ASBaseDefines.h>

#ifndef ASEVENTLOG_CAPACITY
#define ASEVENTLOG_CAPACITY 5
#endif

#ifndef ASEVENTLOG_ENABLE
#define ASEVENTLOG_ENABLE 0
#endif

NS_ASSUME_NONNULL_BEGIN

AS_SUBCLASSING_RESTRICTED
@interface ASEventLog : NSObject

/**
 * Create a new event log.
 *
 * @param anObject The object whose events we are logging. This object is not retained.
 */
- (instancetype)initWithObject:(id)anObject;

- (void)logEventWithBacktrace:(nullable NSArray<NSString *> *)backtrace format:(NSString *)format, ... NS_FORMAT_FUNCTION(2, 3);

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
