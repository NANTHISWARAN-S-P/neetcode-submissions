class MyHashSet {
    private:
        int arr[31251] = {0};

        int getkey(int key){
            return 1<<(key%32);
        }
public:
    MyHashSet() {
       
    }
    
    void add(int key) {
        arr[key/32] |= getkey(key);
    }
    
    void remove(int key) {
        if(contains(key)){
            arr[key/32] ^= getkey(key);
        }
    }
    
    bool contains(int key) {
        return (arr[key/32] & getkey(key)) != 0;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */