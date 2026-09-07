class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int n=height.size();
        int j=n-1,i=0;
            while(i<j){   
                int Height=min(height[j],height[i]);
                int width=j-i;
                int currWater=width*Height;
                maxwater=max(currWater,maxwater);  

                if (height[i]<height[j]){
                    i++;
                } 
                else
                j--;
            }          
        return maxwater;
    }
};