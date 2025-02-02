class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        }
        
        // Recursively get the previous sequence
        string prev = countAndSay(n - 1);
        int len = prev.size();
        string res;
        
        // We'll track consecutive characters and their counts
        int count = 1; 
        for (int i = 1; i < len; i++) {
            if (prev[i] == prev[i - 1]) {
                // If the current character matches the previous one, increment count
                count++;
            } else {
                // If different, record the count and the character
                res.push_back('0' + count); 
                res.push_back(prev[i - 1]);
                count = 1;  // reset count for the new character
            }
        }
        
        // Don't forget to record the last run
        res.push_back('0' + count);
        res.push_back(prev[len - 1]);
        
        return res;
    }
};
