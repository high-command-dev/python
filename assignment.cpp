#include <bits/stdc++.h>
using namespace std;

class Stockers {
private:
    vector<double> stockPrices;
    vector<bool> stockTrend;

public:
    void getData(int n) {
        double price;
        bool trend;
        for (int i = 0; i < n; i++) {
            cout << "Enter current stock price of the company " << (i + 1) << ": ";
            cin >> price;
            cout << "Whether company's stock price rose today compared to yesterday? (1 for true, 0 for false): ";
            cin >> trend;

            stockPrices.push_back(price);
            stockTrend.push_back(trend);
        }
    }

    void displayPricesAscending() {
        vector<double> sortedPrices = stockPrices;
        sort(sortedPrices.begin(), sortedPrices.end());
        cout << "Stock prices in ascending order are:" << endl;
        for (int i = 0; i < sortedPrices.size(); i++) {
            cout << sortedPrices[i] << " ";
        }
        cout << endl;
    }

    void displayPricesDescending() {
        vector<double> sortedPrices = stockPrices;
        sort(sortedPrices.begin(), sortedPrices.end(), greater<double>());
        cout << "Stock prices in descending order are:" << endl;
        for (int i = 0; i < sortedPrices.size(); i++) {
            cout << sortedPrices[i] << " ";
        }
        cout << endl;
    }

    void countPricesRose() {
        int count = 0;
        for (int i = 0; i < stockTrend.size(); i++) {
            if (stockTrend[i]) count++;
        }
        cout << "Total number of companies whose stock price rose today: " << count << endl;
    }

    void countPricesDeclined() {
        int count = 0;
        for (int i = 0; i < stockTrend.size(); i++) {
            if (!stockTrend[i]) count++;
        }
        cout << "Total number of companies whose stock price declined today: " << count << endl;
    }

    void searchStockPrice(double key) {
        bool found = false;
        for (int i = 0; i < stockPrices.size(); i++) {
            if (stockPrices[i] == key) {
                found = true;
                break;
            }
        }
        if (found) {
            cout << "Stock of value " << key << " is present." << endl;
        } else {
            cout << "Value not found." << endl;
        }
    }
};

int main() {
    int n, choice;
    cout << "Enter the number of companies: ";
    cin >> n;

    Stockers stockers;
    stockers.getData(n);

    cout << "\nEnter the operation that you want to perform:" << endl;
    cout << "1. Display the companies stock prices in ascending order" << endl;
    cout << "2. Display the companies stock prices in descending order" << endl;
    cout << "3. Display the total number of companies for which stock prices rose today" << endl;
    cout << "4. Display the total number of companies for which stock prices declined today" << endl;
    cout << "5. Search a specific stock price" << endl;
    cout << "6. Press 0 to exit" << endl;

    do {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                stockers.displayPricesAscending();
                break;
            case 2:
                stockers.displayPricesDescending();
                break;
            case 3:
                stockers.countPricesRose();
                break;
            case 4:
                stockers.countPricesDeclined();
                break;
            case 5: {
                double key;
                cout << "Enter the stock price to search: ";
                cin >> key;
                stockers.searchStockPrice(key);
                break;
            }
            case 0:
                cout << "Exited successfully." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}

