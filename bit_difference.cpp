//Bit Difference

//Given an integer array of size  N . You have to find sum of bit differences in all pairs that can be formed from array elements. 
//Bit difference of a pair (x, y) is count of different bits at same positions in binary representations of x and y.
//For example, bit difference for 2 and 7 is 2. Binary representation of 2 is 010 and 7 is 111 ( first and last bits differ in two numbers).


// User function Template for C++

class Solution {
  public:
    long long sumBitDiff(int arr[], int n) {
        // Your code goes here
        long long totalDiff =0;
        for(int bit=0;bit<32;bit++){
            long long count0 = 0;
            long long count1 = 0;
            for(int i=0; i<n ;i++){
                if((arr[i] & (1 << bit)) != 0){
                    count1++;
                }
                else count0++;
               
            }
             totalDiff += (count0 * count1 * 2);
        }
        return totalDiff;
    }
};
