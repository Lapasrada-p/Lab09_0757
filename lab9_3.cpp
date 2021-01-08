//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include<cmath>
using namespace std;

int main(){
    int count=0;
    double sum,sumsqr;
    double mean;
    double standard;
    string textline;
    ifstream source;
    source.open("score.txt");
    while(getline(source,textline)){
        sum+=atof(textline.c_str());
        sumsqr+=pow(atof(textline.c_str()),2);
        count++;
    }
    mean=(double)sum/count;
    standard=pow((double)1/count*sumsqr-(double)pow(mean,2),0.5);
    cout << "Number of data = "<<count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<mean<<endl;
    cout << "Standard deviation = "<<standard;
    source.close();
    return 0;
}