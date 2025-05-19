#include "scenicareamanagerserver.h"
#include "./ui_scenicareamanagerserver.h"

ScenicAreaManagerServer::ScenicAreaManagerServer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ScenicAreaManagerServer)
{
    ui->setupUi(this);
}

ScenicAreaManagerServer::~ScenicAreaManagerServer()
{
    delete ui;
}
