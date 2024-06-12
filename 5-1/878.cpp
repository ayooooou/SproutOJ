#include "bits/stdc++.h"
using namespace std;

struct Plagiarism {
    bool isDetected;
    bool isAdmitted;
};

struct Result {
    bool isAccepted;
    bool isLate;
    Plagiarism plagiarism;
};

struct Student { 
    Result assignments[24];
    bool isWillingToAdvance;
};

bool willAdvance(const Student& student){
    int scores=0;
    if(!student.isWillingToAdvance){return false;}
    for(int i=0;i<24;i++){
        if (student.assignments[i].plagiarism.isDetected){
            if(!student.assignments[i].plagiarism.isAdmitted){return false;}
            else{continue;}
        }
        if(student.assignments[i].isAccepted){
            scores += student.assignments[i].isLate ? 1 : 2;
        }
    }
    if (scores <32){return false;}
    return true;
}

int main() {
    Student students[50];
    /* 讀取學生資料 */
    /* Reads Student Data */

    for (int i = 0; i < 50; ++i)
        cout << (willAdvance(students[i]) ? 1 : 0) << ' '; 
    cout << endl;
    return 0;
}

/* 你的程式碼會被貼上於此 */
/* Your code will be pasted here */