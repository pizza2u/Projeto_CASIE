#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QSerialPort serial;

    QString Luminosidade;
    QString Umidade_Solo;
 //   QString Temperatura_ar;
  //  QString Umidade_ar;


public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool status_valvula;

private slots:
    void dadosRecebidos();
    void on_btnPlug_clicked();
    void on_btnModo_Activated(const QString &arg1);

//    void on_cBox_serial_activated(const QString &arg1);

    void on_btnLigaDesliga_clicked();
    
    void on_combo_Sistema_activated(const QString &arg1);
    
private:
    Ui::MainWindow *ui;
    bool plugStatus = false;
    QString text[2] = {

        "No modo automático, o CASIE utiliza sensores de umidade de solo, de luminosidade, de temperatura do ar e de umidade do ar",
        "No manual, o acionamento é opcional do usuário"
    };

};
#endif // MAINWINDOW_H
