class MyHashSet {
    private:
        struct Node{
            int key;
            Node* next;
            Node(int k){
                key = k;
                next = NULL;
            }
        };
        vector<Node*> s;
        int hash(int key){
            return key%s.size();
        }
public:
    MyHashSet() {
        s.resize(10000);
        for(auto& c:s){
            c = new Node(0);
        }
    }
    
    void add(int key) {
        Node* curr = s[hash(key)];
        while(curr->next){
            if(curr->next->key == key){
                return;
            }
            curr = curr->next;
        }
        curr->next = new Node(key);
    }
    
    void remove(int key) {
        Node* curr = s[hash(key)];
        while(curr->next){
            if(curr->next->key == key){
                Node* temp = curr->next;
                curr->next = temp->next;
                delete temp;
                return;
            }
            curr = curr->next;
        }
        curr->next = NULL;
    }
    
    bool contains(int key) {
        Node* curr = s[hash(key)];
        while(curr->next){
            if(curr->next->key == key) return true;
            curr = curr->next;
        }
        return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */