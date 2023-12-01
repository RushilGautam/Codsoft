#include <iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
int main() {
    int n;
    int random_number;
    srand(time(0));
    n=50;
    random_number=rand()%n;
    int userguess=0;
    int numberofmoves=0;
    while(userguess!=random_number){
        numberofmoves++;
        cout<<"Enter your Guess\n";
        cin>>userguess;
        if(userguess==random_number){
            cout<<"Congratulations! your guessed number is right and it took a total of "<<numberofmoves<<" number of moves\n";
        }
        else if(userguess<random_number){
            cout<<"Try again! and Enter a higher number\n";
        }
        else{
            cout<<"Try again! and enter a lower number\n";
        }
    }

    return 0;
}