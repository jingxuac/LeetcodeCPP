//
//  Solutions.cpp
//  Leetcode
//
//  Created by CaoJingxuan on 15/10/24.
//
//

#include "Solutions.hpp"

vector<int> Solution1::twoSum(vector<int>& nums, int target){
    map<int,int> myHashMap;
    int first,second;
    first = second = 0;
    for(int i=0;i<nums.size();i++){
        if(myHashMap.find(nums[i])!=myHashMap.end()){
            first = myHashMap[nums[i]];
            second = i+1;
            break;
        }
        myHashMap[target - nums[i]] = i+1;
    }
    if(first>second){
        int tmp = first;
        first = second;
        second = tmp;
    }
    vector<int> sums;
    sums.push_back(first);
    sums.push_back(second);
    return sums;
}

string Solution67::addBinary(string a, string b){
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

