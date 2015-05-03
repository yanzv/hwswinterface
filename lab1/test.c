#include <stdio.h>


int sign(int x) {
	int a = 1<<31;
	int b = x & a;
	int d = (b>>31);
	int c = !d;
	printf("d: %x\n",d);
  return (!x^1) | d;
}

/*int logicalShift(int x, int n) {
	int a = x>>n;
	int b = (0+(!n^1*1))<<31;
	printf("b: %x\n",a);
	int ba = (0+(!n^1))<<31;
	int a = x & (ba<<31);
	int b = x ^ (ba<<31); //number with out the 1 in the first bit
	int c = b >> n; // number shifted
	int d = ~(a>>n);
	
	printf("a: %x\n",c|d);
  return c|d;
}*/


int logicalShift(int x, int n) {
  int ba = (0+(!n^1))<<31;
	int a = x & ba;
	
	int numShifted = x>>n;
	int msbShifted = (a >> n)<<1;
		printf("a: %x\n",msbShifted);
		printf("size: %ld\n",sizeof(int));
	
	
	//int b = x ^ (ba<<31); //number with out the 1 in the first bit
	//int c = b >> n; // number shifted
	//int d = ~(a>>n);
	
	
  return msbShifted ^ numShifted;
}


int bang(int x) {
	int b = (x&(1<<31))+x;
	int c = b+1;
printf("b: %x\n",b);

  return b&c;
}

int bitXor(int x, int y) {

	
	int orC = ~(~x & ~y);
	int notAndB = ~(x & y);
	
	int c = orC & notAndB;
	printf("orC: %x , notAndB:%x c:%x\n",orC,notAndB,c);
  return c;
}


int main(void)
{
	//int x = 0x87654321;
	int y = 0x00000000;
	int c = bang(y);
	
	//
	printf("c: %x\n",c);
	
	
	
	
	return 0;

}

