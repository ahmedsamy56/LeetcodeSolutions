class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> st;

        for (int asteroid : asteroids) {

            while (!st.empty() &&
                   st.top() > 0 &&
                   asteroid < 0) {

                if (abs(st.top()) < abs(asteroid)) {
                    st.pop();
                }
                else if (abs(st.top()) == abs(asteroid)) {
                    st.pop();
                    asteroid = 0;
                }
                else {
                    asteroid = 0;
                }
            }

            if (asteroid != 0) {
                st.push(asteroid);
            }
        }

        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};