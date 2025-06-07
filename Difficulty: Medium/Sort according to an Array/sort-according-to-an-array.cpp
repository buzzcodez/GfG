class Solution {
  public:
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) {
        map<int, int> m;
        for (auto i : A1) m[i]++;  // Frequency map of A1

        int pos = 0;

        // Place elements of A2 in order using frequency map
        for (auto j : A2) {
            while (m[j]-- > 0) {
                A1[pos++] = j;
            }
            m.erase(j); // remove handled elements
        }

        // Place remaining elements in sorted order
        for (auto it : m) {
            while (it.second-- > 0) {
                A1[pos++] = it.first;
            }
        }

        return A1;
    }
};
