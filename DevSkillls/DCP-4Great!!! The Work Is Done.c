#include<stdio.h>
#include<math.h>
int main()
{
    int ct,n;
    while ( scanf("%d %d",&ct,&n)!=EOF)
    {
  int arr[n+1];
  int day;
  double sum=0,x;
        for(int i=0; i<n; i++)
        {
           scanf("%d",&arr[i]);
           sum+=arr[i];

        }

    x=ct/sum;
    x=ceil(x);
    int ans=x;

    if(ans<2){
        printf("Project will finish within %d day.\n",ans);
    }

    else{
      printf("Project will finish within %d days.\n",ans);
    }

    }
    return 0;

}
