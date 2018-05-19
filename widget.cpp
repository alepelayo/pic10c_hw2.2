#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //connecting Hw 1 slider and spinbox
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),ui->spinBox, SLOT(setValue(int)));
    connect(ui->spinBox, SIGNAL(valueChanged(int)),ui->horizontalSlider, SLOT(setValue(int)));

    //connecting Hw 2 slider and spinbox
    connect(ui->horizontalSlider_2, SIGNAL(valueChanged(int)),ui->spinBox_2, SLOT(setValue(int)));
    connect(ui->spinBox_2, SIGNAL(valueChanged(int)),ui->horizontalSlider_2, SLOT(setValue(int)));

    //connecting Hw 3 slider and spinbox
    connect(ui->horizontalSlider_3, SIGNAL(valueChanged(int)),ui->spinBox_3, SLOT(setValue(int)));
    connect(ui->spinBox_3, SIGNAL(valueChanged(int)),ui->horizontalSlider_3, SLOT(setValue(int)));

    //connecting Hw 4 slider and spinbox
    connect(ui->horizontalSlider_4, SIGNAL(valueChanged(int)),ui->spinBox_4, SLOT(setValue(int)));
    connect(ui->spinBox_4, SIGNAL(valueChanged(int)),ui->horizontalSlider_4, SLOT(setValue(int)));

    //connecting Hw 5 slider and spinbox
    connect(ui->horizontalSlider_5, SIGNAL(valueChanged(int)),ui->spinBox_5, SLOT(setValue(int)));
    connect(ui->spinBox_5, SIGNAL(valueChanged(int)),ui->horizontalSlider_5, SLOT(setValue(int)));

    //connecting Hw 6 slider and spinbox
    connect(ui->horizontalSlider_6, SIGNAL(valueChanged(int)),ui->spinBox_6, SLOT(setValue(int)));
    connect(ui->spinBox_6, SIGNAL(valueChanged(int)),ui->horizontalSlider_6, SLOT(setValue(int)));

    //connecting Hw 7 slider and spinbox
    connect(ui->horizontalSlider_7, SIGNAL(valueChanged(int)),ui->spinBox_7, SLOT(setValue(int)));
    connect(ui->spinBox_7, SIGNAL(valueChanged(int)),ui->horizontalSlider_7, SLOT(setValue(int)));

    //connecting Hw 8 slider and spinbox
    connect(ui->horizontalSlider_8, SIGNAL(valueChanged(int)),ui->spinBox_8, SLOT(setValue(int)));
    connect(ui->spinBox_8, SIGNAL(valueChanged(int)),ui->horizontalSlider_8, SLOT(setValue(int)));


}

Widget::~Widget()
{
    delete ui;
}