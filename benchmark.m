//
//  ios_test_unit.h
//  15个测试宏，模仿ruby test::unit写的，简明有代码提示
//
//  Created by sang alfred on 3/6/13.
//  Copyright (c) 2013 no320.com. All rights reserved.
//

#import <mach/mach_time.h>

CGFloat Benchmarking (void (^block)(void)) {
    mach_timebase_info_data_t info;
    if (mach_timebase_info(&info) != KERN_SUCCESS) return -1.0;
    
    uint64_t start = mach_absolute_time ();
    block ();
    uint64_t end = mach_absolute_time ();
    uint64_t elapsed = end - start;
    
    uint64_t nanos = elapsed * info.numer / info.denom;
    return (CGFloat)nanos / NSEC_PER_SEC;
    
} // Benchmarking