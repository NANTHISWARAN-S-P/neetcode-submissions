class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty()) return "";
        string str;
        for(string s:strs){
            int l = s.size();
            str += to_string(l) + "#" + s;
        }
        return str;
    }

    vector<string> decode(string s) {
        if(s.empty()) return {};
        vector<string> strs;
        int n = s.size();
        int i=0;
        while(i<n){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int l = stoi(s.substr(i,j-i));
            i = j+1;
            strs.push_back(s.substr(i,l));
            i += l;
        }
        return strs;
    }
};
