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
        cout << "1. Palyginti valiutos kursa su euru" << endl;
        cout << "2. Pirkti valiuta" << endl;
        cout << "3. Parduoti valiuta" << endl;
        cout << "4. Iseiti" << endl;
        cout << "Pasirinkite savo veiksma (1-4): " << endl;
        cin >> choice;

        switch(choice) {
            // palyginti
            case 1: {
                do {
                    cout << "\n--- VALIUTOS KURSO PALYGINIMAS ---" << endl;
                    cout << "1. GBP" << endl;
                    cout << "2. USD" << endl;
                    cout << "3. INR" << endl;
                    cout << "4. Atgal i pagrindini meniu" << endl;
                    cout << "Pasirinkite valiuta: " << endl;
                    cin >> currencyChoice;

                    if (currencyChoice == 1) {
                        cout << "1 EUR = " << GBP_Bendras << " GBP "  << endl;
                    } else if (currencyChoice == 2) {
                        cout << "1 EUR = " << USD_Bendras << " USD " << endl;
                    } else if (currencyChoice == 3) {
                        cout << "1 EUR = " << INR_Bendras <<  " INR "  << endl;
                    }
                    else if (currencyChoice == 4) {
                        cout << "Grizstama i pagrindini meniu..." << endl;
                    } else {
                        cout << "Klaida: Neteisingas pasirinkimas! Iveskite skaiciu nuo 1 iki 4" << endl;
                    }
                } while (currencyChoice != 4);
                break;
            }
            // pirkti
            case 2: {
                do {
                    cout << "\n--- VALIUTOS PIRKIMAS (EUR -> Valiuta) ---" << endl;
                    cout << "1. GBP" << endl;
                    cout << "2. USD" << endl;
                    cout << "3. INR" << endl;
                    cout << "4. Atgal i pagrindine menu" << endl;
                    cout << "Pasirinkite valiuta: " << endl;
                    cin >> currencyChoice;

                    if (currencyChoice == 1) {
                        cout << "Kiek norite euro i GBP?" << endl;
                        cin >> amountEUR;
                        if (amountEUR > 0) {
                            cout << amountEUR << " EUR = " << amountEUR * GBP_Pirkti << " GBP " << endl;
                        } else {
                            cout << "Klaida: suma turi buti teigiama!" << endl;
                        }
                    } else if (currencyChoice == 2) {
                        cout << "Kiek norite euro i USD?" << endl;
                        cin >> amountEUR;
                        if (amountEUR > 0) {
                            cout << amountEUR << " EUR = " << amountEUR * USD_Pirkti << " USD " << endl;
                        } else {
                            cout << "Klaida: suma turi buti teigiama!" << endl;
                        }
                    } else if (currencyChoice == 3) {
                        cout << "Kiek norite euro i INR?" << endl;
                        cin >> amountEUR;
                        if (amountEUR > 0) {
                            cout << amountEUR << " EUR = " << amountEUR * INR_Pirkti << " INR " << endl;
                        } else {
                            cout << "Klaida: suma turi buti teigiama!" << endl;
                        }
                    } else if (currencyChoice == 4) {
                        cout << "Griztama i pagrindini meniu..." << endl;
                    } else {
                        cout << "Klaida: Neteisingas pasirinikimas! Iveskite skaiciu nuo 1 iki 4" << endl;
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
                    cout << "\n--- VALIUTOS PARDAVIMAS (Valiuta -> EUR) ---" << endl;
                    cout << "1. GBP" << endl;
                    cout << "2. USD" << endl;
                    cout << "3. INR" << endl;
                    cout << "4. Atgal i pagrinidni meniu" << endl;
                    cout << "Pasirinkite valiuta: " << endl;
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
                    else if (currencyChoice == 4) {
                        cout << "Griztama i pagrindini meniu..." << endl;
                    }
                    else {
                        cout << "Klaida: Neteisingas pasirinikimas! Iveskite skaiciu nuo 1 iki 4" << endl;
                    }
                } while (currencyChoice != 4);
                break;
            }
                case 4: {
                    cout << "Programa baigia darba. Viso gero!" << endl;
                    break;
                }

                default: {
                    cout << "Klaida: Neteisingas pasirinikimas! Iveskite skaiciu nuo 1 iki 4" << endl;
                    break;
                }
        }
    } while (choice != 4);
    return 0;
}