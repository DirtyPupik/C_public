#include <stdio.h>
#include <fcntl.h>

#define PW_LEN 10
#define XORKEY 1

void xor(char* s, int len){             // s = usr input 10 char, len = 10
        int i;
        for(i=0; i<len; i++){
                s[i] ^= XORKEY;         // xor each char's least significant bit by 1
        }                               // B(01000010) XOR 1 = C(01000011)
}                                       // 

int main(int argc, char* argv[]){

        int fd;
        if(fd=open("/home/mistake/password",O_RDONLY,0400) < 0){        // "<" has higher priority than "=", so the left part is evaluated first
                printf("can't open password %d\n", fd);                 // and the fd will be equal to 0, as open returns an fd (like 63), and (63<0)=false=0
                return 0;                                               // it comes to:   if(fd = 0) {exit}; else {proceed}
        }                                                               // this statement evaluates to false, so we proceed and fd=0 (stdin)

        printf("do not bruteforce...\n");
        sleep(time(0)%20);

        char pw_buf[PW_LEN+1];                     // pw_buf is array with size 11 (nullbyte terminator)
        int len;
        if(!(len=read(fd,pw_buf,PW_LEN) > 0)){     // read 10 bytes from fd=0 (stdin) to pw_buf.  On success, the number of bytes read is returned.
                printf("read error\n");            // if read operation did not suceed - !(len>0 = false)=true - than prind error and close fd
                close(fd);                         // is success, pw from password file is put into pw_buf
                return 0;
        }

        char pw_buf2[PW_LEN+1];
        printf("input password : ");
        scanf("%10s", pw_buf2);                   // take user input into pw_buf2
                                                  // apply xor function above
        // xor your input
        xor(pw_buf2, 10);

        if(!strncmp(pw_buf, pw_buf2, PW_LEN)){                  // compares the first 10 bytes of buf and buf2 (do not read nullbyte)
                printf("Password OK\n");                        // string compare returns 0 if equal, !(0) = 1 = TRUE 
                system("/bin/cat flag\n");                      // anything but equal strings will return false, !(123) = 0 = FALSE
        }
        else{
                printf("Wrong Password\n");
        }

        close(fd);
        return 0;
}
