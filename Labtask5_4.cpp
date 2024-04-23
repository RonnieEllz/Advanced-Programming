#include<iostream>
#include<limits>
using namespace std;
int main(){
bool valid=false;
int user_in;
   cout<<"Enter an integer between 5 and 10"<<endl;
 while(!valid){
    
   cin>>user_in;
  if(cin.fail()){

  cout<<"Sorry you have entered an invalid number, please try again!"<<endl;

  cin.clear();cin.ignore(numeric_limits<streamsize>::max(), '\n');
   continue;
        }
    else if (user_in < 5 || user_in >10){
        cout<<"You have entered the "<<user_in<<". please enter a number between 5 and 10";

    }
    else{
        user_in=true;
        break;
    }
 }
    cout<<"Valid number recieved: "<<user_in<<endl;
 return 0;
}