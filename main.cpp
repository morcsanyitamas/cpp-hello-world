#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string name = "";

    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            cout << "Hello " << argv[i] << std::endl;
        }
    }

    return 0;
}
