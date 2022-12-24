#include<iostream>
using namespace std;
main()
{
int subject1Marks;
int subject2Marks;
int subject3Marks;
int subject4Marks;
int subject5Marks;
int obtainedMarks;
string name;
float totalPercentage;
cout<<"enter your name"<<endl;
cin>>name;
cout<<"enter sybject 1 marks"<<endl;
cin>>subject1Marks;
cout<<"enter subject 2 marks"<<endl;
cin>>subject2Marks;
cout<<"enter sybject 3 marks"<<endl;
cin>>subject3Marks;
cout<<"enter sybject 4 marks"<<endl;
cin>>subject4Marks;
cout<<"enter sybject 5 marks"<<endl;
cin>>subject5Marks;
obtainedMarks=subject1Marks+subject2Marks+subject3Marks+subject4Marks+subject5Marks;
totalPercentage=(obtainedMarks*100)/500;
cout<<"your percentage is"<<totalPercentage;
}