#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string vehicleType;
    string vehicleID;
    double mileage;
    time_t lastMaintenanceDate;

public:
    Vehicle(string type, string id, double mileage, time_t lastMaintenanceDate)
        : vehicleType(type), vehicleID(id), mileage(mileage), lastMaintenanceDate(lastMaintenanceDate) {}

    virtual double calculateServiceCharges() const = 0;
    virtual void displayMaintenanceSchedule() const = 0;
};

class Car : public Vehicle {
public:
    Car(string id, double mileage, time_t lastMaintenanceDate)
        : Vehicle("Car", id, mileage, lastMaintenanceDate) {}

    double calculateServiceCharges() const override {
        // Example calculation for car service charges based on mileage
        return 50 + 0.1 * mileage;
    }

    void displayMaintenanceSchedule() const override {
        cout << "Car maintenance schedule:\n";
        cout << "1. Oil change every 5000 miles\n";
        cout << "2. Tire rotation every 10000 miles\n";
        cout << "3. Brake check every 20000 miles\n";
    }
};

class Truck : public Vehicle {
public:
    Truck(string id, double mileage, time_t lastMaintenanceDate)
        : Vehicle("Truck", id, mileage, lastMaintenanceDate) {}

    double calculateServiceCharges() const override {
        // Example calculation for truck service charges based on mileage
        return 100 + 0.2 * mileage;
    }

    void displayMaintenanceSchedule() const override {
        cout << "Truck maintenance schedule:\n";
        cout << "1. Oil change every 10000 miles\n";
        cout << "2. Tire replacement every 50000 miles\n";
        cout << "3. Brake inspection every 25000 miles\n";
    }
};

class Motorcycle : public Vehicle {
public:
    Motorcycle(string id, double mileage, time_t lastMaintenanceDate)
        : Vehicle("Motorcycle", id, mileage, lastMaintenanceDate) {}

    double calculateServiceCharges() const override {
        // Example calculation for motorcycle service charges based on mileage
        return 30 + 0.15 * mileage;
    }

    void displayMaintenanceSchedule() const override {
        cout << "Motorcycle maintenance schedule:\n";
        cout << "1. Oil change every 3000 miles\n";
        cout << "2. Chain lubrication every 1000 miles\n";
        cout << "3. Brake fluid replacement every 5000 miles\n";
    }
};

int main() {
    time_t now = time(nullptr);
    
    Car car("C001", 20000, now);
    Truck truck("T001", 50000, now);
    Motorcycle motorcycle("M001", 10000, now);

    cout << "Service Charges:\n";
    cout << "Car: $" << car.calculateServiceCharges() << endl;
    cout << "Truck: $" << truck.calculateServiceCharges() << endl;
    cout << "Motorcycle: $" << motorcycle.calculateServiceCharges() << endl;

    cout << "\nMaintenance Schedules:\n";
    car.displayMaintenanceSchedule();
    truck.displayMaintenanceSchedule();
    motorcycle.displayMaintenanceSchedule();

    return 0;
}
