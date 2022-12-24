#include<iostream>
using namespace std;
main()
{
int bagSize;
int bagCost;
int area;
int costPerpound;
int areaPerfeet;
cout<<"enter bag size in pounds";
cin>>bagSize;
cout<<"enter cost of the price";
cin>>bagCost;
cout<<"enter area covered by each bag in square feet"<<endl;
cin>>area;
costPerpound=(bagCost/bagSize);
areaPerfeet=(bagSize*area);
cout<<"cost of fertilizer per pound"<<costPerpound<<endl;
cout<<"cost of fertilizing the area per square feet"<<areaPerfeet<<endl;
}