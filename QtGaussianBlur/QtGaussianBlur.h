#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtGaussianBlur.h"

class QtGaussianBlur : public QWidget
{
    Q_OBJECT

public:
    QtGaussianBlur(QWidget *parent = Q_NULLPTR);
	~QtGaussianBlur();

protected:
	void loadImage(const QString& path);

protected:
	void paintEvent(QPaintEvent *);
	void mouseDoubleClickEvent(QMouseEvent *);

private:
    Ui::QtGaussianBlurClass ui;
};
