#include <iostream>
using namespace std;

int main(){
    
    int x;
    int my_ints[4];
    int * my_ptrs[4];
    for(int i = 0; i < 4; i++){
        cout << "Enter an integer: ";
        cin >> x;
        my_ints[i] = x;
        my_ptrs[i] = &my_ints[i];
    }
    
    
   cout << "my_ints array: ";
    for(int x = 0; x <4; x++){
        cout<< " ";
        cout<< my_ints[x];
    }
    
    for(int y = 0; y < 3; y++){
        for(int z = 0; z< 3-y; z++){
            if(*my_ptrs[z] > *my_ptrs[z+1]){
                int *temp = my_ptrs[z];
                my_ptrs[z] = my_ptrs[z+1];
                my_ptrs[z+1] = temp;
                
            }
        }
    }
    
    cout << endl;
    cout<<"Sorted pointers (my_ptrs) array: ";
    for(int x = 0; x <4; x++){
        cout<<  *my_ptrs[x] << " ";
    }
    
     cout<<endl;    
     cout << "Integers (my_ints) array after sorting my_ptrs array: ";
    for(int x = 0; x <4; x++){
        
        cout<< my_ints[x]<< " ";
    }
    
}

