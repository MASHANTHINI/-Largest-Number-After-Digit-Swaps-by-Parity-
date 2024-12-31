class Solution {
public:
    int largestInteger(int num) {
        vector<int> odd, even;
        string s = to_string(num);
        for (char c : s) {
            int digit = c - '0';
            if (digit % 2 == 0) {
                even.push_back(digit);
            } else {
                odd.push_back(digit);
            }
        }

        sort(odd.rbegin(), odd.rend());
        sort(even.rbegin(), even.rend());
        string result = "";
        int oddIndex = 0, evenIndex = 0;
        for (char c : s) {
            int digit = c - '0';
            if (digit % 2 == 0) {
                result += (even[evenIndex++] + '0');
            } else {
                result += (odd[oddIndex++] + '0');
            }
        }

        return stoi(result);
    }
};
