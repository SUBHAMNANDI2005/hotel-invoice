#include <stdio.h>

int main()
{
    int choice, quantity;
    float price, total = 0, amount;

    printf("================================\n");
    printf("      WELCOME TO RESTAURANT\n");
    printf("================================\n");

    do
    {
        printf("\n----------- MENU -----------\n");
        printf("1. Pizza          - Rs. 200\n");
        printf("2. Burger         - Rs. 100\n");
        printf("3. Sandwich       - Rs. 80\n");
        printf("4. Cold Drink     - Rs. 40\n");
        printf("5. Biryani        - Rs. 150\n");
        printf("6. Exit and Generate Bill\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5)
        {
            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (quantity <= 0)
            {
                printf("Invalid quantity!\n");
                continue;
            }

            switch(choice)
            {
                case 1:
                    price = 200;
                    break;

                case 2:
                    price = 100;
                    break;

                case 3:
                    price = 80;
                    break;

                case 4:
                    price = 40;
                    break;

                case 5:
                    price = 150;
                    break;
            }

            amount = price * quantity;
            total = total + amount;

            printf("Item added successfully!\n");
            printf("Amount: Rs. %.2f\n", amount);
        }
        else if (choice == 6)
        {
            printf("\nGenerating Bill...\n");
        }
        else
        {
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 6);

    printf("\n================================\n");
    printf("          FINAL BILL\n");
    printf("================================\n");
    printf("Total Amount : Rs. %.2f\n", total);
    printf("GST (5%%)     : Rs. %.2f\n", total * 0.05);
    printf("--------------------------------\n");
    printf("Grand Total  : Rs. %.2f\n", total * 1.05);
    printf("================================\n");
    printf("       THANK YOU! VISIT AGAIN\n");

    return 0;
}
