#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>

namespace Ui {
class Widget;
}

class Widget : public QMainWindow
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_SchemaA_clicked();

    void on_SchemaB_clicked();

    void on_comboBox_activated(const QString &arg1);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
