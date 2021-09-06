#include <stdio.h>

long plus(long x, long y);

void sumstore(long x, long y, long *dest)
{
	long t = plus(x, y);
	*dest = t;
}

int main(int argc,char* argv[])
{
	long x = atoi(argv[1]);
	long y = atoi(argv[2]);

	long dest =0;

	sumstore(x, y, dest);
	
	printf("%d",dest);

	return 0;
}

long plus(long x, long y)
{
	return x+y;
}
