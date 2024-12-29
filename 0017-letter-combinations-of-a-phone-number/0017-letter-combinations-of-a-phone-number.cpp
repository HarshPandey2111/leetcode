class Solution {
public:
    std::vector<std::string> letterCombinations(std::string digits) {
        if (digits.empty()) return {};
        std::vector<std::string> digitToChars = {
            "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        std::vector<std::string> combinations = {""};
        for (char digit : digits) {
            std::string chars = digitToChars[digit - '2'];
            std::vector<std::string> tempCombinations;

            for (std::string &combination : combinations) {
                for (char ch : chars) {
                    tempCombinations.push_back(combination + ch);
                }
            }
            combinations = std::move(tempCombinations);
        }
        return combinations;
    }
};
