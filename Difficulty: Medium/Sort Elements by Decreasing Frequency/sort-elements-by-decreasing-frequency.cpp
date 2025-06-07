class Solution {
public:
    // Function to sort the array according to frequency of elements
    vector<int> sortByFreq(vector<int>& arr) {
        unordered_map<int, int> freq; // Element -> Frequency

        int n = arr.size();
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++; // Frequency count karo
        }

        // Vector of pairs: {element, frequency}
        vector<pair<int, int>> elements;
        for (int i = 0; i < n; i++) {
            elements.push_back({arr[i], freq[arr[i]]});
        }

        // Custom sort:
        // 1) Higher frequency first
        // 2) If frequency same, smaller number first
        sort(elements.begin(), elements.end(), [](pair<int, int> a, pair<int, int> b) {
            if (a.second != b.second)
                return a.second > b.second;
            return a.first < b.first;
        });

        // Final answer banayein
        vector<int> result;
        for (auto& p : elements) {
            result.push_back(p.first);
        }

        return result;
    }
};
