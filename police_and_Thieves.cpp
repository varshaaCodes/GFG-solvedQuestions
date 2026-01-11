//Police and Thieves

//Given an array arr[], where each element contains either a 'P' for policeman or a 'T' for thief. Find the maximum number of thieves that can be caught by the police. 
//Keep in mind the following conditions :
//Each policeman can catch only one thief.
//A policeman cannot catch a thief who is more than k units away from him.

class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        vector<int>police,thieves;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]== 'P')police.push_back(i);
            else if (arr[i] == 'T') thieves.push_back(i);
            
        }
        int caught =0;
        int policeIdx = 0, theiveIdx =0;
        while (policeIdx < police.size() && theiveIdx < thieves.size()){
            int policePos = police[policeIdx];
            int thiefPos = thieves[theiveIdx];
            if(abs(policePos - thiefPos)<= k){
                theiveIdx++;
                caught++;
                policeIdx++;
            }
                else if(thiefPos< policePos-k){
                    theiveIdx++;
                }
                else{
                    policeIdx++;
                }
            }
            return caught;
        }
        
    
};
