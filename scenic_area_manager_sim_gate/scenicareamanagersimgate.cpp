#include "scenicareamanagersimgate.h"
#include "./ui_scenicareamanagersimgate.h"

ScenicAreaManagerSimGate::ScenicAreaManagerSimGate(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ScenicAreaManagerSimGate)
{
    ui->setupUi(this);
}

ScenicAreaManagerSimGate::~ScenicAreaManagerSimGate()
{
    delete ui;
}
