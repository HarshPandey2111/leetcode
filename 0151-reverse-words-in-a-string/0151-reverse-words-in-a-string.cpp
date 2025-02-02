class Solution {
private:
    void reverseString(string &s, int start, int end) {
        while (start < end) {
            swap(s[start], s[end]);
            start++, end--;
        }
    }

public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string> words;
        int i = 0;
        
        while (i < n) {
            while (i < n && s[i] == ' ') {
                i++; 
            }
            if (i >= n) {
                break;
            }
            int start = i;
            while (i < n && s[i] != ' ') {
                i++; // Move to the end of the word
            }
            int end = i - 1;
            
            words.push_back(s.substr(start, end - start + 1));
        }
        
        string ans = "";
        for (int i = words.size() - 1; i >= 0; i--) {
            ans += words[i];
            if (i != 0) ans.push_back(' ');
        }
        
        return ans;
    }
};