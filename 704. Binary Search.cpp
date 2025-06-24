class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int len = nums.size();

        int left = 0;
        int right = len -1;

        while(left < right)
        {   
            int mid = (left + right) / 2;
            std::cout << len <<endl; 
            if(nums[mid] > target)
                right = mid -1;
            else if(nums[mid] < target)
                left = mid + 1;
            else 
                return mid;

        }
        if(nums[left] == target)
            return left;
        return -1;
    }

};
