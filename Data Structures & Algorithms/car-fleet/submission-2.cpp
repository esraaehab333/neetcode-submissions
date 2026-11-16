
class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> cars;
        set<double> res;
        for (int i = 0; i < position.size(); i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }
        sort(cars.begin(), cars.end(), greater<pair<int, double>>());
        for (int i = 0; i < cars.size(); i++) {
            if (res.empty() || *res.rbegin() < cars[i].second) {
                res.insert(cars[i].second);
            }
        }
        return res.size();
    }
};
