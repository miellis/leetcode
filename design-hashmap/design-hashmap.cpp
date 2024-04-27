class MyHashMap {
    const static uint MAP_SIZE = 1000001;
    int map[MAP_SIZE];
public:
    MyHashMap() {
        for (uint i=0; i<MAP_SIZE; i++){
            map[i] = -1;
        }
    }
    
    void put(int key, int value) {
        map[key] = value;
    }
    
    int get(int key) {
        return map[key];
    }
    
    void remove(int key) {
        map[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */