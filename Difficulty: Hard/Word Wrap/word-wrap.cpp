// User function Template for C++
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solveWordWrap(vector<int>nums, int k) {
        int n = nums.size();
        vector<int> dp(n + 1, 0); // dp[i] = minimum cost to arrange from word i to n-1

        // Pehle se end tak process karo
        for(int i = n - 1; i >= 0; i--) {
            int len = -1; // current line length, starting -1 because no space before first word
            dp[i] = INT_MAX;

            for(int j = i; j < n; j++) {
                len += nums[j] + 1; // add current word length + 1 space

                if(len > k) break; // agar line ka length exceed kare, break karo

                int cost;

                if(j == n - 1) {
                    cost = 0; // last line ka cost 0 hoga
                } else {
                    int extra = k - len;
                    cost = extra * extra + dp[j + 1]; // current line ka cost + aage ke words ka cost
                }

                dp[i] = min(dp[i], cost); // minimum cost store karo
            }
        }
        return dp[0]; // full text ka minimum cost
    }
};
