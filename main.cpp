#include<iostream>
using namespace std;
int main()
{
    char vowels[]{'a','e','i','o','u'};
    cout<<"\nThe first vowel is:"<<vowels[0]<<endl;
    cout<<"\nThe last vowel is:"<<vowels[4]<<endl;
    //cin>>vowels[5]; out of bound

    cout<<"==================================="<<endl;
    double hi_temp[]{90.1,89.9,77.5,81.6};
    cout<<"\nThe first high temperature is:"<<hi_temp[0]<<endl;
    hi_temp[0]=100.7;//assigning

    cout<<"The first high temperature is now:"<<hi_temp[0]<<endl;

    return 0;
}
