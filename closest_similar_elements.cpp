//Closest Similar Elements
//https://www.geeksforgeeks.org/problems/water-the-plants--141631/1

//Geek has an integer array arr of size n and integers indexDifference, valueDifference. Geek needs to find a pair of indexes (i, j) which follows all the given conditions
//i != j
//abs(i - j) <= indexDifference
//abs(Arr[i] - Arr[j]) <= valueDifference
//Geek needs your help to find out if such a pair, return True if such a pair exists else return False.



    bool closestSimilarElements(int n, vector<int> &arr, int indexDifference,
                                int valueDifference) {
        // code here

        for(int i=0;i<n;i++){
            for(int j=i+1;j<=min(i+indexDifference,n-1);j++){
                if(abs(arr[i] - arr[j]) <= valueDifference){
                    return true;
                }
            }
        }
        return false;
    }
