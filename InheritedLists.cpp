#include <iostream>
#include "LinkedList.h"
#include "Data.h"
#include "fstream"
#include "sstream"
#include "ostream"
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main() {

    ifstream in;
    ofstream out;
    string line;
    string filename;
    Stack s;
    Queue q;
    int counter = 1;
    int entries;
    cout << "Enter a filename (../ramenRaings.csv): ";
    cin >> filename;
    cout << endl;
    cout << "Number of entries(up tp 2580): ";
    cin >> entries;
    cout << endl;

    in.open(filename);
    if (!in.good()) {
        cout << "Unable to open file: " << filename <<  endl;
        return -1;
    }
    cout << "Reading " << filename << "..." << endl;
    while(counter <= entries) {
        getline(in, line);
        string substring;
        getline(in, substring, ',');//review #
        int tmp1;
        istringstream(substring) >> tmp1;
        int rNum = tmp1;
        getline(in, substring, ',');//Brand
        string brand = substring;
        getline(in, substring, ',');//variety
        string variety = substring;
        getline(in, substring, ',');//style
        string style = substring;
        getline(in, substring, ',');//country
        string country = substring;
        getline(in, substring, ',');//stars
        double tmp2;
        istringstream(substring) >> tmp2;
        double stars = tmp2;

        Data DataObj(rNum, brand, variety, style, country, stars);
        //cout << DataObj;
        s.push_head(DataObj);
        q.enqueue_tail(DataObj);
        counter++;
    }
    in.close();

    out.open("../Stacked.txt");

    //int tmpCount = counter;
    cout << "Writing data in stack inserted at head into stacked.txt." << endl;

    s.print(out);
    while(s.pop_head()){}
    out.close();
    cout << "Data written into Stacked.txt" << endl;

    out.open("../Queued.txt");
    cout << "Writing data in stack inserted at head into Queued.txt." << endl;

    q.print(out);
    while(q.dequeue_head()){}
    out.close();
    cout << "Data written into Queued.txt" << endl;


    return 0;
}