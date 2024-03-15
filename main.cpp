#include <iostream>
using namespace std;

int main() {
    double merchandiseCost, employeesSalary, rent, electricityCost, desiredProfit;

   
    cout << "Enter the total cost of merchandise: ";
    cin >> merchandiseCost;

    cout << "Enter the total salary of employees: ";
    cin >> employeesSalary;

    cout << "Enter the yearly rent: ";
    cin >> rent;

    cout << "Enter the estimated electricity cost: ";
    cin >> electricityCost;

    cout << "Enter the desired net profit percentage (e.g., 10 for 10%): ";
    cin >> desiredProfit;


    double totalExpenses = merchandiseCost + employeesSalary + rent + electricityCost;
    double desiredProfitAmount = (desiredProfit / 100) * merchandiseCost;
    double totalRevenueNeeded = totalExpenses + desiredProfitAmount;

    
    double saleDiscount = 0.15;
    totalRevenueNeeded /= (1 - saleDiscount);

    double markupPercentage = (totalRevenueNeeded / merchandiseCost - 1) * 100;


    cout << "To achieve a net profit of approximately " << desiredProfit << "%, ";
    cout << "the merchandise should be marked up by approximately " << markupPercentage << "%." << endl;

    return 0;
}
