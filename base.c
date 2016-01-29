#include<stdio.h>
void digit(int,int);
int main()
{
    int num,b;
	  printf("\nEnter the number ");
	  scanf("%d",&num);
	  printf("\nEnter the base\n ");
	  scanf("%d",&b);
	
    if ( b==0 || b==1 ) 
	  {
		    printf("not possible");
        return 0;
    } 
	  digit(num,b);
	  return 0;
    
}

void digit(int num , int r)
{
	  int rem,i=0,j;
	  int a[5];
	  while(num!=0)
	  {
		    rem= num % r;
		    if(rem<10)
		{
			  a[i] = rem + 48;
		}
		else
		{
			  a[i] = rem + 55;
		}
		i++;
		num= num / r;
	}
	for(j=i-1;j>=0;j--)
	{
		  printf("%c",a[j]);
	}
}
