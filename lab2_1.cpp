#include <iostream>
using namespace std;

void f(int x, int y) {
    x = x + 5;
    y = y * 2;
    cout << "x inside the function: " << x << endl;
    cout << "y inside the function: " << y << endl;
}

int main() { 
    int a = 10;
    int b = 20;
    cout << "a before call"<< a << endl;
    cout << "b before call"<< b << endl;
    f(a, b);
    cout << "a after call"<< a << endl;
    cout << "b after call"<< b << endl;

}
