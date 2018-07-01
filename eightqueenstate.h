#ifndef EIGHTQUEENSTATE_H
#define EIGHTQUEENSTATE_H

#include <QVector>
#include <QObject>
#include <QDebug>
#include <random>
#include <set>



class eightQueenState
{

public:
    static constexpr int N = 8;// size of problem
    //return
    static eightQueenState selection(const QVector<eightQueenState> &population);
    //random constructor
    eightQueenState();

    eightQueenState(const QVector<int> &vec);
    //Calculate the number of collisions
    int cost() const;
    //mutation for GA
    void mutation();

    void print() const;
    //randomly select a column and return std::set of  eightQueenStates
    std::set<eightQueenState> successors()const;
    std::set<eightQueenState> successors(int v)const;
    // Crossover for GA
    eightQueenState operator+(const eightQueenState &right)const;
    // < operator according to cost
    bool operator <(const eightQueenState &right) const ;
    // for GA
    int fitnes();

signals:

public slots:

private:

    QVector<int> plane;
    static std::default_random_engine engin;
    static  const double epsilon;



};

#endif // EIGHTQUEENSTATE_H
