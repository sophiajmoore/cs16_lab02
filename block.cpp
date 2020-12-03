#include <iostream>
using namespace std;

int main() {
    int number_rows, number_columns;

    do {
        cout << "Enter number of rows and columns:" << endl;
        cin >> number_rows
            >> number_columns;

        //repeats number of columns loop until number of rows is fulfilled
        for(int count = 0;count < number_rows;count++) {
            //repeats cout statement until number of columns is fulfilled
            for(int count = 0;count < number_columns;count++) {
                cout << "X."; 
            }
            cout << endl; 
        }

    } while( !((number_rows == 0) && (number_columns == 0)) );
      //code runs while NOT(rows AND columns equal 0)

    return 0;
}
