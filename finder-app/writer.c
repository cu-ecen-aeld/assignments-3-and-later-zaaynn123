
#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>
#include <string.h>



int main(int argc, char* argv[])

{

  openlog(NULL,0,LOG_USER);
  
  if( (argc - 1) == 2) {
     syslog(LOG_ERR, "Correct number of arguments entered!");
     }
  else {
     syslog(LOG_ERR, "Incorrect number of arguments entered!");
  return 1;
  }
  
  char* writefile = argv[1];
  char* writestr = argv[2];
  
  if( strlen(writefile) == 0 || strlen(writestr) == 0)
  {
  syslog(LOG_ERR, "Parameters not passed!");
  return 1;
   }
   
 FILE* directory;
 directory = fopen(writefile, "w");
 if (directory == NULL)
 {
 syslog(LOG_ERR, "File not created");
 return 1;
 }
 
 fprintf(directory,"%s\n",writestr);
 fclose(directory);
 
 syslog(LOG_DEBUG,"Writing '%s' to '%s'",writestr,writefile);
 
 printf("Task Done!");
 
 closelog();
 
 return 0;
 
 
 
}

