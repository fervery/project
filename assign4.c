#include<stdio.h>
#include<unistd.h
#include<sys/types.h>

int main (void)
  
{
  int childpid;   
  childpid = fork();
  if(childpid== -1){
    perror("child not created");
    return 0;
  }
   if(childpid == 0)
     printf("Child Id is:" (long)getpid());
    else
      printf
  
  
}
