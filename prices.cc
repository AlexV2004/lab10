/*
 *   @file: prices.cc
 * @author: Alexander Vano
 *   @date: 3/29/2024
 *  @brief: Get prices
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void getPrice(string price[], string product[]);

int main(int argc, char const *argv[]) {

    ifstream inFile;

    inFile.open("data1.txt");

    if(!inFile.is_open()) {
        cerr << "An error has occured" << endl;
    }

    double price[6];
    string product[6];
    string line;

    for(int i = 0; i <= 6; i++) {
        inFile >> price[i];
    }

    inFile.close();
    inFile.open("data2.txt");

    while(getline(inFile, line)) {
        int i = 0;
        product[i] = line;
        i++;
    }

    inFile.close();

    getPrice(price, product);

}

void getPrice (string priceStr[], string product[]) {

    double prices[5];

    
}