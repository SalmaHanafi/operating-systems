#include <iostream>
using namespace std;

/**
 * change method is used to switch the  
 *position of two elements. it is called in 
 * main() method for bubble sort
 */
 
void change(int *first, int *second){
    int temp = *first;
    *first = *second;
    *second = temp;
}//end change

int main(){
     int arrSize = 10;
     int arr[10];
     int y;
for (int x = 0; x < 10; x++) {
         cout << "Please enter an integer:";
         cin >> y;
         arr[x] = y;
}
cout << "Numbers in reverse order:\n";
for(int i = 9; i >= 0; i--){
    cout<< arr[i];
    cout<< " ";
}

for(int x = 0; x < arrSize -1; x++){
    for(int z = 0; z < arrSize - x -1; z++){
           if (arr[z] > arr[z+1]){ 
            change(&arr[z], &arr[z+1]);  
           }
      } 
}

cout << "\nSorted Numbers:\n";
for(int k = 0; k <10 ; k++){
    cout<< arr[k];
    cout << " ";
}

return 0;
} //end main

