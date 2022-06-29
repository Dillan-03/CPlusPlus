#include <iostream>
using namespace std;

void saysHi(string name);

int main()
{
    saysHi("Dillan");

    return 0;
}

void saysHi(string name){
    cout << "Hello " << name << endl;
}