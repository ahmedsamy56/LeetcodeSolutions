class Solution {
public:
    int binaryGap(int n) {

        int arr[32], i = 0;
        
        while (n != 0) {
            arr[i++] = n % 2;
            n /= 2;
        }

        int ans = 0;
        int last = -1;  

        for (int j = 0; j < i; j++) {
            if (arr[j] == 1) {
                if (last != -1) {
                    ans = max(ans, j - last);
                }
                last = j;
            }
        }

        return ans;
    }
};