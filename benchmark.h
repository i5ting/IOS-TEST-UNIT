//
//  ios_test_unit.h
//  15个测试宏，模仿ruby test::unit写的，简明有代码提示
//
//  Created by sang alfred on 3/6/13.
//  Copyright (c) 2013 no320.com. All rights reserved.
//


CGFloat benchmarking (void (^block)(void));

CGFloat benchmarking_with_message (void (^block)(void),NSString *pmessage) ;

CGFloat benchmarking_with_message_and_execute_times (void (^block)(void),NSString *pmessage,int pexecute_times) ;

CGFloat benchmarking_with_message_and_execute_times_show_detail (void (^block)(void),NSString *pmessage,int pexecute_times) ;