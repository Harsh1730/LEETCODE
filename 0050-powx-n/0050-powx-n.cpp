class Solution 
{
public:
   double myPow(double x, int n) 
    {
        if(x==0) return 0;
        if(x==1||n==0) return 1;
        if(x==-1&&n%2==0) return 1;
        if(x==-1&&n%2!=0) return -1;
        double ans = 1.0;
        if (x != 1 && n != 0) 
        {
            if(n<0)
            {
                return myPow(1/x,-(n+1))*1/x;
            }
            ans *= myPow(x, n / 2);
            if (n % 2 == 0) 
            {
                return (ans * ans*1.0);
            }
            else if(n == 1) 
            { 
                return( x*1.0); 
            }
            else 
            {
               
                return (ans * ans * x*1.0);
            }
        }
          
            else 
            {
                return 1*1.0;
            }
        
    };

};