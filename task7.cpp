#include<iostream>
using namespace std;
main()
{
string movieName;
int adultTicketPrice;
int childTicketPrice;
int numOfSoldAdultTicket;
int numOfSoldChildTicket;
float percentageToDonates;
int totalAmount;
int amountAfterDonation;
cout<<"enter movie name"<<endl;
cin>>movieName;
cout<<"enter adult ticket prices:"<<endl;
cin>>adultTicketPrice;
cout<<"enter child ticket prices:"<<endl;
cin>>childTicketPrice;
cout<<"enter number of adult ticket sold:"<<endl;
cin>>numOfSoldAdultTicket;
cout<<"enter number of child ticket sold:"<<endl;
cin>>numOfSoldChildTicket;
cout<<"enter percentage to donate"<<endl;
cin>>percentageToDonates;
totalAmount=(adultTicketPrice*numOfSoldAdultTicket)+(childTicketPrice*numOfSoldChildTicket);
amountAfterDonation=totalAmount-((totalAmount*percentageToDonates)/100);
cout<<"total amount generated"<<totalAmount*percentageToDonates;
cout<<"total amount after donation"<<amountAfterDonate<<endl;
}
