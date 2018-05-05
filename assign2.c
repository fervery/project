#include<unistd.h>
#include<stdio.h>
#include<sys/syscall.h>
#include<sys/types.h>
 
   int main (int arge , char *argv[])
   {
     
        printf("Thread Id Is: %ld\n" , syscall(SYS_gettid));
     
        return 0;
   }