//
//  main.cpp
//  LeetcodeCPP
//
//  Created by CaoJingxuan on 15/10/24.
//
//


#include "TestCases.hpp"

typedef void(*RunTestCaseFunction)();

int main(int argc, const char * argv[]) {
    // insert code here...
    map<string,RunTestCaseFunction> testCasesMap;
    testCasesMap["TestCase67"] = &TestCase67::RunTestCase;
    
    string inputStr = "a";
    while (inputStr.compare("q") != 0) {
        cout<<"\nInput Problem Index To Run Test Case, Input 'Q' To Exit.\n";
        cin>>inputStr;
        string className = "TestCase" + inputStr;
        RunTestCaseFunction func = testCasesMap[className];
        if (func==NULL) {
            cout<<"\nInput Problem Index Wrong\n";
        }else{
            func();
        }
    }
    return 0;
}
