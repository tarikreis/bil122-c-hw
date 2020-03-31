//
//  main.cpp
//  ucgenoyunhw1
//
//  Created by Tarık Reis on 29.03.2020.
//  Copyright © 2020 tarikreisgroup. All rights reserved.
//

#include <iostream>

using namespace std;

void duzucgen(int x) {           //duz ucgeni basacak fonksiyonu tanimlladim
  int bosluk = (x - 1) / 2;
  int yildiz = 1;

  for (int i = 0; i < (x + 1) / 2; i++) {  //yildiz ve bosluk basacak donguyu olusturduk
    for (int j = 0; j < bosluk; j++) {
      cout << " ";
    }
    for (int k = 0; k < yildiz; k++) {
      cout << "*";
    }

    cout << endl;
    bosluk--;
    yildiz += 2;
  }

}

void tersucgen(int x) {           //ter ucgeni basacak fonksiyonu tanimlladim
  int bosluk = 0;
  int yildiz = x;

  for (int i = 0; i < (x - 1) / 2 + 1; i++) {   //yildiz ve bosluk basacak donguyu olusturduk
    for (int j = 0; j < bosluk; j++) {
      cout << " ";
    }
    for (int k = 0; k < yildiz; k++) {
      cout << "*";
    }

    cout << endl;
    bosluk++;
    yildiz -= 2;
  }
}

void elmas(int x) {               // elmas sedklini basacak fonksiyonu tanimlladim
  duzucgen(x);                    // iki ucgenin fonksyonunu birlestirip sekli elde ediyoruz
  tersucgen(x);

}

int main(int argc,
  const char * argv[]) {     // main fonksyonunda secilen duruma gore sekillerin fonksyonlarini                            cagiracagiz

  int deger;                  // seklin buyuklugunu belirleyecek degisken
  int secenek;               // hangi ucgenin basilacagini belirleyecek degisken

  cout << " lutfen secmek istediginiz secenegin basindaki rakami tuslayiniz" << endl <<
    "duz ucgen icin 1 e basiniz" << endl << "ters ucgen icin 2 ye basiniz" << endl <<
    "elmas sekli icin 3 e basiniz" << endl << "cikis yapmak icin 0 a basiniz" << endl;

  cin >> secenek;

  int hak = 3;
  while (hak != 0) {        // hak sayisini 3 belirleyip yanlis bilindiginde bir azaltip sifir                             oldugunda donguden cikarrtim
    if (secenek == 0) {      //oyundan cikis secenegi
      return (0);
    } else if (secenek == 1) {      //duz ucgen secenegi
      cout << "lutfen sekil buyuklugu icin deger giriniz" << endl;
      cin >> deger;
      if (deger >= 3 && deger <= 15 && deger % 2 == 1) {  // istenilen aralikta deger girince                                                      fonksyonu cagiriyo
        duzucgen(deger);
        break;
      } else {
            cout << "lutfen 3 'le 15 arasinda tek sayilari seciniz"; //istenilen deger disindaysa tekrar isteniyo toplam 3 yanlis girdiginde oyun sonlaniyo
      }

    } else if (secenek == 2) {  // ters ucgen basan secenek
      cout << "lutfen sekil buyuklugu icin deger giriniz" << endl;
      cin >> deger;
      if (deger >= 3 && deger <= 15 && deger % 2 == 1) {
        tersucgen(deger);
        break;
      } else {
        cout << "lutfen 3 'le 15 arasinda tek sayilari seciniz";
      }

    } else if (secenek == 3) { // elmas sekli basan secenek
      cout << "lutfen sekil buyuklugu icin deger giriniz" << endl;
      cin >> deger;
      if (deger >= 5 && deger <= 15 && deger % 2 == 1) {
        elmas(deger);
        break;
      } else {
        cout << "lutfen 5 'le 15 arasinda tek sayilari seciniz";
      }

    }
    hak--;   // her dongude hak sayisini azaltiyor
  }

  return 0;
}
