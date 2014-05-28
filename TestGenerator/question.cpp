#include "question.h"
Question::Question()
{
    count = 0;
    right_ans = 0;
}
/**
 *@fn Question::Question
 *@brief Konstruktor domyślny klasy Question
*/
Question::Question(int i)
{
    count = i;
}
/**
 *@fn Question::Question(int)
 *@brief Konstruktor ustawiający rozmiar
 *@param i Ilość wariantów
*/
void Question::setQuest(const QString& qs)
{
    quest = qs;
}
/**
 *@fn Question::setQuest
 *@brief Ustawienie treści pytania
 *@param qs treść pytania
*/
QString Question::getQuest()
{
    return quest;
}
/**
 *@fn Question::getQuest
 *@brief Odczytuje treść pytania
 *@return treść pytania
*/
QString Question::getAns(int i)
{
    return ans[i];
}
/**
 *@fn Question::getAns
 *@brief Odczytuje i-ty wariant odpowiedzi
 *@param i numer odpowiedzi
*/
int Question::getCount()
{
    return count;
}
/**
 *@fn Question::getCount
 *@brief Odczytuje ilość wariantów odpowiedzi
 *@return count ilość wariantów
*/
void Question::addAnswer( QString* aa, bool t)
{
    if (this->count > 8 ) return;
    ans[count] = *aa;
    if (t) right_ans = count;
    ++count;
}
/**
 *@fn Question::addAnswer
 *@brief Dodawanie wariantu odpowiedzi
 *@param aa treść odpowiedzi
 *@param t czy odpowiedź jest prawdziwa
*/
