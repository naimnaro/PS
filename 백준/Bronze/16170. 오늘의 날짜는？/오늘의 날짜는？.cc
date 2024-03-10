#include<iostream>
#include<algorithm>
#include<chrono>
#include<iomanip> 

using namespace std;

int main() {
 
    auto now = chrono::system_clock::now();
    
  
    time_t now_time = chrono::system_clock::to_time_t(now);
    
   
    tm* local_now = localtime(&now_time);
    

    cout << (local_now->tm_year + 1900) << "\n";
    cout << setw(2) << setfill('0') << (local_now->tm_mon + 1) << "\n";
    cout << setw(2) << setfill('0') << local_now->tm_mday << "\n";

    return 0;
}
