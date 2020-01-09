#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

 /*   connect(&serial,
            SIGNAL(readyRead()),
            this,
            SLOT(dadosRecebidos()));

    for(auto& item : QSerialPortInfo::availablePorts())
        ui->cBox_serial->addItem(item.portName());

    for(auto& item : QSerialPortInfo::standardBaudRates())
        ui->cBox_velocidade->addItem(QString::number(item) );
*/
}

MainWindow::~MainWindow()
{

    delete ui;
}



void MainWindow::on_btn_conectar_clicked()
{
    QString cor="blue";
    QString status="Conectado";
  /*  serial.setPortName(ui->cBox_serial->currentText());
    serial.setBaudRate(ui->cBox_velocidade->currentText().toInt());

    if(serial.open(QIODevice::ReadWrite)){
        ui->lbl_status->setText(status);
        ui->lbl_status->setStyleSheet("color: "+cor);
    }
    else
        qDebug()<<"sem sinal";*/
}

void MainWindow::on_btn_desconectar_clicked()
{
    QString cor_2="red";
    QString status="Desconectado";
 /*   serial.close();
    ui->lbl_status->setText(status);
    ui->lbl_status->setStyleSheet("color: "+cor_2);*/
}

/*void MainWindow::dadosRecebidos()
{
    auto data = serial.readAll();
    auto dados = QJsonDocument::fromJson(data).object().toVariantMap();

    //qDebug() << data;
    if(dados.contains("LED")){
        //qDebug() << "Entrei";
        if(dados["LED"] == 1){
            ui->lbl_lcd->setText("PERIGO! NÍVEL ALARMANTE!");
            ui->label->setEnabled(1);
        }
        else{
            ui->lbl_lcd->setText("Em funcionamento...");
            ui->label->setEnabled(0);
        }
    }

    if(dados.contains("SENSOR")){
        ui->lbl_concentracao->setText(dados["SENSOR"].toString());
    }
}*/

void MainWindow::on_btn_desligasist_clicked()
{
  //  serial.write("{\"T_OFF\": 0}\n");
 //   ui->lbl_lcd->setText("Em funcionamento...");
    ui->label->setEnabled(0);
}


