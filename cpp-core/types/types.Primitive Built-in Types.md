# Primitive Built-in Types

| Type                  | Keyword |
| --------------------- | ------- |
| Boolean               | bool    |
| Character             | char    |
| Integer               | int     |
| Floating point        | float   |
| Double floating point | double  |
| Valueless             | void    |
| Wide character        | wchar_t |

Several of the basic types can be modified using one or more of these type modifiers −

- signed
- unsigned
- short
- long

The following table shows the variable type, how much memory it takes to store the value in memory, and what is maximum and minimum value which can be stored in such type of variables.

| Type               | Typical Bit Width | Typical Range                   |
| ------------------ | ----------------- | ------------------------------- |
| char               | 1byte             | -127 to 127 or 0 to 255         |
| unsigned char      | 1byte             | 0 to 255                        |
| signed char        | 1byte             | -127 to 127                     |
| int                | 4bytes            | -2147483648 to 2147483647       |
| unsigned int       | 4bytes            | 0 to 4294967295                 |
| signed int         | 4bytes            | -2147483648 to 2147483647       |
| short int          | 2bytes            | -32768 to 32767                 |
| unsigned short int | Range             | 0 to 65,535                     |
| signed short int   | Range             | -32768 to 32767                 |
| long int           | 4bytes            | -2,147,483,648 to 2,147,483,647 |
| signed long int    | 4bytes            | same as long int                |
| unsigned long int  | 4bytes            | 0 to 4,294,967,295              |
| float              | 4bytes            | +/- 3.4e +/- 38 (~7 digits)     |
| double             | 8bytes            | +/- 1.7e +/- 308 (~15 digits)   |
| long double        | 8bytes            | +/- 1.7e +/- 308 (~15 digits)   |
| wchar_t            | 2 or 4 bytes      | 1 wide character                |

The size of variables might be different from those shown in the above table, depending on the compiler and the computer you are using.
