#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    srand(time(0));
    int nAtleti, i, iMin;
    cout << "Quanti atleti partecipano a questa competizione?" << endl;
    cin >> nAtleti;
    vector<string> nomi(nAtleti);
    vector<string> nazionali(nAtleti);
    vector<float> tempi(nAtleti);
    i = 0;
    while (i<nomi.size()) {
        cout << "Come si chiama l'atleta numero " << i + 1 << "?" << endl;
        cin >> nomi[i];
        cout << "Da quale nazione proviene?" << endl;
        cin >> nazionali[i];
        tempi[i] = (rand() % 1300) / 100 + 5;
        i++;
    }
    i = 0;
    while (i<nomi.size()) {
        cout << "L'atleta numero " << i + 1 << " si chiama " << nomi[i] << " proviene dalla nazione " << nazionali[i] << " ed ha finito la gara in " << tempi[i] << " secondi" << endl;
        i++;
    }
    i = 0;
    iMin = 0;
    while (i<tempi.size()) {
        if (tempi[i] < tempi[iMin]) {
            iMin = i;
        }
        i++;
    }
    cout << "Il vincitore della gara è " << nomi[iMin] << " proveniente dalla nazione " << nazionali[iMin] << " che ha finito la gara in " << tempi[iMin] << " secondi" << endl;
}