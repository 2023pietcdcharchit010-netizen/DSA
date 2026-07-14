class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) {
            return x;   // handles 0 and 1
        }

        int start = 1;
        int end = x;
        int ans = 0;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (mid == x / mid) {
                return mid;              // perfect square
            } 
            else if (mid < x / mid) {
                ans = mid;               // possible answer
                start = mid + 1;         // move right
            } 
            else {
                end = mid - 1;           // move left
            }
        }

        return ans;   // floor(sqrt(x))
    }
};
