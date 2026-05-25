/*class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int count=0;count<s.size();count++){
            rotate(s.begin(),s.begin()+1,s.end());
            if(s==goal)return true;
        }
        return false;
    }
};*/
class Solution{
public:
    bool rotateString(string s, string goal){
        if(s.length()!=goal.length())return false;
        string temp= s+s;
        for(int i=0;i<s.length();i++){
            if(temp.find(goal)!=string::npos)return true;
        }
        return false;

    }
};