class Solution {
public:
      #include <sstream>
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string ans="";
        while(ss>>word){
            ans= word + " "+ans;
        }
    
        return ans.substr(0,ans.length()-1);
    }
};