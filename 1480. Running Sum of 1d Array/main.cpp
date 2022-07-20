#include <iostream>
#include <vector>

using namespace std;


class Solution {

public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> solution(n, 0);

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j <= i; j++) {
                solution[i] += nums[j];
            }
        }
        return solution;
    }
};

int main() {

    int myints[] = { 1,2,3,4 };
    std::vector<int> first(myints, myints + sizeof(myints) / sizeof(int));
    Solution t1;

    t1.runningSum(first);

    
	return 0;
}