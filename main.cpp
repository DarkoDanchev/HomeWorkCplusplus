#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;
//global menu variables
int menuChoice,backChoice;
//first task global int
int numberOne,numberTwo,numberThree;

//third task global int
long digits = 0;

//task 5 global variables
int totalNumbers=0;
float numbersAfter=0,totalAfter = 0;
//task 6 global variables
int biggestN = -2147483648;
//task 7 global variables
int sumArr = 0;
//task 8 global variables
int sumD = 0,totalD = 0,totalNumbersD = 0;
//task 13 global variables
int lastNumber = 12, startNumber = 0, n = 1, a = 0, cNumber = 0;

//task 14 global variables
double totalFak=1,totalAll=1;
//task 15 global variables
unsigned int firstNumber = 0, secondNumber = 0, checkNumber = 0;
//task 14 function
void fak(){
    double numberFakt,x;
    totalFak = 1;
    cout<<"Enter number: ";
    cin>>numberFakt;
    cout<<"\n";
    cout<<"x=";
    cin>>x;
    cout<<"\n";
    for(double i = numberFakt; i > 0; i--){
        totalFak *= i;
    }
    totalAll = totalFak/(pow(x,numberFakt));
    cout<<totalAll<<endl;
}
//task 11 function
void arrayAll(){
    int n,smallN=2147483648,bigN=-2147483648;
    cout<<"Enter the array limit: ";
    cin>>n;
    cout<<"\n";
    int a[n];
    for(int i = 0; i < n; i++ ){
        cout<<"Number "<<i+1<<" :"<<endl;
        cin>>a[i];

    }
    bigN=smallN=a[0];
    for(int i = 0; i < n; i++ ){

        if(a[i]>bigN)
        {
            bigN=a[i];
        }
         if(a[i]<smallN)
        {
            smallN=a[i];
        }

    }
    cout<<"Low: "<<smallN<<"High: "<<bigN<<endl;

}
//Fibonacci task function
void fibonacci(){

    int n;
    cout<<"Enter which Fibonacci number you want to display in the console: ";
    cin>>n;
    cout<<"\n";
    n+=1;
    int arrF[n];
    arrF[0] = 0;
    arrF[1] = 1;
    for(int i = 2; i <= n;i++){

        arrF[i] = arrF[i-1] + arrF[i-2];
        //cout<<i<<endl;

    }
    cout<<"N Fibonacci number is: "<<arrF[n]<<endl;

}
// task number 6 function

void nNumbers(){
      int n,checkNegative = false;
      cout<<"Enter the array limit: ";
      cin>>n;
      cout<<"\n";
      int a[n];
      for(int i = 0; i < n;i++){
      cout<<"Number "<<i+1<<": ";
      cin>>a[i];
      cout<<"\n";
      if(a[i] < 0 && a[i]> biggestN){
        biggestN = a[i];
        checkNegative = true;
      }

      }
      if(checkNegative == true)
      cout<<"Biggest negative number is: "<<biggestN<<endl;
      else
      cout<<"There is no negative numbers in the array"<<endl;
}
void order(){
                int orderChoice;
                cout<<"1.If you want to show you the numbers in ascending order enter 1 in the console"<<endl;
                cout<<"2.If you want to show you the numbers in descending order enter 2 in the console"<<endl;
                cout<<"Your choice:";
                cin>>orderChoice;
                cout<<"\n";
                switch(orderChoice){
                case 1:
                    int bigNumber,smallNumber,middleNumber;
                    cout<<"The numbers will be shown in ascending order below"<<endl;

                    if(numberOne > numberTwo && numberOne > numberThree){
                        bigNumber = numberOne;
                        if(numberTwo > numberThree){
                            middleNumber = numberTwo;
                            smallNumber = numberThree;
                        }
                        else{
                            middleNumber = numberThree;
                            smallNumber = numberTwo;
                        }
                    }

                    if(numberTwo > numberOne && numberTwo > numberThree){
                        bigNumber = numberTwo;
                        if(numberOne > numberThree){
                            middleNumber = numberOne;
                            smallNumber = numberThree;
                        }
                        else{
                            middleNumber = numberThree;
                            smallNumber = numberOne;
                        }
                    }
                    if(numberThree > numberTwo && numberThree > numberOne){
                        bigNumber = numberThree;
                        if(numberTwo > numberOne){
                            middleNumber = numberTwo;
                            smallNumber = numberOne;
                        }
                        else{
                            middleNumber = numberOne;
                            smallNumber = numberTwo;
                        }
                    }
                    cout<<smallNumber<<" "<<middleNumber<<" "<<bigNumber<<endl;

                    break;
                case 2:

                    cout<<"The numbers will be shown in descending order below"<<endl;

                    if(numberOne > numberTwo && numberOne > numberThree){
                        bigNumber = numberOne;
                        if(numberTwo > numberThree){
                            middleNumber = numberTwo;
                            smallNumber = numberThree;
                        }
                        else{
                            middleNumber = numberThree;
                            smallNumber = numberTwo;
                        }
                    }

                    if(numberTwo > numberOne && numberTwo > numberThree){
                        bigNumber = numberTwo;
                        if(numberOne > numberThree){
                            middleNumber = numberOne;
                            smallNumber = numberThree;
                        }
                        else{
                            middleNumber = numberThree;
                            smallNumber = numberOne;
                        }
                    }
                    if(numberThree > numberTwo && numberThree > numberOne){
                        bigNumber = numberThree;
                        if(numberTwo > numberOne){
                            middleNumber = numberTwo;
                            smallNumber = numberOne;
                        }
                        else{
                            middleNumber = numberOne;
                            smallNumber = numberTwo;
                        }
                    }
                    cout<<bigNumber<<" "<<middleNumber<<" "<<smallNumber<<endl;
                    break;
            default:
                cout<<"Wrong input,program going off"<<endl;
                //return 0;
                break;
                }

}
int main()
{
    int task;
    cout<<"\nChoose a task(1-15)"<<endl;
    cin>>task;
    switch(task){
    //the task number 1 code
    case 1:
        //The numbers input code

        cout<<"Please provide us with three numbers\n(Remember two of them should be negative and the other positive)"<<endl;
        cin>>numberOne>>numberTwo>>numberThree;
        //The numbers check and also main program code
        if(numberOne > 0 && numberTwo > 0 && numberThree > 0){
            cout<<"Wrong input two of the three numbers should be negative\nProgram Restarting"<<endl;
            return main();
        }
        else if(numberOne > 0 && numberTwo > 0){
            cout<<"Wrong input two of the three numbers should be negative\nProgram Restarting"<<endl;
            return main();
        }
        else if(numberOne > 0 && numberThree > 0){
            cout<<"Wrong input two of the three numbers should be negative\nProgram Restarting"<<endl;
            return main();
        }
        else if(numberTwo > 0 && numberThree > 0){
            cout<<"Wrong input two of the three numbers should be negative\nProgram Restarting"<<endl;
            return main();
        }
        else if(numberOne < 0 && numberTwo < 0 && numberThree < 0){
            cout<<"Wrong input one of the three numbers should be positive\nProgram Restarting"<<endl;
            return main();
        }
        else {

            cout<<"1.Enter one to see the three numbers sum"<<endl;
            cout<<"2.Enter two if you want to see the numbers product"<<endl;
            cout<<"3.Enter three if you want to see the numbers in ascending / descending order"<<endl;
            cout<<"Your choice: ";
            cin>>menuChoice;
            cout<<"\n";
            switch(menuChoice){
            case 1:
                cout<<"The numbers sum is "<<numberOne+numberTwo+numberThree<<endl;
                cout<<"1.If you want to go back to the main program menu enter 1"<<endl;
                cout<<"2.If you want to shut down the program enter 2"<<endl;
                cout<<"Your choice:";
                cin>>backChoice;
                cout<<"\n";
                if(backChoice == 1){
                    cout<<"Returning to the main menu"<<endl;
                    return main();
                }
                if(backChoice == 2){
                    cout<<"Program shutdown started,Program is going off"<<endl;
                    return 0;
                }
                break;
            case 2:
                cout<<"The numbers product is: "<<numberOne*numberTwo*numberThree<<endl;
                cout<<"1.If you want to go back to the main program menu enter 1"<<endl;
                cout<<"2.If you want to shut down the program enter 2"<<endl;
                cout<<"Your choice:";
                cin>>backChoice;
                cout<<"\n";
                if(backChoice == 1){
                    cout<<"Returning to the main menu"<<endl;
                    return main();
                }
                if(backChoice == 2){
                    cout<<"Program shutdown started,Program is going off"<<endl;
                    return 0;
                }
                break;
            case 3:
                order();
                break;
        default:
            cout<<"Wrong input,program shutdowns"<<endl;
            return 0;
            break;
            }
        }
        break;



    case 2:
        int numberRand,numberPositive,numberNegative;
        for(int i = 0; i <= 100000; i++){
            numberRand = rand() % 100000+(-100000);
            if(numberRand > 0)
                numberPositive+=numberRand;
            else
                numberNegative+=numberRand;
            break;
        }
        cout<<abs(numberPositive/(numberNegative*1.0))<<endl;
        break;
    case 3:
        int numberDigits,digit;
        cout<<"Enter the number you want to separate: ";
        cin>>numberDigits;
        cout<<"\n";
        /*if(numberDigits < -4000000000 || numberDigits > 4000000000){
            cout<<"Error: Wrong input number should be between[-4000000000,4000000000]\nGoing back to main menu"<<endl;
        }*/
        while (numberDigits != 0){
            digit =numberDigits%10;
            numberDigits /= 10;
            if(digit % 2 == 0){
                digits++;
            }

        }
        cout<<"Number of even digits in the number is:"<<digits<<endl;

        break;
    case 4:
        int pNumber,transformedNumber,pType;
        cout<<"Enter the number: ";
        cin>>pNumber;
        cout<<"\n";
        cout<<"Enter the type of number system you want to change the number: ";
        cin>>pType;
        cout<<"\n";
        while(pNumber != 0){
            transformedNumber = pNumber % pType;
            pNumber /= pType;
           // transformedNumber = pNumber;
            cout<<transformedNumber<< " ";



        }

          //bitset()bin()

        break;
  case 5:
        int numbers[10000];
        int numberLimit;
        cout<<"Please enter the value of K: ";
        cin>>numberLimit;
        cout<<"\n";
        for (int i = 0; i < 10000; i++){
            cout<<"If you want to stop enter -123 in the console"<<endl;
            cout<<"Number "<<i<<" :";
            cin>>numbers[i];
            cout<<"\n";
            if(numbers[i] == -123){
                break;
            }
            totalNumbers += numbers[i];
            if(totalNumbers > numberLimit){
                numbersAfter++;
                totalAfter += numbers[i];
                cout<<"Numbers after K: "<<numbersAfter<<endl;
                cout<<"Arithmetic average of total numbers after K: "<<totalAfter/numbersAfter<<endl;
            }
            else {}
        }

                cout<<"1.If you want to go back to the main program menu enter 1"<<endl;
                cout<<"2.If you want to shut down the program enter 2"<<endl;
                cout<<"Your choice:";
                cin>>backChoice;
                cout<<"\n";
                if(backChoice == 1){
                    cout<<"Returning to the main menu"<<endl;
                    return main();
                }
                if(backChoice == 2){
                    cout<<"Program shutdown started,Program is going off"<<endl;
                    return 0;
                }


        break;

  case 6:
    nNumbers();
    cout<<"1.If you want to go back to the main program menu enter 1"<<endl;
    cout<<"2.If you want to shut down the program enter 2"<<endl;
    cout<<"Your choice:";
    cin>>backChoice;
    cout<<"\n";
    if(backChoice == 1){
    cout<<"Returning to the main menu"<<endl;
    return main();
    }
    if(backChoice == 2){
    cout<<"Program shutdown started,Program is going off"<<endl;
    return 0;
    }
    break;
  case 7:
    int arr[5];
    do{
        sumArr = 0;
        arr[0] = 0;
        arr[1] = 0;
        arr[2] = 0;
        arr[3] = 0;
        arr[4] = 0;
        for(int i = 0; i < 5; i++){
        cout<<"Number "<<i+1<<": ";
        cin>>arr[i];
        cout<<"\n";
        if(arr[4] > arr[3] && arr[3] > arr[2] && arr[2] > arr[1] && arr[1] > arr[0]){
            sumArr += arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
            break;
        }
        else{
        continue;
        }

    }

    }
    while(!(arr[4] > arr[3] && arr[3] > arr[2] && arr[2] > arr[1] && arr[1] > arr[0]));
    cout<<"Sum= "<<sumArr<<endl;
    cout<<"1.If you want to go back to the main program menu enter 1"<<endl;
    cout<<"2.If you want to shut down the program enter 2"<<endl;
    cout<<"Your choice:";
    cin>>backChoice;
    cout<<"\n";
    if(backChoice == 1){
    cout<<"Returning to the main menu"<<endl;
    return main();
    }
    if(backChoice == 2){
    cout<<"Program shutdown started,Program is going off"<<endl;
    return 0;
    }

    break;
  case 8:
      int numberD;
      do{
      cout<<"N[1-27(Max)]=";
      cin>>numberD;
      cout<<"\n";
      for(int i = 100;i < 1000; i++){
        sumD = i / 100 + i / 10 % 10 + i % 10;
        if(sumD > numberD){
            cout<<"Number="<<i<<endl;
            totalD += i;
            totalNumbersD++;
        }
        //continue;

      }
      cout<<"Total= "<<totalD<<endl;
      cout<<"Total Numbers= "<<totalNumbersD<<endl;
      break;
      }
      while(numberD <= 27);


    break;
  case 9:
      int numberN;

      cout<<"Enter the value:";

      cin>>numberN;

      cout<<"\n";
      for(int i = 100;i < 1000; i++){
        if(i < numberN && i / 100 != i / 10 % 10 && i / 100 != i % 10 && i / 10 % 10 != i % 10 ){
            cout <<i<<endl;
        }


        //continue;

      }
    cout<<"1.If you want to go back to the main program menu enter 1"<<endl;
    cout<<"2.If you want to shut down the program enter 2"<<endl;
    cout<<"Your choice:";
    cin>>backChoice;
    cout<<"\n";
    if(backChoice == 1){
    cout<<"Returning to the main menu"<<endl;
    return main();
    }
    if(backChoice == 2){
    cout<<"Program shutdown started,Program is going off"<<endl;
    return 0;
    }


    break;
  case 10:
    fibonacci();
    cout<<"1.If you want to go back to the main program menu enter 1"<<endl;
    cout<<"2.If you want to shut down the program enter 2"<<endl;
    cout<<"Your choice:";
    cin>>backChoice;
    cout<<"\n";
    if(backChoice == 1){
    cout<<"Returning to the main menu"<<endl;
    return main();
    }
    if(backChoice == 2){
    cout<<"Program shutdown started,Program is going off"<<endl;
    return 0;
    }
    break;
  case 11:
    arrayAll();
    cout<<"1.If you want to go back to the main program menu enter 1"<<endl;
    cout<<"2.If you want to shut down the program enter 2"<<endl;
    cout<<"Your choice:";
    cin>>backChoice;
    cout<<"\n";
    if(backChoice == 1){
    cout<<"Returning to the main menu"<<endl;
    return main();
    }
    if(backChoice == 2){
    cout<<"Program shutdown started,Program is going off"<<endl;
    return 0;
    }
    break;
  case 12:
      //int cards=0;

      for(int i = 1; i < 14; i ++){
            if(i == 1){
                cout<<"Hearts Ace"<<endl;
                cout<<"Tiles Ace"<<endl;
                cout<<"Clovers Ace"<<endl;
                cout<<"Pikes Ace"<<endl;
                continue;
            }

            else if(i == 11){
                cout<<"Hearts knave"<<endl;
                cout<<"Tiles knave"<<endl;
                cout<<"Clovers knave"<<endl;
                cout<<"Pikes knave"<<endl;
            }
            else if(i == 12){
                cout<<"Hearts Queen"<<endl;
                cout<<"Tiles Queen"<<endl;
                cout<<"Clovers Queen"<<endl;
                cout<<"Pikes Queen"<<endl;
            }
            else if(i == 13){
                cout<<"Hearts King"<<endl;
                cout<<"Tiles King"<<endl;
                cout<<"Clovers King"<<endl;
                cout<<"Pikes King"<<endl;
            }
            else{
            cout<<"Hearts "<<i<<endl;
            cout<<"Tiles "<<i<<endl;
            cout<<"Clovers "<<i<<endl;
            cout<<"Pikes "<<i<<endl;
            }

      }


    break;
  case 13:
      int tableChoice;
      cout<<"1.If you want to see in the console the first table enter 1 in the console"<<endl;
      cout<<"2.If you want to see in the console the second table enter 2 in the console"<<endl;
      cout<<"3.If you want to see in the console the third table enter 3 in the console"<<endl;
      cout<<"Your choice: ";
      cin>>tableChoice;
      cout<<"\n";
      switch(tableChoice){
       case 1:
           for(int i = 1;i < 13; i++){
            if(i == 5) cout<<"\n";
            if(i == 9) cout<<"\n";
            cout<<i<<" ";
           }
           break;
       case 2:
        a = lastNumber / 4;

        while (lastNumber > cNumber)
        {
            if (startNumber == 4)
            {
                cout << endl;
                n -= (4*a);
                n++;
                startNumber = 0;
            }
            else
            {
                cout << " " << n << " ";
                n += a;
                startNumber++;
                cNumber++;
            }
        }
        break;

       case 3:
        cout<<"The third table is under development :D"<<endl;
        return main();
        break;

       default:
           cout<<"Wrong input.The number should be between 1 and 3.Going back to the main menu"<<endl;
           return main();
         break;
      }
    break;
  case 14:
    fak();
    cout<<"1.If you want to go back to the main program menu enter 1"<<endl;
    cout<<"2.If you want to shut down the program enter 2"<<endl;
    cout<<"Your choice:";
    cin>>backChoice;
    cout<<"\n";
    if(backChoice == 1){
    cout<<"Returning to the main menu"<<endl;
    return main();
    }
    if(backChoice == 2){
    cout<<"Program shutdown started,Program is going off"<<endl;
    return 0;
    }
    break;
  case 15:


   int first_number;
   cout<<"Enter First Number : ";
   cin>>first_number;
   cout<<"\n";
   int  second_number;
   cout<<"Enter Second Number: ";
   cin>>second_number;
   cout<<"\n";

    int  gcd;
    for(int i=1;i<=first_number&&i<=second_number;i++){


     if(first_number%i==0 && second_number%i == 0 ){

                     gcd=i;

     }

     }

    cout<<"Greatest Common Divider (GCD):"<<gcd<<endl;
    cout<<"1.If you want to go back to the main program menu enter 1"<<endl;
    cout<<"2.If you want to shut down the program enter 2"<<endl;
    cout<<"Your choice:";
    cin>>backChoice;
    cout<<"\n";
    if(backChoice == 1){
    cout<<"Returning to the main menu"<<endl;
    return main();
    }
    if(backChoice == 2){
    cout<<"Program shutdown started,Program is going off"<<endl;
    return 0;
    }

    break;
  default:
    cout<<"Wrong input!!! Remember your input should be from 1 to 15"<<endl;
    return main();
    }

    //system("pause"); uncomment only in visual studio in code blocks not needed
    return main();
}
