=#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[100];
    int letter[123] = {0};

    cout<<endl<<"Input a String : ";
    cin.getline(s,100);
    cout<<endl;

    int len = strlen(s);

    for(int i=0; i<len; i++)
        letter[int(s[i])]++;

    /// Displaying number of occurrence of Upper Case Letters
    for(int i=65; i<=90; i++)
        if(letter[i])
            cout<<" "<<char(i)<<" = "<<letter[i]<<endl;

    cout<<endl;

    /// Displaying number of occurrence of Lower Case LetterS
    for(int i=97; i<=122; i++)
        if(letter[i])
            cout<<" "<<char(i)<<" = "<<letter[i]<<endl;

    return 0;
}
