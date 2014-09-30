#include <iostream>

using namespace std;

int main()
{
    cout << getpid() << endl;
    cout << getppid() <<endl;
    cout << fork() << endl;
    return 0;
}