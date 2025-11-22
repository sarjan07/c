#include <stdio.h>
#include <string.h>
struct Customer {
    char name[50];
    char product[50];
    float price;
    int qty;
    float discount;
    float gst;
};
int main() {
    struct Customer c[100]; 
    int choice, index = 0;   
    while (1) {
        printf("\n Customer Management System \n");
        printf("1. Add Customer\n");
        printf("2. Update Customer\n");
        printf("3. Delete Customer\n");
        printf("4. Show All Customers\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("\nEnter Customer Name: ");
            scanf("%s", c[index].name);
            printf("Enter Product Name: ");
            scanf("%s", c[index].product);
            printf("Enter Price: ");
            scanf("%f", &c[index].price);
            printf("Enter Quantity: ");
            scanf("%d", &c[index].qty);
            printf("Enter Discount %%: ");
            scanf("%f", &c[index].discount);
            printf("Enter GST %%: ");
            scanf("%f", &c[index].gst);
            printf("\nCustomer Added Successfully!\n");
            index++;
        }
        else if (choice == 2) {
            int id;
            printf("Enter Customer Number to Update (0 to %d): ", index - 1);
            scanf("%d", &id);

            if (id >= 0 && id < index) {
                printf("\nEnter New Customer Name: ");
                scanf("%s", c[id].name);
                printf("Enter New Product Name: ");
                scanf("%s", c[id].product);
                printf("Enter New Price: ");
                scanf("%f", &c[id].price);
                printf("Enter New Quantity: ");
                scanf("%d", &c[id].qty);
                printf("Enter New Discount %%: ");
                scanf("%f", &c[id].discount);
                printf("Enter New GST %%: ");
                scanf("%f", &c[id].gst);
                printf("Customer Updated!\n");
            } else {
                printf("Invalid Customer Number!\n");
            }
}
        else if (choice == 3) {
            int id;
            printf("Enter Customer Number to Delete (0 to %d): ", index - 1);
            scanf("%d", &id);

            if (id >= 0 && id < index) {
                for (int i = id; i < index - 1; i++) {
                    c[i] = c[i + 1];
                }
                index--;
                printf("Customer Deleted!\n");
            } else {
                printf("Invalid Number!\n");
            }
        }
        else if (choice == 4) {
            printf("\n----- All Customers -----\n");
            for (int i = 0; i < index; i++) {
                printf("\nCustomer %d\n", i);
                printf("Name     : %s\n", c[i].name);
                printf("Product  : %s\n", c[i].product);
                printf("Price    : %.2f\n", c[i].price);
                printf("Qty      : %d\n", c[i].qty);
                printf("Discount : %.2f%%\n", c[i].discount);
                printf("GST      : %.2f%%\n", c[i].gst);
            }
        }
        else if (choice == 5) {
            printf("Thank You!\n");
            break;
        }
        else {
            printf("Invalid Choice! Try Again.\n");
        }
    }
    return 0;
}