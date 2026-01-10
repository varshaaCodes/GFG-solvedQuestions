//Smallest Positive Integer that can not be represented as Sum
//https://www.geeksforgeeks.org/problems/smallest-positive-integer-that-can-not-be-represented-as-sum--141631/1
//Given an array of size N, find the smallest positive integer value that is either not presented in the array or cannot be
//represented as a sum(coz sum means you are adding two or more elements) of some elements from the array.

class Solution {
  public:
    long long smallestpositive(vector<long long> array, int n) {
        // code here
        int max =0;
        sort(array.begin(),array.end());
        for(int i=0;i<n;i++){
            if(array[i]>max+1)break;
            max+=array[i];
        }
        return max+1;
    }
};
