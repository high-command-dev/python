#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class MarutiSurvey
{
private:
    string models[4] = {"Maruti K10", "Zen Astelo", "Wagnor", "Maruti SX4"};
    string cities[4] = {"Delhi", "Mumbai", "Chennai", "Kolkata"};
    int carCounts[4][4] = {0};

public:
    void collectData()
    {
        for (int i = 0; i < 4; ++i)
        {
            cout << "Enter the number of cars for " << cities[i] << ":\n";
            for (int j = 0; j < 4; ++j)
            {
                cout << models[j] << ": ";
                cin >> carCounts[i][j];
            }
            cout << endl;
        }
    }

    void displayResults()
    {
        cout << setw(15) << "City";
        for (int j = 0; j < 4; ++j)
        {
            cout << setw(15) << models[j];
        }
        cout << endl;

        cout << string(15, '-') << string(4 * 15, '-') << endl;

        for (int i = 0; i < 4; ++i)
        {
            cout << setw(15) << cities[i];
            for (int j = 0; j < 4; ++j)
            {
                cout << setw(15) << carCounts[i][j];
            }
            cout << endl;
        }
    }
};

int main()
{
    MarutiSurvey survey;
    survey.collectData();
    survey.displayResults();
    return 0;
}
