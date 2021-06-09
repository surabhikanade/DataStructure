#include<iostream>

using namespace std;

int main()
{
    char c;
    cout<<"Enter a character"<<endl;
    cin>>c;
    
    // if(c=='a' || c=='A'  || c=='e'  || c=='E'  || c=='i'  || c=='I'  || c=='o'  || c=='O'  || c=='u'  || c=='U' )
    // {
    //     cout<<"Vowel"<<endl;
    // }
    // else
    // {
    //     cout<<"Consonant"<<endl;
    // }

    switch(c)
    {
        case 'a':
            cout<<"Vowel";
            break;

        case 'A':
            cout<<"Vowel";
            break;

        case 'e':
            cout<<"Vowel";
            break;

        case 'E':
            cout<<"Vowel";
            break;

        case 'i':
            cout<<"Vowel";
            break;   

        case 'o':
            cout<<"Vowel";
            break;

        case 'O':
            cout<<"Vowel";
            break;

        case 'u':
            cout<<"Vowel";
            break;
            
        case 'U':
            cout<<"Vowel";
            break;
        
        default:
            cout<<"Consonant";
            break;
    }
}