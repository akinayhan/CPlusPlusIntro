//Fonksiyonlar
//
//Programda kullan�c� taraf�ndan tan�mlanan bir fonksiyon oldu�u nas�l anla��l�r ?
//
//E�er programda herhangi bir de�i�ken(de�i�kenler1, de�i�ken2, �) varsa bu bir fonksiyon(alt program) tan�mland��� anlam�na gelir.
//
//�rne�in : ali(14), ogu(8, 25), �
//
//Peki fonksiyon nas�l tan�mlan�r ?
//
//�ncelikle ana program�n �zerinde fonksiyon tan�mlanmal�d�r.
//
//Bir fonksiyon a�a��daki kurala g�re tan�mlanabilir.
//
//Fonksiyonun_tipi fonksiyon_ad�(de�i�ken 1�in tipi de�i�ken1, de�i�ken 2�nin tipi de�i�ken2, �)
//
//{
//
//    i�lemler
//
//}
//
//Fonksiyon_tipi: fonksiyonun hesaplad��� de�erin tipini belirtir.
//
//double, int veya float olursa return kullanma zorunlulu�u vard�r.
//
//Fonksiyonun tipi void olursa return kullan�lmaz.
//
//fonksiyon _ad� : de�i�kenler i�in olan kurallar burada da ge�erlidir.
//
//Parantez i�indeki de�i�kenler 1 tane veya daha fazla da olabilir.Baz� durumlarda bo� bile olabilir.
//
//Fonksiyon tan�mland�ktan sonra ana programda fonksiyon_ad�(de�i�ken1, de�i�ken2, �)
//
//�eklinde kullan�l�r.De�i�kenlerin say�s� fonksiyon tan�mlan�rken kullan�lar de�i�kenlerin say�s� ile uyumlu olmal�d�r.De�i�ken isimleri ayn� olmak zorunda de�ildir.
//
//�rnekler
//
//1)iki say�n�n toplam�n� bulan program
//
//T�m problemler bilgisayar diline aktar�lmadan �nce nas�l ��z�mlenece�i konusunda kaba kodlarla tan�mlan�r.Bu problemin kaba kodu;
//
//ad�m, problemin ��z�m� i�in gerekenler(2 tane say�)
//ad�m, problemin ��z�m� i�in i�lemlerin yap�lmas�(2 say�n�n toplam�)
//ad�m, sonu�lar�n g�sterimi(2 say�n�n toplam�n�n g�sterimi)
//fonksiyonsuz;
//
//#include<iostream>
//
//using namespace std;
//
//void main()
//
//{
//
//    double x, y, sonuc;
//
//    cout << "x:"; cin >> x;
//
//    cout << "y:"; cin >> y;
//
//    sonuc = x + y;
//
//    cout << sonuc << endl;
//
//}
//
//Fonksiyon ile
//
//Fonksiyon toplama i�lemini ger�ekle�tirecek.
//
//Fonksiyon de�i�ken say�s� ka� olmal�d�r ?
//
//�ki de�i�ken olmal�d�r.
//
//#include<iostream>
//
//using namespace std;
//
//double f(double a, double b)
//
//{
//    return a + b;
//}
//
//void main()
//
//{
//
//    double x, y;
//
//    cin >> x >> y;
//
//    cout << f(x, y) << endl;
//
//}
//
//
//
//Void ile
//
//#include<iostream>
//
//using namespace std;
//
//void f(double a, double b)
//
//{
//    cout << a + b << endl;
//}
//
//void main()
//
//{
//
//    double x, y;
//
//    cin >> x >> y;
//
//    cout << f(x, y) << endl;
//
//}