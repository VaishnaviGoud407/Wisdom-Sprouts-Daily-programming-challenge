class Solution {
public:
    string reverseWords(string s) {
         int n=s.length();
         string ans="";
        reverse(s.begin(), s.end());
        for(int i=0; i<n; i++){
             string world="";
          
           while(i<n && s[i]!=' ' ){
                world+=s[i];
                i++;
             }
             reverse(world.begin(), world.end());
            if(world.length()>0){
              ans+=" "+world;
              }
        }
        s.erase(0, s.length());
        s+=ans.substr(1);
        return s;
    }
};
