#include <iostream>
using namespace std;



int main()
{
    string name = "";

    do{
        cout << "What is your name? ";
        cin >> name;
        if(name == "exit"){
            cout << "Goodbye!" << std::endl;
            break;
        }
        cout << "Hello, " << name << "!" << std::endl;

    } while(true);

    return 0;
}
