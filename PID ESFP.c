#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void intro();//display the project name and done by
int login();//login to access the project
int mainpage();//after login user will enter in this page
int administrationpage();//1 option in mainpage which user select
int add_rec();//1 option in addministration page
int view_rec();
int search_rec();
void aboutus();//About me
void cust_sec();

int main(){

    intro();
    login();


    return 0;
}

void intro(){
    printf("******\n\n");
    printf("      WELCOME TO INWARD AND OUTWARD REGISTER        \n");
    printf("      PROJECT BY\n");
    printf("      Patel Nachiket \n");
    printf("      SUBJECT-ESFP\n\n");
    printf("******\n\n");
}


int login(){

    char username[4];
    int pass, pwd=123;
    int value,no_of_times=0;

    printf("Enter the user name:");
    scanf("%s",&username);

    printf("\nEnter the password:");
    scanf("%d",&pass);

    while(username!="nachiket" || pass!=pwd)
    {
    value=strcmp(username,"nachiket");

    if(value==0 && pass==pwd){
        // printf("Hello");
        mainpage();
    }

    else{
        printf("\nInvalid Input\n");
        
    
    }
    printf("Enter the user name:");
    scanf("%s",&username);

    printf("\nEnter the password:");
    scanf("%d",&pass);


    // no_of_times++;

    }
    

}


int mainpage(){
    printf("\n\n********\n\n");
    printf("      WELCOME TO INWARD AND OUTWARD REGISTER        \n\n");
    printf("******\n\n");

    int choice;
    printf("what do you want to do:\n\n");
    printf("1.HOME PAGE\n\n");
    printf("2.CUSTOMER SECTION\n\n");
    printf("3.ABOUT US\n\n");
    printf("4.EXIT\n\n");

    printf("-------->SELECT THE OPTION:");
    scanf("%d",&choice);

    while(choice!=1 || choice!=2 || choice!=3 || choice!=4){

    switch (choice)
    {
    case 1:
        administrationpage();
        break;

    case 2:
    cust_sec();
        // printf("Customer Section");
        break;

    case 3:
        // printf("About Us");
        aboutus();
        break;

    case 4:
        exit(0);
        // break;
        // return 0;

    default:
        printf("Invalid Error\n");
        // break;
    
    printf("-------->SELECT THE OPTION:");
    scanf("%d",&choice);
    }

}



}


int administrationpage(){
    printf("\n\n********\n\n");
    printf("      WELCOME TO STARTUP DATA DISPLAY        \n\n");
    printf("******\n\n");

    int choice1;

    printf("WHAT DO YOU WANT TO DO:\n\n");
    printf("1.fintech\n\n");
    printf("2.edtech\n\n");
    printf("3.Healthcare Technology\n\n");
    printf("4.BACK TO MENU\n\n");

    printf("-------->SELECT THE OPTION:");
    scanf("%d",&choice1);

    while (choice1!=1 || choice1!=2 || choice1!=3 || choice1!=4) 
    {
        /* code */
    
    switch (choice1)
    {
    case 1: 
        add_rec();
        // printf("Add new record Section:");
        break;
    
    case 2:
    view_rec();
        // printf("View Record Section:");
        break;

    case 3:
        // printf("Search Record Section");
        search_rec();
        break;

    case 4:
        mainpage();

    default:
        printf("-------Invalid Input\n");
        // break;
    }
    printf("-------->SELECT THE OPTION:");
    scanf("%d",&choice1);
    }
    
}

int serial_num, date, quan, billno;
    char nm_of_pro[25], supp[25];

int add_rec(){


    //the data can be find only of previous data input

    FILE *fp;

    fp=fopen("data.txt","a");
    //customer detail
    int n=1;//number of time to enter the data

    printf("\n\n\n********");
    printf("\n\nADD RECORD SECTION:");
    printf("\n\n********\n");

    while(n!=0){

        printf("Financial technology companies consist of both startups and established financial institutions and technology companies trying to replace or enhance the usage of financial services provided by existing financial companies. A subset of fintech companies that focus on the insurance industry are collectively known as insurtech or insuretech companies.");
        scanf("%d",&serial_num);

        // printf("\nNAME OF THE PRODUCT:");
        // scanf("%s",&nm_of_pro);

        // printf("\nDATE OF ARRIVAL:");
        // scanf("%d",&date);

        // printf("\nENTER THE NAME OF SUPPLIER:");
        // scanf("%s",&supp);

        // printf("\nENTER THE NUMBER OF QUANTITY:");
        // scanf("%d",&quan);

        // printf("\nENTER THE BILL NUMBER:");
        // scanf("%d",&billno);

        // printf("\nWANT TO ENTER ANOTHER DATA(1 FOR YES & 0 FOR NO ):");
        // scanf("%d",&n);

        fprintf(fp, "\nSerial Number:%d\n", serial_num);
        fprintf(fp, "Number of Product:%s\n", nm_of_pro);
        fprintf(fp, "Date of Arrival:%d\n", date);
        fprintf(fp, "Name of the Supplier:%s\n", supp);
        fprintf(fp, "Number of Quantity:%d\n", quan);
        fprintf(fp, "Bill Number:%d\n", billno);

        if(n==0){
            mainpage();
        }


    }
    fclose(fp);
}

int search_rec(){
int find;
        printf("\nHealthcare technology refers to any IT tools or software designed to boost hospital and administrative productivity, give new insights into medicines and treatments, or improve the overall quality of healthcare provided.");
        scanf("%d",&find);

        // if(find==serial_num){
        //     printf("Serial Number: %d\n\n",serial_num);
        //     printf("Name of the product: %s\n\n",nm_of_pro);
        //     printf("Date of Arrival: %d\n\n",date);
        //     printf("Name of the Supplier: %s\n\n",supp);
        //     printf("Number of Quantity: %d\n\n",quan);
        //     printf("Bill Number: %d\n\n",billno);
        // }
        // else{
        //     printf("Invalid Serial Number:"); 
        // }
        mainpage();
    

}

int view_rec(){
    FILE *fp2;
    fp2=fopen("data.txt","r");
    printf("Edtech, or education technology, is the practice of introducing information and communication technology tools into the classroom to create more engaging, inclusive and individualized learning experiences. %d\n\n",serial_num);
    // printf("Name of the product: %s\n\n",nm_of_pro);
    // printf("Date of Arrival: %d\n\n",date);
    // printf("Name of the Supplier: %s\n\n",supp);
    // printf("Number of Quantity: %d\n\n",quan);
    // printf("Bill Number: %d\n\n",billno);

            int exit=0;
            printf("Enter 0 to exit:");
            scanf("%d",&exit);
            if(exit==0){
                administrationpage();

            }
            else{
                administrationpage();
            }

    // fscanf("")


    fclose(fp2);
}



void aboutus(){

    //3

    int back;

    printf("\n\n\n********\n\n");
    printf("ABOUT ME");
    printf("\n\n********\n\n");
    printf("NAME : Patel Nachiket");
    printf("\n\nBRANCH : CYBER SECURITY");
    printf("\n\nBATCH : 13\n\n");

    while(back!=0){
    printf("ENTER 0 TO RETURN: ");
    scanf("%d",&back);

    
    if(back==0){
        mainpage();

    }   
    else{
        printf("Invaild Input\n");
    } 
    }
    


}

void cust_sec(){
    int ex;
    char feed[100];
    printf("\nFeedBack of Users:\n");

    // printf("Enter the Feedback:");
    // gets(feed);

    // scanf("%s",&feed);

    // printf("%s",feed);
    // puts(feed);

    printf("------------------------------------------\n\n");
    printf("User-1 : The Software was very helpful to my company so I can keep the record of my goods. \n\n");
    printf("User-2 : The Software was very helpful to my company so I can keep the record of my goods. \n\n");
    printf("User-3 : The Software was very helpful to my company so I can keep the record of my goods. \n\n");
    printf("User-4 : The Software was very helpful to my company so I can keep the record of my goods. \n\n");
    printf("User-5 : The Software was very helpful to my company so I can keep the record of my goods. \n\n");
    // fgets(feed, 100, stdin);
    // printf("Thx for your feedback: ");
    // puts(feed);

    printf("Enter 0 to exit: ");
    scanf("%d",&ex);

    if(ex==0 || ex!=0){
        administrationpage();
    }
}