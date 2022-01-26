#include <iostream> 

using namespace std;

bool countRepeatingDigits(int N)
{
     bool res;

    int D_1 = 0;
    int D_2 = 0;
    int D_3 = 0;
    int D_4 = 0;

    D_1 = N / 1000;
    D_2 = (N / 100) - (D_1 * 10);
    D_3 = (N / 10) - (D_1 * 100) - (D_2 * 10);
    D_4 = N % 10;

    if (D_1 == D_2 || D_1 == D_3 || D_1 == D_4 || D_2 == D_3 || D_2 == D_4 || D_3 == D_4) {
        res = false;
    }
    else {
        res = true;
    }
    return res;
}
 void BullsAndCowsCounter(int NumToCount, int guessedNum) {
     int a_g = 0;
     int b_g = 0;
     int c_g = 0;
     int d_g = 0;

     int D_1 = 0;
     int D_2 = 0;
     int D_3 = 0;
     int D_4 = 0;

     int cows = 0;
     int bulls = 0;

     D_1 = NumToCount / 1000;
     D_2 = (NumToCount / 100) - (D_1 * 10);
     D_3 = (NumToCount / 10) - (D_1 * 100) - (D_2 * 10);
     D_4 = NumToCount % 10;

     a_g = guessedNum / 1000;
     b_g = (guessedNum / 100) - (a_g * 10);
     c_g = (guessedNum / 10) - (a_g * 100) - (b_g * 10);
     d_g = guessedNum % 10;

 
         if (D_1 == b_g || D_1 == c_g || D_1 == d_g) {
             cows++;
         }
         if (D_2 == a_g || D_2 == c_g || D_2 == d_g) {
             cows++;
         }
         if (D_3 == a_g || D_3 == b_g || D_3 == d_g) {
             cows++;
         }
         if (D_4 == a_g || D_4 == b_g || D_4 == c_g) {
             cows++;
         }
         if (D_1 == a_g) {
             bulls++;
         }
         if (D_2 == b_g) {
             bulls++;
         }
         if (D_3 == c_g) {
             bulls++;
         }
         if (D_4 == d_g) {
             bulls++;
         }
     
     cout << "Number of Cows:" << cows << endl;
     cout << "Number of Bulls:" << bulls << endl;

} 



