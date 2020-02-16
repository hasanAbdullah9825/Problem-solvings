
#include<stdio.h>
#include<string.h>

int main(){

int t;
scanf("%d",&t);
for(int i=0;i<t;i++){
    char c[110];
    int arr[1000]={0};
    scanf("%s",&c);
    for(int k=0;k<strlen(c);k++){
    arr[c[k]]+=1;


    }
    printf("Case %d:\n",i+1);

    for(int x=97;x<124;x++){
                if(arr[x]!=0){

               printf("%c %d\n",x,arr[x]);

            }

    }
}

}
