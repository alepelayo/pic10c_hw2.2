#include "widget.h"
#include "ui_widget.h"
#include <iostream>
#include <QString>
#include <QCoreApplication>
#include <QList>
#include <QSetIterator>


using namespace std;

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

	//labeling the overall score
	ui->label_13->setText("Overall Score: ");
	ui->label_14->setText("0.0");

	//course options for calculation
	ui->comboBox->addItem("Pic10B: Intermediate Programming");
	ui->comboBox->addItem("Pic10C: Advanced Programming");

	//labeling Radiobuttons with the two schemas
	ui->SchemaA->setText("Schema A");
	ui->SchemaB->setText("Schema B");

	//setting a range for homeworks 1-8??
	ui->spinBox->setRange(0, 20);
	ui->horizontalSlider->setRange(0, 20);

	ui->spinBox_2->setRange(0, 20);
	ui->horizontalSlider_2->setRange(0, 20);

	ui->spinBox_3->setRange(0, 20);
	ui->horizontalSlider_3->setRange(0, 20);

	ui->spinBox_4->setRange(0, 20);
	ui->horizontalSlider_4->setRange(0, 20);

	ui->spinBox_5->setRange(0, 20);
	ui->horizontalSlider_5->setRange(0, 20);

	ui->spinBox_6->setRange(0, 20);
	ui->horizontalSlider_6->setRange(0, 20);

	ui->spinBox_7->setRange(0, 20);
	ui->horizontalSlider_7->setRange(0, 20);

	ui->spinBox_8->setRange(0, 20);
	ui->horizontalSlider_8->setRange(0, 20);

	//connecting Hw 1 slider and spinbox
	connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->spinBox, SLOT(setValue(int)));
	connect(ui->spinBox, SIGNAL(valueChanged(int)), ui->horizontalSlider, SLOT(setValue(int)));

	//connecting Hw 2 slider and spinbox
	connect(ui->horizontalSlider_2, SIGNAL(valueChanged(int)), ui->spinBox_2, SLOT(setValue(int)));
	connect(ui->spinBox_2, SIGNAL(valueChanged(int)), ui->horizontalSlider_2, SLOT(setValue(int)));

	//connecting Hw 3 slider and spinbox
	connect(ui->horizontalSlider_3, SIGNAL(valueChanged(int)), ui->spinBox_3, SLOT(setValue(int)));
	connect(ui->spinBox_3, SIGNAL(valueChanged(int)), ui->horizontalSlider_3, SLOT(setValue(int)));

	//connecting Hw 4 slider and spinbox
	connect(ui->horizontalSlider_4, SIGNAL(valueChanged(int)), ui->spinBox_4, SLOT(setValue(int)));
	connect(ui->spinBox_4, SIGNAL(valueChanged(int)), ui->horizontalSlider_4, SLOT(setValue(int)));

	//connecting Hw 5 slider and spinbox
	connect(ui->horizontalSlider_5, SIGNAL(valueChanged(int)), ui->spinBox_5, SLOT(setValue(int)));
	connect(ui->spinBox_5, SIGNAL(valueChanged(int)), ui->horizontalSlider_5, SLOT(setValue(int)));

	//connecting Hw 6 slider and spinbox
	connect(ui->horizontalSlider_6, SIGNAL(valueChanged(int)), ui->spinBox_6, SLOT(setValue(int)));
	connect(ui->spinBox_6, SIGNAL(valueChanged(int)), ui->horizontalSlider_6, SLOT(setValue(int)));

	//connecting Hw 7 slider and spinbox
	connect(ui->horizontalSlider_7, SIGNAL(valueChanged(int)), ui->spinBox_7, SLOT(setValue(int)));
	connect(ui->spinBox_7, SIGNAL(valueChanged(int)), ui->horizontalSlider_7, SLOT(setValue(int)));

	//connecting Hw 8 slider and spinbox
	connect(ui->horizontalSlider_8, SIGNAL(valueChanged(int)), ui->spinBox_8, SLOT(setValue(int)));
	connect(ui->spinBox_8, SIGNAL(valueChanged(int)), ui->horizontalSlider_8, SLOT(setValue(int)));

	//connecting Midterm 1 slider and spinbox
	connect(ui->horizontalSlider_9, SIGNAL(valueChanged(int)), ui->spinBox_9, SLOT(setValue(int)));
	connect(ui->spinBox_9, SIGNAL(valueChanged(int)), ui->horizontalSlider_9, SLOT(setValue(int)));

	//connecting Midterm 2 slider and spinbox
	connect(ui->horizontalSlider_10, SIGNAL(valueChanged(int)), ui->spinBox_10, SLOT(setValue(int)));
	connect(ui->spinBox_10, SIGNAL(valueChanged(int)), ui->horizontalSlider_10, SLOT(setValue(int)));

	//connecting Final Exam slider and spinbox
	connect(ui->horizontalSlider_11, SIGNAL(valueChanged(int)), ui->spinBox_11, SLOT(setValue(int)));
	connect(ui->spinBox_11, SIGNAL(valueChanged(int)), ui->horizontalSlider_11, SLOT(setValue(int)));




}

Widget::~Widget()
{
	delete ui;
}



//putting schema A into effect
void Widget::on_SchemaA_clicked()
{
	//if comboBox reads Pic10b:
	if (ui->comboBox->currentText() == "Pic10B: Intermediate Programming") {

		//attempting to add the total of all the homeworks
		double total_1 = ((ui->spinBox->value()) + (ui->spinBox_2->value()) + (ui->spinBox_3->value()) +
			(ui->spinBox_4->value()) + (ui->spinBox_5->value()) + (ui->spinBox_6->value()) +
			(ui->spinBox_7->value()) + (ui->spinBox_8->value()));

		//-------------------------------------------------------------------------------------------------------

		//attempting to drop the lowest homework
		//attempting to create a vector with all the spinBox values (aka the homeworks)
		QList<size_t> v;
		v.insert(0, ui->spinBox->value());
		v.insert(1, ui->spinBox_2->value());
		v.insert(2, ui->spinBox_3->value());
		v.insert(3, ui->spinBox_4->value());
		v.insert(4, ui->spinBox_5->value());
		v.insert(5, ui->spinBox_6->value());
		v.insert(6, ui->spinBox_7->value());
		v.insert(7, ui->spinBox_8->value());

		//comparing the right and left to see which is lower
		for (int i = 0; i < v.size() - 1; ++i) {
			// cout << v[i]<< endl;
			if (v[i] > v[i + 1]) {
				cout << v[i] << endl;
			}
			else if (v[i] < v[i + 1]) {
				cout << v[i + 1] << endl;
			}
		}

		//-------------------------------------------------------------------------------------------------------
		//calculating percentage for homeworks
		total_1 *= (0.25);

		//calculating percentage midterm 1
		double midterm_1 = (ui->spinBox_9->value())*(0.2);

		//calculating percentage midterm 2
		double midterm_2 = (ui->spinBox_10->value())*(0.2);

		//calculating percentage final
		double final = (ui->spinBox_11->value())*(0.35);

		double grade;
		grade = total_1 + midterm_1 + midterm_2 + final;
		ui->label_14->setNum(grade);
	}

	//if comboBox reads Pic10c:
	if (ui->comboBox->currentText() == "Pic10C: Advanced Programming") {

		//attempting to add the total of all the homeworks
		double total_1 = ((ui->spinBox->value()) + (ui->spinBox_2->value()) + (ui->spinBox_3->value()) +
			(ui->spinBox_4->value()) + (ui->spinBox_5->value()) + (ui->spinBox_6->value()) +
			(ui->spinBox_7->value()) + (ui->spinBox_8->value()));

		//calculating percentage for homeworks
		total_1 *= (0.15);

		//calculating percentage midterm 1
		double midterm = (ui->spinBox_9->value())*(0.25);

		//calculating percentage final exam
		double final = (ui->spinBox_10->value())*(0.3);

		//calculating percentage final exam
		double project = (ui->spinBox_11->value())*(0.35);

		double grade;
		grade = total_1 + midterm + final + project;
		ui->label_14->setNum(grade);
	}
}

//putting schema B into effect
void Widget::on_SchemaB_clicked()
{
	//if comboBox reads Pic10b:
	if (ui->comboBox->currentText() == "Pic10B: Intermediate Programming") {

		//attempting to add the total of all the homeworks
		double total_1 = ((ui->spinBox->value()) + (ui->spinBox_2->value()) + (ui->spinBox_3->value()) +
			(ui->spinBox_4->value()) + (ui->spinBox_5->value()) + (ui->spinBox_6->value()) +
			(ui->spinBox_7->value()) + (ui->spinBox_8->value()));

		//calculating percentage for homeworks
		total_1 *= (0.25);

		double midterm = 0;
		//calculating if midterm 1 is higher
		if (ui->spinBox_9->value() > ui->spinBox_10->value()) {
			midterm = (ui->spinBox_9->value())*(0.3);
		}

		//calculating if midterm 2 is higher
		else if (ui->spinBox_9->value() < ui->spinBox_10->value()) {
			midterm = (ui->spinBox_10->value())*(0.3);
		}

		//calculating percentage final
		double final = (ui->spinBox_11->value())*(0.44);

		double grade;
		grade = total_1 + midterm + final;
		ui->label_14->setNum(grade);
	}

	//if comboBox reads Pic10c:
	if (ui->comboBox->currentText() == "Pic10C: Advanced Programming") {

		//attempting to add the total of all the homeworks
		double total_1 = ((ui->spinBox->value()) + (ui->spinBox_2->value()) + (ui->spinBox_3->value()) +
			(ui->spinBox_4->value()) + (ui->spinBox_5->value()) + (ui->spinBox_6->value()) +
			(ui->spinBox_7->value()) + (ui->spinBox_8->value()));

		//calculating percentage for homeworks
		total_1 *= (0.15);

		//calculating percentage final exam
		double final = (ui->spinBox_10->value())*(0.5);

		//calculating percentage final exam
		double project = (ui->spinBox_11->value())*(0.35);

		double grade;
		grade = total_1 + project + final;
		ui->label_14->setNum(grade);
	}
}

//changing the labels depending on what class is specified
void Widget::on_comboBox_activated(const QString &arg1)
{
	if (arg1 == "Pic10C: Advanced Programming") {
		ui->label_10->setText("Final Exam");
		ui->label_11->setText("Final Project");
	}

	else if (arg1 == "Pic10B: Intermediate Programming") {
		ui->label_10->setText("Midterm 2");
		ui->label_11->setText("Final Exam");
	}
}
