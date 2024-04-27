class MyHashSet {
    const static int SET_SIZE = 1000001;
    bool set[SET_SIZE];
public:
    MyHashSet() {
        for (int i=0; i<SET_SIZE; i++){
            set[i] = false;
        }
    }
    
    void add(int key) {
        set[key] = true;
    }
    
    void remove(int key) {
        set[key] = false;
    }
    
    bool contains(int key) {
        return set[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */