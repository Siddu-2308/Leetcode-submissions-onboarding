class Solution {
public:
    // Helper function to check if a substring s[l...r] is a palindrome
    bool isPalindrome(string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    /////////////////
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        int count=0;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else if(s[i]!=s[j]){
                return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1);
            }

        }
        return true;

        
    }
};