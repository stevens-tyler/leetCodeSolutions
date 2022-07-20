#include <iostream>
#include <vector>

using namespace std;



class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int sum = 0;
        int left = 0;
        int n = nums.size();

        //find sum
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }

        //find pivot
        for (int i = 0; i < n; i++) {

            if (left == sum - left - nums[i]) {
                return i;
            }
            left += nums[i];
        }

        //failed
        return -1;

    }
};

int main() {

}