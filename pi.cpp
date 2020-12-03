#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int terms(1);
    double pivalue(0);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(5);

    cout << "Enter the number of terms to approximate "
             << "(or zero to quit):" << endl;
    cin >> terms;

    while (terms > 0) {


        //the count starts at 1 and ends in terms+1, 
        //because if the user enters "1 term," they're technically
        //finding the value of 2 terms...
        for (double count = 1; count <= terms+1; count++) {
            pivalue += pow(-1,count+1)*(4/(2*count-1));
        }

        cout << "The approximation for Leibniz's Formula is " <<  pivalue
             << " using " << terms << " terms." << endl;

        pivalue = 0;

        //asking this at the end so that the loop doesn't calculate pivalue
        //if 0 is entered
        cout << "Enter the number of terms to approximate "
             << "(or zero to quit):" << endl;
        cin >> terms;

    }

return 0;
}
