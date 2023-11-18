#include <stdio.h>
int main()
{	float a,b,f;
	int o;
	printf("Enter the two numbers\n");
	scanf("%f" "%f",&a,&b);
	printf("Enter 1 to add , 2 to subtract ,3 to multiply and 4 to divide\n");
	scanf("%d",&o);
	
	switch(o)
	{
		case 1:
			f=(a+b);
			printf("The sum of the two number is %f",f);
			break; }
    return 0;
}