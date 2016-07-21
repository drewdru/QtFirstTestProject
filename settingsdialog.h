#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include "programsettings.h"

namespace Ui {
class settingsdialog;
}

class settingsdialog : public QDialog
{
    Q_OBJECT

public:
    explicit settingsdialog(QWidget *parent = 0);
    ~settingsdialog();

    AudioSettings GetAudio();
private:
    Ui::settingsdialog *ui;
};

#endif // SETTINGSDIALOG_H
