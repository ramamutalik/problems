class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()){
            return 0;
        }
        for(int i=0;i<haystack.length();i++){
            int l=1;
            for(int j=i;j<haystack.length();j++){
                string s=haystack.substr(i,l);
                l++;
                // cout<<s<<" ";
                if(s==needle){
                    return i;
                }
            }
        }
        return -1;
    }
};
