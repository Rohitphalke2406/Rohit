#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter Age of the User : ";
    cin>>age;
    
    if(age>=18)
    {
        cout<<"You are eligible to Vote"<<endl;
    }
    else
    {
        cout<<"You are not eligible to vote"<<endl;
    }
    return 0;
}