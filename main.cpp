#include <QCoreApplication>
#include "eightqueenstate.h"
#include <random>
#include <set>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    eightQueenState current;// متغیر ذخیره کننده ی حالت که رندوم مقدار دهی اولیه شده

    //تا زمانی که تعداد برخورد ها  ۰ نشده
    while (current.cost()!=0) {
        /*
         * the successors() function return std::set of eightQueenState thats
         * are successors of curent state orderd by cost
         */
        auto Successors = current.successors();
        /*
         * set current to ints minimum successor
         */
        current = *Successors.begin();
    }

    current.print();

    return a.exec();
}
