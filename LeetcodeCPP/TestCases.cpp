//
//  TestCases.cpp
//  Leetcode
//
//  Created by CaoJingxuan on 15/10/24.
//
//

#include "TestCases.hpp"

void TestCase1::RunTestCase(){
    vector<int> inputA;
    inputA.push_back(2);
    inputA.push_back(7);
    inputA.push_back(4);
    
    int target = 9;
    
    cout << "\nInput:\n";
    for (vector<int>::iterator iter = inputA.begin(); iter != inputA.end(); ++iter)
        cout << *iter << endl;
    cout<<"\n"<<target<<"\n";
    cout << "\nOutput:\n";
    vector<int>output = Solution1::twoSum(inputA, target);
    for (vector<int>::iterator iter = output.begin(); iter != output.end(); ++iter)
        cout << *iter << endl;
}

void TestCase2::RunTestCase(){
    Solution2::ListNode * ln;
    
    Solution2::ListNode *ln1=new Solution2::ListNode(1);
    Solution2::ListNode *ln2=new Solution2::ListNode(2);
    Solution2::ListNode *ln3=new Solution2::ListNode(3);
    Solution2::ListNode *ln4=new Solution2::ListNode(4);
    Solution2::ListNode *ln5=new Solution2::ListNode(5);
    Solution2::ListNode *ln6=new Solution2::ListNode(6);
    ln1->next = ln2;
    ln2->next = ln3;
    ln4->next = ln5;
    ln5->next = ln6;
    
    ln = ln1;
    cout << "\nInputA:\n";
    while (ln!=NULL) {
        cout<<ln->val;
        ln = ln->next;
    }
    cout << "\nInputB:\n";
    ln = ln4;
    while (ln!=NULL) {
        cout<<ln->val;
        ln = ln->next;
    }
    cout << "\nOutput:\n";
    ln = Solution2::addTwoNumbers(ln1, ln4);
    while (ln!=NULL) {
        cout<<ln->val;
        ln = ln->next;
    }
    
    
}

void TestCase3::RunTestCase(){
    string input = "asdkjbczxkckjahd";
    cout << "\nInput:\n"<<input;
    cout << "\nOutput:\n"<<Solution3::lengthOfLongestSubstring(input)<<"\n";
}

void TestCase4::RunTestCase(){
    vector<int>inputA;
    inputA.push_back(2);
    inputA.push_back(3);
    inputA.push_back(4);
    inputA.push_back(5);
    inputA.push_back(6);
    
    vector<int>inputB;
    inputB.push_back(7);
    inputB.push_back(8);
    inputB.push_back(9);
    inputB.push_back(10);
    
    cout << "\nInpuA:\n";
    for (vector<int>::iterator iter = inputA.begin(); iter != inputA.end(); ++iter)
        cout << *iter << endl;
    cout << "\nInpuB:\n";
    for (vector<int>::iterator iter = inputB.begin(); iter != inputB.end(); ++iter)
        cout << *iter << endl;
    cout<< "\nOutput:"<<Solution4::findMedianSortedArrays(inputA, inputB);
}

void TestCase5::RunTestCase(){
}

void TestCase6::RunTestCase(){
}

void TestCase7::RunTestCase(){
}

void TestCase8::RunTestCase(){
}

void TestCase9::RunTestCase(){
}

void TestCase10::RunTestCase(){
}

void TestCase11::RunTestCase(){
}

void TestCase12::RunTestCase(){
}

void TestCase13::RunTestCase(){
}

void TestCase14::RunTestCase(){
}

void TestCase15::RunTestCase(){
}

void TestCase16::RunTestCase(){
}

void TestCase17::RunTestCase(){
}

void TestCase18::RunTestCase(){
}

void TestCase19::RunTestCase(){
}

void TestCase20::RunTestCase(){
}

void TestCase21::RunTestCase(){
}

void TestCase22::RunTestCase(){
}

void TestCase23::RunTestCase(){
}

void TestCase24::RunTestCase(){
}

void TestCase25::RunTestCase(){
}

void TestCase26::RunTestCase(){
}

void TestCase27::RunTestCase(){
}

void TestCase28::RunTestCase(){
}

void TestCase29::RunTestCase(){
}

void TestCase30::RunTestCase(){
}

void TestCase31::RunTestCase(){
}

void TestCase32::RunTestCase(){
}

void TestCase33::RunTestCase(){
}

void TestCase34::RunTestCase(){
}

void TestCase35::RunTestCase(){
}

void TestCase36::RunTestCase(){
}

void TestCase37::RunTestCase(){
}

void TestCase38::RunTestCase(){
}

void TestCase39::RunTestCase(){
}

void TestCase40::RunTestCase(){
}

void TestCase67::RunTestCase(){
    string a = "111";
    string b = "1000000";
    cout<<"\nInput:"<<a<<","<<b<<"\nOutput:"<<Solution67::addBinary(a,b)<<"\n";
    
    string c = "100";
    string d = "1000011";
    cout<<"\nInput:"<<c<<","<<d<<"\nOutput:"<<Solution67::addBinary(c,d)<<"\n";
    
    string e = "1";
    string f = "1";
    cout<<"\nInput:"<<e<<","<<f<<"\nOutput:"<<Solution67::addBinary(e,f)<<"\n";
}

void TestCase68::RunTestCase() {
	vector<string> input = { "This", "is", "an", "example", "of", "text", "justification" };
	vector<string> output = Solution68::fullJustify(input, 16);
	cout << "\nInput:\n";
	for (vector<string>::iterator iter = input.begin(); iter != input.end(); ++iter)
		cout << *iter << endl;
	cout << "\nOutput:\n";
	for (vector<string>::iterator iter = output.begin(); iter != output.end(); ++iter)
		cout << *iter << endl;
    
    vector<string> input1 = { "" };
    vector<string> output1 = Solution68::fullJustify(input1, 0);
    cout << "\nInput:\n";
    for (vector<string>::iterator iter = input1.begin(); iter != input1.end(); ++iter)
        cout << *iter << endl;
    cout << "\nOutput:\n";
    for (vector<string>::iterator iter = output1.begin(); iter != output1.end(); ++iter)
        cout << *iter << endl;
}

