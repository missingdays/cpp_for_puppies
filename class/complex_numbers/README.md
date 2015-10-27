# Введение в классы

## Задание
Напишите класс комплексных чисел.
### Конструктор
Конструктор должен принимать два числа - вещественную и мнимую часть числа.
### Методы
```cpp
// Возвращает сопряженное данному комплексному числе
ComplexNumber *conjugate();
```
```cpp
// В красивом формате печатает данное комплексное число
void print();
```
### Глобальные friend функции
```cpp
// Возвращает сумму двух комплексных чисел
ComplexNumber *add(ComplexNumber *, ComplexNumber *);
```
```cpp
// Возвращает разность двух комплексных чисел
ComplexNumber *sub(ComplexNumber *, ComplexNumber *);
```
```cpp
// Возвращает произведение двух комплексных чисел
ComplexNumber *mul(ComplexNumber *, ComplexNumber *);
```
```cpp
// Возвращает частное двух комплексных чисел
ComplexNumber *div(ComplexNumber *, ComplexNumber);
```
```cpp
// Возвращает true, если числа равны, иначе false
bool equal(ComplexNumber *, ComplexNumber *);
```