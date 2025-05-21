#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

struct food {
    double price;
    double protien;
    double carbs;
    double fats;
    double calorie;
    double fiber;
};

int main() {
    unordered_map<string, food> fooddb;

    
    food f;

    f.price = 10; f.protien = 13; f.carbs = 1.1; f.fats = 11; f.calorie = 155; f.fiber = 0;
    fooddb["egg"] = f;

    f.price = 5.2; f.protien = 3.2; f.carbs = 4.6; f.fats = 3; f.calorie = 58; f.fiber = 0;
    fooddb["milk"] = f;

    f.price = 53.6; f.protien = 15.7; f.carbs = 2.3; f.fats = 21.1; f.calorie = 261; f.fiber = 0;
    fooddb["paneer"] = f;

    f.price = 8; f.protien = 1.1; f.carbs = 23; f.fats = 0.3; f.calorie = 89; f.fiber = 2.6;
    fooddb["banana"] = f;

    f.price = 16; f.protien = 10.9; f.carbs = 72.4; f.fats = 7.5; f.calorie = 401; f.fiber = 11;
    fooddb["oats"] = f;
    f.price = 12.8; f.protien=8;f.carbs=50;f.fats=2;f.calorie=242;f.fiber=4;
    fooddb["bread"]=f;
    f.price=0;f.protien=6.6;f.carbs=64;f.fats=21.6;f.calorie=480;f.fiber=5.9;
    fooddb["magad"]=f;
    f.price=31.1;f.protien=26;f.carbs=22;f.fats=44.6;f.calorie=605;f.fiber=7.2;
    fooddb["pbutter"]=f;
    f.price=10;f.protien=20;f.carbs=63;f.fats=6;f.calorie=378;f.fiber=12;
    fooddb["chane"]=f;
    // Totals
    double totalprice = 0;
    double totalprotien = 0;
    double totalcarbs = 0;
    double totalfats = 0;
    double totalcalorie = 0;
    double totalfiber = 0;

    // Input loop
    while (true) {
        cout << "Enter item name (or 'done'): ";
        string item;
        cin >> item;

        if (item == "done") {
            cout << "\n==== Total Nutrition ====\n";
            cout << "Price: ₹" << totalprice << endl;
            cout << "Protein: " << totalprotien << " g" << endl;
            cout << "Carbs: " << totalcarbs << " g" << endl;
            cout << "Fats: " << totalfats << " g" << endl;
            cout << "Calories: " << totalcalorie << " kcal" << endl;
            cout << "Fiber: " << totalfiber << " g" << endl;
            
        }
        if(item=="donedone"){
            break;
        }

        
        if (fooddb.find(item) == fooddb.end()) {
            cout << "Item not found. Try again.\n";
            continue;
        }

        
        double weight;
        cout << "Enter weight (in grams): ";
        cin >> weight;

        
        double factor = weight / 100.0;
        food f = fooddb[item];
        totalprice    += factor * f.price;
        totalprotien  += factor * f.protien;
        totalcarbs    += factor * f.carbs;
        totalfats     += factor * f.fats;
        totalcalorie  += factor * f.calorie;
        totalfiber    += factor * f.fiber;
    }

    return 0;
}
