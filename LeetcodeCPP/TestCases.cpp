//
//  TestCases.cpp
//  Leetcode
//
//  Created by CaoJingxuan on 15/10/24.
//
//

#include "TestCases.hpp"

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