//
//  ios_test_unit.h
//  15个测试宏，模仿ruby test::unit写的，简明有代码提示
//
//  Created by sang alfred on 3/6/13.
//  Copyright (c) 2013 no320.com. All rights reserved.
//

/*"A test case defines the fixture to run multiple tests. To define a test case:
 
 1) create a subclass of SenTestCase
 
 2) implement test methods
 
 3) optionally define instance variables that store the state of the fixture
 
 4) optionally initialize the fixture state by overriding setUp
 
 5) optionally clean-up after a test by overriding tearDown.
 
 
 Test methods with no parameters, returning no value, and prefixed with 'test', such as:
 !{
 - (void) testSomething;
 }
 
 are automatically recognized as test cases by the SenTestingKit framework. Each SenTestCase subclass' defaultTestSuite is a SenTestSuite which includes theses tests.
 
 Test methods implementations usually contains assertions that must be verified for the test to pass: the STAssertTrue() macro defined below. Here is an example:
 
 !{
 @interface MathTest : SenTestCase
 {
 float f1;
 float f2;
 }
 - (void) testAddition;
 @end
 
 
 @implementation MathTest
 - (void) setUp
 {
 f1 = 2.0;
 f2 = 3.0;
 }
 
 - (void) testAddition
 {
 STAssertTrue (f1 + f2 == 5.0, @"%f + %f should equal 5.0", f1, f2);
 }
 @end
 }
 
 "*/

#undef assert_nil
#undef assert_true
#undef assert_false
#undef assert_equal_objects
#undef assert_equals
#undef assert_equals_with_accuracy
#undef assert_throws
#undef assert_throws_specific
#undef assert_throws_specific_named
#undef assert_no_throw
#undef assert_no_throw_specific
#undef assert_no_throw_specific_named
#undef assert_fail
#undef assert_true_no_throw
#undef assert_false_no_throw



//#define STAssertNotNil(a1, description, ...)
#define assert_nil(a1, description, ...)  STAssertNil(a1, description,  ##__VA_ARGS__)

//#define STAssertTrue(expression, description, ...)
#define assert_true(expression, description, ...)  STAssertTrue(expression, description,  ##__VA_ARGS__) 

//#define STAssertFalse(expression, description, ...)
#define assert_false(expression, description, ...)  STAssertFalse(expression, description,  ##__VA_ARGS__)

//#define STAssertEqualObjects(a1, a2, description, ...)
#define assert_equal_objects(a1, a2, description, ...)  STAssertEqualObjects(a1, a2, description,  ##__VA_ARGS__)

//#define STAssertEquals(a1, a2, description, ...)
#define assert_equals(a1, a2, description, ...)  STAssertEquals(a1, a2, description,  ##__VA_ARGS__)

//#define STAssertEqualsWithAccuracy(left, right, accuracy, description, ...)
#define assert_equals_with_accuracy(left, right, accuracy, description, ...)  STAssertEqualsWithAccuracy(left, right, accuracy, description,  ##__VA_ARGS__)

//#define STAssertThrows(expression, description, ...)
#define assert_throws(expression, description, ...)  STAssertThrows(expression, description,  ##__VA_ARGS__)

//#define STAssertThrowsSpecific(expression, specificException, description, ...)
#define assert_throws_specific(expression, specificException, description, ...)  STAssertThrowsSpecific(expression, specificException, description,  ##__VA_ARGS__)

//#define STAssertThrowsSpecificNamed(expr, specificException, aName, description, ...)
#define assert_throws_specific_named(expr, specificException, aName, description, ...)  STAssertThrowsSpecificNamed(expr, specificException, aName, description,  ##__VA_ARGS__)

//#define STAssertNoThrow(expression, description, ...)
#define assert_no_throw(expression, description, ...)  STAssertNoThrow(expression, description,  ##__VA_ARGS__)

//#define STAssertNoThrowSpecific(expression, specificException, description, ...)
#define assert_no_throw_specific(expression, description, ...)  STAssertNoThrowSpecific(expression, description,  ##__VA_ARGS__)

//#define STAssertNoThrowSpecificNamed(expr, specificException, aName, description, ...)
#define assert_no_throw_specific_named(expr, specificException, aName, description, ...)  STAssertNoThrowSpecificNamed(expr, specificException, aName, description,  ##__VA_ARGS__)

//#define STFail(description, ...)
#define assert_fail(description, ...)  STFail(description,  ##__VA_ARGS__)

//#define STAssertTrueNoThrow(expression, description, ...)
#define assert_true_no_throw(expression, description, ...)  STAssertTrueNoThrow(expression, description,  ##__VA_ARGS__)

//#define STAssertFalseNoThrow(expression, description, ...)
#define assert_false_no_throw(expression, description, ...)  STAssertFalseNoThrow(expression, description,  ##__VA_ARGS__)