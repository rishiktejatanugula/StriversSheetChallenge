vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {
	set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int tar=K-nums[i];
            int a=i+1;
            int b=n-1;
            while(a<b){
                if(nums[a]+nums[b]>tar){
                    b--;
                }
                else if(nums[a]+nums[b]<tar){
                    a++;
                }
                else if(nums[a]+nums[b]==tar){
                    vector<int> temp={nums[i],nums[a],nums[b]};
                    s.insert({temp});
                    a++;
                    b--;
                     while(a<b && nums[a]==nums[a-1]) a++;
                    while(a<b && nums[b]==nums[b+1]) b--;
                }
            }
        }
      vector<vector<int>> ans(s.begin(),s.end());
      return ans;
