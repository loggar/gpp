# operators

## Bitwise Operators

| Operator | Description                                                                                                               | Example                                                                                        |
| -------- | ------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------- |
| `&`      | Binary AND Operator copies a bit to the result if it exists in both operands.                                             | `(A & B)` will give 12 which is 0000 1100                                                      |
| `|`      | Binary OR Operator copies a bit if it exists in either operand.                                                           | `(A | B)` will give 61 which is 0011 1101                                                      |
| `^`      | Binary XOR Operator copies the bit if it is set in one operand but not both.                                              | `(A ^ B)` will give 49 which is 0011 0001                                                      |
| `~`      | Binary Ones Complement Operator is unary and has the effect of 'flipping' bits.                                           | `(~A )` will give -61 which is 1100 0011 in 2's complement form due to a signed binary number. |
| `<<`     | Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.   | `A << 2` will give 240 which is 1111 0000                                                      |
| `>>`     | Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand. | `A >> 2` will give 15 which is 0000 1111                                                       |

## Assignment Operators

| Operator | Description                                                                                                                | Example                                           |
| -------- | -------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------- |
| `=`      | Simple assignment operator, Assigns values from right side operands to left side operand.                                  | `C = A + B` will assign value of `A + B` into `C` |
| `+=`     | Add AND assignment operator, It adds right operand to the left operand and assign the result to left operand.              | `C += A` is equivalent to `C = C + A`             |
| `-=`     | Subtract AND assignment operator, It subtracts right operand from the left operand and assign the result to left operand.  | `C -= A` is equivalent to `C = C - A`             |
| `*=`     | Multiply AND assignment operator, It multiplies right operand with the left operand and assign the result to left operand. | `C *= A` is equivalent to `C = C * A`             |
| `/=`     | Divide AND assignment operator, It divides left operand with the right operand and assign the result to left operand.      | `C /= A` is equivalent to `C = C / A`             |
| `%=`     | Modulus AND assignment operator, It takes modulus using two operands and assign the result to  left operand.               | `C %= A` is equivalent to `C = C % A`             |
| `<<=`    | Left shift AND assignment operator.                                                                                        | `C <<= 2` is same as `C = C << 2`                 |
| `>>=`    | Right shift AND assignment operator.                                                                                       | `C >>= 2` is same as `C = C >> 2`                 |
| `&=`     | Bitwise AND assignment operator.                                                                                           | `C &= 2` is same as `C = C & 2`                   |
| `^=`     | Bitwise exclusive OR and assignment operator.                                                                              | `C ^= 2` is same as `C = C ^ 2`                   |
| `|=`     | Bitwise inclusive OR and assignment operator.                                                                              | `C |= 2` is same as `C = C | 2`                   |

## Operators Precedence in C++

| Category       | Operator                                     | Associativity |
| -------------- | -------------------------------------------- | ------------- |
| Postfix        | `() [] -> .  ++   --`                        | Left to right |
| Unary          | `+  -   !  ~  ++  - - (type)*  & sizeof`     | Right to left |
| Multiplicative | `*  /  %`                                    | Left to right |
| Additive       | `+  -`                                       | Left to right |
| Shift          | `<< >>`                                      | Left to right |
| Relational     | `< <=  > >=`                                 | Left to right |
| Equality       | `==  !=`                                     | Left to right |
| Bitwise AND    | `&`                                          | Left to right |
| Bitwise XOR    | `^`                                          | Left to right |
| Bitwise OR     | `|`                                          | Left to right |
| Logical AND    | `&&`                                         | Left to right |
| Logical OR     | `||`                                         | Left to right |
| Conditional    | `?:`                                         | Right to left |
| Assignment     | `=  +=  -=  *=  /=  %=>>=  <<=  &=  ^=   |=` | Right to left |
| Comma          | `,`                                          | Left to right |

