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

    deger = deger / 2 + 1;
    int sayac, bosluk, yildiz;


    for (sayac = 1; sayac <= deger; ++sayac) {
        for (bosluk = 0; bosluk <= deger - sayac; ++bosluk) {
            cout << " ";
        }
        for (yildiz = 0; yildiz != 2 * sayac - 1; ++yildiz) {
            cout << "*";
        }
        cout << endl;

    }
    std::cout << endl;





}


/*Bu fonksiyon ekrana y�ld�zlardan olu�an ters bir ��gen yazar.
Fonksiyon sadece[3, 15] aral���ndaki tek say�larda �al���r.
Uygun parametre g�nderilmezse ekrana hi�bir �ey yazd�rmadan ��kar.*/
void tersUcgen(int deger)
{


    deger = (deger / 2) + 1;
    int bosluk = -1; int sayac = deger;  int i = 0;

    while (sayac >= 1)
    {

        while (bosluk < deger - sayac)
        {
            cout << "  ";
            bosluk++;
        }
        i = sayac;
        while (i <= 2 * sayac - 1)
        {
            cout << "*";
            ++i;
        }
        i = 0;
        while (i < sayac - 1)
        {
            cout << "*";
            ++i;
        }
        cout << endl;
        --sayac;
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

    cout << "ucgen yazd�rmak icin 1 , ters ucgen yazd�rmak icin 2, elmas yazdirmak icin 3 e basiniz " << endl;

    cin >> secim;

    if (secim == 1) {

        int sayac1 = 0;
        cout << "ucgen yuksekligi giriniz" << endl;

        while (sayac1 != 3) {

            cin >> count;


            if ((count >= 3 && count <= 15) && count % 2 == 1) {

                cout << endl;

                duzUcgen(count);
            }
            else {

                sayac1++;
                cout << "hatali giris yaptiniz lutfen tekrar deneyiniz";

            }
        }






    }
    else if (secim == 2) {

        int sayac2 = 0;

        cout << "ucgen yuksekligini giriniz" << endl;

        while (sayac2 != 3) {

            cin >> count;

            if ((count >= 3 && count <= 15) && count % 2 == 1) {

                cout << endl;

                tersUcgen(count);

            }
            else {
                sayac2++;

                cout << "hatali giris yaptiniz lutfen tekrar deneyiniz";

            }
        }

    }
    else if (secim == 3) {

        int sayac3 = 0;

        cout << "ucgen yuksekligini giriniz" << endl;

        while (sayac3 != 3) {

            cin >> count;

            if ((count >= 3 && count <= 15) && count % 2 == 1) {

                cout << endl;

                elmas(count);
            }
            else {
                sayac3++;

                cout << "hatali giris yaptiniz lutfen tekrar deneyiniz";
            }
        }



    }
    else {
        return -1;
    }

    return 0;
}