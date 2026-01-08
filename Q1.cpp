
#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int seats[20][20] = {};

    cout <<endl<<"-- CINEMA SEAT MAP --"<<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "(" << i+1 << "-" << j+1 << ") ";
        }
        cout << endl;
    }

    int choice = 1;

    while (choice == 1) {
        int r, c;

        cout << "\nEnter row for booking: ";
        cin >> r;
        cout << "Enter column for booking: ";
        cin >> c;
        r--;
        c--;
        if (r < 0 || r > row || c < 0 || c > col) {
            cout <<endl<< "Invalid seat! Try again."<<endl;
        }
        else if (seats[r][c] == 1) {
            cout << "This seat is already BOOKED!"<<endl;
        }
        else {
            seats[r][c] = 1;
            cout << "Seat booked successfully!"<<endl;
        }

        cout <<endl<< "-- UPDATED CINEMA MAP --"<<endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (seats[i][j] == 0)
                    cout << "(" << i+1 << "-" << j+1 << ") ";
                else
                    cout << "(X) ";
            }
            cout << endl;
        }

        cout << endl<<"Press 1 to book another seat, 0 to exit: ";
        cin >> choice;
        if (choice !=1 || choice !=0){
            cout<<"Invalid Choice";
        }
    }

    cout << endl<<"Thank you for using the Cinema Booking System"<<endl;

    return 0;
}

