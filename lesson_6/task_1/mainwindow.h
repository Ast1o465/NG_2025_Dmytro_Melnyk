#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_b_0_clicked();

    void on_b_plus_clicked();

    void on_b_equal_clicked();

    void on_b_1_clicked();

    void on_b_clear_clicked();

private:
    Ui::MainWindow *ui;
    double evaluateExpression(const QString& expression);
};
#endif // MAINWINDOW_H
