class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int lp = 0, rp = height.size() - 1;
        while (lp < rp)

        {
            int w = rp - lp;
            int ht = min(height[rp], height[lp]);
            maxwater = max(maxwater, w * ht);
            height[lp] < height[rp] ? lp++ : rp--;
        }

        return maxwater;
    }
};