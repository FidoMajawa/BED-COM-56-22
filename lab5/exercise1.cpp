#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Generate a random number between 0 and 11 for days until expiration
    int daysUntilExpiration = rand() % 12;

    
    if (daysUntilExpiration <= 0) {
        cout << "Your subscription has expired." << endl;
    } 

    else if (daysUntilExpiration <= 1) {
        cout << "Your subscription expires within a day! \n Renew now and save 20%! " << endl;
    } 

    else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days. \n Renew now and save 10%!" << endl;
    } 
    else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } 

    else {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}
