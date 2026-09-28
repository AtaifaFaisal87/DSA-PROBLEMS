class Solution {
public:
  int subtractProductAndSum(int n) {
    
    int sum=0;
    int product=1;
    int div=n;
   
    do{
        n=div%10;
        sum+=n;
        product *=n;
        div=div/10;
    }while(div != 0);

    return product-sum;
}
};