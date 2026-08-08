class MyHashMap {

    int numBuckets ; 
    vector<vector<pair<int,int>>> buckets;
    int hash_function (int key){
        return key % numBuckets;
    }

public:
    MyHashMap() {
        numBuckets = 15000;
        buckets = vector<vector<pair<int,int>>>(numBuckets,vector<pair<int,int>>{});
    }
    
    void put(int key, int value) 
    {
        int i = hash_function(key);

        for(auto &it : buckets[i])
        {
            if(it.first == key){
                it.second = value;
                return;
            }
        }

        buckets[i].push_back({key,value});

    }
    
    int get(int key) 
    {
        int i = hash_function(key);

        for(auto it : buckets[i])
        {
            if(it.first == key)
            {
                return it.second;
            }
        }
        return -1;
    }
    
    void remove(int key) 
    {
        int i = hash_function(key);
        
    for (auto it = buckets[i].begin(); it != buckets[i].end(); ++it)
        {
        if (it->first == key)
            {
                buckets[i].erase(it);
                return;
            }
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