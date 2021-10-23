//remove extra space 
#include <stdio.h>
#include <string.h>
int main()
{	
	char c='A',d;
	while((d=getchar())!=EOF)
	{
			if(d==' ')
			  if(c==' ' || c=='\t')
				continue;
			putchar(d);
		    c=d;		
	}
	return 0;
}