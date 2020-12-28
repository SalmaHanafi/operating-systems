#include <iostream>
#include <cmath>
using namespace std;

struct Point{
    float x, y;
};

float calculateDistance(Point* a1, Point* a2){
    float distance = sqrt(pow(((*a2).x - (*a1).x), 2.0) + pow(((*a2).y - (*a1).y), 2.0));
    return distance;
}
int main(){
    struct Point p1;
    struct Point p2;
    cout << "Enter first dimension of the first point (x1): ";
    cin >> p1.x;
    cout << "Enter second dimension of the first point (y1): ";
    cin >> p1.y;
    cout << "Enter first dimension of the second point (x2): ";
    cin >> p2.x;
    cout << "Enter second dimension of the second point (y2): ";
    cin >> p2.y;
    cout<< "The distance equals " << calculateDistance(&p1,&p2)<< endl;
}