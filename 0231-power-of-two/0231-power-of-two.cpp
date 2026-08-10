class Solution {
public:
    bool isPowerOfTwo(int n) {
      return (n>0 && (n &(n-1))==0);

      //the key to find this is binary system if we take 8 in binary and subtract -1 then apply and then the answer wont contain any 1 but if it is not power fo two there will be 1 
      //the comp already stores the int as binary so all we have to do is subtract 1 from them and apply and 

      //or we can also do it
    //   if(n<=0){
    //         return false;
    //     }
    //     while(n%2==0){
    //         n=n/2;
    //     }
    //     return n==1;
    }
};