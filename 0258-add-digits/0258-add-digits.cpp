class Solution {
public:
  int addDigits(int num) {
    
if(num<10)
{return num;}

int sum=0;
while(num>0)
{
  sum=sum+ num%10;
  num=num/10;

}  

return addDigits(sum);
}

   /* int add;
    int n=num;
    num=num%10;
    n=n/10;
    add=n+num;

    if(add>=0 && add <= 9)
    {
        return add;
    }
    
    else
    return addDigits(add); */
};