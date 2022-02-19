#include <iostream>

using namespace std;

// Variables Start
int quant;
int choice;

int Qrooms = 0; 
int Qpasta = 0, Qburger = 0, Qnoodle = 0, Qshake = 0, QchickenRoll = 0; 

int Srooms = 0;
int Spasta = 0, Sburger = 0, Snoodle = 0, Sshake = 0, SchickenRoll = 0;

int Price_TotalRooms = 0;
int Price_TotalPasta = 0, Price_TotalBurger = 0, Price_TotalNoodle = 0,
    Price_TotalShake = 0, Price_TotalChicken = 0;
// Variables End


// Functions for Cases Starts
void RoomsWant(){


    cout << "Enter Number of Rooms do you Want: ";
    cin >> quant;

    if((Qrooms - Srooms) >= quant){
        Srooms += quant;
        Price_TotalRooms += quant * 1200;
        
        cout << quant << " Rooms have been Alloted To You!!!" << endl;
    }else{

        if(Qrooms == 0){
            cout << "No Rooms are Available Right Now!!!" << endl;
        }else{
            cout << "Only " << (Qrooms - Srooms) << " Rooms are Available Right Now!!!" << endl;
        }
    }

}
void PastaWant(){
    cout << "Enter Number of Pastas do you Want: ";
    cin >> quant;

    if((Qpasta - Spasta) >= quant){
        Spasta += quant;
        Price_TotalPasta += quant * 450;
        
        cout << quant << " Pastas have been Alloted To You!!!" << endl;
    }else{

        cout << "Only " << (Qpasta - Spasta) << " Pastas are Available Right Now!!!" << endl;

    }
}
void BurgerWant(){
    cout << "Enter Number of Burgers do you Want: ";
    cin >> quant;

    if((Qburger - Sburger) >= quant){
        Sburger += quant;
        Price_TotalBurger += quant * 120;
        
        cout << quant << " Burgers have been Alloted To You!!!" << endl;
    }else{

        cout << "Only " << (Qburger - Sburger) << " Burgers are Available Right Now!!!" << endl;

    }
}
void NoodleWant(){

    cout << "Enter Number of Noodles do you Want: ";
    cin >> quant;

    if((Qnoodle - Snoodle) >= quant){
        Snoodle += quant;
        Price_TotalNoodle += quant * 140;
        
        cout << quant << " Noodles have been Alloted To You!!!" << endl;
    }else{

        cout << "Only " << (Qnoodle - Snoodle) << " Noodles are Available Right Now!!!" << endl;

    }
}
void ShakeWant(){

    cout << "Enter Number of Shakes do you Want: ";
    cin >> quant;

    if((Qshake - Sshake) >= quant){
        Sshake += quant;
        Price_TotalShake += quant * 120;
        
        cout << quant << " Shakes have been Alloted To You!!!" << endl;
    }else{

        cout << "Only " << (Qshake - Sshake) << " Shakes are Available Right Now!!!" << endl;

    }
}
void ChickenWant(){
    cout << "Enter Number of Chicken rolls do you Want: ";
    cin >> quant;

    if((QchickenRoll - SchickenRoll) >= quant){
        SchickenRoll += quant;
        Price_TotalChicken += quant * 150;
        
        cout << quant << " Chicken Rolls have been Alloted To You!!!" << endl;
    }else{

        cout << "Only " << (QchickenRoll - SchickenRoll) << " Chicken Rolls are Available Right Now!!!" << endl;

    }
}
void InfoAboSales(){

    cout << "\n\tDetails of Sales and Collections" << endl;

    cout << endl;

    cout << "Number of Rooms We Had: " << Qrooms << endl;
    cout << "Number of Rooms Sold: " << Srooms <<  endl;
    cout << "Remaining Rooms We Have: " << (Qrooms - Srooms) << endl;
    cout << "Total Room Collections: $" << Price_TotalRooms << endl;

    cout << endl;

    cout << "Number of Pastas We Had: " << Qpasta << endl;
    cout << "Number of Pastas Sold: " << Spasta <<  endl;
    cout << "Remaining Pastas We Have: " << (Qpasta - Spasta) << endl;
    cout << "Total Pasta Collections: $" << Price_TotalPasta << endl;

    cout << endl;

    cout << "Number of Burgers We Had: " << Qburger << endl;
    cout << "Number of Burgers Sold: " << Sburger <<  endl;
    cout << "Remaining Burgers We Have: " << (Qburger - Sburger) << endl;
    cout << "Total Burger Collections: $" << Price_TotalBurger << endl;

    cout << endl;

    cout << "Number of Noodles We Had: " << Qnoodle << endl;
    cout << "Number of Noodles Sold: " << Snoodle <<  endl;
    cout << "Remaining Noodles We Have: " << (Qnoodle - Snoodle) << endl;
    cout << "Total Noodle Collections: $" << Price_TotalNoodle << endl;

    cout << endl;

    cout << "Number of Shakes We Had: " << Qshake << endl;
    cout << "Number of Shakes Sold: " << Sshake <<  endl;
    cout << "Remaining Shakes We Have: " << (Qshake - Sshake) << endl;
    cout << "Total Shakes Collections: $" << Price_TotalShake << endl;

    cout << endl;

    cout << "Number of Chicken Rolls We Had: " << QchickenRoll << endl;
    cout << "Number of Chicken Rolls Sold: " << SchickenRoll <<  endl;
    cout << "Remaining Chicken Rolls We Have: " << (QchickenRoll - SchickenRoll) << endl;
    cout << "Total Chicken Roll Collections: $" << Price_TotalChicken << endl;

    cout << endl;

}
void ExitMessage(){

    cout << "\n\n/=============================================/";
    cout << "\n\tWelcome Again, See You Soon!!!!" << endl;
    cout << "/=============================================/" << endl << endl;
}
void UnknownChoice(){
    
    cout << "\nUnknown Choicem, Try Again!!!" << endl;

}
// Functions for Cases Ends



int main(){
// Admin Management Starts
    cout << "\n\n\t Quantity of Items We Have: " << endl;
    cout << "Rooms Available: ";
    cin >> Qrooms;

    cout << "\nPasta Available: ";
    cin >> Qpasta;

    cout << "\nBurger Available: ";
    cin >> Qburger;

    cout << "\nNoodle Available: ";
    cin >> Qnoodle;

    cout << "\nShake Available: ";
    cin >> Qshake;

    cout << "\nChicken Rolls Available: ";
    cin >> QchickenRoll;
// Admin Management Ends


// User Management Starts

do{
    cout << "\n\tPlease Select from Below Options: " << endl;
    cout << "1. Rooms" << endl;
    cout << "2. Pasta" << endl;
    cout << "3. Burger" << endl;
    cout << "4. Noodle" << endl;
    cout << "5. Shake" << endl;
    cout << "6. Chicken Rolls" << endl;
    cout << "7. Information Regarding Sales and Collection" << endl;
    cout << "8. Exit" << endl;

    cout << "\nEnter a Choice: ";
    cin >> choice;

// User Management Ends

// Switch Cases Starts

    switch(choice){

        case 1 : RoomsWant(); break;

        case 2 : PastaWant(); break;

        case 3 : BurgerWant(); break;

        case 4 : NoodleWant(); break;
        
        case 5 : ShakeWant(); break;
        
        case 6 : ChickenWant(); break;

        case 7 : InfoAboSales(); break;

        case 8 : ExitMessage(); break;

        default : UnknownChoice();
    }
}while(choice != 8);
// Switch Cases Ends
    return 0;
}
//cd "c:\Users\Asus\Desktop\Algorithms\C++_Practice\Projects\HotelManagement\" ; if ($?) { g++ Demo.cpp -o Demo } ; if ($?) { .\Demo }