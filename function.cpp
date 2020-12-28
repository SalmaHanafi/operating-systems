#include <iostream>
using namespace std;

void swapInts(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    
}

int main(){
    int num1 = 0, num2 =0;
    cout << "Please enter a number \n";
    cin >> num1;
    cout << "Please enter another number \n";
    cin >> num2;
    swapInts(&num1, &num2);
     cout << "Swapped values: " << num1 << " and " << num2<< endl;
}