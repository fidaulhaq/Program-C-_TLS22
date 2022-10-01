#include <iostream>
using namespace std;

int main() {
    int counter;
    double angka, total, average;
    cout << "----------\tMenghitung Rerata\t----------";

    total = 0;//initialize total//
    counter = 0;//initialize loop counter//

    cout << "\n";
    cout << "\nmasukkan angka!\n";
    cin >> angka;

    while (angka != -1) {
        //loop many times//

        total = total + angka;//add angka to total//
        counter = counter + 1;//increment counter//
        cout << "masukkan angka!\n";//prompt for input//
        cin >> angka;//read angka from user//
    }//end while//
    //termination phase//
    //if user enter at least one number//
    if (counter != 0) {
        //calculate the average of all entered number//
        cout << "Total\n" << total << "\n";
        average = total / counter;

        cout << "rata-rata\n" << average;
    }//end if//
    else { //no number entered, output massage// 
        cout << "Tidak ada nilai yang dimasukan\n";
    }//end else//
    
    return 0;
}