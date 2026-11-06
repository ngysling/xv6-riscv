// Program that prints out running and sleeping processes 

#include "ps.h"

// int crsp(procInfo *uBuff, int max) {
int
main(void)
{
  procInfo *buff = malloc(NPROC * sizeof(procInfo));  
  memset(buff, 0, NPROC * sizeof(procInfo)); 
  if (buff == ((void*)0)) { 
    return -1; 
  } 
  //sleeping is 2, running is 4
  char* states[] = { [2] = "RUNNING", [4] = "SLEEPING" }; 
  int numProcesses = crsp(buff, NPROC); 
  printf( "name    pid    state\n"); 
  printf( "--------------------\n"); 
  printf("\n"); 
  for(int i = 0; i < numProcesses; i++) { 
    printf( "%s    %d    %s\n", buff[i].name, buff[i].pid, states[buff[i].state]); 
    printf( "\n"); 
  }
  return 0; 
}
