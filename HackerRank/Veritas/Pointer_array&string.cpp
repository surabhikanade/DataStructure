#include<iostream>
#include<algorithm>
#include<string>
using namespace std ;

int main()
{
    char charArray[5] = {'h','e','l','l','o'};
    int intArray[5] = {1,2,3,4,5};

    char* pchar = charArray;
    int* pInt = intArray;

    for (int i=0 ;i<5; i++)
    {
        cout<< *pchar <<"----"<< *pInt <<endl;
        pchar++;
        pInt++;
    }
}