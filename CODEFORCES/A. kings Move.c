#include<stdio.h>
int main()
{
    int i,n;
    char ch;
    scanf("%c%d",&ch,&n);
    if((ch=='a' && n==1) || (ch=='a' && n==8) || (ch=='h'&&n==1) || (ch=='h'&&n==8))
        printf("3");
    else if(ch=='a'||  ch=='h' || n==8 || n== 1)
        printf("5");
    else
        printf("8");
        return 0;
}
