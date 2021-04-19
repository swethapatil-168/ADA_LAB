#include <stdio.h>
compute_gcd(int, int);
int main()
{
    int a,b,gcd;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("The gcd of two numbers is %d\n",compute_gcd(a,b));
	return 0;
}
compute_gcd(int m,int n)
{
    int r;
    if(n==0)
        return m;
    else
    {
        r=m%n;
        m=n;
        n=r;
        compute_gcd(m,n);
    }
}
