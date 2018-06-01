#include "widget.h"
#include <QApplication>
#include <iostream>
#include <QVector>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    //attempting to create a vector with all the spinBox values (aka the homeworks)
    Qvector<int> v;
    v[0] = ui->spinBox->value();
    v[1] = ui->spinBox_2->value();
    v[2] = ui->spinBox_3->value();
    v[3] = ui->spinBox_4->value();
    v[4] = ui->spinBox_5->value();
    v[5] = ui->spinBox_6->value();
    v[6] = ui->spinBox_7->value();
    v[7] = ui->spinBox_8->value();


    return a.exec();
}
