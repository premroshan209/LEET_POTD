class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> v;
        unordered_map<int,int> m; //store row index
        vector<int> vt;
        vt.push_back(nums[0]);
        v.push_back(vt);
        m[nums[0]]++;

        for(int i = 1; i < n; i++){
            if(m[nums[i]] == 0){
                v[0].push_back(nums[i]);
                m[nums[i]]++;
            }
            else {
                if(m[nums[i]] > v.size() - 1){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    v.push_back(temp);
                    m[nums[i]]++;
                    continue;
                }
                v[m[nums[i]]].push_back(nums[i]);
                m[nums[i]]++;
            }
        }

        return v;
    }
};