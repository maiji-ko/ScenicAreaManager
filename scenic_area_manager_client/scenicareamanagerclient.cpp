#include "scenicareamanagerclient.h"
#include "./ui_scenicareamanagerclient.h"

ScenicAreaManagerClient::ScenicAreaManagerClient(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ScenicAreaManagerClient)
{
    ui->setupUi(this);
}

ScenicAreaManagerClient::~ScenicAreaManagerClient()
{
    delete ui;
}
