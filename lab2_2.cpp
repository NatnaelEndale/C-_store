# include <iostream>
using namespace std;

void f(int & x, int & y) {
     int z = x;
     x = y;
     y = z;
    }

int main() { 
    int a = 10;
    int b = 20;
    cout << "a before call: "<< a << endl;
    cout << "b before call"<< b << endl;
    f(a, b);
    cout << "a after call: "<< a << endl;
    cout << "b after call: "<< b << endl;

}