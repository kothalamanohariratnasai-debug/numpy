/*#include <stdio.h>
void main()
{
	int i,j;
	for(j=1;j<=10;j++)
	{
		for(i=1;i<=5;i++)
		{
			printf("*");
		}
		printf("\n");


	}
	printf("\n");
}*/

/*#include <stdio.h>
void main(){
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");

	}
}*/

/*#include <stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the number of lines");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");

	}
}*/

/*#include <stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the number of lines");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");

	}
}*/

/*#include <stdio.h>
void main()
{
	int i,j,n,p=1;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",p++);
		}
		printf("\n");
	}
}*/

/*#include <stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i+j);
		}
		printf("\n");
	}
}*/

/*#include <stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",n+1-j);
		}
		printf("\n");
	}
}
*/

/*#include <stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}*/

/*#include <stdio.h>              

void main()
{
	int i,j,n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}*/


/*#include <stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}*/
/*#include <stdio.h>
void main()
{
	int i=0,j=0;
	while(++i<=5)
	{
		while(++j<=5)
		{
			printf("%d\t",j);
		}
		printf("%d\n",i);
	}
}*/


/*#include <stdio.h>
void main()
{
	int i=1,j=1;
	while(i<=5)

	{
		j=1;
		while(j<=3)
		{
			printf("*");
		
		j++;
		}
		printf("\n");
		i++;
	

	}
}*/

/*#include <stdio.h>
void main()
{
	int i=1,j=1,n;
	printf("Enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;

	}

}*/

/*#include <stdio.h>
void main()
{
	int i=1,j=5,n;
	printf("Enter the number");
	scanf("%d",&n);
	while(i<=5)
	{
		j=5;
		while(j>=i)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i++;
	}
}*/


/*#include <stdio.h>
void main()
{
	int i=1,j=1,k,n;
	printf("Enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		j=1;
		while(j<i)
		{
			printf(" ");
			j++;
		}
	
			k=n;
			while(k>=i)
			{
				printf("*");
				k--;
			}
			
			printf("\n");

			i++;

	}
}*/

/*#include <stdio.h>
void main()
{
	int i=1,j,k=1,n;
	printf("Enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		j=n;
		while(j>i)
		{
			printf(" ");
		
			j--;
		}
		k=1;
		while(k<=i)
		{
			printf("*");
			k++;
		}
		printf("\n");
		i++;


	}
}*/
