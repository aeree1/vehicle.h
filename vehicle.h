#include <string>

using namespace std;




class Vehicle{
public:
   Vehicle(); 
   Vehicle(string vehicle_class, string origin, int year, string color); 
   // Getter(s), setter(s) --- missing

   string getvehicle_Class () {
return vehicle_class;
}

string getOrigin () {
return origin;
}

string getColor() {
return color;
}

int getYear() {
return year;
}
    void setVehicle_Class (string vclass) {
vehicle_class = vclass;
}

void setOrigin (string orig) {
origin = orig;
}

void setColor (string col) {
color = col;
}

void setYear (int y) {
year = y;
}

Vehicle(Vehicle &o) {
setVehicle_Class(o.getvehicle_Class());
setOrigin(o.getOrigin());
setColor(o.getColor());
setYear (o.getYear());
}

Vehicle& operator= (Vehicle &o) {
if (this == &o ){
return *this;
}

setVehicle_Class(o.getvehicle_Class());
setOrigin(o.getOrigin());
setColor(o.getColor());
setYear (o.getYear());

return *this;
}

~Vehicle() {

}

private:
   string vehicle_class, origin, color;
   int year; };





class Car : public Vehicle {
public:
Car () {
ED = 0;
HP = 0;
}
Car (double e, int h) : ED (e), HP (h) {
}

double getED () {
return ED;
}

int getHP () {
return HP;
}

void setED (double e) {
ED = e;
}

void setHP (int h) {
HP = h;
}

private:
double ED;
int HP;
};
