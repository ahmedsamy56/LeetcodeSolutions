class Solution {
public:
    string simplifyPath(string path) {
        vector<string>st;
        for (int i = 0; i < path.length(); ++i) {
            string s;
            if(path[i]=='/')
                continue;
            while(i<path.length() && path[i]!='/')
            {
                s+=path[i];
                i++;
            }
            st.push_back(s);
        }
        vector<string>ans;
        for (int i = 0; i < st.size(); ++i) {
           if(st[i] == ".."){
               if(!ans.empty()){
                   ans.pop_back();
               }
           }else{
               if(st[i] != "" && st[i] != "."){
                   ans.push_back(st[i]);
               }
           }
        }
        string ss = "/";
        for (int i = 0; i < ans.size(); ++i) {
            if (i == ans.size() - 1) {
                ss+= ans[i];
            } else {
                if(ans[i]!= ""){
                    ss+= ans[i];
                    ss+='/';
                }

            }
        }
        
        return ss;
    }
};