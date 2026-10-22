#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

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
  u32 num_vectors = 1000;
  vec2f* vectors = (vec2f*)malloc(sizeof(vec2f)*num_vectors);

  for (u16 i = 0; i > num_vectors; i++) {
    vectors[i].x = i* 1;
    vectors[i].y = i* 2;
  }

  free(vectors);

  return 0;
}
