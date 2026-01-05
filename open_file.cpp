#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream in("random.txt");
  if(in){
    cout<<"position of get pointer at: "<<in.tellg()<<endl;
    string text;
    getline(in,text);
    cout<<text<<endl;
    in.seekg(23, ios::beg);
    cout<<"position of get pointer at: "<<in.tellg()<<endl;
    // string text;
    getline(in,text);
    cout<<text<<endl;
    in.seekg(-11, ios::cur);
    cout<<"position of get pointer at: "<<in.tellg()<<endl;
    getline(in,text);
    cout<<text<<endl;
    in.seekg(0, ios::end);
    cout<<"The size of file is: "<<in.tellg()<<"bytes" <<endl;
    getline(in,text);
    cout<<text;
    in.seekg(8, ios::beg);
    char ch;
    cout << "Three middle characters: ";
    for(int i=0; i<=3; i++){
        in.get(ch);
        cout << ch;
    }
  }
  else{
    cout<<"error!\n";
  }
}