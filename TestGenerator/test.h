#ifndef TEST_H
#define TEST_H
#include <QVector>
#include <QString>
#include "question.h"
class Test
{
public:
    Test();
public: //to be private
    QVector<Question> test;
    void load(const QString& fileName);
    void save(const QString& fileName);
    QString countMark();
    double markScale[50];
};
/**
    @class Test
    @brief Klasa przechowująca test w formie pytań pozwalająca na podstawowe operacje wczytania i zapisu do pliku.
*/
#endif // TEST_H
