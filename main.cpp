#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    srand(time(0));
    int nAtleti, i, iMin;
    double tempoMigliore;
    cout << "Quanti atleti partecipano a questa competizione?" << endl;
    cin >> nAtleti;
    vector<string>nomi(nAtleti);
    vector<string>nazionali(nAtleti);
    vector<float>tempi(nAtleti);
    for (i = 0; i <= nomi.size() - 1; i++) {
        cout << "Come si chiama l'atleta numero " << i + 1 << "?" << endl;
        cin >> nomi[i];
        cout << "Da quale nazione proviene?" << endl;
        cin >> nazionali[i];
        tempi[i] = (double) (rand() % 1300) / 100 + 5;
    }
    for (i = 0; i <= nomi.size() - 1; i++) {
        cout << "L'atleta numero " << i + 1 << " si chiama " << nomi[i] << " proviene dalla nazione " << nazionali[i] << " ed ha finito la gara in " << tempi[i] << " secondi" << endl;
    }
    iMin = 0;
    for (i = 0; i <= tempi.size() - 1; i++) {
        if (tempi[i] < tempi[iMin]) {
            iMin = i;
        }
    }
    cout << "Il vincitore della gara è " << nomi[iMin] << " proveniente dal " << nazionali[iMin] << " che ha finito la gara in " << tempi[iMin] << " secondi" << endl;
}