class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>copy(strs);
        vector<vector<string>> ans;
        int n = strs.size();
        for (int i = 0; i <n ; ++i) {
            sort(strs[i].begin() , strs[i].end());
        }
        map <string, vector<int> > tree;
        for (int i = 0; i <n ; ++i) {
            tree[strs[i]].push_back(i);
        }
        for (auto it : tree) {
            cout<<it.first<<" ";
            vector<string>sub;
            for(auto v : it.second){
                cout<<v<<" ";
                sub.push_back(copy[v]);
            }
            ans.push_back(sub);
            cout<<endl;
        }
        return ans;
    }
};