class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //T(C(N)=O(N**2)) and S(C(N)==O(N)) as it requires contigous memory space allocation iteratively
        int n=nums.size();int left=0,window=0,out=n+1;//Size declare and variable initialize 
        for(int right=0;right<n;right++){//itearating through nums right subarray
            window+=nums[right];//appending window to array's right sub array
            while(window>=target){//iterating through window's targeted value
                out=min(out,right-left+1);//minimum output value declare
                window-=nums[left++];}}//decrement window element and increment to its left subarray
        return out==n+1?0:out;}};//printing output val
