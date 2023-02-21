// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 

// Constraints:

// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters.

#include<iostream>
#include<vector>
#include<string>
#include<string.h>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ans=strs[0].length();
        int n=strs.size();
        for(int i=1;i<n;i++){
        int j=0;
        while(j<strs[i].length()&& strs[0][j]==strs[i][j])
        j++;
        ans=min(ans,j);
        }
        cout<<strs[0].substr(0,ans);
        return strs[0].substr(0,ans);
        
    }
};

// optimal solution 
class Solution2 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());

        string first=strs[0];
        string last=strs[strs.size()-1];
        string ans;
        for(int i=0;i<first.size();i++){
            if(first[i]==last[i]){
                ans+=first[i];
            }else{
                break;
            }
        }
        cout << ans;
        return ans;

    }
    
};

int main()
{
    vector<string> str={"dog","dotted","door"};
    Solution2 s;
    s.longestCommonPrefix(str);
}