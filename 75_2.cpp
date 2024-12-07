class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string s;
        if(str1.size() < str2.size()){
            s = str1;
            str1 = str2;
            str2 = s;
            s = "";
        }
        int n1 = str1.size();
        int n2 = str2.size();

       
        vector<string> strs;

        for(int i=0; i<n2; i++){
            s.push_back(str2[i]);
            if(n1 % (i+1)  == 0 && n2 % (i+1) == 0){
                strs.push_back(s);
            }
        }        
        s = "";
        for(int i=0; i<n1; i++){
            if(str1[i] != str2[i%n2])
                return "";
        }
        for(int i=0; i<strs.size(); i++){
            string x = strs[i];
            int nx = x.size();
            bool flag = true;
            for(int j=0; j<n1; j++){
                if(str1[j] != x[j%nx]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                s = x;
               
            }
        }
        
        return s;
    }
};
