class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0; i<s.length(); i++)
        {
            mp[s[i]]++;
        }
        vector<pair<int,char>>v;
        for(auto c:mp)
        {
            v.push_back({c.second,c.first});
        }
        sort(v.rbegin(),v.rend());
        string s1="";
        for(auto p:v)
        {
            while(p.first!=0)
            {
                s1+=p.second;
                p.first--;
            }
        }
        return s1;
    }
};