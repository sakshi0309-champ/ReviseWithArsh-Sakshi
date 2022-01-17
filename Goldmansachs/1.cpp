class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        int n=string_list.size();
        unordered_map<string,vector<string>>mymap;
        for(int i=0;i<n;i++){
            auto temp=string_list[i];
            sort(string_list[i].begin(),string_list[i].end());
            mymap[string_list[i]].push_back(temp);
        }
        vector<vector<string>>result;
        for(auto it=mymap.begin();it!=mymap.end();it++){
            result.push_back(it->second);
        }
        return result;
    }
};