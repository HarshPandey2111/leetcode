
class Solution {
public:
    
    int minChanges(string str) {
        int changesNeeded = 0; 
        int length = str.size(); 

 
        for (int i = 1; i < length; i += 2) {
          
            changesNeeded += (str[i] != str[i - 1]);
        }

        return changesNeeded;
    }
};
