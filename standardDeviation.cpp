#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int sampleData[6] = {2, 3, 7, 5, 4, 6};
    vector<int> deviations(6);
    int sum = 0;
    double mean;
    int numberOfItems = sizeof(sampleData) / sizeof(sampleData[0]);

    for (int a = 0; a < numberOfItems; a++) {
        sum += sampleData[a];
    }
    mean = static_cast<double>(sum) / numberOfItems;

    for (int b = 0; b < numberOfItems; b++) {
        deviations[b] = abs(sampleData[b] - mean);
        cout << sampleData[b] << " mean: " << mean << " deviation: " << deviations[b] << endl;
    }

    int sumOfDeviation = 0;
    for (size_t i = 0; i < deviations.size(); i++) {
        sumOfDeviation += pow(deviations[i], 2);
    }

    double variance = sumOfDeviation / static_cast<double>(numberOfItems - 1);
    double standardDeviation = sqrt(variance);
    cout << "Sum of squared deviations: " << sumOfDeviation << endl; 
    cout << "Standard deviation: " << standardDeviation << endl;
    cout << "Mean: " << mean << endl;
    cout << "Number of items: " << numberOfItems << endl;

    return 0;
}
