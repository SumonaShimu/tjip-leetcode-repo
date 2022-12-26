//TC=O(1)
class LRUCache {
public:
    list<int>lru; //key list
    int max_capacity;
    unordered_map<int,int> kv; //key=>value
    unordered_map<int, list<int>::iterator> kp; //key=>position

    LRUCache(int capacity) {
        max_capacity=capacity;
    }

    int get(int key) {
        if(kv.count(key)==0) return -1;
        update(key);
        return kv[key];
    }

    void put(int key, int value) {
        if(kv.size() == max_capacity && kv.count(key)==0) evict();
        update(key);
        kv[key]=value;
    }

    void update(int key){   //brings the recently used keys to the front position [get,put]
        if(kv.count(key)) lru.erase(kp[key]);
        lru.push_front(key);
        kp[key]=lru.begin();
    }

    void evict(){       //if lru reaches max_capacity=> removes the last key
        int last_key=lru.back();
        kp.erase(last_key);
        kv.erase(last_key);
        lru.pop_back();
    }
};

