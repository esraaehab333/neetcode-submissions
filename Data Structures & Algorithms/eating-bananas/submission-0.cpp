class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // finding the bigest number in array
        // with the build in function max_element
        // this is the iterator use it with the astric from the start to the end
        int n = piles.size();
        int maxPile = *max_element(piles.begin(), piles.end());
        int left = 1;
        int right = maxPile;
        while (left < right) {
            int mid = (left + right) / 2;
            // the calulation is here compare with the h
            long long sum = 0;
            for (int i = 0; i < n; i++) {
                sum += ceil(double(piles[i]) / mid);
                // the output here is give me the sum of the hours
            }
            if (sum > h)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};
