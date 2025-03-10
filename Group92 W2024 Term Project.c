/* Term project --- Global Temperatures
 *
 * Abdur-Rauf Fatin, Akarshan R Singh, Rayon Dhali, Tahmid Iftekhar
 * Group 92
 *
 *
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure type for the hottest month's temperature and date
typedef struct Hottest {
	int year;
	int month;
	double temperature;
} hottest;
// Structure type for the coldest month's temperature and date
typedef struct Coldest {
	int year;
	int month;
	double temperature;
} coldest;

// Question 1 (Used for Question 6, 7, and partially 8 & 11)
// Averages out data throughout every year and prints inside file/output
int yearly_avg(int year, int month, double year_avg[], double land_avg,
               int y_count, FILE *Q1Data, FILE *Q7Data20th, FILE 
               *Q7Data19th,
               FILE *Q8DataLAT, FILE *Q11DataLAT) {
	if (year >= 1760) {
		year_avg[y_count] = year_avg[y_count] + land_avg;
		if (month == 12) {
			year_avg[y_count] = (year_avg[y_count]) / 12;
			printf("%d %lf\n", year, year_avg[y_count]);
			fprintf(Q1Data, "%d %lf\n", year, year_avg[y_count]);
			// 20th century Data (Q7)
			// if statements to ignore nan values
			if (year > 1900 && year <= 2000 && !isnan(
			year_avg[y_count])) {
				fprintf(Q7Data20th, "%d %lf\n", year - 1901, 
				year_avg[y_count]);
			}
			// 19th century Data (Q7)
			if (year >= 1801 && year <= 1900 && !isnan(
			year_avg[y_count])) {
				fprintf(Q7Data19th, "%d %lf\n", y_count + 1760 - 1801,
				year_avg[y_count]);
			}
			// Question 8 & 11 Land Average Temperature from 1850 
			// to 2015 Data
			if (year >= 1850) {
				fprintf(Q8DataLAT, "%d %lf\n", year, year_avg[y_count]);
				fprintf(Q11DataLAT, "%d %lf\n", year, year_avg[y_count]);
			}
			// Counter is incremented by one once everything for the year
			// is done
			y_count++;
		}
	}
	// Counter is returned
	return (y_count);
}

// Question 2
double century_average(double century, int year, double year_avg) {
	// If the year's average is nan it returns century averageas is 
	// otherwise the value for the whole century average becomes nan
	if (isnan(year_avg)) {
		return (century);
	}
	// The year average is added to the sum for the century average
	century = century + year_avg;
	// Once at the end of the century range, it averages the sum that was
	// calculated for that century
	// For the 18th century there are 40 years that were used
	if (year == 1799) {
		century = century / 40;
	}
	// 100 years of data for the 19th century
	if (year == 1899) {
		century = century / 100;
	}
	// 100 years of data for the 20th century
	if (year == 1999) {
		century = century / 100;
	}
	// 15 years of data for the 21st century
	if (year == 2015) {
		century = century / 16;
	}
	// The century average is returned
	return (century);
}

// Question 3
void monthly_avg(int month, int year, double land_avg, double 
month_average[]) {
	// A switch that identifies which month the data belongs to and adds 
	// the data to the respective month's sum
	switch (month) {
		case (1):
		// If the year is 2015(end of data range) the program takes the 
		// average for the month after adding the month to the sum.
		// Then the program exits from the switch
		// January
		month_average[month - 1] = month_average[month - 1] + land_avg;
		if (year == 2015) {
			month_average[month - 1] = month_average[month - 1] / 
			(2015 - 1899);
		}
		break;
		case (2):
		// February
		month_average[month - 1] = month_average[month - 1] + land_avg;
		if (year == 2015) {
			month_average[month - 1] = month_average[month - 1] / 
			(2015 - 1899);
		}
		break;
		case (3):
		// March
		month_average[month - 1] = month_average[month - 1] + land_avg;
		if (year == 2015) {
			month_average[month - 1] = month_average[month - 1] / 
			(2015 - 1899);
		}
		break;
		case (4):
		// April
		month_average[month - 1] = month_average[month - 1] + land_avg;
		if (year == 2015) {
			month_average[month - 1] = month_average[month - 1] / 
			(2015 - 1899);
		}
		break;
		case (5):
		// May
		month_average[month - 1] = month_average[month - 1] + land_avg;
		if (year == 2015) {
			month_average[month - 1] = month_average[month - 1] / 
			(2015 - 1899);
		}
		break;
		case (6):
		// June
		month_average[month - 1] = month_average[month - 1] + land_avg;
		if (year == 2015) {
			month_average[month - 1] = month_average[month - 1] / 
			(2015 - 1899);
		}
		break;
		case (7):
		// July
		month_average[month - 1] = month_average[month - 1] + land_avg;
		if (year == 2015) {
			month_average[month - 1] = month_average[month - 1] / 
			(2015 - 1899);
		}
		break;
		case (8):
		// August
		month_average[month - 1] = month_average[month - 1] + land_avg;
		if (year == 2015) {
			month_average[month - 1] = month_average[month - 1] / 
			(2015 - 1899);
		}
		break;
		case (9):
		// September
		month_average[month - 1] = month_average[month - 1] + land_avg;
		if (year == 2015) {
			month_average[month - 1] = month_average[month - 1] / 
			(2015 - 1899);
		}
		break;
		case (10):
		// October
			month_average[month - 1] = month_average[month - 1] + 
			land_avg;
		if (year == 2015) {
			month_average[month - 1] = month_average[month - 1] / 
			(2015 - 1899);
		}
		break;
		case (11):
		// November
		month_average[month - 1] = month_average[month - 1] + land_avg;
		if (year == 2015) {
			month_average[month - 1] = month_average[month - 1] / 
			(2015 - 1899);
		}
		break;
		case (12):
		// December
		month_average[month - 1] = month_average[month - 1] + land_avg;
		if (year == 2015) {
			month_average[month - 1] = month_average[month - 1] / 
			(2015 - 1899);
		}
		break;
	}
}

// Question 4
void month_hot_cold(double land_avg, int year, int month, hottest *hot,
                    coldest *cold) {
	// Finds the hottest month
	if (hot->temperature < land_avg) {
		// Records the time and temperature of the hottest month
		hot->year = year;
		hot->month = month;
		hot->temperature = land_avg;
	}
	// Finds the coldest month
	else if (cold->temperature > land_avg) {
		// Records the time and temperature of the coldest month
		cold->year = year;
		cold->month = month;
		cold->temperature = land_avg;
	}
}

// Question 5
void year_hot_cold(double land_avg, int year, int month, hottest *hot,
                   coldest *cold) {
	// Finds the hottest year average
	if (hot->temperature < land_avg) {
		// Records the year and temperature of the hottest year 
		hot->year = year;
		hot->temperature = land_avg;
	}
	// Finds the coldest year average
	else if (cold->temperature > land_avg) {
		// Records the year and temperature of the coldest year 
		cold->year = year;
		cold->temperature = land_avg;
	}
}

// Question 8 (Same layout as question 1 but to find Land Average Minimum
// and Land Average Maximum)
// To find Land Average Temperature Minimum for 1850 to 2015
int 
yearly_avg_min(int *year, int *month, double year_avg_min[],
				double land_min, int q8y_count, FILE *Q8DataLAMin) {
	// If the year is greater than 1850 the land minimum is added to the 
	// year's average minimum sum
	if (*year >= 1850) {
		year_avg_min[q8y_count] = year_avg_min[q8y_count] + land_min;
		// If the month is 12 the average is taken from the current 
		// year's average minimum sum
		if (*month == 12) {
			year_avg_min[q8y_count] = (year_avg_min[q8y_count]) / 12;
			fprintf(Q8DataLAMin, "%d %lf\n", *year,
			year_avg_min[q8y_count]);
			// Counter is incremented by one once everything for the year
			// is done
			q8y_count++;
		}
	}
	// Counter is returned
	return (q8y_count);
}
// Question 8 to find the land average max
// To find Land Average Temperature Max for 1850 to 2015
int 
yearly_avg_max(int *year, int *month, double year_avg_max[],
				double land_max, int q8y_count2, FILE *Q8DataLAMax) {
	// If the year is greater than 1850 the land maximum is added to the 
	// year's average maximum sum
	if (*year >= 1850) {
		year_avg_max[q8y_count2] = year_avg_max[q8y_count2] + land_max;
		// If the month is 12 the average is taken from the current 
		// year's average maximum sum
		if (*month == 12) {
			year_avg_max[q8y_count2] = (year_avg_max[q8y_count2]) / 12;
			fprintf(Q8DataLAMax, "%d %lf\n", *year,
			year_avg_max[q8y_count2]);
			// Counter is incremented by one once everything for the year
			// is done
			q8y_count2++;
		}
	}
	// Counter is returned
	return (q8y_count2);
}

// Question 9
int
century_max_min(double year_max, double year_min, double *century_max, 
double *century_min, int year, FILE *DataAVG, FILE *DataMIN, 
FILE *DataMAX, double century_avg)
{
	// If year_max or year_min are nan, they are not added to the sum as 
	// not to make the sum itself nan
	if (isnan(year_max) || isnan(year_min)){
		return(0);
	}
	// Year max and year min are added to the century max and min sums 
	*century_max = *century_max + year_max;
	*century_min = *century_min + year_min;
	// If the year is 1899(end of century range) the sums are divided by 
	// 50 to take the average and then are printed to files
	if (year == 1899){
		*century_max = *century_max / 50;
		*century_min = *century_min / 50;
		// The values for the 19th century are printed to their 
		// respective files 
		fprintf(DataAVG, "19 %lf", century_avg);
		fprintf(DataMIN, "19 %lf", *century_min);
		fprintf(DataMAX, "19 %lf", *century_max);
	}
	// If the year is 1999(end of century range) the sums are divided by 
	// 100 to take the average and then are printed to files
	if (year == 1999){
		*century_max = *century_max / 100;
		*century_min = *century_min / 100;
		// The values for the 20th century are printed to their 
		// respective files 
		fprintf(DataAVG, "20 %lf", century_avg);
		fprintf(DataMIN, "20 %lf", *century_min);
		fprintf(DataMAX, "20 %lf", *century_max);
	}
	// If the year is 2015(end of century range) the sums are divided by 
	// 15 to take the average and then are printed to files
	if (year == 2015){
		*century_max = *century_max/15;
		*century_min = *century_min/15;
		// The values for the 21st century are printed to their 
		// respective files 
		fprintf(DataAVG, "21 %lf", century_avg);
		fprintf(DataMIN, "21 %lf", *century_min);
		fprintf(DataMAX, "21 %lf", *century_max);
	}
	return(0);
}

// Question 10
// Monthly Land Average Temperature Data and LAT Uncertainty from 2000 onwards
void monthly_LAT(int year, int month, double land_avg, double land_avg_unc,
FILE *Q10DataLAT) {
	// If the year is greater than 2000 the error bar is calculated from
	// the land average temperature uncertainty
	if (year >= 2000) {
		// Converts the year and month into one sincle decimal value
		// YYYY.(MM/12)
		double monthyear = year + month / 12.0;
		// Prints the date, the average temperature and the uncertainty 
		// to a file
		fprintf(Q10DataLAT, "%lf %lf %lf\n", monthyear, 
		land_avg, land_avg_unc);
	}
}

// Question 11 (LAT was found using the function in question 1)
// Function to find LOAT (Land Ocean Average Temperature) from 1850 to 2015
int yearly_avg_LOAT(int year, int month, double year_avg[], double land_avg,
int q11y_count, FILE *Q11DataLOAT) {
	// If the year is greater than 1850 the year the land and ocean 
	// average is calculated 
	if (year >= 1850) {
		// The land and ocean average for the year is summed
		year_avg[q11y_count] = year_avg[q11y_count] + land_avg;
		// If the month is 12 then the sum of the year is divided by 12 
		// to find the average
		if (month == 12) {
			year_avg[q11y_count] = (year_avg[q11y_count]) / 12;
			// The year's land and ocean average is printed along with 
			// the year
			fprintf(Q11DataLOAT, "%d %lf\n", year, year_avg[q11y_count]);
			// Increments the counter for the land and ocean average 
			// temperature
			q11y_count++;
		}
	}
	// Returns the value of q11y_count
	return (q11y_count);
}

// Main function this calls the other functions, collects and connects 
// the different sets of data 
int main(void) {
	//All the files that are created/used in the program
	// Creates the files 
	FILE *in, *Q1Data, *Q7Data20th, *Q7Data19th, *Q8DataLAT,  
	*Q8DataLAMin, *Q8DataLAMax, 
	*Q9Data19AVG, *Q9Data20AVG, *Q9Data21AVG,
	*Q9Data19MIN, *Q9Data20MIN, *Q9Data21MIN,
	*Q9Data19MAX, *Q9Data20MAX, *Q9Data21MAX,
	*Q10DataLAT, *Q11DataLAT, *Q11DataLOAT;
	// Opens the files 
	in = fopen("GlobalTemperatures.csv", "r"), Q1Data = fopen(
	"Q1Data.txt", "w"), Q7Data20th = fopen("Q7Data20th.txt","w"),
	Q7Data19th = fopen("Q7Data19th.txt", "w"), Q8DataLAT = fopen(
	"Q8DataLAT.txt", "w"), Q8DataLAMin = fopen("Q8DataLAMin.txt", "w"),
	Q8DataLAMax = fopen("Q8DataLAMax.txt", "w"),
	// Data output for question 9, each century has an overall average, 
	// minimum average and maximum average
	// Averages
	Q9Data19AVG = fopen("Q9Data19AVG.txt", "w"), Q9Data20AVG = fopen(
	"Q9Data20AVG.txt", "w"), Q9Data21AVG = fopen("Q9Data21AVG.txt", "w"), 
	// Minimums
	Q9Data19MIN = fopen("Q9Data19MIN.txt", "w"), Q9Data20MIN = fopen(
	"Q9Data20MIN.txt", "w"), Q9Data21MIN = fopen("Q9Data21MIN.txt", "w"), 
	// Maximums
	Q9Data19MAX = fopen("Q9Data19MAX.txt", "w"), Q9Data20MAX = fopen(
	"Q9Data20MAX.txt", "w"), Q9Data21MAX = fopen("Q9Data21MAX.txt", "w"), 
	// Question 10 data output 
	Q10DataLAT = fopen("Q10DataLAT.txt", "w"),
	// Land average temperature and land and ocean average temperature
	Q11DataLAT = fopen("Q11DataLAT.txt", "w"), Q11DataLOAT = fopen(
	"Q11DataLOAT.txt", "w");

  
	// Structures for Hottest and coldest years and months
	struct Hottest hottest_month = {0, 0, -100}, hottest_year = {0,
		0, -100};
	struct Coldest coldest_month = {0, 0, 100}, coldest_year = {0,
		0, 100};

	
	double year_average[300], year_average_min[300], year_average_max[300],
	year_average_LOAT[300],
	// Century averages, minimums and maximums
	// The nineteenth century has nineteenth_avg_s because it requires an
	// average starting from 1800 and another one starting from 1850
	eighteenth_avg = 0, nineteenth_avg = 0, 
	twentieth_avg = 0, twenty_first_avg = 0, nineteenth_avg_s = 0,
	nineteenth_min = 0, nineteenth_max =0, 
	twentieth_max = 0, twentieth_min = 0, 
	twenty_first_max = 0, twenty_first_min = 0,
	// Monthly average
	month_average[12],
	// These store the values read per line from the file
	land_avg, land_avg_unc, land_max, land_max_unc, land_min, 
	land_min_unc, land_and_ocean, land_and_ocean_unc;
	// Stores the values from the line being read as one big string,
	// it gets split later one
	char line[100],
	// Stores the same value as the previous string after it has been
	// worked with -- prevents the last line from running twice
	line_done[100];
	// Stores the year, month and day read from each line,
	// i is just a counter, y_count counts years since 1760 so that the 
	// program can call where in the array storing all the year averages 
	// it is in, q8y counters do the same as y_count but start from 1850
	int year, month, day, i, y_count = 0, q8y_count = 0, q8y_count2 = 0, 
	q11y_count = 0;
	// Opens the GlobalTemperatures.csv file (the star of the program)
	in = fopen("GlobalTemperatures.csv", "r");
	// Reads while there is stuff to be read from the file
	while (!feof(in)) {
		// Reads a line from the file
		fgets(line, 100, in);
		// If the line has been worked with on the previous run it will
		// exit the loop -- prevents dong the last line twice
		if (strcmp(line, line_done) == 0) {
			break;
		}
		// Copies the just completed line and compares and makes sure it
		// will not run twice on the last loop
		strncpy(line_done, line, 100);

		// printf("\n%s", line);

		/* Not using tokens because it takes less code to sscanf and
		 * split the whole line
		 * Y, M, D, LAND AVG T, LAND AVG TEMP UNCERTAINTY, LAND MAX TEMP,
		 * LAND MAX TEMP UNCERTAINTY, LAND MIN TEMP,
		 * LAND MIN TEMP UNCERTAINTY, LAND AND OCEAN TEMP,
		 * LAND AND OCEAN TEMP AVERAGE UNCERTAINTY
		 */
		sscanf(line, "%d-%d-%d,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf", &year, 
		&month,&day, &land_avg, &land_avg_unc, &land_max, &land_max_unc, 
		&land_min, &land_min_unc, &land_and_ocean, &land_and_ocean_unc);
		// Question 1
		// Calculates the yearly land average temperature between the 12
		// months of a year, starting from 1760
		y_count = yearly_avg(year, month, year_average, land_avg, 
		y_count, Q1Data, Q7Data20th, Q7Data19th, Q8DataLAT, Q11DataLAT);
		// Question 2 and 5
		// Land average of different centuries
		// Hottest and coldest years
		if (month == 12) {
			// For the 18th century
			if (year >= 1760 && year <= 1799) {
			eighteenth_avg = century_average(eighteenth_avg, year,
			year_average[y_count - 1]);
			}
			if (year >= 1800 && year <= 1899)
			// For the 19th century
			{
			nineteenth_avg = century_average(nineteenth_avg,
			year, year_average[y_count - 1]);
			}
			// For the 20th century
			if (year >= 1900 && year <= 1999) {
			twentieth_avg =
			century_average(twentieth_avg, year,
			year_average[y_count - 1]);
			}
			// For the 21st century
			if (year >= 2000 && year <= 2015) {
			twenty_first_avg = century_average(twenty_first_avg,
			 year, year_average[y_count - 1]);
			}
			// Question 5 integrated under the if statement used for q2 
			// to use less code
			if (year >= 1760) {
			  year_hot_cold(year_average[y_count - 1], year, month, 
			  &hottest_year, &coldest_year);
			}
		} // End of if month == 12 for q2 and q5

		// Question 3
		// Monthly average
		if (year >= 1900) {
		monthly_avg(month, year, land_avg, month_average);
		}

		// Question 4
		// Hottest and coldest months
		month_hot_cold(land_avg, year, month, 
		&hottest_month, &coldest_month);

		// Question 8
		// Land Average Min
		q8y_count = yearly_avg_min(&year, &month, 
		year_average_min, land_min,
		q8y_count, Q8DataLAMin);
		// Land Average Max
		q8y_count2 = yearly_avg_max(&year, &month, 
		year_average_max, land_max,
		q8y_count2, Q8DataLAMax);
		// Question 10
		monthly_LAT(year, month, land_avg, 
		land_avg_unc, Q10DataLAT);
		// Question 9
		// Average, maximum and minimum temperatures starting from 1850 
		// for each century 
		
		// Runs if the year is past the mid 19th century and calculates  
		// the average max and average min temperatures 
		// Runs only if at the end of the year so that the numbers aren't 
		// added twelve times
		if (month == 12){
			if (year >= 1850){
			nineteenth_avg_s = nineteenth_avg_s + 
			year_average[y_count - 1];
			}
			if (year == 1899){
				nineteenth_avg_s = nineteenth_avg_s / 50;
			}
			if (year >=1850 && year <= 1899){
				century_max_min(year_average_max[q8y_count2-1], 
				year_average_min[q8y_count-1], &nineteenth_max, 
				&nineteenth_min, year, Q9Data19AVG, Q9Data19MIN, 
				Q9Data19MAX, nineteenth_avg_s);
			}
			// Runs if the year is in the 20th century and calculates the 
			// average max and average min temperatures 
			if (year >= 1900 && year <= 1999){
				century_max_min(year_average_max[q8y_count2-1], 
				year_average_min[q8y_count-1], &twentieth_max, 
				&twentieth_min, year, Q9Data20AVG, Q9Data20MIN, 
				Q9Data20MAX, twentieth_avg);
			}
			// Runs if the year is in the 21st century and calculates the 
			// average max and average min temperatures 
			if (year >= 2000 && year <= 2015){
				century_max_min(year_average_max[q8y_count2-1], 
				year_average_min[q8y_count-1], &twenty_first_max, 
				&twenty_first_min, year, Q9Data21AVG, Q9Data21MIN, 
				Q9Data21MAX, twenty_first_avg);
			}
		}
		// Question 11
		yearly_avg_LOAT(year, month, year_average_LOAT, 
		land_and_ocean, q11y_count, Q11DataLOAT);
	} // End of while feof

	// Final results from reading the file
	printf("\n\nThe 18th century average was: %.3lf.\nThe 19th century "
	"average was: %.3lf.\nThe 20th century average was: %.3lf."
	"\nThe 21st century average was: %.3lf.\n",
	eighteenth_avg, nineteenth_avg, twentieth_avg, twenty_first_avg);
	// Prints the monthly averages temperatures
	for (i = 0; i <= 11; i++) {
	printf("\nFor month %d the average was %.3lf.\n", i+1, month_average[i]);
	}
	// Prints the outputs for the hottest and coldest months
	printf("\nThe hottest month was %d/0%d at %.3lf.", hottest_month.year,
	hottest_month.month, hottest_month.temperature);
	printf("\nThe coldest month was %d/0%d at %.3lf.", coldest_month.year,
	coldest_month.month, coldest_month.temperature);
	// Prints the outputs for the hottest and coldest years 
	printf("\nThe hottest year was %d at %.3lf.", hottest_year.year,
	hottest_year.temperature);
	printf("\nThe coldest year was %d at %.3lf.", coldest_year.year,
	coldest_year.temperature);
	// Prints the maxiumum and minimum average temperatures for each 
	// century
	printf("\n\n19th century max average was %3.3lf and min average was %3.3lf.",
	nineteenth_max, nineteenth_min);
	printf("\n20th century max average was %3.3lf and min average was %3.3lf.",
	twentieth_max, twentieth_min);
	printf("\n21st century max average is %3.3lf and min average was %3.3lf.",
	twenty_first_max, twenty_first_min);
}
