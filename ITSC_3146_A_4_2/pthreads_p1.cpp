/*
 @file: pthreads_skeleton.cpp
 
 @author: student name1, student2@uncc.edu
 @author: student name2, student2@uncc.edu
 @author: student name3, student3@uncc.edu
 
 @description: A program that demonstrates processes.
 
 @course: ITSC 3146
 @assignment: in-class activity [n]
 */

#include <pthread.h>
#include <iostream>
using namespace std;


// This function shows the skeleton that pthread 
// functions must adhere to. 
// Copy this skeleton for any pthread function 
// you need to define. 
// In the copy, modify the name of the function 
// and the function body as needed. 
const char* my_messages[4] = {"English: Hello!", "French: Bonjour!", "Spanich: Hola!", "German: Guten Tag!"};


void *printMessage(void *index){
   cout <<  my_messages[*((int*)index)]  << endl;
   return 0;
}



int main()
{
   // id is used to store a unique thread identifier,
   // returned by the call to create a new POSIX thread
   pthread_t id;
   
   // rc is used to store the code returned by the
   // call to create a new POSIX thread. The value is
   // zero (0) if the call succeeds.
 
  
   
   // TODO: Add code to perform any needed initialization
   //       or to process user input
   
    // Create thread(s)
   // TODO: Modify according to assignment requirement

   
   
   int rc;
   for (int i = 0; i < 4; i++) {
    rc = pthread_create(&id, NULL, printMessage, (void*) &i);
    pthread_join(id, 0);
    if(rc){
        cout << "ERROR; return code from pthread_create() is " << rc << std::endl;
      return -1;
    }
  
   }
     
   // NOTE: Using exit here will immediately end execution of all threads
   pthread_exit(0);
   return 0;
}
