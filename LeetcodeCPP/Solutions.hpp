//
//  Solutions.hpp
//  Leetcode
//
//  Created by CaoJingxuan on 15/10/24.
//
//

#include "AllHeaders.h"



class Solution1 {
public:
    static vector<int> twoSum(vector<int>& nums, int target);
};

class Solution2 {
public:
    struct ListNode {
             int val;
             ListNode *next;
             ListNode(int x) : val(x), next(NULL) {}
         };
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

class Solution3 {
public:
    static int lengthOfLongestSubstring(string s);
};

class Solution4 {
public:
    static double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
};


class Solution67 {
public:
    static string addBinary(string a, string b);
};

class Solution68 {
public:
    static vector<string> fullJustify(vector<string>& words, int maxWidth);
};