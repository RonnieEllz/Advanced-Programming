#include<iostream>
#include<fstream>
using namespace std;

int main(){
        //createsand opens the file
    ofstream MyFile("exampleFile.txt");

    //close the file
    MyFile.close();
    return 0;
}