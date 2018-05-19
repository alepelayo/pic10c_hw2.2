#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //labeling homeworks 1-8
    ui->label->setText("Hw 1");
    ui->label_2->setText("Hw 2");
    ui->label_3->setText("Hw 3");
    ui->label_4->setText("Hw 4");
    ui->label_5->setText("Hw 5");
    ui->label_6->setText("Hw 6");
    ui->label_7->setText("Hw 7");
    ui->label_8->setText("Hw 8");

    //labeling exams
    ui->label_9->setText("Midterm 1");
    ui->label_10->setText("Midterm 2");
    ui->label_11->setText("Final Exam");

    //labeling courses available for calculation
    ui->label_12->setText("Course: ");

    //course options for calculation
    ui->comboBox->addItem("Pic10B: Intermediate Programming");
    ui->comboBox->addItem("Pic10C: Advanced Programming");

    //labeling Radiobuttons with the two schemas
    ui->radioButton->setText("Schema A");
    ui->radioButton_2->setText("Schema B");

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

    //connecting Midterm 1 slider and spinbox
    connect(ui->horizontalSlider_9, SIGNAL(valueChanged(int)),ui->spinBox_9, SLOT(setValue(int)));
    connect(ui->spinBox_9, SIGNAL(valueChanged(int)),ui->horizontalSlider_9, SLOT(setValue(int)));

    //connecting Midterm 2 slider and spinbox
    connect(ui->horizontalSlider_10, SIGNAL(valueChanged(int)),ui->spinBox_10, SLOT(setValue(int)));
    connect(ui->spinBox_10, SIGNAL(valueChanged(int)),ui->horizontalSlider_10, SLOT(setValue(int)));

    //connecting Final Exam slider and spinbox
    connect(ui->horizontalSlider_11, SIGNAL(valueChanged(int)),ui->spinBox_11, SLOT(setValue(int)));
    connect(ui->spinBox_11, SIGNAL(valueChanged(int)),ui->horizontalSlider_11, SLOT(setValue(int)));


}

Widget::~Widget()
{
    delete ui;
}
