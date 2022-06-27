#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string color, plural_Noun, celebrity;

    cout << "Enter a color: ";
    getline(cin,color);

    cout <<"Enter a plural noun: ";
    getline(cin,plural_Noun);

    cout << "Enter a celebrity: ";
    getline(cin,celebrity);

    cout <<"Roses are " << color << "." << endl;
    cout <<plural_Noun << " are blue." << endl;
    cout <<"I love " << celebrity << "."<<endl ;

    return 0;
}
