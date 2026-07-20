class Solution {
public:
    void reverseString(vector<char>& s) {
        auto i=s.begin();
        auto j=s.end()-1;
        while(i<j){
            swap(*i,*j);
            i++;
            j--;
        }


        // int i = 0;
        // int j = s.size() - 1;

        // while (i < j) {
        //     swap(s[i], s[j]);
        //     i++;
        //     j--;
        // }
    }
};