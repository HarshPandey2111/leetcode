class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int counter = 0;
        int n = s.size();

        for(int i = 0;i<n;i++){
            char c = s[i];
            if (c == '('){
            if( counter > 0){
                 // if depth > 0, it's not the outermost '(', so we keep it
                result += c;
            }
            counter ++;
            }
            else{
                counter --;

                if(counter > 0){
                 // if depth still > 0, it's not the outermost ')', so keep it
                    result += c;
                }

            }

        }
        return result; 
        
    }
};