#ifndef PROCINFO_H
#define PROCINFO_H

typedef struct { 
  int pid; 
  char name[16];
  int state;
} procInfo; 

#endif
