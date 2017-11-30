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

struct CarImplementation c1 = {AIXAM,RED,16.0,0.0,0};
struct CarImplementation c2 = {FIAT_MULTIPLA,GREEN,65.0,0.0,0};
struct CarImplementation c3 = {FIAT_MULTIPLA,BLUE,65.0,0.0,0};
struct CarImplementation c4 = {FIAT_MULTIPLA,ORANGE,65.0,0.0,0};
struct CarImplementation c5 = {JEEP,SILVER,80.0,0.0,0};
struct CarImplementation c6 = {JEEP,BLACK,80.0,0.0,0};

CarImplementation carpark [SIZE] = {c1,c2,c3,c4,c5,c6};




CarType get_type (Car c1)
{
  return c1->type;

}
Color get_color(Car c1)
{
  return c1->color;
}
float get_fill_level(Car c1){
  return 0.0;
}
float get_acceleration_rate(Car c1){
  return 0.0;
}
Car get_car (CarType type){
  int count = 0;
  for (int  i = 0; i < SIZE; i++)
  {
    if (carpark[i].type == AIXAM) {
      count++;
    }
    return carpark[i];
  }

  return NULL;
}
int get_speed(Car c1){
  return 0;
}
void set_acceleration_rate(Car c1,int number){

}
void accelerate(Car c1){

}
void init(){

}
