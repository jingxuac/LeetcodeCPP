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

Solution2::ListNode* Solution2::addTwoNumbers(ListNode* l1, ListNode* l2) {
    int initialValue = (l1->val + l2->val)%10;
    int initialCarry = (l1->val + l2->val)/10;
    
    ListNode * outPut = new ListNode(initialValue);
    int carry=initialCarry;
    int value = 0;
    ListNode * newNode = outPut;
    
    l1 = l1->next;
    l2 = l2->next;
    while(l1!=NULL||l2!=NULL){
        int l1n = l1!=NULL?l1->val:0;
        int l2n = l2!=NULL?l2->val:0;
        
        value = (l1n + l2n + carry)%10;
        carry = (l1n + l2n + carry)/10;
        ListNode * temp = new ListNode(value);
        newNode->next = temp;
        newNode = newNode->next;
        if(l1!=NULL){
            l1 = l1->next;
        }
        if(l2!=NULL){
            l2 = l2->next;
        }
    }
    if(carry!=0){
        ListNode * temp = new ListNode(carry);
        newNode->next = temp;
        newNode = newNode->next;
    }
    return outPut;
}

int Solution3::lengthOfLongestSubstring(string s) {
    map<char,int> characterIndexMap;
    int longestSubstringLength = 1;
    int currentSubstringLength = 0;
    int currentSubstringStartLocation = 0;
    if(s.length()==0){
        return 0;
    }
    
    for(int i=0;i<s.length();i++){
        char charAtI = s[i];
        
        map<char,int>::iterator charFinder;
        charFinder = characterIndexMap.find(charAtI);
        if(charFinder==characterIndexMap.end()){
            //Not Found
            characterIndexMap.insert(pair<char,int>(charAtI,i));
            currentSubstringLength++;
        }else{
            //Found
            longestSubstringLength = currentSubstringLength>longestSubstringLength?currentSubstringLength:longestSubstringLength;//UpdateLongestSubstring
            int repeatCharPosition = charFinder->second;//GetRepeatCharPosition
            for(int j=currentSubstringStartLocation;j<=repeatCharPosition;j++){
                characterIndexMap.erase(s[j]);
            }
            characterIndexMap.insert(pair<char,int>(charAtI,i));
            currentSubstringLength = i-repeatCharPosition;
            currentSubstringStartLocation = repeatCharPosition+1;
        }
    }
    longestSubstringLength = currentSubstringLength>longestSubstringLength?currentSubstringLength:longestSubstringLength;
    return longestSubstringLength;
}

double Solution4::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2){
    
    
    return 0;
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
