//Triplets in Sorted Linked List

//Given a sorted linked list of distinct nodes (no two nodes have the same data) and an integer x. Count distinct triplets in the list that sum up to a given integer x.
//Note: The Linked List is sorted in descending order.

//https://www.geeksforgeeks.org/problems/count-triplets--141631/1

// User function Template for C++
class Solution {
  public:
    int countTriplets(struct Node* head, int x) {
        // code here.
        vector<int> arr;
        Node* temp=head;
        while(temp!= nullptr){
            arr.push_back(temp->data);
            temp = temp->next;
            
        }
        int n = arr.size();
        int count =0;
        if(n<3)return 0;
        for(int i=0;i< n-2;i++){
            int left = i+1;
            int right = n-1;
            while(left < right){
                int sum = arr[i] + arr[left] + arr[right];
                if(sum == x){count++;
                left++;
                right--;
            }
            else if(sum>x) left ++;
            else right--;
        }
    }
    return count;
    }
    
};
