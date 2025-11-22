#include<stdio.h>
#include<string.h>
#include<conio.h>

struct Customer{
	int id;        // stores id
	char name[50]; // store name
	double gross;  // store gross profit of customer systme
    int discount;  // stores a discount
    char prod_name; // store a product name
}c1;

void display(){
	int id;
	FILE *fp,*fp2;
	struct c1;
	
	fopen("employee.txt",fp);
    fopen("emp.txt",fp2);
	
	printf("\nEnter your id to display or display all data of employee..");
	fwrite(&fp, sizeof(fp),wprintf("1","sarjan","1200","5","Usb type C cable"),fp);
    // i take dummmy data of mine
    /*
    id - 1
    name - sarjan
    gross profit - 1200
    discount - 5%
    product name - Usb type C cable
    */

    // remove("employee.txt");
    // rename("emp.txt",fp2);
    fclose(fp);
    fclose(fp2); // this is used for closing file
}

void search(){
    int id,n,found=0;
    FILE *fp,*fp2;
    struct c1;

    fopen("employee.txt",fp);
    fopen("emp.txt",fp2);

    printf("\nEnter your id to search customer data...");
    // fread(&fp, sizeof(fp),1,fp);
    scanf("%d",&n);


    if(c1.id == n ){
        found=1;
    } else {
        found=0;
    }

    if(!found){
        printf("\n Please check your id ");
    } else{
        printf("\nId found Successfully...");
    }
}

void endata(){
    // this function is used for add data of customer 
    int id;
    FILE *fp,*fp2;
    struct c1;
    char name[50],prod_name[50];

    fopen("employee.txt",fp);
    fopen("emp.txt",fp2);

    printf("\nEnter your id...");
    scanf("%d",&c1.id);
    printf("\nEnter your name:");
    scanf("%c",c1.name);
    printf("\nEnter your profit for gross");
    scanf("%d",&c1.gross);
    printf("\nEnter your product name: ");
    scanf("%s",c1.prod_name);

    fclose(fp);
    fclose(fp2);
}

void main(){
    int no;
    struct c1;
	clrscr();
	
    printf("1. Enter your data\n2. Enter your id to search employee\n3. Display all data of employee\n4. exit");
    printf("\nEnter our choice from below:");
    scanf("%d",&no);

    switch(no){
        case 1:
            endata();
            break;
        case 2:
            search();
            break;
        case 3: 
            display();
            break;
        case 4:
            // exit(0);
            break;
        default:
            printf("\nEnter valid choice..");
    }
    // return 0;
	getch();
}