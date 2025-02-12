class Solution {
public:
    
    int characterReplacement(string s, int k) {
        
        /* Variable to store the maximum
        length of substring found*/
        int maxLen = 0;
        
        /* Variable to track the maximum frequency
        of any single character in the current window*/
        int maxFreq = 0;
        
        //Pointers to maintain the current window [l, r]
        int l = 0, r = 0; 
        
        // Hash array to count frequencies of characters
        int hash[26] = {0};  

        // Iterate through each starting point of substring
        while (r < s.size()) {

            /* Update frequency of current 
            character in the hash array*/
            hash[s[r] - 'A']++;
            
            // Update max frequency encountered
            maxFreq = max(maxFreq, hash[s[r] - 'A']); 
            
            // Check if current window is invalid 
            if ((r - l + 1) - maxFreq > k) {
                
                /* Slide the left pointer to
                make the window valid again*/
                hash[s[l] - 'A']--;  
                
                // Move left pointer forward
                l++; 
                
                
            }
            
            /* Update maxLen with the length 
            of the current valid substring*/
            maxLen = max(maxLen, r - l + 1);
            
            // Move right pointer forward to expand the window
            r++;
        }

        /* Return the maximum length of substring
        with at most k characters replaced*/
        return maxLen;
    }
};