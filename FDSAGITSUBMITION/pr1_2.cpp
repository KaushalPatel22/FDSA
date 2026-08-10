#include<iostream>
#include<string>
using namespace std;

int main()
{
    string sen;
    cout<<"enter sentance :";
    getline(cin,sen);

    string word = "";
    string longest ="";

    for(int i=0;i<=sen.length();i++)
    {
        if(sen[i]== ' ' || sen[i]=='\0')
        {
            if(word.length()>longest.length())
            {
                longest=word;
            }
            word = "";
        }
        else
        {
            word += sen[i];
        }
    }
        cout<<"longest word :"<<longest<<endl;
        cout<<"number of word :"<<longest.length();
    return 0;
}
