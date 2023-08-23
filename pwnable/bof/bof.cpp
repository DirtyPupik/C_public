#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using std::cout;
using std::cin;
using std::string;




void func(int key){ 	 	
    printf("%d\n",key);
	char overflowme[32];
	printf("overflow me : ");
	gets(overflowme);	// smash me!
	if(key == 0xcafebabe){	// \xbe\xba\xfe\xca 	0x56556203 - \x03\x62\x55\x56
		system("/bin/sh");
	}
	else{
		printf("Nah..\n");
	}
}

int main(int argc, char* argv[]){
	func(0xdeadbeef);	
	return 0;
}