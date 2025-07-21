class Solution {
public:
    string makeFancyString(string s) {
        if(s.empty()) return s;
        string t;
        char ch= s[0];
        int count=1;
       t.push_back(s[0]);
        for(int i=1; i<s.size(); i++){
            if(s[i] == ch){
                count++;
                if(count<=2)
                t.push_back(s[i]);
            }
            else{
                ch= s[i];
                count = 1;
                t.push_back(s[i]);
            }
        }
        return t;
    }
};