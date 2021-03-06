//#############################################################################
//
//  This file is part of ImagePlay.
//
//  ImagePlay is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  ImagePlay is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with ImagePlay.  If not, see <http://www.gnu.org/licenses/>.
//
//#############################################################################

#include "AboutWindow.h"
#include "ui_AboutWindow.h"

#include "MainWindow.h"

AboutWindow::AboutWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutWindow)
{
    ui->setupUi(this);

    QString version("<b>Version: </b> %1, <b>Build Date: </b> %2 %3, <b>IPL API: </b>%4, <b>OpenCV: </b>%5.%6, <b>Qt: </b>%7");

    ui->labelVersion->setText(version.arg(IMAGEPLAY_VERSION).arg(IMAGEPLAY_BUILDDATE).arg(IMAGEPLAY_BUILDTIME).arg(IPL_VERSION).arg(CV_MAJOR_VERSION).arg(CV_MINOR_VERSION).arg(QT_VERSION_STR));
}

AboutWindow::~AboutWindow()
{
    delete ui;
}
