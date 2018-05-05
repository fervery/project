#include<stdio.h>
#include<unistd.h>

    int main()
{ 

      
      printf("Process id : %ld\n" , getpid());
      printf("User id : %ld\n" , getuid());
      printf("group id : %ld\n" , getgid());
      printf("Parent Process Id : %ld\n" , getppid());
      return 0;
    


}