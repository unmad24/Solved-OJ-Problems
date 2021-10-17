#include<bits/stdc++.h>
using namespace std;

void getLetterGrade() {


}


void gradeTable() {

    cout<<"---------------------"<<endl;
    cout<<" From   To   Letter"<<endl;
    cout<<"    0    59     F"<<endl;
    cout<<"   60    69     D"<<endl;
    cout<<"   70    79     C"<<endl;
    cout<<"   80    89     B"<<endl;
    cout<<"   90   100     A"<<endl;
    cout<<"      other     X"<<endl;
    cout<<"---------------------"<<endl;


}

int main()
{
    char c;
    string s;
    int i;

    while(1) {
        cout<<"A) Grade convertion table.\nB) Summaries a grade file.\nC) Exit.\nSelect an option(): ";

        cin>>s;
        c=s[0];
        switch (c) {
        case 'a':
        case 'A':
            gradeTable();
            break;
        case 'c':
        case 'C':
            cout<<"Program terminated."<<endl;
            return 0;
        case 'b':
        case 'B':

        default:
            cout<<c<<" is not a valid choice."<<endl;
            cout<<endl;
            break;

        }

    }


    return 0;

}


















