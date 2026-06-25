class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0, end = s.size() - 1;
        
        while (st < end) {
            // Skip non-alphanumeric characters
            while (st < end && !isalnum(s[st])) st++;
            while (st < end && !isalnum(s[end])) end--;
            
            // Compare case-insensitively
            if (tolower(s[st]) != tolower(s[end])) return false;
            
            st++;
            end--;
        }
        return true;
    }
};
