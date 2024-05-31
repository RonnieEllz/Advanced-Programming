#include<iostream>
#include<fstream>
#include<string>
#include<Incredients.h>
using namespace std;

int main(){
     string line;
     ofstream myfile("Cake.txt");

     if (myfile.is_open())
     {
        while(getline(myfile,line))
        {
            cout<<The ingredients have been inserted <<'\n';
        }
        myfile.close();
     }
     else
     {
        cout<< "Could not be saved"
     }
     return 0;
}
