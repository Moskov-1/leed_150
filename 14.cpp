class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1 = ransomNote.size(), n2 =  magazine.size();
        if(n1 > n2) return false;
        if(!n1) return true;
        unordered_map<char,int>  map;

        for(int i=0; i<n2; i++){
            map[magazine[i]]++;
        }
        bool flag = true;
        for(int i=0; i<n1; i++){
            if(!map.count(ransomNote[i])){
                flag = false;
                break;
            }
            else{
                map[ransomNote[i]]--;
                if(!map[ransomNote[i]])
                    map.erase(ransomNote[i]);
            }
        }
        return flag;

    }
};