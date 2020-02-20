/*odev1
 * Alperen inci
 * 18120205016
 */

#include <iostream>
using namespace std;
 /*Bu fonksiyon ekrana y�ld�zlardan olu�an bir ��gen yazar.
 Fonksiyon sadece [3, 15] aral���ndaki tek say�larda �al���r.
 Uygun parametre g�nderilmezse ekrana hi�bir �ey yazd�rmadan ��kar.*/
void duzUcgen(int deger)
{   
    

    int sayac, bosluk, yildiz;

    if (deger >= 3 && deger <= 15 && deger % 2 != 0) {
        for (sayac = 1; sayac <= deger; ++sayac) {
            for (bosluk = deger - sayac; bosluk >= 1; --bosluk) {
                cout << " ";
            }
            for (yildiz = 1; yildiz <= (sayac * 2) - 1; ++yildiz) {
                cout << "*";
            }
            cout << endl;

        }
        std::cout << endl;
    }
    
  


}


/*Bu fonksiyon ekrana y�ld�zlardan olu�an ters bir ��gen yazar.
Fonksiyon sadece[3, 15] aral���ndaki tek say�larda �al���r.
Uygun parametre g�nderilmezse ekrana hi�bir �ey yazd�rmadan ��kar.*/
void tersUcgen(int deger)
{
    

    deger = deger / 2 + 1;
    int bosluk = -1; int i = deger;  int j = 0;
   
    while (i >= 1)
    {

        while (bosluk < deger - i)
        {
            cout << "  ";
            bosluk++;
        }
        j = i;
        while (j <= 2 * i - 1)
        {
            cout << "* ";
            ++j;
        }
        j = 0;
        while (j < i - 1)
        {
            cout << "* ";
            ++j;
        }
        cout << endl;
        --i;
        bosluk = -1;
    }

   
    
}

/*Bu fonksiyon ekrana y�ld�zlardan olu�an bir elmas �ekli yazar.
Fonksiyon sadece [5, 15] aral���ndaki tek say�larda �al���r.
Uygun parametre g�nderilmezse ekrana hi�bir �ey yazd�rmadan ��kar.*/
void elmas(int deger)
{
   

    duzUcgen(deger);
    tersUcgen(deger);

}

    



int main() {

    int secim;
    int count;

    cout << "ucgen yazd�rmak icin 1 , ters ucgen yazd�rmak icin 2, elmas yazdirmak icin 3 e basiniz "<<endl;

    cin >> secim;

    if (secim == 1) {
        
        cout << "ucgen yuksekligi giriniz" << endl;

        cin >> count;
        
        duzUcgen(count);

        

        
    }
    else if (secim == 2) {
        
        cout << "ucgen yuksekligi giriniz" << endl;

        cin >> count;
        
        tersUcgen(count);

        
    }
    else if (secim == 3) {
       
        cout << "ucgen yuksekligi giriniz" << endl;

        cin >> count;
        
        elmas(count);

    }
    else {
        return -1;
    }
    
    return 0;
}  