#include <stdio.h>


void show_bytes(char *start, int len)
{
	// prints data in every byte of the integer's 4 bytes memory location
	int i;
	for(i=0;i<len-1;i++)
	{
		printf("%p\t0x%.2x\n",start+i,*(start+i));
		printf("\n");
	}
}

int main(int argc, char *argv[])
{
	int x = 12343;
	int arr[10];
	arr[0]= 5; 
	
	show_bytes((char*)&x, sizeof(int)); //convert integer pointer to char pointer so that i can itterate through every byte of 4 byte integer
	//printf("test ->%d\n",sizeof(arr)/sizeof(int));
	return 0;
}
