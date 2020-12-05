#include<stdio.h>
void prime(int);
int main()
{
    int num=20;
    prime(num);

    return 0;
}
void prime(int n)
{

    if(n%2==0)
    {
        printf("%d",2);
        return prime(n/2);
    }

    int ind=3;
    if(n%ind==0)
    {
        printf("%d",ind);
        n=n/ind;
        return prime(ind+2);
    }
if(n>2)
{
    printf("%d",n);
}


}
