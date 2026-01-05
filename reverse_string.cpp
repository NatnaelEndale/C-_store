# include <iostream>
using namespace std;

string reverse(string & s)
{
    static string reverse_s = "";
    if(s.size() == 0) return "";
    char last = s[s.size() -1];
    s.erase(s.size()-1, 1);
    return last + reverse(s);

}

int main(){
    string name;
    cout << "Enter your name: ";
    cin >> name;

    cout << "The reverse of your name is: "<<reverse(name);

    return 0;
}