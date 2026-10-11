#include <stdio.h>
 int main (void);
{
	float takeoff_speedKmh;
	float distance_traveled;

	printf ("Enter the jet takeoff speed (km/h) : ");
	scanf ("%f", &takeoff_speedKmh);

	printf( "Enter the distance : ");
	scanf ( "%f", &distance_taveled);

	float final_velocitymps = takeoff_speedKmh / 3.6;

	float acceleration = (final_velocitymps * final_velocitymps) / (2.0 * distance_traveled);

	float time = final_velocitymps / acceleration;

	printf ("Acceleration : %.1f m/s^2\n", acceleration);
	printf ("Time to takeoff speed : %.1f seconds\n", time);

	return 0;
}

