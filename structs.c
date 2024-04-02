// // struct Initializing
// // **********************
// #include <stdio.h>

// struct point {
//     int y;                      //it can have any and different type of data
//     char x;
// };

// int main()
// {
//     struct point p1; // creat structure piont variable
//     p1.y = 10;
//     p1.x = 'A';

//         printf("%d\n", p1.y);
//         printf("%c\n", p1.x);
//     return 0;
// }

// type dates
// ***************
// #include <stdio.h>
// typedef struct date
// {
//     int day;
//     char *month;
//     int year;
//  } Date;        // another way to intialize structs

// void printDate(Date dt)                   // printing date structure
// {
//     printf("%d %s %d ", dt.day, dt.month, dt.year);
// }
// Date inputDate()      // assigning structs values
// {
//     Date dt;

//     dt.day  = 5;
//     dt.month = "November";
//     dt.year = 2002;
    
//     return dt;
// }

// int main()                              // initializing and declaring functions
// {   
//     Date graduationDate;
//     graduationDate = inputDate();

//     printDate(graduationDate);
// }

//