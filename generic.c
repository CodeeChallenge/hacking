#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void *a,void *b,size_t size){
	void * temp = malloc(sizeof(size));
	memcpy(temp,a,size);
	memcpy(a,b,size);
	memcpy(b,temp,size);
	free(temp);
}
int main(){
	char a = 'a',b ='b';
	printf("%c %c\n",a,b);
	swap(&a,&b,sizeof(a));
	printf("%c %c\n",a,b);
	return 0;
}