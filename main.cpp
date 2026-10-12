#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    const double GBP_Bendras = 0.8729;
    const double GBP_Pirkti = 0.8600;
    const double GBP_Parduoti = 0.9220;

    const double USD_Bendras = 1.1793;
    const double USD_Pirkti = 1.1460;
    const double USD_Parduoti = 1.2340;

    const double INR_Bendras = 104.6918;
    const double INR_Pirkti = 101.3862;
    const double INR_Parduoti = 107.8546;

    cout << fixed << setprecision(2);

    int choice;
    int currencyChoice;
    double amountEUR = 0;

    do {
        cout << "\n--- MENU ---\n" << endl;
        cout << "1. Palyginti valiutos kursą su euru" << endl;
        cout << "2. Pirkti valiutą" << endl;
        cout << "3. Parduoti valiutą" << endl;
        cout << "4. Išeiti" << endl;
        cout << "Pasirinkite savo veiksma" << endl;
        cin >> choice;

        switch(choice) {
            // palyginti
            case 1: {
                do {
                    cout << "Pasirinkite kokia valiutos" << endl;
                    cout << "1. GBP" << endl;
                    cout << "2. USD" << endl;
                    cout << "3. INR" << endl;
                    cout << "4. Atgal i menu" << endl;
                    cin >> currencyChoice;

                    if (currencyChoice == 1) {
                        cout << "EUR = 1 " << "GBP = " << GBP_Bendras << endl;
                    } else if (currencyChoice == 2) {
                        cout << "EUR = 1 " << "USD = " << USD_Bendras << endl;
                    } else if (currencyChoice == 3) {
                        cout << "EUR = 1 " << "INR = " << INR_Bendras << endl;
                    }
                    else if (currencyChoice == 4) {
                        cout << "4. Atgal i menu " << endl;
                    } else {
                        cout << "ERROR" << endl;
                    }
                } while (currencyChoice != 4);
                break;
            }
            // pirkti
            case 2: {
                do {
                    cout << "Pasirinkite kokia valiutos" << endl;
                    cout << "1. GBP" << endl;
                    cout << "2. USD" << endl;
                    cout << "3. INR" << endl;
                    cout << "4. Atgal i menu" << endl;
                    cin >> currencyChoice;

                    if (currencyChoice == 1) {
                        cout << "Kiek norite euro i GBP?" << endl;
                        cin >> amountEUR;
                        if (amountEUR > 0) {
                            cout << amountEUR * GBP_Pirkti << " Here you go" << endl;
                        } else {
                            cout << "Klaida: suma turi buti teigiama!" << endl;
                        }
                    } else if (currencyChoice == 2) {
                        cout << "Kiek norite euro i USD?" << endl;
                        cin >> amountEUR;
                        if (amountEUR > 0) {
                            cout << amountEUR * USD_Pirkti << " Here you go" << endl;
                        } else {
                            cout << "Klaida: suma turi buti teigiama!" << endl;
                        }
                    } else if (currencyChoice == 3) {
                        cout << "Kiek norite euro i INR?" << endl;
                        cin >> amountEUR;
                        if (amountEUR > 0) {
                            cout << amountEUR * INR_Pirkti << " Here you go" << endl;
                        } else {
                            cout << "Klaida: suma turi buti teigiama!" << endl;
                        }
                    } else {
                        cout << "Atgal i meniu" << endl;
                    }
                } while (currencyChoice != 4);
                break;
            }
            // parduoti
            case 3: {
                double amountGBP;
                double amountUSD;
                double amountINR;
                do {
                    cout << "Pasinrikite valiutos kokia norite parduoti" << endl;
                    cout << "1. GBP" << endl;
                    cout << "2. USD" << endl;
                    cout << "3. INR" << endl;
                    cout << "4. Atgal i menu" << endl;
                    cin >> currencyChoice;

                    if (currencyChoice == 1) {
                        cout << "Kiek norite parduoti GBP i eur?" << endl;
                        cin >> amountGBP;
                        if (amountGBP > 0) {
                            cout << amountGBP << " GBP= "<< amountGBP / GBP_Parduoti << " EUR" << endl;
                        } else {
                            cout << "Klaida: suma turi buti teigiama!" << endl;
                        }
                    }

                    else if (currencyChoice == 2) {
                        cout << "Kiek norite parduoti USD i eur?" << endl;
                        cin >> amountUSD;
                        if (amountUSD > 0) {
                            cout << amountUSD << " USD= " << amountUSD / USD_Parduoti << " EUR" << endl;
                        } else {
                            cout << "Klaida: suma turi buti teigiama!" << endl;
                        }
                    }

                    else if (currencyChoice == 3) {
                        cout << "Kiek norite parduoti INR i eur?" << endl;
                        cin >> amountINR;
                        if (amountINR > 0) {
                            cout << amountINR << " INR= " << amountINR / INR_Parduoti << " EUR" << endl;
                        } else {
                            cout << "Klaida: suma turi buti teigiama!" << endl;
                        }
                    }
                } while (currencyChoice != 4);
                break;
            }
        }
    } while (choice != 4);
    return 0;
}