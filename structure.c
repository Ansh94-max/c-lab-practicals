// #include <stdio.h>

// void main(){
//     struct complex{
//         float real;
//         float complex;
//     } a,b,c;
//     scanf("%f %f",&a.real,&a.complex);
//     scanf("%f %f",&b.real,&b.complex);

//     c.real = a.real + b.real;
//     c.complex = a.complex + b.complex;
//     printf("Sum = %f + %fi", c.real, c.complex);

// }

// #include <stdio.h>

// struct Patient {
//     int id;
//     char name[50];
//     int age;
//     float temp;
// };

// int main() {
//     int n, i;

//     scanf("%d", &n);

//     struct Patient p[n];

//     // Input (same line format as given)
//     for(i = 0; i < n; i++) {
//         scanf("%d %s %d %f", &p[i].id, p[i].name, &p[i].age, &p[i].temp);
//     }

//     // Output in required format
//     for(i = 0; i < n; i++) {
//         printf("Patient ID: %d\n", p[i].id);
//         printf("Name: %s\n", p[i].name);
//         printf("Age: %d\n", p[i].age);
//         printf("Temperature: %.1f\n", p[i].temp);

//         if(p[i].temp > 100)
//             printf("Status: Fever\n");
//         else
//             printf("Status: Normal\n");

//         printf("\n"); // space between patients
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *ptr;
//     int n = 5;
//     ptr = (int *)malloc(n * sizeof(int));
//     if (ptr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     // Use the allocated memory
//     for (int i = 0; i < n; i++) {
//         ptr[i] = i + 1;
//     }
//     // Print the values
//     printf("Elements:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", ptr[i]);
//     }
//     // Free the allocated memory
//     free(ptr);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *ptr;
//     int n = 5;
//     ptr = (int*)calloc(n, sizeof(int));
//     if (ptr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     printf("Values after calloc:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", ptr[i]);
//     }
//     free(ptr);
//     return 0; 
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *ptr;
//     int n=5;
//     ptr = (int*)malloc(n * sizeof(int));
//     for(int i=0;i<n;i++){
//         ptr[i] = i+1;
//     }
//     // resize to 5 elements
//     ptr = (int*)realloc(ptr,5*sizeof(int));
//     for(int i=3;i<5;i++){
//         ptr[i] = i+1;
//     }
//     printf("After realloc:\n");
//     for(int i=0;i<5;i++){
//         printf("%d ", ptr[i]);
//     }
//     free(ptr);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n;
//     printf("enter number of students:");
//     scanf("%d", &n);

//     int *marks = (int*)malloc(n * sizeof(int));

//     for(int i = 0; i < n; i++) {
//         printf("enter marks of student %d: ", i + 1);
//         scanf("%d", &marks[i]);
//     }
//     printf("Marks:\n");
//     for(int i=0;i<n;i++){
//         printf("%d ",marks[i]);
//     }
//     free(marks);
//     return 0;
// }

// #include <stdio.h>

// struct Student {
//     int roll;
//     char name[50];
//     int m1, m2, m3;
//     float avg;
// };

// int main() {
//     int n, i;
//     float class_avg = 0;
//     printf("enter number of students: ");
//     scanf("%d", &n);

//     struct Student s[n];
//     for(i = 0; i < n; i++) {
//         printf("Enter roll, name, marks(3 subjects): ");
//         scanf("%d %s %d %d %d", &s[i].roll, s[i].name,
//               &s[i].m1, &s[i].m2, &s[i].m3);

//         int total = s[i].m1 + s[i].m2 + s[i].m3;
//         s[i].avg = total / 3.0;

//         class_avg += s[i].avg;
//     }

//     class_avg = class_avg / n;

//     // Output
//     printf("\nStudents scoring above class average:\n");
//     for(i = 0; i < n; i++) {
//         if(s[i].avg > class_avg) {
//             printf("%s\n", s[i].name);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n, m, i;
//     printf("Enter initial number of items: ");
//     scanf("%d", &n);

//     int *cart = (int *)malloc(n * sizeof(int));

//     printf("Enter %d items: ", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &cart[i]);
//     }
//     printf("Enter number of additional items: ");
//     scanf("%d", &m);
//     cart = (int *)realloc(cart, (n + m) * sizeof(int));
//     printf("Enter %d more items: ", m);
//     for(i = n; i < n + m; i++) {
//         scanf("%d", &cart[i]);
//     }
//     printf("\nFinal Cart Items:\n");
//     for(i = 0; i < n + m; i++) {
//         printf("%d ", cart[i]);
//     }

//     // Step 7: free memory
//     free(cart);

//     return 0;
// }

// #include <stdio.h>

// // Define union
// union Sensor {
//     float temperature;
//     int pressure;
//     char status;
// };

// int main() {
//     union Sensor s;

//     float temp;
//     int pres;
//     char stat;

//     printf("Enter temperature: ");
//     scanf("%f", &temp);

//     printf("Enter pressure: ");
//     scanf("%d", &pres);

//     printf("Enter status: ");
//     scanf(" %c", &stat);

//     // Assign and display temperature
//     s.temperature = temp;
//     printf("\nTemperature: %.2f\n", s.temperature);

//     // Assign and display pressure (overwrites temperature)
//     s.pressure = pres;
//     printf("Pressure: %d\n", s.pressure);

//     // Assign and display status (overwrites pressure)
//     s.status = stat;
//     printf("Status: %c\n", s.status);

//     // Size of union
//     printf("Size of union: %lu bytes\n", sizeof(s));

//     return 0;
// }

#include <stdio.h>

struct Salary
{
    float basic;
    float hra;
    float da;
};

struct Employee
{
    int id;
    char name[50];
    struct Salary sal;
    float total;
};

int main()
{
    int n;
    scanf("%d", &n);

    struct Employee e[n];

    // Input + total calculation
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %f %f %f",
              &e[i].id,
              e[i].name,
              &e[i].sal.basic,
              &e[i].sal.hra,
              &e[i].sal.da);

        e[i].total = e[i].sal.basic + e[i].sal.hra + e[i].sal.da;
    }

    // Find highest salary
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (e[i].total > e[maxIndex].total)
        {
            maxIndex = i;
        }
    }

    // Output
    printf("Employee with highest salary:\n");
    printf("ID: %d\n", e[maxIndex].id);
    printf("Name: %s\n", e[maxIndex].name);
    printf("Total Salary: %.2f\n", e[maxIndex].total);

    return 0;
}