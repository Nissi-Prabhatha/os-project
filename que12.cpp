#include <stdio.h>
int main() 
{
 int a[10],b[10],x[10],p[10],i,mbt,count=0,time,n,min;
 double avg=0,tt=0,end=0;
  printf("enter the number of Processes:\n");
  scanf("%d",&n); 
  printf("enter process Id :\n");
 for(i=0;i<n;i++)
 scanf("%d",&p[i]);
 printf("enter arrival time :\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter burst time :\n");
 for(i=0;i<n;i++)
 scanf("%d",&b[i]); 
 for(i=0;i<n;i++)
 x[i]=b[i];
 
 min=a[0];
 for(i=1;i<n-2;i++)
{
	if(min>a[i])
		
		min=a[i];
}

b[0]+=min;
 	
 
 for(time=0;count!=n;time++)
 {
   mbt=0;
  for(i=0;i<n;i++)
  {
   if(a[i]<=time && b[i]>=b[mbt] && b[i]>0)
   {
   		if(b[i]==b[mbt])
   			if(p[i]<p[mbt])
   				mbt=i;
		if(b[i]>b[mbt])
			mbt=i;
   }
   
  }
  b[mbt]--;
  printf("%d : %d\t",p[mbt],time+1);
  if(b[mbt]==0)
  {
   count++;
   end=time+1;
   tt+=end-a[mbt];
   avg+=end-a[mbt]-x[mbt];
  }
  
 }
 printf("\n\nAverage Waiting Time = %lf\n",avg/n);
    printf("Average Turnaround Time = %lf",tt/n);
    return 0;
}
