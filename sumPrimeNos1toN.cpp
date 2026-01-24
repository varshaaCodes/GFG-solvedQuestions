//Given a positive integer n, compute and return the sum of all prime numbers between 1 and n (inclusive).

//A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.  
//Gfg link- https://www.geeksforgeeks.org/problems/sum-of-all-prime-numbers-between-1-and-n4404/1


class Solution {
  public:
  bool isprime(int num){
     if(num<2)return false;
        if(num==2)return true;
        if(num%2==0)return false;
        for(int i=3;i<=sqrt(num);i+=2){
            if(num%i==0){
                return false;
            }
        }
        return true;
  }
    int prime_Sum(int n) {
        // Code here
      long long sum=0;
      for(int i=2;i<=n;i++){
          if(isprime(i)){
              sum+=i;
          }
      }
      return sum;
        
        
    }
};
