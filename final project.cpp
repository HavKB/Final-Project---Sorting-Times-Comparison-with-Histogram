// ConsoleApplication118.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

class sortDataClass {

private:

    int* data;
    int dataSize, maxNum;

public:
    void randomize() {
        for (int i = 0; i < dataSize; i++)
            data[i] = rand() % maxNum;
    }

    sortDataClass(int n, string dataset, int m) {
        dataSize = n;
        maxNum = m;

        data = new int[dataSize];
        if (dataset == "inorder")
            for (int i = 0; i < dataSize; i++) data[i] = i;
        else if (dataset == "reverseorder")
            for (int i = 0; i < dataSize; i++) data[i] = maxNum - i - 1;
        else if (dataset == "random")
            randomize();
        else
            cout << "Error";
    }

    void printData() {
        for (int i = 0; i < dataSize; i++)
            cout << data[i] << endl;
    }
};

int main() {
    int dataSize = 50;
    int maxNum = 100;

    cout << "In-order data set." << endl;
    sortDataClass inorder(dataSize, "inorder", maxNum);
    inorder.printData();
    cout << endl << endl << endl << endl;

    cout << "Reverse-order data set." << endl;
    sortDataClass reverse(dataSize, "reverseorder", maxNum);
    reverse.printData();
    cout << endl << endl << endl << endl;

    cout << "Random order data set." << endl;
    sortDataClass random(dataSize, "random", maxNum);
    random.printData();
    return 0;
}
      
  


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
