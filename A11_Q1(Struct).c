#include <stdio.h>
/* Written by Sam O'Neill 17386116 */ 

/*Creating my struct */
typedef struct time
{   /* Declaring my variables */
	int days;
	int hours;
	int minutes;
	int seconds;
}Time;
/*Telling the program to expect the struct function */
Time convert_time(int total_secs);

int main(void)
{
    /* Allowing the user to set the value for s(seconds) and calling the Time function */
    int s;
	printf("Please enter the total number of seconds: ");
	scanf("%d", &s);
	Time x = convert_time(s);
	printf("The amount of seconds you entered equats to %d days, %d hours, %d minutes and %d seconds", x.days, x.hours, x.minutes, x.seconds);

	return 0;
}
/* Coding what happens when the Time function is called */
Time convert_time(int total_secs)
{
	Time t;
	int remaining_secs = total_secs;
	t.days = remaining_secs / (60*60*24);
    remaining_secs %= (60*60*24);
    t.hours = remaining_secs / (60*60);
    remaining_secs %= (60*60);
    t.minutes = remaining_secs / (60);
    remaining_secs %= (60);
    t.seconds = remaining_secs;
    
    return t;
}