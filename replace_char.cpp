#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream file ("random.txt");
    file.seekg(12, ios::beg);
    file.put('M');
    file.seekg(0, ios::beg);
    string text;
    getline(file, text);
    cout<< text << endl;

    return 0;

}