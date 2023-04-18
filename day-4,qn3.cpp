#include<iostream>
using namespace std;
int main()
{
    int number,count=0;
    cout<<"Enter a number: ";
    cin>>number;
    for(int a=1;a<=number;a++)
    {
        if(number%a==0)
            count++;
    }
    if(count==2)
        cout<<"\t"<<number<<" IS A PRIME NUMBER \n";
    else
        cout<<"\t"<<number<<" IS A COMPOSITE NUMBER \n";
    return 0;
}