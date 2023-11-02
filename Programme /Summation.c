
/* ========== [ Algorithm ] ========== //
    
    Step-1) Start The Programme;
    Step-2) Read The Value Of "N";
    Step-3) Set Sum == 0;
    
    Step-4) Repeat i = 0 to N [Avoid i==3];
            set sum = sum + N ^ 2 ;
            [End of The Loop]
    
    Step-5) print the value of Sum;
    Step-6) Exit The Programme;
    
// ================================== */


#include <stdio.h>    // For Standard Input / Output
#include <math.h>     // For Math Library, Function == [ pow() ]
// #include <conio.h> // For Console Input / Output

void main() {

  // Initilize the Variables will need for the programme
  int i,n,sum;

  // For the input & input Instruction
  printf("Enter The Value of N : ");
  scanf("%d", &n);

  // Initlize the value Sum == 0
  sum = 0;

  // Start the loop for i=0 to input value [N]
  for (i=0;i<=n;i++) {
    if(i==3) continue;
    sum = sum + pow(i,2);
  }

  // print the Summation
  printf("The Summation = %d",sum);

}

/* ========= [ Output ] ========= //

    Enter The Value of N : 4
    The Summation = 21

// ============================= */
