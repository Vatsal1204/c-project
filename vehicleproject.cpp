#include <iostream>
using namespace std;

class vehicle {
public:
    int vehicle_id;
    string manufacturer;
    string model;
    int year;

    void setData(int vehicle_id, string manufacturer, string model, int year) {
        this->vehicle_id = vehicle_id;
        this->manufacturer = manufacturer;
        this->model = model;
        this->year = year;
    }

    void getData() {
        cout << "Vehicle ID: " << vehicle_id 
        << " Manufacturer: " << manufacturer 
        << " Model: " << model 
        << " Year: " << year << endl;
    }
};

class car : virtual public vehicle {
public:
    string fuel_type;

    void setData(int vehicle_id, string manufacturer, string model, int year, string fuel_type) {
        vehicle::setData(vehicle_id, manufacturer, model, year);  
        this->fuel_type = fuel_type;
    }

    void getData() {
        vehicle::getData();
        cout << "Fuel Type: " << fuel_type << endl;
    }
};

class suv : public car {
};
class sedan : public car {
};

class electric : virtual public car {
public:
    int battery_capacity;

    void setData(int vehicle_id, string manufacturer, string model, int year, string fuel_type, int battery_capacity) {
        car::setData(vehicle_id, manufacturer, model, year, fuel_type);
        this->battery_capacity = battery_capacity;
    }

    void getData() {
        car::getData();
        cout << "Battery Capacity: " << battery_capacity << " mAh" << endl;
    }
};

class sportscar : public electric {
public:
    int top_speed;

    void setData(int vehicle_id, string manufacturer, string model, int year, string fuel_type, int battery_capacity, int top_speed) {
        electric::setData(vehicle_id, manufacturer, model, year, fuel_type, battery_capacity);
        this->top_speed = top_speed;
    }

    void getData() {
        electric::getData();
        cout << "Top Speed: " << top_speed << " km/h" << endl;
    }
};

class aircraft {
public:
    int flying_range;

    void setData(int flying_range) {
        this->flying_range = flying_range;
    }

    void getData() {
        cout << "Flying Range: " << flying_range << " km" << endl;
    }
};

class flying_Car : public car, public aircraft {
public:
    void setData(int vehicle_id, string manufacturer, string model, int year, string fuel_type, int flying_range) {
        car::setData(vehicle_id, manufacturer, model, year, fuel_type);  
        aircraft::setData(flying_range);
    }

    void getData() {
        car::getData();
        aircraft::getData();
    }
};

int main() {
    car c;
    c.setData(123, "Porsche", "911", 2000, "Petrol");
    c.getData();

    electric e;
    e.setData(456, "Tesla", "Model S", 2022, "Electric", 10000);
    e.getData();

    sportscar s;
    s.setData(789, "Ferrari", "F8", 2023, "Petrol", 8000, 350);
    s.getData();

    aircraft a;
    a.setData(5000);
    a.getData();

    flying_Car fc;
    fc.setData(321, "AeroMobil", "Flying Car", 2025, "Hybrid", 600);  
    fc.getData();

    return 0;
}
