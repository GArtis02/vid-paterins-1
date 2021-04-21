#include <iostream>
#include <stdlib.h> 
#include <string>
using namespace std;
int main() {
int prog, beigprog ; 
int x=4,y=4;
double vidpat [3];
string vidpatrez [x][y];
double dvidpatrez [x][y];

double atli [3];
string satli [x][y];
double datli [x][y];
cout << "Si programa atlauj apreikinat masinas videjo degvielas paterinu uz 100km\n";
cout << "Un to cik var nobraukt km ar atlikuso degvielu\n";

cout<<"\n";

cout << "Ko no abiem velaties darit?\n";
cout << "Ievadiet 1 ja velaties apreikinat videjo paterinu un ievadiet 2\n"; 
cout << "ja velaties apreikinat cik vel var nobraukt ar atlikuso degvielu.\n";
cin >> prog;
switch (prog){
case 1 : //vid pat
cout <<"Ievadi nobrauktos km\n";
cin >> vidpat [1];
cout << "ievadi patereto degvielas daudzumu litros\n";
cin >> vidpat [2];
cout <<"TABULA\n";
//cout << vidpat [1] << endl;//km
//cout << vidpat [2] << endl;//l
vidpat [3] = (vidpat [2] / vidpat[1]) *100;
//cout << vidpat[3]<<"l/100km ";
 vidpatrez [0][0]="|km|";
 vidpatrez [0][1]=" |L|";
 vidpatrez [0][2]="| l/100km|";
 dvidpatrez [1][0]= vidpat [1];
 dvidpatrez [1][1]= vidpat [2];
 dvidpatrez [1][2]= vidpat [3];

 for(int y=0;y<4;y++){
    cout<<  vidpatrez [0][y];
 }
 cout<< endl; 
for(int y=0;y<3;y++){
    cout<<"|"<<  dvidpatrez [1][y]<<"|";
 }

break;


case 2:
cout << "ievadi cik ir atlikusi degviela\n";
cin >> atli [1];//cik vel ur deg
cout << "ievado kads ir degvielas paterins uz 100km\n";
cin >> atli [2];//pateri
atli [3] = (atli [1] / atli [2]) *100;//cikvarkm
satli[0][0]="|L|";
satli[0][1]="|l/100km|";
satli[0][2]="|km atli|";
datli[1][0]=atli [1];
datli[1][1]=atli [2];
datli[1][2]=atli [3];
for(int y=0;y<4;y++){
    cout<<  satli [0][y];
 }
 cout<< endl; 
for(int y=0;y<3;y++){
    cout<<"|"<<  datli [1][y]<<"|";
 }



break;
}
if (prog !=1){
    cout<<"netika izveleta neviena progama";
return 0;   

if (prog !=2){
cout<<"netika izveleta neviena progama";    
return 0;
}
}

return 0; 

}
