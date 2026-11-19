class MyHashMap {
    private:
        struct Node{
            int key;
            int val;
            Node* next;
            Node(int k, int v){
                key = k;
                val = v;
                next = NULL;
            }
        };

        vector<Node*> arr;

        int hash(int key){
            return key%arr.size();
        }
public:
    MyHashMap() {
        arr.resize(10000);

        for(auto& a:arr){
            a = new Node(-1,-1);
        }
    }
    
    void put(int key, int value) {
        Node* curr = arr[hash(key)];
        while(curr->next){
            if(curr->next->key == key){
                curr->next->val = value;
                return;
            }
            curr = curr->next;
        }
        curr->next = new Node(key, value);
    }
    
    int get(int key) {
        Node* curr = arr[hash(key)];
        while(curr->next){
            if(curr->next->key == key){
                return curr->next->val;
            }
            curr = curr->next;
        }
        return -1;
    }
    
    void remove(int key) {
        Node* curr = arr[hash(key)];
        while(curr->next){
            if(curr->next->key == key){
                Node* temp = curr->next;
                curr->next = temp->next;
                delete temp;
                return;
            }
            curr = curr->next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */