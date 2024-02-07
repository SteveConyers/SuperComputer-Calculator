/* SuperComputerCalc.c Steven Conyers
   Created: 2/22/2021
   Updated: 2/7/2024 */
	
#include <stdio.h>
int main(void)

{
/*------------------------------------------------------------------------------------------------------------------------*/
/* Declarations */
	int hoursUsed = 0, minutesUsed = 0, secondsUsed = 0, totalSecondsUsed = 0, users = 0, totalUsage = 0, superUsers = 0;
	
	float totalHours 	= 0.0f;
	float totalDays 	= 0.0f;
	float ratePerSecond = 0.0f;
	float usageCharge 	= 0.0f;
	float grandTotal	= 0.0f;
	
	char  choice		= 'y';
/*------------------------------------------------------------------------------------------------------------------------*/
/* Heading */
	printf("SuperComputer Usage Calculator by Steven Conyers Student\n\n");
/*------------------------------------------------------------------------------------------------------------------------*/
/* Input Section */
do 
{
	printf("Enter hours used as a whole number (0 - 100):   ");
	scanf ("%d" , &hoursUsed);
	
	if (hoursUsed < 0 || hoursUsed > 100)
	{
		printf("   Out of range! Enter 0 - 100\n\n");
	}
	
 (hoursUsed < 0 || hoursUsed > 100);
	printf("\n");
	

	printf("Enter minutes used as a whole number (0 - 59):  ");
	scanf ("%d" , &minutesUsed);
	
	if (minutesUsed < 0 || minutesUsed > 59)
	{
		printf("   Out of range! Enter 0 - 59\n\n");
	}
	
 (minutesUsed < 0 || minutesUsed > 59);
	printf("\n");
	

	printf("Enter seconds used as a whole number (0 - 59):  ");
	scanf ("%d" , &secondsUsed);
	
	if (secondsUsed < 0 || secondsUsed > 59)
	{
		printf("   Out of range! Enter 0 - 59\n\n");
	}
	
 (secondsUsed < 0 || secondsUsed > 59);
	printf("\n\n");
/*------------------------------------------------------------------------------------------------------------------------*/
/* Output section of usage */	
	totalSecondsUsed = secondsUsed + (hoursUsed * 3600) + (minutesUsed * 60);
	printf("Total Seconds of Usage  = %d\n\n", totalSecondsUsed);
	
	totalHours = (float)totalSecondsUsed / 3600.0f;
	printf ("Total Hours of Usage	= %8.4f\n\n", totalHours);
	
	totalDays = totalHours / 24.0f;
	printf ("Total Days of Usage	= %8.4f\n\n", totalDays);
/*------------------------------------------------------------------------------------------------------------------------*/
/* Rate of usage */
	if (totalSecondsUsed < 3001)
		ratePerSecond = .67f;
	else 
		if (totalSecondsUsed < 6001)
		ratePerSecond = .57f;
	else
		if (totalSecondsUsed < 9001)
		ratePerSecond = .47f;
	else
		if (totalSecondsUsed < 36001)
		ratePerSecond = .37f;
	else
		ratePerSecond = .27f;
/*------------------------------------------------------------------------------------------------------------------------*/
/* Output rate and charge */	
	printf("Rate Per Second		= %.2f\n\n", ratePerSecond);
	
	usageCharge = ratePerSecond * (float)totalSecondsUsed;
	printf("Usage Charge		= $%.2f\n\n\n", usageCharge);
/*------------------------------------------------------------------------------------------------------------------------*/
/* Displays message for super user */
if (usageCharge > 9000.0f)
{
		printf("Thank you for being a SUPER USER of our SuperComputer!\n\n\n");
		superUsers++;
}
/*------------------------------------------------------------------------------------------------------------------------*/
/* Prompt for additional entries*/
do
{
	printf("Would you like to input another customer's usage data? ");
	scanf (" %c" , &choice);
if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')
	{
		printf("Invalid respose, Please Enter 'y', 'Y', 'n' or 'N' Only\n\n");
	}
}while(choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
/*------------------------------------------------------------------------------------------------------------------------*/
/* Processing for entries */
	totalUsage = usageCharge + usageCharge;
	grandTotal += usageCharge;
	users++;
/*------------------------------------------------------------------------------------------------------------------------*/
}while (choice == 'y' || choice == 'Y');/* End main loop */
/*------------------------------------------------------------------------------------------------------------------------*/
/*Output total users and total usages  */
	printf("\nTotal number of Users processed: %d\n\n", users);  //Shows total number of customers processed	
	
	printf("Total number of Super Users:      %d\n\n", superUsers); //Shows numbers of super uers if any
	
	printf("Grand Total of all charged usage: $%.2f\n\n\n", grandTotal); //Gives the total amount of charges from all customers that have been processed
/*------------------------------------------------------------------------------------------------------------------------*/
/* Closing Message */
	printf("Thanks for using the SuperComputer!");

return 0;

}
