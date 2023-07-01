#include <bits/stdc++.h>
using namespace std;

// merge intervals

// vector<vector<int>> merge(vector<vector<int>>& intervals) {
//     if(intervals.size()==1)
//         return intervals;
//     vector<pair<int,int>> pr;
//     for(int i=0;i<intervals.size();i++) {
//         pr.push_back({intervals[i][0],intervals[i][1]});
//     } 
//     sort(pr.begin(), pr.end());
//     vector<vector<int>> result;
//     int fnum = pr[0].first, snum = pr[0].second;
//     for(int i=0;i<pr.size()-1;i++) {
//         vector<int> ans(2);
//         if(snum >= pr[i+1].first) {
//             snum = max(snum, pr[i+1].second);
//         }
//         else {
//             ans[0] = fnum;
//             ans[1] = snum;
//             fnum = pr[i+1].first;
//             snum = pr[i+1].second;
//             result.push_back(ans);
//         }
//     } 
//     int n = intervals.size();
//     result.push_back({fnum, snum});
//     return result;
// }

// Top K Frequent Elements


vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int>mp;
    for(auto it : nums){
        mp[it]++;
    }
    priority_queue<pair<int,int>,vector<pair<int, int>>, greater<pair<int, int>>>pq;
    for(auto it: mp){
        pq.push(make_pair(it.second, it.first));
        while(pq.size() > k){
            pq.pop();
        }
    }
    vector<int>res;
    while(k--){
        res.push_back(pq.top().second);
        pq.pop();
    }
    return res;
}

int main() {
    
    return 0;
}