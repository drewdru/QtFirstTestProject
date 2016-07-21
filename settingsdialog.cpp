#include "settingsdialog.h"
#include "ui_settingsdialog.h"


extern ProgramSettings   programsettings;

settingsdialog::settingsdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingsdialog)
{
    ui->setupUi(this);
    ui->EffectAudio->setValue(programsettings.Audio.EffectAudio);
    ui->MusicAudio->setValue(programsettings.Audio.MusicAudio);
    ui->VoiceAudio->setValue(programsettings.Audio.VoiceAudio);
}

settingsdialog::~settingsdialog()
{
    delete ui;
}

AudioSettings settingsdialog::GetAudio()
{
    AudioSettings Audio;
    Audio.EffectAudio = ui->EffectAudio->value();
    Audio.MusicAudio = ui->MusicAudio->value();
    Audio.VoiceAudio = ui->VoiceAudio->value();
    return Audio;
}
