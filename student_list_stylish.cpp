#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  char s[3][50][25] = {{"Nimra Sadiq", "Zain Iqbal", "Nouman Riaz", "Amna Azhar", "Muhammad Abdullah", "Muhammad Saqib", "Muhammad Usman", "Mahrukh Fatima", "Awais Raza", "Arslan Shah", "Saira Noreen", "Ariqa Nayab", "Daima Iftikhar", "Haseeb Bilal", "Huzaifa Aslam", "Muhammad Ali", "Kaneez Fatima", "Ayesha Atta", "Subhan", "Hadia Latif", "Abu Bakar Khalid", "Saad Mukhtar", "Arsalan Ahmad", "Ismail", "Amna Noor", "Muhammad Hamza", "Isbah Imran", "Arshiya Arif", "Qadir Usman", "Hadeeqa Nisa", "Sobia Zafar", "Khurram Shehzad", "Nasrullah Khizar", "Zain Ul Abidden", "Ali Hamza Yaseen", "Ayesha", "Mubeen Musharraf", "Abeer Zafar", "Ali Abbas", "Areeba Maryam", "Ifra Mariam", "Dilbar Ali", "Haji Rahman", "Muhammad Sohaib", "Yahya Khalid", "Muhammad Awais", "Fida Ullah", "Laiba Noor", "Muhammad Ateeb", "Shakeel Ahmad"},
  {"BSCS51F21R001", "BSCS51F21R002", "BSCS51F21R003", "BSCS51F21R004", "BSCS51F21R005", "BSCS51F21R006", "BSCS51F21R007", "BSCS51F21R008", "BSCS51F21R009", "BSCS51F21R010", "BSCS51F21R011", "BSCS51F21R012", "BSCS51F21R013", "BSCS51F21R014", "BSCS51F21R015", "BSCS51F21R016", "BSCS51F21R017", "BSCS51F21R018", "BSCS51F21R019", "BSCS51F21R020", "BSCS51F21R021", "BSCS51F21R022", "BSCS51F21R023", "BSCS51F21R024", "BSCS51F21R025", "BSCS51F21R026", "BSCS51F21R027", "BSCS51F21R028", "BSCS51F21R029", "BSCS51F21R030", "BSCS51F21R031", "BSCS51F21R032", "BSCS51F21R033", "BSCS51F21R034", "BSCS51F21R035", "BSCS51F21R036", "BSCS51F21R037", "BSCS51F21R038", "BSCS51F21R039", "BSCS51F21R040", "BSCS51F21R041", "BSCS51F21R042", "BSCS51F21R043", "BSCS51F21R044", "BSCS51F21R045", "BSCS51F21R046", "BSCS51F21R047", "BSCS51F21R048", "BSCS51F21R049", "BSCS51F21R050"},
  {"Muhammad Sadiq", "Muhammad Iqbal", "Muhammad Riaz", "Azhar Hussain", "Zafar Hussain", "Muhammad Sadiq", "Muhammad Ashraf", "Ishaque Mehmood", "Muhammad Ehsan", "Shah Sawar Ahmad", "Shamshad Ali", "Shaukat Masih", "Iftikhar Ali", "Muhammad Nasir", "Muhammad Aslam", "Khalid Mehmood", "Muhammad Sher", "Atta Ullah Khan", "Qamar Jameel", "Abdul Latif", "Khalid Mehmood", "Mukhtar Ahmad", "Saif Ullah", "Asim Khan", "Muhammad Ilyas", "Shahbaz Ahmad", "Muhammad Imran", "Muhammad Arif", "Sanwal Khan", "Ishaq Ahmed", "Zafar Iqbal", "Muhammad Iqbal", "Khizar Hayat", "Naeem Irfan", "Ghulam Yaseen", "Muhammad Ashraf", "Musharraf Ali", "Zafar Iqbal", "Muhammad Sibtain", "Muhammad Akram", "Yaqub Akhtar", "Akbar Khan", "Ashaq", "Muhammad Siddique", "Khalid Naseer", "Muhammad Anwar", "Ashraf Ali", "Akhter Pervaiz", "Haris Naseer", "Taj Muhammad Khan"}
};
  const int numbers[] = {1096, 1091, 1088, 1084, 1082, 1081, 1081, 1080, 1079, 1077, 1077, 1075, 1074, 1073, 1072, 1072, 1070, 1066, 1065, 1064, 1064, 1063, 1063, 1061, 1060, 1060, 1055, 1054, 1053, 1052, 1052, 1052, 1052, 1051, 1051, 1050, 1049, 1049, 1045, 1042, 1018, 1010, 936, 928, 926, 849, 845, 784, 619, 577};
  cout << "Student Name" << setw(8) << "/" << setw(11) << "Father Name" << setw(8) << "/" << setw(8) << "Numbers" << setw(6) << "/" << setw(8) << "Roll no" << endl;
  cout << "__________________/__________________/_____________/_______________" << endl;
  for (int i = 0; i <= 49; i+=2)
  {
    cout << left << setw(18) << s[0][i] << setw(2) << "\\" << left << setw(17) << s[2][i] << setw(2) << "\\" << right << setw(7) << numbers[i] << setw(6) << "\\" << setw(15) << right << s[1][i] << endl;
    cout << "___________________\\__________________\\_____________\\______________" << endl;
    cout << left << setw(18) << s[0][i + 1] << setw(2) << right << "/" << setw(17) << left << s[2][i + 1] << setw(2) << right << "/" << setw(7) << right << numbers[i + 1] << setw(7) << right << "/" << setw(14) << right << s[1][i + 1] << endl;
    cout << "__________________/__________________/_____________/_______________" << endl;
  }
  return 0;
}