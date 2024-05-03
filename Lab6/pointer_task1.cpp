#include<iostream>
#include<string>

using namespace std;

int main(){
    int* pnt= new int;
    cout<< "Enter an integer\n";
    cin>> *pnt;
    string* ptext= new string;

    cout<<"Enter a string";
    cin.ignore();
    getline(cin, *ptext);

    cout <<"The value of the dynamically allocated integer is: "<<*pnt<<endl;
    cout <<"The value of the dynamically allocated string is: "<<*ptext<<endl;


}