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

//配置项
#define USE_OC_UNIT_MACRO 0
#define USE_GH_UNIT_MACRO 1



//for GHUnit
#ifdef USE_GH_UNIT_MACRO

    #undef assert_no_err
    #undef assert_err
    #undef assert_not_null
    #undef assert_null
    #undef assert_not_equals
    #undef assert_not_equal_objects
    #undef assert_operation
    #undef assert_greater_than
    #undef assert_greater_than_or_equal
    #undef assert_less_than
    #undef assert_less_than_or_equal
    #undef assert_equal_strings
    #undef assert_not_equal_strings
    #undef assert_equal_c_strings
    #undef assert_not_equal_c_strings
    #undef assert_equal_objects
    #undef assert_equals
    #undef assert_absolute_difference
    #undef assert_equals_with_accuracy
    #undef assert_fail
    #undef assert_nil
    #undef assert_not_nil
    #undef assert_true
    #undef assert_true_no_throw
    #undef assert_false
    #undef assert_false_no_throw
    #undef assert_throws
    #undef assert_throws_specific
    #undef assert_throws_specific_named
    #undef assert_no_throws
    #undef assert_no_throws_specific
    #undef assert_no_throws_specific_named


    // GHAssertNoErr(a1, description, ...)
    #define assert_no_err(a1, description, ...)  GHAssertNoErr(a1, description,  ##__VA_ARGS__)
    // GHAssertErr(a1, a2, description, ...)
    #define assert_err(a1, a2, description, ...)  GHAssertErr(a1, a2, description,  ##__VA_ARGS__)
    // GHAssertNotNULL(a1, description, ...)
    #define assert_not_null(a1, description, ...)  GHAssertNotNULL(a1, description,  ##__VA_ARGS__)
    // GHAssertNULL(a1, description, ...)
    #define assert_null(a1, description, ...)  GHAssertNULL(a1, description,  ##__VA_ARGS__)

    // GHAssertNotEquals(a1, a2, description, ...)
    #define assert_not_equals(a1, a2, description, ...)  GHAssertNotEquals(a1, a2, description,  ##__VA_ARGS__)
    // GHAssertNotEqualObjects(a1, a2, desc, ...)
    #define assert_not_equal_objects(a1, a2, desc, ...)  GHAssertNotEqualObjects(a1, a2, desc,  ##__VA_ARGS__)
    // GHAssertOperation(a1, a2, op, description, ...)
    #define assert_operation(a1, a2, op, description, ...)  GHAssertOperation(a1, a2, op, description,  ##__VA_ARGS__)
    // GHAssertGreaterThan(a1, a2, description, ...)
    #define assert_greater_than(a1, a2, description, ...)  GHAssertGreaterThan(a1, a2, description,  ##__VA_ARGS__)
    // GHAssertGreaterThanOrEqual(a1, a2, description, ...)
    #define assert_greater_than_or_equal(a1, a2, description, ...)  GHAssertGreaterThanOrEqual(a1, a2, description,  ##__VA_ARGS__)
    // GHAssertLessThan(a1, a2, description, ...)
    #define assert_less_than(a1, a2, description, ...)  GHAssertLessThan(a1, a2, description,  ##__VA_ARGS__)
    // GHAssertLessThanOrEqual(a1, a2, description, ...)
    #define assert_less_than_or_equal(a1, a2, description, ...)  GHAssertLessThanOrEqual(a1, a2, description,  ##__VA_ARGS__)
    // GHAssertEqualStrings(a1, a2, description, ...)
    #define assert_equal_strings(a1, a2, description, ...)  GHAssertEqualStrings(a1, a2, description,  ##__VA_ARGS__)
    // GHAssertNotEqualStrings(a1, a2, description, ...)
    #define assert_not_equal_strings(a1, a2, description, ...)  GHAssertNotEqualStrings(a1, a2, description,  ##__VA_ARGS__)
    // GHAssertEqualCStrings(a1, a2, description, ...)
    #define assert_equal_c_strings(a1, a2, description, ...)  GHAssertEqualCStrings(a1, a2, description,  ##__VA_ARGS__)
    // GHAssertNotEqualCStrings(a1, a2, description, ...)
    #define assert_not_equal_c_strings(a1, a2, description, ...)  GHAssertNotEqualCStrings(a1, a2, description,  ##__VA_ARGS__)
    // GHAssertEqualObjects(a1, a2, description, ...)
    #define assert_equal_objects(a1, a2, description, ...)  GHAssertEqualObjects(a1, a2, description,  ##__VA_ARGS__)
    // GHAssertEquals(a1, a2, description, ...)
    #define assert_equals(a1, a2, description, ...)  GHAssertEquals(a1, a2, description,  ##__VA_ARGS__)

    // GHAbsoluteDifference(left,right) (MAX(left,right)-MIN(left,right))
    #define assert_absolute_difference(left,right)  GHAbsoluteDifference(left,right)
    // GHAssertEqualsWithAccuracy(a1, a2, accuracy, description, ...)
    #define assert_equals_with_accuracy(a1, a2, accuracy, description, ...)  GHAssertEqualsWithAccuracy(a1, a2, accuracy, description,  ##__VA_ARGS__)
    // GHFail(description, ...)
    #define assert_fail(description, ...)  GHFail(description,  ##__VA_ARGS__)

    // GHAssertNil(a1, description, ...)
    #define assert_nil(a1, description, ...)  GHAssertNil(a1, description,  ##__VA_ARGS__)
    // GHAssertNotNil(a1, description, ...)
    #define assert_not_nil(a1, description, ...)  GHAssertNotNil(a1, description,  ##__VA_ARGS__)
    // GHAssertTrue(expr, description, ...)
    #define assert_true(expr, description, ...)  GHAssertTrue(expr, description,  ##__VA_ARGS__)
    // GHAssertTrueNoThrow(expr, description, ...)
    #define assert_true_no_throw(expr, description, ...)  GHAssertTrueNoThrow(expr, description,  ##__VA_ARGS__)
    // GHAssertFalse(expr, description, ...)
    #define assert_false(expr, description, ...)  GHAssertFalse(expr, description,  ##__VA_ARGS__)
    // GHAssertFalseNoThrow(expr, description, ...)
    #define assert_false_no_throw(expr, description, ...)  GHAssertFalseNoThrow(expr, description,  ##__VA_ARGS__)
    // GHAssertThrows(expr, description, ...)
    #define assert_throws(expr, description, ...)  GHAssertThrows(expr, description,  ##__VA_ARGS__)

    // GHAssertThrowsSpecific(expr, specificException, description, ...)
    #define assert_throws_specific(expr, specificException, description, ...)  GHAssertThrowsSpecific(expr, specificException, description,  ##__VA_ARGS__)

    // GHAssertThrowsSpecificNamed(expr, specificException, aName, description, ...)
    #define assert_throws_specific_named(expr, specificException, aName, description, ...)  GHAssertThrowsSpecificNamed(expr, specificException, aName, description,  ##__VA_ARGS__)
    // GHAssertNoThrow(expr, description, ...)
    #define assert_no_throws(expr, description, ...)  GHAssertNoThrow(expr, description,  ##__VA_ARGS__)
    // GHAssertNoThrowSpecific(expr, specificException, description, ...)
    #define assert_no_throws_specific(expr, specificException, description, ...)  GHAssertNoThrowSpecific(expr, specificException, description,  ##__VA_ARGS__)
    // GHAssertNoThrowSpecificNamed(expr, specificException, aName, description, ...)
    #define assert_no_throws_specific_named(expr, specificException, aName, description, ...)  GHAssertNoThrowSpecificNamed(expr, specificException, aName, description,  ##__VA_ARGS__)
    //

#endif /*USE_GH_UNIT_MACRO*/


// for OCUnit
#ifdef USE_OC_UNIT_MACRO

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

#endif /* STEnableDeprecatedAssertionMacros */