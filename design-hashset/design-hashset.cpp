class MyHashSet {
    int set[1000001];
    
public:
    MyHashSet() {
    }
    
    void add(int key) {
        set[key] = 1;
    }
    
    void remove(int key) {
        set[key] = 0;
    }
    
    bool contains(int key) {
        if(set[key] == 1) {
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