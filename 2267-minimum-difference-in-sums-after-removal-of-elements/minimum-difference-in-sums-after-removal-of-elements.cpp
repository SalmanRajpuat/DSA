class Solution {
public:
    long long minimumDifference(vector<int>& nums) {
        int n = nums.size() / 3;
        int sz = nums.size();
        vector<long long> left(n+1), right(n+1);

        // Minimize sum of first n elements from left 2n
        priority_queue<int> maxHeap;
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += nums[i];
            maxHeap.push(nums[i]);
        }
        left[0] = sum;
        for (int i = n; i < 2*n; ++i) {
            sum += nums[i];
            maxHeap.push(nums[i]);
            sum -= maxHeap.top();
            maxHeap.pop();
            left[i-n+1] = sum;
        }

        // Maximize sum of last n elements from right 2n
        priority_queue<int, vector<int>, greater<int>> minHeap;
        sum = 0;
        for (int i = sz-1; i >= sz-n; --i) {
            sum += nums[i];
            minHeap.push(nums[i]);
        }
        right[n] = sum;
        for (int i = sz-n-1; i >= n; --i) {
            sum += nums[i];
            minHeap.push(nums[i]);
            sum -= minHeap.top();
            minHeap.pop();
            right[i-n] = sum;
        }

        long long res = LLONG_MAX;
        for (int i = 0; i <= n; ++i) {
            res = min(res, left[i] - right[i]);
        }
        return res;
    }
};
