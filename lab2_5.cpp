# include <iostream>
using namespace std;
const double PI = 3.1413;

int area (int a){
    return a * a;
}
double area (double radius){
    return PI * (radius * radius);
}

int area (int a, bool is_cube){
    if (is_cube) {
        return 6 * a * a;
    }else return 0;

}
int main () {
    cout <<"Area of the square: "<< area(2)<< endl;
    cout <<"Area of the circle: "<< area(2.0)<< endl;
    cout <<"Surface Area of the cube: "<< area(2, false)<< endl;
}
