class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n1 = s.size();
        int n2 = t.size();
        if(!n1) return true;
        if(n1 <= n2){
            int i =0, j=0;
            bool flag = false;
            while( i <n1 && j < n2){
                if(s[i] == t[j]){
                    if(i == n1-1) {
                        flag = true;
                    }

                    i++, j++;
                }
                else
                    j++;
            }
            return flag;
        }
        return false;
    }
};