class MyHashSet {
    int keys[1000001];
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        keys[key] = 1;
    }
    
    void remove(int key) {
        keys[key] = 0;
    }
    
    bool contains(int key) {
        if (keys[key] == 1){
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