class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string p = strs[0];
        string s="";
        int count=p.length();
        int length= strs.size();
        int j=0;
        for(int i=0;i<p.length();++i){
            for( j=0; j< length; j++){
                if(p[i]!= strs[j][i])
                {
                    count--;
                    break;
                }
            }
            if(j==length)
             s.push_back(p[i]);
        }
        return s;
    }
};
