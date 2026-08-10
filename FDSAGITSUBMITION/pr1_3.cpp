#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"enter number of book record: ";
    cin>>n;

    int arr[n];

    cout<<"enter id of book: ";

    for(int i=0; i < n ; i++)
    {
        cin>>arr[i];
    }

    cout<<"duplicate numbers are :";

    for(int i=0 ; i < n ; i++)
    {
        for(int j= i+1 ; j < n ; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<endl;
                break;
            }
        }
    }
}
