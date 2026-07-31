class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        int zero=0;
        int one = 0;
        int two = 0;
        for(int i = 0 ; i < n ; i++){
           if(nums[i]==0){
            zero++;
           }
           if(nums[i]==1){
            one++;
           }
           if(nums[i]==2){
            two++;
           }
           
        }
        for(int i = 0; i<zero; i++){
            nums[index++]=0;
        }
        for(int i = 0; i<one; i++){
            nums[index++]=1;
        }
        for(int i = 0; i<two; i++){
            nums[index++]=2;
        }
        
    }
};