class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) return false;
        
        bool hasVowel = false, hasConsonant = false;
        
        // Set of vowels for easy checking
        string vowels = "aeiouAEIOU";
        
        for (char c : word) {
            // Check if the character is a valid alphanumeric character
            if (!isalnum(c)) {
                return false;
            }
            
            // Check if the character is a vowel
            if (vowels.find(c) != string::npos) {
                hasVowel = true;
            }
            // Check if the character is a consonant
            else if (isalpha(c)) {
                hasConsonant = true;
            }
        }
        
        // The word is valid if it has both a vowel and a consonant
        return hasVowel && hasConsonant;
        
    }
};