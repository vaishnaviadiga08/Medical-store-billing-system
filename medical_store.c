#include<stdio.h>
#include<string.h>

void main()
{
	char username[20], password[20];
	char correct_user[] = "admin";
	char correct_pass[] = "1234";
	int choice;
	char manufacture[50], customer[50];
	char medicine[50];
	int quantity;
	float price, total, gst, bill;
	
	/login/
	printf("====== Medical store login ======\n");
	printf("username : ");
	scanf("%19s", username);
	
	printf("password : ");
	scanf("%19s", password);
	
	if (strcmp(username, correct_user) == 0 && strcmp(password, correct_pass) == 0)
	{
	
		do
		{
			printf("\n====== medical store manufacture ======\n");
			printf("1. Manufacture Details\n");
			printf("2. Customer Details and Billing\n");
			printf("3. Exit\n");
			
			printf("\nEnter your choice:");
			scanf("%d", &choice);
			
			switch(choice)
			{
				case 1: 
					printf("\n====== Manufacturer details ======\n");
					printf("Enter manufacturer name:");
					scanf("%49s", manufacture);
					
					printf("Enter the medicine name:");
					scanf("%49s", medicine);
					
					printf("Enter the medicine price:");
					scanf("%f", &price);
					
					printf("Enter the medicine quantity:");
					scanf("%d", &quantity);
					
					total = quantity * price;
					gst = total * 0.05;
					bill = total + gst;
					
					printf("\n====== Manufacturer product details ======\n");
					printf("Manufacturer name: %s\n", manufacture);
					printf("Medicine name: %s\n", medicine);
					printf("Quantity: %d\n", quantity);
					printf("Price per unit: %.2f\n", price);
					printf("Total price: %.2f\n", total);
					printf("GST 5%%: %.2f\n", gst);
					printf("Final bill: %.2f\n", bill);
					printf("Details shared successfully!\n");
					break;
					 
				case 2:
					printf("\n====== Customer Details and Billing ======\n");
					printf("Enter customer name:");
					scanf("%49s", customer);
					
					printf("Enter medicine name:");
					scanf("%49s", medicine);
					
					printf("Enter the quantity:");
					scanf("%d", &quantity);
					
					printf("Enter the price:");
					scanf("%f", &price);
					
					total = quantity * price;
					gst = total * 0.05;
					bill = total + gst;
					
					printf("\n====== BILL ======\n");
					printf("Customer: %s\n", customer);
					printf("Medicine: %s\n", medicine);
					printf("Quantity: %d\n", quantity);
					printf("Price: %.2f\n", price);
					printf("Total: %.2f\n", total);
					printf("GST 5%%: %.2f\n", gst);
					printf("Final bill: %.2f\n", bill);
					printf("============\n");
					break;
					 
				case 3:
					printf("\nThank you!\n");
					printf("Exiting medical store system...\n");
					break;
					
				default:
					printf("\nInvalid choice!\n");
						
			}	
		} while (choice != 3);
	}
	else
	{
		printf("\nInvalid username or password!\n");
	}
}
