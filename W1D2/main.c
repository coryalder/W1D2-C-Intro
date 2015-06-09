//
//  main.c
//  W1D2
//
//  Created by Cory Alder on 2015-06-08.
//  Copyright (c) 2015 Cory Alder. All rights reserved.
//

#include <stdio.h>

void doNothing();
void structures2();
void arrays1();

int main(int argc, const char * argv[]) {
    arrays1();
    
    structures2();
    
    // ------------------- //
    //  Variables & Types
    // ------------------- //
    
    
    int months = 12;
    
    float pi = 3.1415;
    
    char character1 = 'a';
    
    int j, k;
    
    
    
    
    
    printf("months %d\n", months);
    printf("pi %f\n", pi);
    printf("character1 %c\n", character1);
    printf("j %i\n", j);
    printf("k %d\n", k);
    
    
    
    
    
    
    
    
    // ------------------- //
    //  Variable Scope
    // ------------------- //
    
    int i = 0;
    
    if (1) {
        i++;
    }
    
    
    
    if (1) {
        int t = 0;
        t++;
    }
    
    // printf("t is %d", t);
    
    
    
    
    
    
    
    
    
    // --
    
    for (int count = 0; count < 10; count++) {
        int g = 0;
        g++;
    }
    
    
    // what is the value of g now?
    
    // --
    
    
    // ------------------- //
    //      Statements
    // ------------------- //
    
    // conditionals
    
    if (1 == 0) {
        // will this block run?
    }
    
    
    
    
    
    
    
    
    if (1 == 0 || 10 * 10 < 101) {
        // will this block run?
    }
    
    
    
    
    
    
    
    
    
    
    
    
    // loops
    
    // while:
    
    int counter = 0;
    
    while (counter < 20) {
        printf("hello world\n");
        
        // might need some... tweaking?
        
        counter++;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // for loop:
    
    
    for (int c = 0; c < 10; c++) {
        printf("c is %d\n", c);
    }
    
    
    
    
    
    
    
    // ------------------- //
    //      Expressions
    // ------------------- //
    
    int a = 0;
    int b = 10;
    
    a = b * b;
    a = a / b;
    
    
    
    
    a = a + 1;

    a++;
    
    a += 1;
    
    return 0;
}










// ------------------- //
//      Functions
// ------------------- //

int max(int num1, int num2) {

    /* local variable declaration */
    int result;
    
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}







void doNothing() {
    
    
    
    
    
    
    printf("just kidding, this does something\n");
    
    

    int maxValue = max(10, 11);
    printf("the max of ten and eleven is %d\n", maxValue);
    
}






// ------------------- //
// Function prototypes
// ------------------- //



void doSomethingElse();

void doSomething() {
    doNothing(); // √
    doSomethingElse();
}


void doSomethingElse() {
    printf("needs a function prototype");
}







// ------------------- //
//      Structures
// ------------------- //



//float midPoint(float x, float y) {
//
//}

void structures() {
    // WHY U NEED STRUCTURE???!

    float x = 100.0;
    float y = 75.0;
    
    
    // I want to find the point midway between the origin and mid_x
    
    float mid_x = x/2;
    float mid_y = y/2;
    
    printf("mid is %f, %f\n", mid_x,mid_y);
    
    // now try to bundle this up into a function?
    
    
    
    
    
    
    
    // is there a better way to structure this data??!?

}


typedef struct {
    float x;
    float y;
} Point;





Point midPoint(Point input); // this is a function prototype!



void structures2() {
    Point pt;
    
    pt.x = 100.0;
    pt.y = 75.0;
    
    Point mid = midPoint(pt);
    printf("Mid is %f, %f\n", mid.x, mid.y);
}







Point midPoint(Point input) {
    Point output;
    output.x = input.x / 2;
    output.y = input.y / 2;
    return output;
}





// SOOO POWERFULLL!!

typedef struct {
    int leg_count;
    char *manufacturer_name;
    long long int creation_timestamp;
    Point location;
} Chair;







// ------------------- //
//      Arrays!
// ------------------- //



void arrays1() {
    
    // sized array
    
    int arrayOfTenInts[10];
    
    printf("int at index 5 is %i\n", arrayOfTenInts[5] );
    

    
    
    arrayOfTenInts[5] = 100;
    
    
    printf("int at index 5 is NOW %i\n", arrayOfTenInts[5] );
    
    

    
    
    
    
    
    
    // auto-sized array
    
    int arrayOfInts[7] = {0,1,2,3,4,5,6,7,8};
    
    
    
    
    
    
    // strings are arrays!
    
    char arrayOfChars[255] = "tacos rule!";
    

    
    
    
    
    printf("what do I think of tacos? %s\n", arrayOfChars);
}

