#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
	int size = nums.size();
	vector<int> ans;

	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if((nums[i] + nums[j] == target))
			{
				ans.push_back(i);
				ans.push_back(j);
				return ans;
			}
		}
	}

	return ans;

}

int main()
{
	vector<int> nums { 2, 7, 11, 15 };
	int target = 9;
	vector<int> ans = twoSum(nums, target);

	printf("The answer is: [%d, %d]\n", ans[0], ans[1]);
}