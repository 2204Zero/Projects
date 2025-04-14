// C Program to Store Information of Students Using Structure
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create the student structure
struct Student {
    char* name;
    int roll_number;
    int age;
    double total_marks;
};

int main() {

    // Create an array of student structure variable with
  	// 5 Student's records
    struct Student students[5];
  	int n = sizeof(students)/sizeof(struct Student);

    // Get the students data
    students[0].roll_number = 1;
    students[0].name = "Shreya";
    students[0].age = 12;
    students[0].total_marks = 78.50;

    students[1].roll_number = 5;
    students[1].name = "Carry";
    students[1].age = 10;
    students[1].total_marks = 56.84;

    students[2].roll_number = 2;
    students[2].name = "Ram";
    students[2].age = 11;
    students[2].total_marks = 87.94;

    students[3].roll_number = 4;
    students[3].name = "Zero";
    students[3].age = 12;
    students[3].total_marks = 89.78;

    students[4].roll_number = 3;
    students[4].name = "Navya";
    students[4].age = 13;
    students[4].total_marks = 78.55;

    students[5].roll_number = 6;
    students[5].name = "Nikita";
    students[5].age = 16;
    students[5].total_marks = 73.34;

    students[6].roll_number = 7;
    students[6].name = "tanya";
    students[6].age = 14;
    students[6].total_marks = 97.55;

    students[7].roll_number = 8;
    students[7].name = "Aarav";
    students[7].age = 15;
    students[7].total_marks = 86.76;

    students[8].roll_number = 9;
    students[8].name = "kavya";
    students[8].age = 12;
    students[8].total_marks = 92.44;

    students[9].roll_number = 10;
    students[9].name = "nikhil";
    students[9].age = 13;
    students[9].total_marks = 75.00;

    students[10].roll_number = 11;
    students[10].name = "krish";
    students[10].age = 15;
    students[10].total_marks = 64.66;

    students[11].roll_number = 12;
    students[11].name = "pranav";
    students[11].age = 14;
    students[11].total_marks = 78.00;

    students[12].roll_number = 13;
    students[12].name = "zoya";
    students[12].age = 12;
    students[12].total_marks = 95.87;
    
    students[13].roll_number = 14;
    students[13].name = "Riya";
    students[13].age = 13;
    students[13].total_marks = 89.78;

    students[14].roll_number = 15;
    students[14].name = "priya";
    students[14].age = 16;
    students[14].total_marks = 77.90;

    students[15].roll_number = 16;
    students[15].name = "Raghav";
    students[15].age = 15;
    students[15].total_marks = 80.55;

    students[16].roll_number = 17;
    students[16].name = "nishant";
    students[16].age = 14;
    students[16].total_marks = 94.45;

    students[17].roll_number = 19;
    students[17].name = "anushka";
    students[17].age = 15;
    students[17].total_marks = 98.87;

    students[18].roll_number = 18;
    students[18].name = "virat";
    students[18].age = 18;
    students[18].total_marks = 100.00;

    students[19].roll_number = 20;
    students[19].name = "khushi";
    students[19].age = 17;
    students[19].total_marks = 95.55;

    students[20].roll_number = 21;
    students[20].name = "mohit";
    students[20].age = 15;
    students[20].total_marks = 71.43;

    students[21].roll_number = 22;
    students[21].name = "arnav";
    students[21].age = 16;
    students[21].total_marks = 87.56;

    students[22].roll_number = 23;
    students[22].name = "Myra";
    students[22].age = 17;
    students[22].total_marks = 98.67;

    students[23].roll_number = 24;
    students[23].name = "mayank";
    students[23].age = 12;
    students[23].total_marks = 86.55;

    students[24].roll_number = 25;
    students[24].name = "Ayush";
    students[24].age = 13;
    students[24].total_marks = 81.90;

    students[25].roll_number = 26;
    students[25].name = "Aditi";
    students[25].age = 14;
    students[25].total_marks = 64.45;

    students[26].roll_number = 27;
    students[26].name = "simran";
    students[26].age = 16;
    students[26].total_marks = 96.77;

    students[27].roll_number = 28;
    students[27].name = "anvi";
    students[27].age = 15;
    students[27].total_marks = 89.87;

    students[28].roll_number = 29;
    students[28].name = "Ira";
    students[28].age = 17;
    students[28].total_marks = 78.68;

    students[29].roll_number = 30;
    students[29].name = "ritesh";
    students[29].age = 16;
    students[29].total_marks = 84.65;

    students[30].roll_number = 31;
    students[30].name = "Arjit";
    students[30].age = 12;
    students[30].total_marks = 97.44;

    students[31].roll_number = 32;
    students[31].name = "udayan";
    students[31].age = 15;
    students[31].total_marks = 91.34;

    students[32].roll_number = 33;
    students[32].name = "meera";
    students[32].age = 16;
    students[32].total_marks = 98.65;

    students[33].roll_number = 34;
    students[33].name = "diya";
    students[33].age = 18;
    students[33].total_marks = 76.77;

    students[34].roll_number = 35;
    students[34].name = "nidhi";
    students[34].age = 14;
    students[34].total_marks = 88.77;

    students[35].roll_number = 36;
    students[35].name = "aanya";
    students[35].age = 16;
    students[35].total_marks = 73.40;

    students[36].roll_number = 37;
    students[36].name = "saanvi";
    students[36].age = 14;
    students[36].total_marks = 87.66;

    students[37].roll_number = 38;
    students[37].name = "priyanka";
    students[37].age = 14;
    students[37].total_marks = 78.32;

    students[38].roll_number = 39;
    students[38].name = "meenakshi";
    students[38].age = 18;
    students[38].total_marks = 98.00;

    students[39].roll_number = 40;
    students[39].name = "rashmi";
    students[39].age = 14;
    students[39].total_marks = 68.56;

    students[40].roll_number = 41;
    students[40].name = "teena";
    students[40].age = 17;
    students[40].total_marks = 75.00;

    students[41].roll_number = 42;
    students[41].name = "chavii";
    students[41].age = 15;
    students[41].total_marks = 85.00;

    students[42].roll_number = 43;
    students[42].name = "jitendra";
    students[42].age = 14;
    students[42].total_marks = 93.45;

    students[43].roll_number = 44;
    students[43].name = "ashutosh";
    students[43].age = 18;
    students[43].total_marks = 76.00;

    students[44].roll_number = 45;
    students[44].name = "samandar";
    students[44].age = 16;
    students[44].total_marks = 99.87;

    students[45].roll_number = 46;
    students[45].name = "Aishwarya";
    students[45].age = 14;
    students[45].total_marks = 74.46;

    students[46].roll_number = 47;
    students[46].name = "swara";
    students[46].age = 17;
    students[46].total_marks = 86.42;

    students[47].roll_number = 48;
    students[47].name = "neha";
    students[47].age = 16;
    students[47].total_marks = 92.78;

    students[48].roll_number = 49;
    students[48].name = "saurav";
    students[48].age = 12;
    students[48].total_marks = 97.33;

    students[49].roll_number = 50;
    students[49].name = "tanishq";
    students[49].age = 11;
    students[49].total_marks = 89.69;
    
    students[50].roll_number = 51;
    students[50].name = "tanvi";
    students[50].age = 13;
    students[50].total_marks = 77.89;

    students[51].roll_number = 52;
    students[51].name = "harshita";
    students[51].age = 15;
    students[51].total_marks = 95.89;

    students[52].roll_number = 53;
    students[52].name = "vanshika";
    students[52].age = 16;
    students[52].total_marks = 97.00;

    students[53].roll_number = 54;
    students[53].name = "shreyansh";
    students[53].age = 17;
    students[53].total_marks = 75.78;

    students[54].roll_number = 55;
    students[54].name = "vihaan";
    students[54].age = 18;
    students[54].total_marks = 98.67;

    students[55].roll_number = 56;
    students[55].name = "tejas";
    students[55].age = 16;
    students[55].total_marks = 87.65;

    students[56].roll_number = 57;
    students[56].name = "omkar";
    students[56].age = 12;
    students[56].total_marks = 98.99;

    students[57].roll_number = 58;
    students[57].name = "naina";
    students[57].age = 19;
    students[57].total_marks = 77.89;

    students[58].roll_number = 59;
    students[58].name = "shruti";
    students[58].age = 15;
    students[58].total_marks = 84.55;

    students[59].roll_number = 60;
    students[59].name = "jhanvi";
    students[59].age = 13;
    students[59].total_marks = 90.87;

    students[60].roll_number = 61;
    students[60].name = "Niyati";
    students[60].age = 14;
    students[60].total_marks = 97.98;


    // Print the Students information
    printf("========================================\n");
    printf("           Student Records              \n");
    printf("========================================\n");
    
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("  Name        : %s\n", students[i].name);
        printf("  Roll Number : %d\n", students[i].roll_number);
        printf("  Age         : %d\n", students[i].age);
        printf("  Total Marks : %.2f\n", students[i].total_marks);
    }
    
    printf("========================================\n");

    return 0;
}
