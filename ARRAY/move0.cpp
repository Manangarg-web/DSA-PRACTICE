Problem:283
Move zeroes
approach: two pointers
tc = o(n)
sc =o(1)

 class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i =0;
        int j=0;
        int n = nums.size();
        while(j<n){
            if(nums[j]!=0){
                int temp = nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
    }
}; 





  
