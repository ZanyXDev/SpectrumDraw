#ifndef SPECTROGRAM_H
#define SPECTROGRAM_H

#include <QWidget>
#include <QPainter>
#include <QVector>
#include <QtMath>
#include <QPaintEvent>
#include "audioconstants.h"

#include <QDebug>

#define WIN_A0          0.42
#define WIN_A1          0.50
#define WIN_A2          0.08
#define WIN_C1          (2.0 * M_PI)
#define WIN_C2          (4.0 * M_PI)
#define CAPF(X)         ((X<1.0)?X:1.0)

class Spectrogram : public QWidget
{
    Q_OBJECT
public:
    explicit Spectrogram(QWidget* parent = 0);
    ~Spectrogram();

    void drawGram(const QByteArray* buf, quint16 bpm, qreal highest_note);

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event);

private:
    QVector<qreal>* dft(const QByteArray* buf, int start, int spectrum_size, qreal max_freq);
    void getColor(QColor* c, qreal val);
    void cleanGram();


    QBrush brush;
    QPainter painter;
    QVector<QVector<qreal>*> gram;
};

#endif // SPECTROGRAM_H
