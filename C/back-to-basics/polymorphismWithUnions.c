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
  enum {
    SHAPE_CIRCLE,
    SHAPE_SQUARE,
    SHAPE_TRIANGLE
  } kind;

  union {
    struct { f32 s; } square;
    struct { f32 r; } rectangle;
    struct { f32 b, h; } traingle;
  } contents;
} shape;


int main() {


  return 0;
}

