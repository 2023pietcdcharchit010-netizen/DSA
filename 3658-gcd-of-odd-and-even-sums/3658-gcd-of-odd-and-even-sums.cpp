class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd=n*(2*1+(n-1)*2)/2;
        int sumeven=n*(2*2+(n-1)*2)/2;
        return gcd(sumodd,sumeven);
    }
};