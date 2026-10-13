class Solution {
public:
    int reverse(int x) {
       long long int reverse=0,remainder;
int original=x;
do{
    remainder=x%10;
    reverse=reverse*10+remainder;
    x=x/10;
}while(x!=0);

if(reverse> INT_MAX || reverse < INT_MIN)
{
    return 0;
}

return (int) reverse; 
    }
};