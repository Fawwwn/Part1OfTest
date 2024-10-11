#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double sales, advancedPay, commissionRate = 0.0, commission, remainingPay;

    cout << "Enter the salesperson's monthly sales: ";
    cin >> sales;

    cout << "Enter the amount of advanced pay for this salesperson: ";
    cin >> advancedPay;

    if (sales < 10000) {
        commissionRate = 0.05;
    }
    else if (sales < 15000) {
        commissionRate = 0.10;
    }
    else if (sales < 18000) {
        commissionRate = 0.12;
    }
    else if (sales < 22000) {
        commissionRate = 0.14;
    }
    else {
        commissionRate = 0.16;
    }

    commission = sales * commissionRate;
    remainingPay = commission - advancedPay;

    cout << fixed << setprecision(2);
    cout << "\nPay Results\n";
    cout << "-----------\n";
    cout << "Sales: $" << sales << endl;
    cout << "Commission Rate: " << commissionRate << endl;
    cout << "Commission: $" << commission << endl;
    cout << "Advanced Pay: $" << advancedPay << endl;

    if (remainingPay < 0) {
        cout << "Remaining Pay: -$" << -remainingPay << " (reimbursement needed)\n";
    }
    else {
        cout << "Remaining Pay: $" << remainingPay << endl;
    }

    return 0;
}
