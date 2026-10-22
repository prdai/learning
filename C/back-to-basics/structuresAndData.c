#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef i8 b8;
typedef i32 b32;

typedef float f32;
typedef double f64;

typedef struct {
  f32 x;
  f32 y;
} vec2f;

int main() {
  vec2f v = {
    .x = 1,
    .y = 2
  };
  printf("Vector = %f, %f", v.x, v.y);
  v = (vec2f){
    .x = 3,
    .y = 5
  };
  return 0;
}
