class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0; int j=0;

        if(needle.empty()) return 0;

        while(i<haystack.length()){
           
           if(haystack[i] == needle[j]){
                j++;
                i++;
           
           if(j==needle.length()){
            return i-j;
           }
           }
        else{
            i=i-j+1;
            j=0;
        }
        }

        return -1;
    }
};