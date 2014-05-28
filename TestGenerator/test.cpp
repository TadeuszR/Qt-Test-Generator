#include "test.h"
#include <QFileDialog>
#include <QString>
#include <iostream>
#include <QDataStream>

Test::Test()
{
    this->markScale[0] = 1.1;//2 // 2 jako dop.
    this->markScale[1] = 1.1;//2+
    this->markScale[2] = 0.5;//3
    this->markScale[3] = 0.6;//3+
    this->markScale[4] = 0.7;//4
    this->markScale[5] = 0.8;//4+
    this->markScale[6] = 0.9;//5
    this->markScale[7] = 1.1;//5+
    this->markScale[8] = 1.1;//6
}
/**
 *@fn Test::Test
 *@brief Konstruktor obiektu test
 *
 *Ustawia skale ocen domyslna dla AGH
*/
QString Test::countMark()
{
    int N = test.size();
    int n = 0;
    for (int i = 0; i < N ; ++i)
    {
        if (test[i].marked == test[i].right_ans)
            n++;
    }
    double wynik = (double)n/N;
    QString qs ("<h1>Twój wynik to </h1><br/><h3>");
    qs.append(QString::number(wynik*100));
    qs.append(" %</h3><br/><h2>Ocena:<br/>");
    int i;
    for (i = 8; i >= 0; --i)
    {
        if(wynik >=markScale[i])
        {
            break;
        }
    }
    switch (i)
    {
        case -1:
        qs.append("niedostateczny</h2>"); break;
        case 0:
        qs.append("dopuszczający</h2>"); break;
        case 1:
        qs.append("dopuszczający +</h2>"); break;
        case 2:
        qs.append("dostateczny</h2>"); break;
        case 3:
        qs.append("dostateczny +</h2>"); break;
        case 4:
        qs.append("dobry</h2>"); break;
        case 5:
        qs.append("dobry +</h2>"); break;
        case 6:
        qs.append("bardzo dobry</h2>"); break;
        case 7:
        qs.append("bardzo dobry +</h2>"); break;
        case 8:
        qs.append("celujący</h2>"); break;
    }

    return qs;
}
/**
 *@fn Test::countMark
 *@brief Funkcja obliczająca ocenę wg. podanej skali
 *@return   QString gotowy do umieszczenia na ekranie.
*/

void Test::load(const QString& fileName)
{

         if (fileName != "") {
             QFile file(fileName);
             if (!file.open(QIODevice::ReadOnly)) {
                 // error message
             } else {
                 QDataStream stream(&file);
                         {//właściwy zapis do pliku
                            int tmp;
                            stream>>tmp;
                            test.resize(tmp);
                             for (int i = 0; i <test.size(); ++i)
                             {
                                 stream>>test[i].quest;
                                 stream>>tmp;
                                 test[i].count = tmp;
                                 stream>>tmp;
                                 test[i].right_ans = tmp;
                                 test[i].marked = -1;
                                 for (int j = 0; j < test[i].count; ++j)
                                 {
                                     QString qtmp;
                                     stream>>qtmp;
                                     test[i].ans[j]=qtmp;
                                 }

                             }
                             for (int i = 0; i < 9 ; ++i)
                             {
                                 stream>>markScale[i];
                             }
                         }
                         file.close();
             }
         }
}
/**
 *@fn Test::countMark
 *@brief Funkcja obliczająca ocenę wg. podanej skali
 *@return   QString gotowy do umieszczenia na ekranie.
*/
