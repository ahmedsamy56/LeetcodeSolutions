class MinStack {
private:
    vector<int>vec;
public:
    MinStack() {

    }

    void push(int val) {
        vec.push_back(val);
    }

    void pop() {
        int n = vec.size();
        if(n > 0)
            vec.pop_back();
    }

    int top() {
        return vec.back();

    }

    int getMin() {
        int n = vec.size();
        if(n > 0) 
            return *min_element(vec.begin() , vec.end());
        else
            return 0;
    }
};