#include "car.h"
#include <stdlib.h>
#include <stdio.h>
#define SIZE 6

struct CarImplementation
{
CarType type;
Color color;
int speed;
float fill_level;
float acceleration_rate;
};
struct Rent{
  Car car;
  bool is_rent;
};

struct CarImplementation c1 = {AIXAM,RED,16.0,0.0,0};
struct CarImplementation c2 = {FIAT_MULTIPLA,GREEN,65.0,0.0,0};
struct CarImplementation c3 = {FIAT_MULTIPLA,BLUE,65.0,0.0,0};
struct CarImplementation c4 = {FIAT_MULTIPLA,ORANGE,65.0,0.0,0};
struct CarImplementation c5 = {JEEP,SILVER,80.0,0.0,0};
struct CarImplementation c6 = {JEEP,BLACK,80.0,0.0,0};

static Rent car_park[] = {{&c1, false},{&c2, false},{&c3, false}, {&c4, false}, {&c5, false}, {&c6, false}};


int round(double speed){
  return (speed+0.5);
}

CarType get_type (Car c1)
{
  return c1->type;

}
Color get_color(Car c1)
{
  return c1->color;
}
float get_fill_level(Car c1){
  return c1 -> fill_level;
}
float get_acceleration_rate(Car c1){
  return c1->acceleration_rate;
}
Car get_car (CarType type){
  for (int  i = 0; i < SIZE; i++)
  {
    if (car_park[i].car->type == type && car_park[i].is_rent == false) {
      car_park[i].is_rent  = true;
      return car_park[i].car;
    }
  }

    return 0;

}
int get_speed(Car c1){
   return round(c1 -> speed);;
}
void set_acceleration_rate(Car c1,float acceleration_rate){
  if(c1->type == AIXAM && acceleration_rate > 1){
  acceleration_rate = 1;
  }
  else if(c1->type == FIAT_MULTIPLA && acceleration_rate > 2.26){
  acceleration_rate = 2.26;
  }
  else if(c1->type == JEEP && acceleration_rate > 3.14){
      acceleration_rate = 3.14;
    }
   if(c1->type == AIXAM && acceleration_rate < -8){
    acceleration_rate = -8;
  }
  c1->acceleration_rate = acceleration_rate;

}
void accelerate(Car c1){
  c1->speed= (c1->acceleration_rate*3.6+ c1->speed);
    if(c1->type == AIXAM && c1->speed > 45)c1->speed = 45;
    if(c1->type == JEEP && c1->speed > 196)c1->speed = 196;
    if(c1->type == FIAT_MULTIPLA && c1->speed > 170) c1->speed = 170;
}
void init(){
  for (int i = 0; i < SIZE; i++) {
     car_park[i].is_rent = false;
     car_park[i].car->speed = 0;
     car_park[i].car->acceleration_rate = 0;
   }
}
