#include <iostream>
#include<iomanip>
using namespace std;

//g++ mobile version 8.0.9

int main(){
    
    const char* students[]={"Nimra Sadiq","Zain Iqbal","Nouman Riaz","Amna Azhar","Muhammad Abdullah","Muhammad Saqib","Muhammad Usman","Mahrukh Fatima","Awais Raza","Arslan Shah","Saira Noreen","Ariqa Nayab","Daima Iftikhar","Haseeb Bilal","Huzaifa Aslam","Muhammad Ali","Kaneez Fatima","Ayesha Atta","Subhan","Hadia Latif","Abu Bakar Khalid","Saad Mukhtar","Arsalan Ahmad","Ismail","Amna Noor","Muhammad Hamza","Isbah Imran","Arshiya Arif","Qadir Usman","Hadeeqa Nisa","Sobia Zafar","Khurram Shehzad","Nasrullah Khizar","Zain Ul Abidden","Ali Hamza Yaseen","Ayesha","Mubeen Musharraf","Abeer Zafar","Ali Abbas","Areeba Maryam","Ifra Mariam","Dilbar Ali","Haji Rahman","Muhammad Sohaib","Yahya Khalid","Muhammad Awais","Fida Ullah","Laiba Noor","Muhammad Ateeb","Shakeel Ahmad"};
    
    const char* roll[]={"BSCS51F21R001","BSCS51F21R002","BSCS51F21R003","BSCS51F21R004","BSCS51F21R005","BSCS51F21R006","BSCS51F21R007","BSCS51F21R008","BSCS51F21R009","BSCS51F21R010","BSCS51F21R011","BSCS51F21R012","BSCS51F21R013","BSCS51F21R014","BSCS51F21R015","BSCS51F21R016","BSCS51F21R017","BSCS51F21R018","BSCS51F21R019","BSCS51F21R020","BSCS51F21R021","BSCS51F21R022","BSCS51F21R023","BSCS51F21R024","BSCS51F21R025","BSCS51F21R026","BSCS51F21R027","BSCS51F21R028","BSCS51F21R029","BSCS51F21R030","BSCS51F21R031","BSCS51F21R032","BSCS51F21R033","BSCS51F21R034","BSCS51F21R035","BSCS51F21R036","BSCS51F21R037","BSCS51F21R038","BSCS51F21R039","BSCS51F21R040","BSCS51F21R041","BSCS51F21R042","BSCS51F21R043","BSCS51F21R044","BSCS51F21R045","BSCS51F21R046","BSCS51F21R047","BSCS51F21R048","BSCS51F21R049","BSCS51F21R050"};
    
// const int AppN[]={2021162521,2021161867,2021158537,2021175387,2021193546,2021177819,2021161751,2021176524,2021159657,2021164545,2021166727,2021171422,2021164785,2021189681,2021189268,2021188478,2021169099,2021167336,2021162860,2021182238,2021195539,2021166509,2021159173,2021161173,2021184245,2021158956,2021168918,2021171490,2021194955,2021172598,2021166365,2021171525,2021182124,2021171913,2021172268,2021175190,2021167898,2021180816,2021157909,2021164999,2021187580,2021180661,2021175578,2021174753,2021159996,2021160121,2021177639,2021167171,2021158420,2021177659};
    
    const char* FN[]={"Muhammad Sadiq","Muhammad Iqbal","Muhammad Riaz","Azhar Hussain","Zafar Hussain","Muhammad Sadiq","Muhammad Ashraf","Ishaque Mehmood","Muhammad Ehsan","Shah Sawar Ahmad","Shamshad Ali","Shaukat Masih","Iftikhar Ali","Muhammad Nasir","Muhammad Aslam","Khalid Mehmood","Muhammad Sher","Atta Ullah Khan","Qamar Jameel","Abdul Latif","Khalid Mehmood","Mukhtar Ahmad","Saif Ullah","Asim Khan","Muhammad Ilyas","Shahbaz Ahmad","Muhammad Imran","Muhammad Arif","Sanwal Khan","Ishaq Ahmed","Zafar Iqbal","Muhammad Iqbal","Khizar Hayat","Naeem Irfan","Ghulam Yaseen","Muhammad Ashraf","Musharraf Ali","Zafar Iqbal","Muhammad Sibtain","Muhammad Akram","Yaqub Akhtar","Akbar Khan","Ashaq","Muhammad Siddique","Khalid Naseer","Muhammad Anwar","Ashraf Ali","Akhter Pervaiz","Haris Naseer","Taj Muhammad Khan"};
    
    
  
    
   const int numbers[]={1096,1091,1088,1084,1082,1081,1081,1080,1079,1077,1077,1075,1074,1073,1072,1072,1070,1066,1065,1064,1064,1063,1063,1061,1060,1060,1055,1054,1053,1052,1052,1052,1052,1051,1051,1050,1049,1049,1045,1042,1018,1010,936,928,926,849,845,784,619,577};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   // const char*students[50] = { "Nimra Sadiq","Zain Iqbal","Amna Azhar","Abdullah","Muhammad Saqib","Muhammad Usman","Mahrukh Fatima","Awais Raza","Arslan Shah","Saira Noreen","Ariqa Nayab","Daima Iftikhar","Haseeb Bilal","Huzaifa Aslam","Muhammad Ali","Kaneez Fatima","Ayesha Attal","Subhan","Hadia Latif","Saad Mukhtar","Arsalan Ahmad","Amna Noor","Muhammad Hamza","Isbah Imran","Arshiya Arif","Qadir Usman","Hadeeqa Nisa","Sobia Zafar","Khurram Shehzad","Nasrullah Khizar","Zain Ul Abidden","Ali Hamza Yaseen","Ayesha","Mubeen Musharraf","Abeer Zafar","Ifra Mariam","Haji Rahman","Yahya Khalid","Laiba Noor","Muhammad Ateeb" };
//const char* FN[50] = {"Muhammad Sadiq","Muhammad Iqbal","Azhar Hussain","Zafar Hussain","Muhammad Sadiq","Muhammad Ashraf","Ishaque Mehmood","Muhammad Ehsan","Sawar Ahmad","Shamshad Ali","Shaukat Masih","Iftikhar Ali","Muhammad Nasir","Muhammad Aslam","Khalid Mehmood","Muhammad Sher","Atta Ullah Khan","Qamar Jameel","abdul Latif","Mukhtar Ahmad","Saif Ullah","Muhammad Ilyas","Shahbaz Ahmad","Muhammad Imran","Muhammad Arif","Sanwal Khan","Ishaq Ahmed","Zafar Iqbal","Muhammad Iqbal","Khizar Hayat","Naeem Irfan","Ghulam Yaseen","Muhammad Ashraf","Musharraf Ali","Zafar Iqbal","Yaqub Akhtar","Ashaq","Khalid Naseer","Akhter Pervaiz","Haris Naseer"};
//int numbers[50] = { 1096,1091,1084,1082,1081,1081,1080,1079,1077,1077,1075,1074,1073,1072,1072,1070,1066,1065,1064,1063,1063,1060,1060,1055,1054,1053,1052,1052,1052,1052,1051,1051,1050,1049,1049,1018,936,926,784,619};
cout<<"Student Name"<<setw(7)<<"|"<<setw(12)<<"Father Name"<<setw(7)<<"|"<<setw(9)<<"Numbers"<<setw(3)<<"|"<<setw(9)<<"Roll no"<<endl;
cout<<"__________________|__________________|___________|________________";
cout<<endl;

for (int i = 0; i <= 50; i++)

    {   cout <<setw(18)<<left<< students[i]<<setw(2)<<"|"<<left<<setw(17)<<FN[i]<<setw(3)<<"|"<<setw(9)<<left<<numbers[i]<<setw(3)<<"|"<<setw(8)<<right<<roll[i]<<endl;
    cout<<"__________________|__________________|___________|________________";cout<<endl;};
          return 0;}