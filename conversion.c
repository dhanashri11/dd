#include<stdio.h>
#include<conio.h>
int convert(int num);
int main()
{
    int dec,bin;
    printf("enter the decimal number");
    scanf("%d",&dec);
    bin=convert(dec);
    printf("binary equivalent =%d",bin);

}

int convert(int num)
{   int temp,rem=0,binn=0,j=1;
    temp=num;
    while(temp!=0)
    {
       rem=temp%2;
       binn=binn+(rem*j);
       temp=temp/2;
       j=j*10;
    }

    return binn;
}
