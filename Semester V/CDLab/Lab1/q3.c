#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1, *f2, *f3;
	char c1 , c2;
	f1 = fopen("input.txt", "r");
	f2 = fopen("input1.txt", "r");
	f3 = fopen("output.txt", "w");

	if (!f1 || !f2 || !f3)
	{
		printf("Cant Open File\n");
		exit(1);
	}
	while(1)
	{
		if(c1 != EOF)
		{
			c1 = fgetc(f1);
    		while(c1 != '\n')
			{
				if(c1 == EOF)
					break;
				fputc(c1, f3);
				c1 = fgetc(f1);
			}
			fputc('\n', f3);
			if(c1 != EOF)
				fputc('\n', f3);
		}
		if(c2 != EOF)
		{
			c2 = fgetc(f2);
			while (c2 != '\n')
			{
				if(c2 == EOF)
					break;
				fputc(c2, f3);
				c2 = fgetc(f2);
			}
			fputc('\n', f3);
			if(c2 != EOF)
				fputc('\n', f3);
		}
		if(c1 == EOF && c2 == EOF)
			break;
	}
	return 0;
}