#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main() {

int radar_range =  180000;
int intial_range = 99273;

int main_site;
int site_two;
int site_three;
int site_four;

cout << "(Please read MAIN.README in GIT Respository )" << "\n\n\n\n\n\n\t\t\t";

cout << "Enter Main Site value : " ;
cin >> main_site;
cout << "Now Enter Site range where you are Targeting :"; 
cin >> site_two, site_three, site_four;

 
for  (int i = 0; i < main_site; i++) {
     for (int x = 1; x < site_two; x++) {
         for (int y = 2; y < site_three; y++) {
             for (int o = 3; o < site_four; o++) {
                         if (i + x + y + o == 6) {
                            cout << "Enter intial range: ";
                             cin >> intial_range;

                         }                 
             }
         }
     }
}

if (cin >> site_two ) {
    cout <<"Radar impulsive range ~~> ";
     cout << sqrt(site_two * intial_range + 910 - 83);  
}

if (cin >> site_three) {
    cout << "Radar impulsive to double range ~~> ";
      cout << sqrt(site_three * radar_range + intial_range / 910 + 83);
}


if (cin >> site_four) {
    cout << "Radar impulsive to double range ~~> ";
      cout << sqrt(site_four * radar_range + intial_range / 910 + 83);
}

}#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main() {

int radar_range =  180000;
int intial_range = 99273;

int main_site;
int site_two;
int site_three;
int site_four;

cout << "(Please read MAIN.README in GIT Respository )" << "\n\n\n\n\n\n\t\t\t";

cout << "Enter Main Site value : " ;
cin >> main_site;
cout << "Now Enter Site range where you are Targeting :"; 
cin >> site_two, site_three, site_four;

 
for  (int i = 0; i < main_site; i++) {
     for (int x = 1; x < site_two; x++) {
         for (int y = 2; y < site_three; y++) {
             for (int o = 3; o < site_four; o++) {
                         if (i + x + y + o == 6) {
                            cout << "Enter intial range: ";
                             cin >> intial_range;

                         }                 
             }
         }
     }
}

if (cin >> site_two ) {
    cout <<"Radar impulsive range ~~> ";
     cout << sqrt(site_two * intial_range + 910 - 83);  
}

if (cin >> site_three) {
    cout << "Radar impulsive to double range ~~> ";
      cout << sqrt(site_three * radar_range + intial_range / 910 + 83);
}


if (cin >> site_four) {
    cout << "Radar impulsive to double range ~~> ";
      cout << sqrt(site_four * radar_range + intial_range / 910 + 83);
}

}
