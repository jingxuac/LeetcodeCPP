//
//  Solutions.cpp
//  Leetcode
//
//  Created by CaoJingxuan on 15/10/24.
//
//

#include "Solutions.hpp"

string Solution67::addBinary(string a, string b)
{
    string longerString,shorterString;
    longerString = a.length()>b.length()?a:b;
    shorterString = a.length()>b.length()?b:a;
    int digitA=0;
    int digitB=0;
    int pass = 0;
    string outputString = "";
    for(int i=0;i<longerString.length();i++){
        digitA = longerString[longerString.length() - i - 1] - '0';
        if (i<shorterString.length()) {
            digitB = shorterString[shorterString.length() -i -1] - '0';
        }
        string outputChar;
        int outputInt =digitA + digitB +pass;
        if (outputInt == 3) {
            outputChar = "1";
            pass = 1;
        }else if (outputInt==2){
            outputChar = "0";
            pass = 1;
        }else if (outputInt==1){
            outputChar = "1";
            pass = 0;
        }else if (outputInt==0){
            outputChar = "0";
            pass = 0;
        }
        outputString.insert(0, outputChar);
        digitA=0;
        digitB=0;
    }
    if(pass!=0){
        outputString.insert(0, "1");
    }
    
    
    return outputString;
}