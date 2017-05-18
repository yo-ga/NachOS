#include "syscall.h"
main(){
	int i;
	for(i=0;i<3;i++)
	{
		Sleep(100000);
		PrintInt(1234);
	}
	return 0;
}
