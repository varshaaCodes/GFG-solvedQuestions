//https://www.geeksforgeeks.org/problems/lucys-neighbours--141631/1

//Lucy lives in house number x. She has a list of n house numbers in the society. Distance between houses can be determined by studying the difference between house numbers.
//Help her find out k closest neighbors. Return the list of house numbers in sorted order.
//Note: If two houses are equidistant and Lucy has to pick only one, the house with the smaller house number is given preference.

class Solution {
  public:
    vector<int> Kclosest(vector<int> arr, int n, int x, int k) {
        // Your code goes here
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({arr[i],abs(arr[i]-x)});
        }sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second!= b.second ? a.second < b.second :a.first < b.first;
        });
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
