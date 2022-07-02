#include <iostream>
#include <string>

using namespace std;

int main (){

    int age;
    double weight;
    double height;
    double bmi;
    double metres;
    double result;
    
    cout << "\n-----------------------------------" << endl;
    cout << "   Calorie and BMR/BMI calculator   " << endl;
    cout << "-----------------------------------\n" << endl;

    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Enter your weight in kg (kilograms): " << endl;
    cin >> weight;
    cout << "Enter your height in centimetres: " << endl;
    cin >> height;
    cout << "Enter your height in metres: " << endl;
    cin >> metres;

    result = 66.47 + (13.75 * weight) + (5.003 * height) - (6.755 * age);
    bmi = weight / (metres * metres);

    cout << "\nYour Basal Metabolic Rate per day is around: " << result << " kcal (calories) per day" << "\n" << endl;

    cout << "Calorie deficit of 500 calories per day for weight loss would be: " << result - 500 << "\n" <<  endl;
    cout << "calorie surplus of 500 calories per day for weight gain would be: " << result + 500 << "\n" << endl;

    cout << "Your BMI score is: " << bmi << "\n" << endl;
    cout << "These results are based on a sedentary activity level." << endl;
    

    return 0;
}