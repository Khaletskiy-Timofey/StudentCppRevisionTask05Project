#include "tasks.h"

/*	Task 02. Palindrome Number (симметричное число или число-палиндром)
*
*	Дано четырехзначное число или меньше. Определите, является ли оно палиндромом.
*	
*	Примечание
*	1) Отрицательное число физически не является палиндромом.
*	2) Не забудьте про "защиту от дурака": диапазон корректных значений должен быть от 0 до 9999
*	3) Для реализации алгоритма задания попробуйте использовать только встроенные операции языка С/С++.
* 
*	Формат входных данных [input]
*	Функция принимает любое число в диапазоне типа int.
*
*	Формат выходных данных [output]
*	Функция возвращает соответствующее значение булевского типа, 
*	а если данные заданы некорректно, то необходимо возвратить значение false.
*
*	[ input 1]: 2002
*	[output 1]: true
*
*	[ input 2]: 2008
*	[output 2]: false
*
*	[ input 3]: 2
*	[output 3]: true
*
*	[ input 4]: -8
*	[output 4]: false
*
*	[ input 5]: 55255
*	[output 5]: false
*/

bool task02(int number)
{
    if (number < 0 || number > 9999)
    {
        return false;
    }

    int new_number = number;
    int digit = 0;

    while (new_number != 0)
    {
        digit++;
        new_number /= 10;
    }

    int* digits = new int[digit];

    for (int i = 0; i < digit; i++)
    {
        digits[i] = number % 10;
        number /= 10;
    }

    int length = digit / 2 + digit % 2;

    for (int i = 0; i < length; i++)
    {
        if (digits[i] != digits[digit - 1 - i])
        {
            return false;
        }
    }

    delete[] digits;

    return true;
}