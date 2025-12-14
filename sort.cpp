#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ifstream file("Book1.csv");
    if (!file.is_open()) {
        cerr << "Error: Could not open file." << endl;
        return 1;
    }

    string line;
    vector<vector<string>> table;

    // Read each row
    while (getline(file, line)) {
        stringstream ss(line);
        string cell;
        vector<string> row;

        while (getline(ss, cell, ',')) {
            row.push_back(cell);
        }

        if (!row.empty()) {
            table.push_back(row);
        }
    }
    file.close();

    if (table.size() <= 1) {
        cerr << "Error: No data rows found." << endl;
        return 1;
    }

    // --- Sort by Marks column (index 3) ---
    sort(table.begin() + 1, table.end(), [](const vector<string>& a, const vector<string>& b) {
        if (a.size() <= 3 || b.size() <= 3) return false; // safeguard
        try {
            return stoi(a[3]) < stoi(b[3]);
        } catch (...) {
            return false; // if conversion fails, keep order
        }
    });

    // --- Print sorted table ---
    for (const auto& row : table) {
        for (size_t col = 0; col < row.size(); col++) {
            cout << row[col];
            if (col < row.size() - 1) cout << ",";
        }
        cout << endl;
    }

    return 0;
}
