#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int x = time(0);
    srand(x);
    int ram = 0 + rand() % 11;
        cout << ram << endl;
    
    if (ram < 1) {
        cout << "Your subscription has expired" << endl;
    } else if (ram == 1) {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20% !" << endl;
    } else if (ram <= 5) {
        cout << "Your subscription expires in " << ram << " days" << endl;
        cout << "Renew now and save 10%!" << endl;
    } else if (ram <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else {
        cout << "You have an active subscription" << endl;
    }

    return 0;
}
