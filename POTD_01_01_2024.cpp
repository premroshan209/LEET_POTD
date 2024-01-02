class Solution {
public:
    #define all(a) (a).begin(), (a).end()
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(all(g));
        sort(all(s));

        int ng = g.size();
        int ns = s.size();
        int count = 0, j = 0;

        for(int i = 0; i < ns; i++){
            if(j < ng && s[i] >= g[j]){
                count++;
                j++;
            }
        }

        return count;
    }
};