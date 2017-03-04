#ifndef AUDIOCONSTANTS
#define AUDIOCONSTANTS

#define SPD_SAMPLE_RATE  8000
#define SPD_FREQ_CONST   ((2.0 * M_PI) / 8000.0)
#define SPD_SAMPLE_SIZE  8
#define SPD_CODEC        "audio/pcm"
#define SPD_MAX_VAL      126
#define SPD_MAX_SPECTRUM 800

#include <QObject>

typedef struct note_t {
    qreal freq;
    QString name;
}note_t;

const note_t A3 = {220.00, "A3"};
const note_t B3 = {246.94, "B3"};
const note_t C4 = {261.63, "C4"};
const note_t D4 = {293.66, "D4"};
const note_t E4 = {329.63, "E4"};
const note_t F4 = {349.23, "F4"};
const note_t G4 = {392.00, "G4"};
const note_t A4 = {440.00, "A4"};
const note_t B4 = {493.88, "B4"};
const note_t C5 = {523.25, "C5"};
const note_t D5 = {587.33, "D5"};
const note_t E5 = {659.25, "E5"};
const note_t F5 = {698.46, "F5"};

const note_t C_MAJOR[] = {
    C4,D4,E4,F4,G4,A4,B4,C5
};

#endif // AUDIOCONSTANTS

