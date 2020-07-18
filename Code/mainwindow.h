#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QMap>
#include <QTextEdit>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    QTextEdit* getCurrentTextEdit();
    ~MainWindow();

private slots:
    void on_actionNew_triggered();
    void tabSelected();

    void on_actionOpen_triggered();

   //void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
    
    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionCopy_triggered();

    void on_actionCut_triggered();

    void on_actionPaste_triggered();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    QString currentFile = "";
    int noOfTabs = 0;
    QMap<QString, int> pos;
};

#endif // MAINWINDOW_H