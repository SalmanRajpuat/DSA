class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        // Mapping digits to corresponding letters
        vector<string> phoneMap = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> result;
        string current;

        // Backtracking function
        function<void(int)> backtrack = [&](int index) {
            if (index == digits.size()) {
                result.push_back(current);
                return;
            }

            string letters = phoneMap[digits[index] - '0'];
            for (char letter : letters) {
                current.push_back(letter);
                backtrack(index + 1);
                current.pop_back(); // backtrack
            }
        };

        backtrack(0);
        return result;
    }
};
