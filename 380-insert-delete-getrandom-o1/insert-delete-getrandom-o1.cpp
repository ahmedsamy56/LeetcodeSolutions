class RandomizedSet {
public:
    vector<int> data;
    unordered_map<int, int> map;

    RandomizedSet() {}

    bool insert(int val) {
        if (map.find(val) != map.end())
            return false;

        map[val] = data.size();
        data.push_back(val);
        return true;
    }

    bool remove(int val) {
        if (map.find(val) == map.end())
            return false;

        int index = map[val];
        int last = data.back();

        data[index] = last;
        map[last] = index;

        data.pop_back();
        map.erase(val);

        return true;
    }

    int getRandom() {
        return data[rand() % data.size()];
    }
};
