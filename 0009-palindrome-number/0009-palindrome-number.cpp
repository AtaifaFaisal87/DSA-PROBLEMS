class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
 {
    return false;
 }

 long long int remainder,reverse=0;
 int original=x;
 do{
    remainder= x%10;
    reverse=reverse*10+remainder;
    x=x/10;
 }while(x!=0);

if (reverse == original)
{
    return true;
}

else{
     
     return false;
} 
    }
};