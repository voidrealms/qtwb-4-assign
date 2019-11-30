#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->deHire->setDateTime(QDateTime::currentDateTime());

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    QString msg;
    msg.append("Employee info\r\n");
    msg.append("Name:" + ui->txtName->text() + "\r\n");
    msg.append("Title:" + ui->txtTitle->text() + "\r\n");
    msg.append("Hire:" + ui->deHire->dateTime().toString(Qt::DateFormat::LocalDate) + "\r\n");

    QMessageBox::information(this,"Info", msg);
    accept();

}
