#include <iostream>
using namespace std;

class hotel_reservation {
public:
    int room_number;
    string name;
    string check_in_date;
    string check_out_date;
    string room_type;

    hotel_reservation() {}

    hotel_reservation(int room_number, string name, string check_in_date, string check_out_date, string room_type) {
        this->room_number = room_number;
        this->name = name;
        this->check_in_date = check_in_date;
        this->check_out_date = check_out_date;
        this->room_type = room_type;
    }

    void display() {
        cout << "\n----- Reservation Details -----\n";
        cout << "Room number: " << room_number << endl;
        cout << "Name: " << name << endl;
        cout << "Check-in date: " << check_in_date << endl;
        cout << "Check-out date: " << check_out_date << endl;
        cout << "Room type: " << room_type << endl;
    }
};

int main() {
    hotel_reservation arr[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details for reservation " << (i + 1) << ":\n";
        int room_number;
        string name, check_in_date, check_out_date, room_type;

        cout << "Enter room number: ";
        cin >> room_number;
        cin.ignore();

        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter check-in date: ";
        getline(cin, check_in_date);

        cout << "Enter check-out date: ";
        getline(cin, check_out_date);

        cout << "Enter room type: ";
        getline(cin, room_type);

        arr[i] = hotel_reservation(room_number, name, check_in_date, check_out_date, room_type);
    }

    cout << "\n========== All Reservations ==========\n";
    for (int i = 0; i < 3; i++) {
        arr[i].display();
    }

    return 0;
}
