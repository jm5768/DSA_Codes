class Solution {
public:
    double myPow(double x, long long n) 
    {
        if(n==0) return 1;
        if(n<0) return (1/pow(x,-n));
        if(n>0) return(x*pow(x,n-1));
         
        return 0;
    }
};
