class Solution {
public:
    int maxScore(string s) {
        int ans=0;
        int z=0;int o=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='1') o++;
        }
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='1') o--;
            else z++;
            ans=max(ans,z+o);
              
        }
        return ans;
    }
};