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

vector<string> Solution68::fullJustify(vector<string>& words, int maxWidth){
    if (words.size()==0) {
        string output = "";
        for (int i=0; i<maxWidth; i++) {
            output+=" ";
        }
        vector<string> out;
        out.push_back(output);
        return out;
    }
    
    vector<string> currentLineWords;
    int currentLineLengthWordsAndSpaces=0;
    vector<string> output;
    for (vector<string>::iterator iter = words.begin(); iter!=words.end(); iter++) {
        string currentWord = *iter;
        if (currentLineLengthWordsAndSpaces+currentWord.length()+1>maxWidth&&currentLineWords.size()!=0) {
            //Goto Another Line
            string currentLineOutput = *currentLineWords.begin();
            if (currentLineWords.size()>1) {
                float spacesToAdd = maxWidth - currentLineLengthWordsAndSpaces;
                float spacesCount = (int)currentLineWords.size()-1;
                for (vector<string>::iterator lineIter = currentLineWords.begin()+1;lineIter!=currentLineWords.end(); lineIter++) {
                    int spacesAfterThis = spacesToAdd/spacesCount;
                    float spacesAfterThisF =spacesToAdd/spacesCount;
                    if (spacesAfterThisF-spacesAfterThis>0) {
                        spacesAfterThis++;
                    }
                    for (int i=0; i<spacesAfterThis; i++) {
                        currentLineOutput+=" ";
                        spacesToAdd--;
                    }
                    spacesCount--;
                    currentLineOutput+=*lineIter;
                }
            }
            int numSpacesLeft = maxWidth - (int)currentLineOutput.length();
            for (int i=0; i<numSpacesLeft; i++) {
                currentLineOutput+=" ";
            }
            output.push_back(currentLineOutput);
            currentLineWords.clear();
            currentLineLengthWordsAndSpaces = 0;
        }
        //Add This Word
        if (currentLineWords.size()==0) {
            currentLineLengthWordsAndSpaces+=currentWord.length();
            currentLineWords.push_back(currentWord);
        }else{
            currentLineLengthWordsAndSpaces+=currentWord.length()+1;
            currentLineWords.push_back(" "+currentWord);
        }
    }
    if(currentLineWords.size()!=0){
        string currentLineOutput = *currentLineWords.begin();
        if (currentLineWords.size()>1) {
            for (vector<string>::iterator lineIter = currentLineWords.begin()+1;lineIter!=currentLineWords.end(); lineIter++) {
                currentLineOutput+=*lineIter;
            }
        }
        int numSpacesLeft = maxWidth - (int)currentLineOutput.length();
        for (int i=0; i<numSpacesLeft; i++) {
            currentLineOutput+=" ";
        }
        output.push_back(currentLineOutput);
        currentLineWords.clear();
        currentLineLengthWordsAndSpaces = 0;
    }
    return output;
}
