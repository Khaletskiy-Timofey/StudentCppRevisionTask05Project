﻿#include "tasks.h"

/*	Task 03. Minsk Ring Road [МКАД]
*
*	Длина Минской кольцевой автомобильной дороги примерно равна 56 километров.
*	Студент-байкер стартует с нулевого километра МКАД и едет со скоростью V километров в час.
*	На какой отметке он остановится через T часов?
*
*	Примечание
*	1) Время не может быть отрицательным, предусмотрите "защиту от дурака".
*	2) Скорость может быть отрицательной - это будет обозначать, что байкер едет в противоположную сторону.
*	3) Для реализации алгоритма задания попробуйте использовать только встроенные операции языка С/С++.
* 
*	Формат входных данных [input]
*	Функция получает на вход целые числа V и T в диапазоне типа int.
*	Если V > 0, то байкер движется в положительном направлении по МКАД,
*	если же значение V < 0, то - в отрицательном.
*
*	Формат выходных данных [output]
*	Функция должна вывести целое число от 0 до 56 — номер отметки,
*	на которой остановится байкер, или -1, если время задано некорректно.
*
*	[ input 1]: 40 2
*	[output 1]: 24
*
*	[ input 2]: -1 1
*	[output 2]: 55
*
*	[ input 3]: 10 -5
*	[output 3]: -1
*
*	[ input 3]: 0 3
*	[output 3]: 0
*
*	[ input 3]: 5 0
*	[output 3]: 0
*/

int task03(int v, int t)
{
	if (t < 0)
	{
		return -1;
	}

	return v < 0 ? 56 + v * t % 56 : v * t % 56;
}