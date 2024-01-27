#include<iostream> 
#include<vector>

using namespace std; 

int getSum(vector<int> & nums, int k) {
    int left = 0, 
        sum = 0, 
        maxSum = 0; 

        for (int right = 0; right < nums.size(); right++) {
            sum = sum + nums[right];

            if (right >= k - 1 ) {
                maxSum = max(sum, maxSum); 
                sum = sum - nums[left++]; 
            }
        }
        return maxSum; 
}

int main() {
    vector<int> nums = {2,1,5,1,3,2};
    int k = 3; 
    int result = getSum(nums, k); 
    cout << result << endl; 
    return 0; 
}