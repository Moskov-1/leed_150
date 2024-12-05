class RandomizedSet {
public:
    vector<int> arr;
    std::unordered_map<int, int> hashmap;
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(!hashmap.count(val)){
            arr.emplace_back(val);
            hashmap[val] = arr.size()-1;            
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(hashmap.count(val)){
            arr[hashmap[val]] = arr.back();
            arr.pop_back();
            hashmap[arr[hashmap[val]]] = hashmap[val];
            hashmap.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        
        int randomIndex =  std::rand() % arr.size();

        return arr[randomIndex];
        
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */