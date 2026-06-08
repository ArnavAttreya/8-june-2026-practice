// So today i have solved 5 tuple / pair problems

// leetcode 167. Two Sum II - Input Array Is Sorted
// (brute force)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         vector<int> ans;
//         for(int i=0;i<numbers.size();i++){
//             int x = numbers[i];
//             for(int j=i+1;j<numbers.size();j++){
//                 int y = numbers[j];
//                 if(x + y == target){
//                     ans = {i+1,j+1};
//                     return ans;
//                 }
//             }
//         }
//         return ans;
//     }
// };

// (optimal)
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int l = 0;
//         int r = numbers.size()-1;
//         vector<int> ans;
//         while(l<r){
//             if(numbers[l] + numbers[r] == target){
//                 ans = {l+1,r+1};
//                 return ans;
//             }
//             if(numbers[l] + numbers[r] < target) l++;
//             else if(numbers[l] + numbers[r] > target) r--;
//         }
//         return ans;
//     }
// };


// gfg Count pairs with given sum
// (brute force)
// class Solution {
//   public:
//     int countPairs(vector<int> &arr, int target) {
//         long long cnt = 0;
//         for(int i=0;i<arr.size();i++){
//             for(int j=i+1;j<arr.size();j++){
//                if(arr[i] + arr[j] == target) cnt++; 
//             }
//         }
//         return cnt;
//     }
// };

// (optimal)
// class Solution {
//   public:
//     int countPairs(vector<int> &arr, int target) {
//         unordered_map<int,int> mp;
//         int cnt = 0;
//         for(int i=0;i<arr.size();i++){
//             int x = target - arr[i];
//             cnt += mp[x];
//             mp[arr[i]]++;
//         }
//         return cnt;
//     }
// };


// leetcode 75. Sort Colors
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//        for(int i=0;i<nums.size();i++){
//         for(int j=i+1;j<nums.size();j++){
//             if(nums[i]>nums[j]){
//                 swap(nums[i],nums[j]);
//             }
//         }
//        }
//     }
// };


// leetcode 18. 4Sum
// (better)
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         set <vector<int>> st;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             int x = nums[i];
//             for(int j=i+1;j<nums.size();j++){
//                 int y = nums[j];
//                 int l = j + 1;
//                 int r = nums.size()-1;
//                 while(l<r){
//                     long long sum = 1LL*x + y + nums[l] + nums[r];
//                     if(sum == target){
//                         st.insert({x,y,nums[l],nums[r]});
//                         l++;
//                         r--;
//                     }
//                     if(sum < target) l++;
//                     if(sum > target) r--;
//                 }
//             }
//         }
//         vector<vector<int>> ans(st.begin(),st.end());
//         return ans;
//     }
// };


// leetcode 287. Find the Duplicate Number
// (brute force)
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         vector<int> ans = nums;
//         sort(ans.begin(),ans.end());
//         for(int i=0;i<ans.size()-1;i++){
//            if(ans[i] == ans[i+1]) return ans[i];
//         }
//         return 0;
//     }
// };

// (better)
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         vector<int> hash(nums.size(),0);
//         for(int i=0;i<nums.size();i++){
//             hash[nums[i]]++;
//             if(hash[nums[i]]>1) return nums[i];
//         }
//         return 0;
//     }
// };

// (optimal)
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int slow = 0;
//         int fast = 0;
//         slow = nums[slow];
//         fast = nums[nums[fast]];
//         while(slow != fast){
//             slow = nums[slow];
//             fast = nums[nums[fast]];
//         }
//         slow = 0;
//         while(slow != fast){
//             slow = nums[slow];
//             fast = nums[fast];
//         }
//         return slow;
//     }
// };
