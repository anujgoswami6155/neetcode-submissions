class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i = 0;
        int j = n - 1;

        while(i < j) {
            if(isalnum(s[i]) && isalnum(s[j])) {
                char front = tolower(s[i]);
                char back = tolower(s[j]);

                if(front != back)
                    return false;
                i++;
                j--;
            }
            else if(isalnum(s[i])) {
                j--;
            }
            else {
                i++;
            }
        }

        return true;
    }
};
