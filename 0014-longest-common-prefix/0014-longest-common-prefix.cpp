class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return  "";

        sort(strs.begin(),strs.end());

        string first = strs[0];
        string Last = strs[strs.size() -1];

        int i = 0;
        while (i<first.size() && i< Last.size() && first[i] == Last[i]){
            i++;
        }
        return first.substr(0,i);


        
    }
};