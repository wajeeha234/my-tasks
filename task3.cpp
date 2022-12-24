#include<iostream>
using namespace std;
main()
{

int finalVelocity;
int initialVelocity;
int time;
int acceleration;
cout<<"Enter initial velocity";
cin>>initialVelocity;
cout<<"Enter acceleration";
cin>>acceleration;
cout<<"Enter time";
cin>>time;
finalVelocity=acceleration*time+initialVelocity;
cout<<"final velocity is:"<<finalVelocity;

}