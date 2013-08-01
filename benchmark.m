//
//  ios_test_unit.h
//  15个测试宏，模仿ruby test::unit写的，简明有代码提示
//
//  Created by sang alfred on 3/6/13.
//  Copyright (c) 2013 no320.com. All rights reserved.
//

#import <mach/mach_time.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

CGFloat benchmarking (void (^block)(void))
{
    return benchmarking_with_message(block, @"default message");
}
//
//CGFloat benchmarking_with_message (void (^block)(void),NSString *pmessage){
//    benchmarking_with_message_and_execute_times(block, pmessage, 1);
//}

//CGFloat Benchmarking_with_message_and_execute_times (void (^block)(void),NSString *pmessage,int pexecute_times) ;
/**
 * param 1:code block
 * param 2:message
 * param 3:execute times
 *
 */
CGFloat benchmarking_with_message_and_execute_times (void (^block)(void),NSString *pmessage,int pexecute_times)
{

    int execute_times = pexecute_times;
 
    
    mach_timebase_info_data_t info;
    if (mach_timebase_info(&info) != KERN_SUCCESS) return -1.0;
    
    uint64_t start = mach_absolute_time ();
     
    for (int i=0; i<execute_times;i++) {
        block ();
    }
    
    uint64_t end = mach_absolute_time ();
    uint64_t elapsed = end - start;
    uint64_t nanos = elapsed * info.numer / info.denom;
    
    CGFloat time = (CGFloat)nanos / NSEC_PER_SEC;
    
//    #ifdef DEBUG_MODE
    NSLog(@"[Benchmarking ＃%@＃]: execute %d times and cost time: %f   seconds \n",pmessage,pexecute_times,time);
//    #endif
    
    return time;
} // Benchmarking


/**
 TODO,时间不准
 */
CGFloat benchmarking_with_message_and_execute_times_show_detail (void (^block)(void),NSString *pmessage,int pexecute_times)
{
     NSLog(@"[Benchmarking ＃%@＃]: execute %d times start---------------- \n",pmessage,pexecute_times);
    CGFloat time = 0.0;
     
    for (int i=0; i<pexecute_times;i++) {
        CGFloat single_time= benchmarking_with_message(block, pmessage);
        
        NSLog(@"----------------%d ]:execute finished,and cost time: %f   seconds %f  \n",i,single_time,benchmarking_with_message(block, pmessage));
        
        time += single_time;
    }
     
    
    NSLog(@"[Benchmarking ＃%@＃]: execute %d times end---------------- \n",pmessage,pexecute_times);
    

    NSLog(@"[Benchmarking ＃%@＃]: execute %d times and total cost time: %f   seconds \n",pmessage,pexecute_times,time);
    
    return time;
} // Benchmarking
