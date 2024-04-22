#include<cstdlib>
#include<iostream>

using namespace std;

int main() 
{ int x = time(0);
  int ram,
    srand(x);
     ram = 0 + rand()%11;
  if (ram<1)
   cout<<"Your subscription has expired";
   else if (ram==1)
   cout<<"Your subscription expires within a day!"<<endl;
   cout<<"Renew now and save 20% !"<<endl;} 
    else if (ram<=5)
   cout<<"Your subscription expires in "<<ram<<"days"<<endl;
   cout<<" Renew now and save 10%!"; 
    if(ram<=10)
   cout<<"Your subscription will expire soon. Renew now!";
   else{
    cout<<"You have an active subscription";
   }
}