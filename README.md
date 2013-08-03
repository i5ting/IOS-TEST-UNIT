
## about ios_test_unit

	//
	//  ios_test_unit.h
	//  15个测试宏，模仿ruby test::unit写的，简明有代码提示
	//
	//  Created by sang alfred on 3/6/13.
	//  Copyright (c) 2013 no320.com. All rights reserved.
	//

it depends on CoreGraphics.framework
## usage：

	git submodule add  https://github.com/i5ting/IOS-TEST-UNIT.git gwcl/vendor/ios-test-unit


## sentestcase usage
A test case defines the fixture to run multiple tests. To define a test case:
 
 1) create a subclass of SenTestCase
 
 2) implement test methods
 
 3) optionally define instance variables that store the state of the fixture
 
 4) optionally initialize the fixture state by overriding setUp
 
 5) optionally clean-up after a test by overriding tearDown.
 
 
 Test methods with no parameters, returning no value, and prefixed with 'test', such as:

 	- (void) testSomething;

 
 are automatically recognized as test cases by the SenTestingKit framework. Each SenTestCase subclass' defaultTestSuite is a SenTestSuite which includes theses tests.
 
 Test methods implementations usually contains assertions that must be verified for the test to pass: the STAssertTrue() macro defined below. Here is an example:
 

	 
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
	 
 
 
## History

v1.0.1 增加ghunit的宏，目前未测试
v1.0

## Contributors

alfred.sang


## License

If you are using ios-test-unit in your project, I'd love to hear about it.  Let me 
know at shiren1118@126.com.

In short, this is the MIT License.

Copyright (c) 2013 no320.com Inc.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
