## Wk 1. Variables & input/output

### Computer as a calculator
> Originally built for a faster calculation

> Compute + er

> More advanced features in these days
---
### Within a software...
> Input(Keyboard/mouse) -> Calculator(Computer) -> Output(Monitor)
- How to input
- How to calculate
- How to output
---
### `int a`;
- Needs a variable to save a value into memory
- `int aaa` -> create a **storage** called `aaa`
---
### `printf` to output the result
```
int main(void) {
  int aaa;
  
  aaa = 11 + 22;

  printf(“%d”, aaa);

  return 0;
}
```

### `scanf` to receive user input
```
#include <stdio.h>
int main(void) {
  int a, b, c;

  scanf(“%d”, &a); // & in front of `aaa` is used to reference the memory address
  scanf(“%d”, &b);

  c = a + b;
  printf(“%d”, c);

  return 0;
}
```
---
### Creating a variable: `int aaa`
> `int` is a `type-specifier` which specifies the data type of the variable to be stored.
---
#### **`type-specifiers`** in C:
- `void`
- `char`
- `short`
- `int`
- `long`
- `float`
- `double`
- `signed`
- `unsigned`

**integral types**
- signed/unsigned `char`
- signed/unsigned `int`
- signed/unsigned `short int`
- signed/unsigned `long int`
- `enum`

**floating-point types**
- `float`
- `double`
- `long double`

> `int` is the default if a type-specifier is not declared

> `int` is assumed to be `signed int`
---
### Data Types
Integers, Floating points, Characters

```
  int aa = 123; // %d
  float bb = 2.34; // %f
  char cc = 'B'; // %c
```

`char` **can only store 1 single character**:
```
  char cc = 'BC' // not possible
```
---
### Variable naming
> Upper/lowercased ENGLISH alphabets

> `aa`, `Aa`, `aA` and `AA` are all different

> No special characters EXCEPT `_`

> Cannot start with a number: `a1(o), 1a(x)`
> No empty spaces
---
### Reserved Keywords
- auto
- break
- case/char/const/continue
- default/do/double
- else/enum/extern
- float/for
- goto
- if/int
- long
- register/return
- short/signed/sizeof/static/struct/switch
- typedef
- union/unsigned
- void/volatile
- while

> Trivial, but don't forget `\n` for the newline character in actual coding (quiz)
