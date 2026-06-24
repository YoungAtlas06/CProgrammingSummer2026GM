#include <stdio.h>
#include <string.h>

#define NAME_SIZE 30
#define STREET_NAME 50
#define CITY_NAME 40
#define CLASS_SIZE 48

typedef struct{
    char street[STREET_NAME];
    char city[CITY_NAME];
    int zip_code;
} Address;

//Create a new type (structure)
struct student{
    //Data members
    char firstName[NAME_SIZE];
    char lastName[NAME_SIZE];
    unsigned age;
    Address home_address;
};

typedef struct student Student;

typedef struct {
    int class_size;
    Student student_list[CLASS_SIZE];
} Class;

/*
    Create address structure
    typedef struct{
        char street[STREET_NAME];
        char city[CITY_NAME];
        int zip_code;
    } Address;
*/

//Function prototype (accepting a structure)
void print(struct student s); // Not efficient

void printStudentPointer(const struct student* stud);

void printAddress(const Address* adr);

Address createAddress(void);

void printClass(const Class* class);

int main(void){
    int a; // Creates an object of type int named a

    struct student stud; // Creates an object of type struct student named stud

    // Acess and initialize the data members
    strcpy(stud.firstName, "Bobby");
    strcpy(stud.lastName, "Burns");
    stud.age = 20;

    print(stud);


    ////////
    int b = 1;
    int* pB = &b;
    *pB = 10; //Access b through pB
    
    //Create a pointer to a student
    struct student* stud_ptr = &stud;

    printStudentPointer(stud_ptr);

    // Test ADDRESS

    Address address = createAddress();
    printAddress(&address);

    // Create a student (initializer list)
    Student aStudent = {.firstName = "Michael", .lastName = "Myers", .age = 25, .home_address.street = "Orange", .home_address.city = "Miami", .home_address.zip_code = 31845};
    printStudentPointer(&aStudent);

    Student bStudent = {"Jack", "Pentacost", 21, {"Pine", "Tampa", 34532}};
    printStudentPointer(&bStudent);

    // Create the class
    Class COP2271;
    COP2271.class_size = 0;
    COP2271.student_list[0] = stud;
    COP2271.class_size++;
    COP2271.student_list[1] = aStudent;
    COP2271.class_size++;
    COP2271.student_list[2] = bStudent;
    COP2271.class_size++;

    printClass(&COP2271);
    
    return 0;
}

void print(struct student stud){
    printf("First Name: \t%s\n", stud.firstName);
    printf("Last Name: \t%s\n", stud.lastName);
    printf("Age: \t\t%u\n", stud.age);

}

void printStudentPointer(const struct student* stud){
    //printf("First Name: \t%s\n", (*stud).firstName);
    //printf("Last Name: \t%s\n", (*stud).lastName);
    //printf("Age: \t\t%u\n", (*stud).age);

    printf("First Name: \t%s\n", stud->firstName);
    printf("Last Name: \t%s\n", stud->lastName);
    printf("Age: \t\t%u\n", stud->age);
    printAddress(&stud->home_address);
}

Address createAddress(void){
    Address adr;
    printf("Enter the street: ");
    scanf("%s", adr.street);
    printf("Enter the city: ");
    scanf("%s", adr.city);
    printf("Enter the Zip_Code: ");
    scanf("%d", &adr.zip_code);

    return adr;
}

void printAddress(const Address* adr){
    printf("%s, %s %d\n", adr->street, adr->city, adr->zip_code);
}

void printClass(const Class* class){
    for(int i = 0; i < class->class_size; i++){
        printStudentPointer(&class->student_list[i]);
    }
}