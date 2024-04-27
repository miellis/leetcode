class MyHashSet {
    // int set[1000001];
    set<int> keys;
public:
    MyHashSet() {
    }
    
    void add(int key) {
        keys.insert(key);
    }
    
    void remove(int key) {
        keys.erase(key);
    }
    
    bool contains(int key) {
        if(keys.find(key) != keys.end()) {
            return true;
        }
        else {
            return false;
        }
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */