#ifndef VECTOR2D_H
#define VECTOR2D_H
#include "stdint.h"
//8 bit values (char)
typedef struct Vector2d8{
    int8_t x;
    int8_t y;
}Vector2d8;

//16 bit =values (int)
typedef struct Vector2d16{
    int16_t x;
    int16_t y;
}Vector2d16;

// //32bit valuse (long)
// typedef struct Vector2d32{
//     uint32_t x;
//     uint32_t y;
// }Vector2d32;

//from degrees 0 to 45 this returns a vector from the unit circle where 1 = 127;
//values are [x,y]
const extern int8_t vector_from_angle_table[2][45];

//a+b (value saved in a)
void add_vector2d8(Vector2d8 *a, Vector2d8 *b);

//a+b (value saved in a)
void add_vector2d16(Vector2d16 *a, Vector2d8 *b);


#endif