#include<iostream.h>
#include<conio.h>

int main()
{
  clrscr();

  int a[5],b[5],i,j,n,time=0,temp=0,count=0;
  char p[5],ctemp;

   cout<<"Enter no of process : ";
   cin>>n;

   cout<<"\nEnter Process name: ";
    for(i=0;i<n;i++)
      cin>>p[i];

   cout<<"\nEnter arrival time : ";
     for(i=0;i<n;i++)
      cin>>a[i];

   cout<<"\nEnter burst time : ";
     for(i=0;i<n;i++)
      cin>>b[i];




     for(i=0;i<n;i++)
      {
	 if(a[i]<=time && b[i]>0)
	  {
	   if(b[i]<3)
	    {
	     time+=b[i];
	     b[i]=0;
	    }

	   else
	    {
	     time+=3;
	     b[i]-=3;
				}
	   cout<<p[i]<<":"<<time<<"\t";
	  }
      }




   for(i=0;i<n;i++)
    {
     if(a[i]<=time && b[i]>0)
       {
	if(b[i]<6)
	 {
	  time+=b[i];
	  b[i]=0;
	 }

	else
	{
	 time+=6;
	 b[i]-=6;
	}
	cout<<p[i]<<":"<<time<<"\t";
     }

   }



 for(i=0;i<n;i++)
  {
   for(j=0; j<n;j++)
    {

     if(b[j]>b[j+1])
       {
	temp=b[j];
	b[j]=b[j+1];
	b[j+1]=temp;

	ctemp=p[j];
	p[j]=p[j+1];
	p[j+1]=ctemp;

	}
    }
  }


  for(i=0;i<n;i++)
  {
   count=count+b[i]+time;

   cout<<p[i]<<":"<<count<<"\t";
   count=count-time;

  }

 getch();

 return 0;

}


