#include <stdio.h>
int main (void)
{
        const float CONVERSION_EFFICIENCY = 0.9;
	const float WATER_DENSITY_KG_PER_M3 = 1000;
	const float GRAVITIONAL_CONSTANT = 9.80;
	const float WATTS_PER_MEGAWATTS = 1e6;

	float wallheight; //in meters
	float flowrate; //m3 per second
	
	printf ("Height of the Dam (meters) : ");
	scanf ("%f", &wallheight);
	printf ("Flow rate of water (cubic meter per second) :");
	scanf ("%f", flowrate);

	float Mass_of_water = WATER_DENSITY_KG_PER_M3 * flowrate;
	float Work = Mass_of_water * GRAVISIONAL_CONSTANT * wallheight;
	float Power = Work * CONVERSION_EFFICIENCY;
	float powerMegawatts = Power/ WATTS_PER_MEGAWATTS;

	printf("Predicted power genarated by the hydroelectric dam : %.2f powerMegawatts", powerMegawatts);
	
	return 0;
}
