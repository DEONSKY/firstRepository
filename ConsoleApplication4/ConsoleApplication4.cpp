﻿// ConsoleApplication4.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

struct birlik{
struct asker{
	float kunyeno;
	char adı[10];
	char uzmanlik[10];
}a1,a2,a3,a4;
}b1,b2,b3,b4;


int main()
{
	b2.a1 = { 21,"joseph","sniper" };
	setlocale(LC_ALL, "Turkish");
	cin >> b1.a1.kunyeno;
	cin >> b2.a1.adı;
	cin >> b1.a1.uzmanlik;
	cout << b1.a1.kunyeno << endl;
	cout << b2.a1.adı << endl;
	cout << b2.a1.uzmanlik << endl;
	cout << "git denemesi" << endl;
	cout << "git denemesi2" << endl;

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
