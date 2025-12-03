# include <iostream>
using namespace std;

void changeName(string & name){
    name = "Jen";
}

int main(){
    string her_name = "Angela";
    cout << "Before changing the name :"<< "\n";
    cout << her_name<<"\n";
    changeName(her_name);
    cout << "After changing the name :"<< "\n";
    cout << her_name<<"\n";


    return 0;

}