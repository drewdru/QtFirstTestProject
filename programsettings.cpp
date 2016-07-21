#include "programsettings.h"
#include <QCoreApplication>

#include <QtCore/QCoreApplication>
#include <QDataStream>
#include <QByteArray>
#include <QFile>

extern ProgramSettings   programsettings;

ostream &operator<<(ostream &stream, AudioSettings obj)
{
    stream<<obj.MusicAudio<<" "<<obj.VoiceAudio<<" "<<obj.EffectAudio;
    return stream;
}

istream  &operator>>(istream &stream, AudioSettings &obj)
{
    stream>>obj.MusicAudio;
    stream>>obj.VoiceAudio;
    stream>>obj.EffectAudio;
    return stream;
}

// /////////////////////////////////////////
ostream  &operator<<(ostream &stream, ProgramSettings obj)
{
    stream<<obj.Audio;
    return stream;
}
istream &operator>>(istream &stream, ProgramSettings &obj)
{
    stream>>obj.Audio;
    return stream;
}
// ////////////////////////////////////////

void ProgramSettings::SetAudio(AudioSettings AS)
{
    this->Audio.EffectAudio = AS.EffectAudio;
    this->Audio.MusicAudio = AS.MusicAudio;
    this->Audio.VoiceAudio = AS.VoiceAudio;
}

void ProgramSettings::setDefaultSettings()
{
    this->Audio.EffectAudio = 50;
    this->Audio.MusicAudio = 50;
    this->Audio.VoiceAudio = 50;
}

void ProgramSettings::SetFromSaveFile()
{
    char* fname = (char*)"./Save/Program.config";
    try
    {
        ifstream SaveIn(fname,ios::in);
        if(SaveIn)
        {
            SaveIn.seekg(0, ios::beg);
            SaveIn>>programsettings;
            SaveIn.close();
        }
        else
        {
            programsettings.setDefaultSettings();
            ofstream SaveOut(fname,ios::out|ios::trunc);
            SaveOut<<programsettings;
            SaveOut.close();
        }
    }
    catch(...)
    {
        programsettings.setDefaultSettings();
        ofstream SaveOut(fname,ios::out|ios::trunc);
        SaveOut<<programsettings;
        SaveOut.close();
    }
}
