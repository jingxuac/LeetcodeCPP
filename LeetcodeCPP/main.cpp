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
    testCasesMap["TestCase1"] = &TestCase1::RunTestCase;
    testCasesMap["TestCase2"] = &TestCase2::RunTestCase;
    testCasesMap["TestCase3"] = &TestCase3::RunTestCase;
    testCasesMap["TestCase4"] = &TestCase4::RunTestCase;
    testCasesMap["TestCase5"] = &TestCase5::RunTestCase;
    testCasesMap["TestCase6"] = &TestCase6::RunTestCase;
    testCasesMap["TestCase7"] = &TestCase7::RunTestCase;
    testCasesMap["TestCase8"] = &TestCase8::RunTestCase;
    testCasesMap["TestCase9"] = &TestCase9::RunTestCase;
    testCasesMap["TestCase10"] = &TestCase10::RunTestCase;
    testCasesMap["TestCase11"] = &TestCase11::RunTestCase;
    testCasesMap["TestCase12"] = &TestCase12::RunTestCase;
    testCasesMap["TestCase13"] = &TestCase13::RunTestCase;
    testCasesMap["TestCase14"] = &TestCase14::RunTestCase;
    testCasesMap["TestCase15"] = &TestCase15::RunTestCase;
    testCasesMap["TestCase16"] = &TestCase16::RunTestCase;
    testCasesMap["TestCase17"] = &TestCase17::RunTestCase;
    testCasesMap["TestCase18"] = &TestCase18::RunTestCase;
    testCasesMap["TestCase19"] = &TestCase19::RunTestCase;
    testCasesMap["TestCase20"] = &TestCase20::RunTestCase;
    testCasesMap["TestCase21"] = &TestCase21::RunTestCase;
    testCasesMap["TestCase22"] = &TestCase22::RunTestCase;
    testCasesMap["TestCase23"] = &TestCase23::RunTestCase;
    testCasesMap["TestCase24"] = &TestCase24::RunTestCase;
    testCasesMap["TestCase25"] = &TestCase25::RunTestCase;
    testCasesMap["TestCase26"] = &TestCase26::RunTestCase;
    testCasesMap["TestCase27"] = &TestCase27::RunTestCase;
    testCasesMap["TestCase28"] = &TestCase28::RunTestCase;
    testCasesMap["TestCase29"] = &TestCase29::RunTestCase;
    testCasesMap["TestCase30"] = &TestCase30::RunTestCase;
    testCasesMap["TestCase31"] = &TestCase31::RunTestCase;
    testCasesMap["TestCase32"] = &TestCase32::RunTestCase;
    testCasesMap["TestCase33"] = &TestCase33::RunTestCase;
    testCasesMap["TestCase34"] = &TestCase34::RunTestCase;
    testCasesMap["TestCase35"] = &TestCase35::RunTestCase;
    testCasesMap["TestCase36"] = &TestCase36::RunTestCase;
    testCasesMap["TestCase37"] = &TestCase37::RunTestCase;
    testCasesMap["TestCase38"] = &TestCase38::RunTestCase;
    testCasesMap["TestCase39"] = &TestCase39::RunTestCase;
    testCasesMap["TestCase40"] = &TestCase40::RunTestCase;
    
    
    testCasesMap["TestCase67"] = &TestCase67::RunTestCase;
	testCasesMap["TestCase68"] = &TestCase68::RunTestCase;
    string inputStr = "a";
    while (inputStr.compare("q") != 0) {
        cout<<"\nInput Problem Index To Run Test Case, Input 'Q' To Exit.\n";
        cin>>inputStr;
        if (inputStr.compare("q") == 0) {
            return 0;
        }
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
