#pragma once

#include <QMainWindow>
#include <QWidget>

namespace Ui {
class MainWindow;
class Setting;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
