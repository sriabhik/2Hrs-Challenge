#include<bits/stdc++.h>

using namespace std;
class Student{
    public:

        int roll_id;
    public:
         Student(int roll_id);
};

class Result :public Student{
    protected:
        int total_marks,a,a1,b;
    public:
       
        Result(int roll_id) : Student(roll_id){
                this->roll_id = roll_id;
            }
        void sum_mark(void){
            cout <<"Roll Number::  " << this->roll_id  ;
        }
};
int main(){

    Result student1(76);
    student1.sum_mark();
    return 0;
}
