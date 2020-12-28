#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Please enter a number \n";
    cin >>x;
    
    
    if(x>=90){
        cout<<"Grade: A" << endl;
    }
    else if (x>=80){
        cout<<"Grade: B" << endl;
    }
    else if(x>=70){
        cout<<"Grade: C" << endl;
    }    
    else if (x>=60){
        cout<<"Grade: D"<< endl;
    }
    else{
        cout<<"Grade: F" << endl;
    }
    
    return 0;
    }
    

