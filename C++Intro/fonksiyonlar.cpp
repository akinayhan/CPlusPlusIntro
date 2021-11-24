//Fonksiyonlar
//
//Programda kullanýcý tarafýndan tanýmlanan bir fonksiyon olduðu nasýl anlaþýlýr ?
//
//Eðer programda herhangi bir deðiþken(deðiþkenler1, deðiþken2, …) varsa bu bir fonksiyon(alt program) tanýmlandýðý anlamýna gelir.
//
//Örneðin : ali(14), ogu(8, 25), …
//
//Peki fonksiyon nasýl tanýmlanýr ?
//
//Öncelikle ana programýn üzerinde fonksiyon tanýmlanmalýdýr.
//
//Bir fonksiyon aþaðýdaki kurala göre tanýmlanabilir.
//
//Fonksiyonun_tipi fonksiyon_adý(deðiþken 1’in tipi deðiþken1, deðiþken 2’nin tipi deðiþken2, …)
//
//{
//
//    iþlemler
//
//}
//
//Fonksiyon_tipi: fonksiyonun hesapladýðý deðerin tipini belirtir.
//
//double, int veya float olursa return kullanma zorunluluðu vardýr.
//
//Fonksiyonun tipi void olursa return kullanýlmaz.
//
//fonksiyon _adý : deðiþkenler için olan kurallar burada da geçerlidir.
//
//Parantez içindeki deðiþkenler 1 tane veya daha fazla da olabilir.Bazý durumlarda boþ bile olabilir.
//
//Fonksiyon tanýmlandýktan sonra ana programda fonksiyon_adý(deðiþken1, deðiþken2, …)
//
//þeklinde kullanýlýr.Deðiþkenlerin sayýsý fonksiyon tanýmlanýrken kullanýlar deðiþkenlerin sayýsý ile uyumlu olmalýdýr.Deðiþken isimleri ayný olmak zorunda deðildir.
//
//Örnekler
//
//1)iki sayýnýn toplamýný bulan program
//
//Tüm problemler bilgisayar diline aktarýlmadan önce nasýl çözümleneceði konusunda kaba kodlarla tanýmlanýr.Bu problemin kaba kodu;
//
//adým, problemin çözümü için gerekenler(2 tane sayý)
//adým, problemin çözümü için iþlemlerin yapýlmasý(2 sayýnýn toplamý)
//adým, sonuçlarýn gösterimi(2 sayýnýn toplamýnýn gösterimi)
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
//Fonksiyon toplama iþlemini gerçekleþtirecek.
//
//Fonksiyon deðiþken sayýsý kaç olmalýdýr ?
//
//Ýki deðiþken olmalýdýr.
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