//question link:- https://leetcode.com/problems/longest-common-subsequence/description/

#include <bits/stdc++.h>

using namespace std;

int longestCommonSubsequence(string &text1, string &text2) {
    
        int n = text1.size(), m = text2.size();

        vector<int> curr(m+1, 0), prev(m+1, 0);

        for(int i=1;i<=n; i++){
            for(int j=1; j<=m; j++){
                if(text1[i-1] == text2[j-1])
                    curr[j] = 1 + prev[j-1];
                else
                    curr[j] = max(prev[j], curr[j-1]);
            }
            prev = curr;
        }

        return prev[m];
  }

int main(){
  string text1 = "abc";
  string text2 = "bcd";
  cout<<longestCommonSubsequence(text1, text2);
}
