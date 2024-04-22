#include<cstdlib>
#include<iostream>

using namespace std;

int main() 
{ int x = time(0);
  int ram,
    srand(x);
     ram = 0 + rand()%11;
  if (5>ram<11)
   cout<<"Your subscription will expire soon. Renew now!";
   else if (1>ram<6)
   cout<<"Your subscription expires in "<<ram<<" Renew now and save 10%!";
   else if (ram==1){
   cout<<"Your subscription expires within a day!"<<endl;
   cout<<"Renew now and save 20% !"<<endl;}
   else{
    cout<<"You have an active subscription";
   }
}