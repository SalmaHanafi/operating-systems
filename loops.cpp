#include <iostream>
using namespace std;

int main(){
    int y;
    int sum = 0, positiveC = 0 , negativeC = 0, zerosC = 0;
    float average;
    
    for (int x = 1; x <= 10; x++) {
         cout << "Please enter an integer:";
         cin >> y;
         if(y>0){
             positiveC = positiveC + 1;
         }
         else if(y<0){
             negativeC = negativeC + 1;
         }
         else{
             zerosC = zerosC + 1;
         }
         sum = sum + y;
         }
         
         average = sum/10.0;
         cout <<"Count of positive numbers entered: " << positiveC <<endl;
         cout <<"Count of negative numbers entered: " << negativeC <<endl;
         cout <<"Count of zeroes entered: " << zerosC <<endl;
         cout <<"Sum of all numbers entered: " << sum <<endl;
         cout <<"Average of numbers entered: " << average <<endl;
         
         }
 
    
    
    
    
