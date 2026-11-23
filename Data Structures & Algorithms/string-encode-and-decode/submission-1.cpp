class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty()) return "";
        vector<int>ss;
        for(string s:strs){
            ss.push_back(s.size());
        }
        string str;
        for(int n:ss){
            str += to_string(n) + ",";
        }
    
        str += "#";

        for(string s:strs){
            str += s;
        }
        return str;
    }

    vector<string> decode(string s) {
        if(s.empty()) return {};

        vector<int> ss;
        int i=0;
        while(s[i] != '#'){
            int j = i;
            while(s[j] != ','){
                j++;
            }
            ss.push_back(stoi(s.substr(i,j)));
            i = j+1;
        }

        vector<string> strs;
        i++;
        for(int n:ss){
            strs.push_back(s.substr(i,n));
            i+=n;
        }
        return strs;

    }
};
