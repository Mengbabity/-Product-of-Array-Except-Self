class Solution {
public:
	vector<int> productExceptSelf(vector<int> nums) {
		int n = nums.size();
		int front = 1;
		int back = 1;
		vector<int> res(n, 1);

		for (int i = 0; i<n; i++) {
			res[i] *= front;
			front *= nums[i];
			res[n - 1 - i] *= back;
			back *= nums[n - 1 - i];
		}
		return res;
	}
};
