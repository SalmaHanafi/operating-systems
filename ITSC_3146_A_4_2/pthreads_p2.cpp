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

int numbers [10];


void *countNegatives(void *arg){
   int *val_p = (int *) arg;
   int count = 0;
   for(int i = 0; i < 10; i++){
   if(val_p[i] <0){
      count = count +1;
   }
   }
   cout << "----------------" << endl;
   cout << "Total Negative Numbers: "<< count <<endl;
   return 0;
}

void *average(void *arg){
   int *val_p1 = (int *) arg;
   int sum = 0;
   for(int j = 0; j < 10; j++){
      sum = sum + val_p1[j];
   } 
   int avg = sum / 10 ;
   cout << endl;
   cout << "Average: " << avg <<endl;
   return 0;
}

void *reverse(void *arg){
   int *val_p2 = (int *) arg;
   cout << endl;
   cout << "The Numbers in reverse: " << endl;
   for(int x = 9; x >=0; x--){
      cout << val_p2[x] << endl;
   }
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
   int rc1, rc2, rc3;
   
   
   // TODO: Add code to perform any needed initialization
   //       or to process user input
   
   for(int i =0; i < 10; i++){
      cout << "Please enter an integer: ";
      cin >> numbers[i];
   }

   
   
   
   
  
   rc3 = pthread_create(&id, NULL, reverse, (void*)numbers);

   if (rc3){
      cout << "ERROR; return code from pthread_create() is " << rc3 << endl;
      return -1;
   }
   
    rc2 = pthread_create(&id, NULL, average, (void*)numbers);
   if (rc2){
      cout << "ERROR; return code from pthread_create() is " << rc2 << endl;
      return -1;
   }
   
   rc1 = pthread_create(&id, NULL, countNegatives, (void*)numbers);
   if (rc1){
      cout << "ERROR; return code from pthread_create() is " << rc1 << endl;
      return -1;
   }
   

   // NOTE: Using exit here will immediately end execution of all threads
   pthread_exit(0);
}
