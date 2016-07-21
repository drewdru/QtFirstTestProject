#ifndef PROGRAMSETTINGS_H
#define PROGRAMSETTINGS_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class AudioSettings
{
public:
    int MusicAudio;
    int VoiceAudio;
    int EffectAudio;
    friend ostream& operator<<(ostream &stream, AudioSettings obj);//потоковый вывод экземпляра
    friend istream& operator>>(istream &stream, AudioSettings &obj);//потоковый ввод экземпляра
};

class ProgramSettings
{
public:
    AudioSettings Audio;

    friend ostream &operator<<(ostream &stream, ProgramSettings obj);//потоковый вывод экземпляра
    friend istream &operator>>(istream &stream, ProgramSettings &obj);//потоковый ввод экземпляра
    void SetAudio(AudioSettings AS);
    void SetFromSaveFile();
    void setDefaultSettings();
};

#endif // PROGRAMSETTINGS_H
