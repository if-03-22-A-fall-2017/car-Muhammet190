/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

typedef struct CarImplementation *Car;

enum CarType {AIXAM, FIAT_MULTIPLA, JEEP};
enum Color {RED, GREEN, BLUE, ORANGE, SILVER, BLACK};


CarType get_type (Car c1);
Color get_color(Car c1);
float get_fill_level(Car c1);
float get_acceleration_rate(Car c1);
Car get_car (CarType type);
int get_speed(Car c1);
void set_acceleration_rate(Car c1,int number);
void accelerate(Car c1);
void init();


#endif
