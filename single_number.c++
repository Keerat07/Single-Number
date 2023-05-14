class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
        int key=nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
        }
        for(int i=0;i<n;i++){
            int count=0;
            if(i==n-1){
                return nums[i];
            }
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            i+=count;
            if(count==0){
                return nums[i];
            }
        }
        return 0;
    }
};
