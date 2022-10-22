#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and print how many days are
 * left in a year, taking leap year into account
 * @month: month in number format
 * @day: day of the month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 || year % 400 == 0) || (year % 400 == 0 && year % 100 == 0))
			{
			if (month >= 2 && day >= 60)
			{
				day++;
			}

			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day)
		}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("invalid date: %02d/%02d/%04d\n", month, day - 
					31, year)
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day)
		}
	}
}
/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	//02/29/2000
	//04/01/1997
int day = convert_day(04,01);
print_remaining_days(4, day, 1997);

return (0);
}
