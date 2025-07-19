class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            digits[i] += 1;
            return digits;
        }
        digits[i] = 0; // Carry over
    }

    // If we're here, all digits were 9 and became 0 (e.g., 999 -> 000)
    // We need to add a leading 1
    digits.insert(digits.begin(), 1);
    return digits;
    }
};