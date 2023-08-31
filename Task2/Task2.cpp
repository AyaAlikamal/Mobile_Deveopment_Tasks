#include <iostream>

#define ARRAY_SIZE 10

int Array_1[ARRAY_SIZE] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};

void Array_To_Stack(int *Array);
void Array_To_Quee(int *Array);
void Array_To_Array(int Array[]);

int main(){

Array_To_Array(Array_1);
Array_To_Stack(Array_1);
Array_To_Quee(Array_1);

}

void Array_To_Quee(int *Array){
int Quee[ARRAY_SIZE] = {0};
int Counter = 0;
for (Counter = 0 ; Counter< ARRAY_SIZE ; Counter++){
  Quee[Counter] = Array[Counter];
}
std::cout<<"the Quee is: ";
for(Counter = 0 ; Counter < ARRAY_SIZE ; Counter++)
{
std::cout<<Quee[Counter];
std::cout<<"\t";
}
std::cout<<"\n"; 
}


void Array_To_Stack(int Array[]){
int Stack[ARRAY_SIZE] = {0};
int Stack_Pointer = 9;
int Counter = 0;

for(Counter = 0 ; Counter < 10 ; Counter++){
    Stack[Stack_Pointer] = Array[Counter];
    Stack_Pointer--; 
}
std::cout<<"The Stack is: ";
for(Counter = 0 ; Counter < 10 ; Counter++){
    std::cout<<Stack[Counter];
    std::cout<<"\t";
}
std::cout<<"\n"; 
}

void Array_To_Array(int Array[]){
int Array_2[ARRAY_SIZE] = {0};
int Counter = 0;
for (Counter = 0 ; Counter< ARRAY_SIZE ; Counter++){
  Array_2[Counter] = Array_1[Counter];
}
std::cout<<"the Array is: ";
for(Counter = 0 ; Counter < ARRAY_SIZE ; Counter++)
{
std::cout<<Array_2[Counter];
std::cout<<"\t";
}
std::cout<<"\n";
}
