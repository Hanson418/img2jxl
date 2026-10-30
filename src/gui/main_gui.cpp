#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    /* QSettings is a silent no-op without an organisation name, which would
     * make the language/theme choice forget itself across launches. */
    app.setOrganizationName("Hanson418");
    app.setApplicationName("img2jxl");
    MainWindow win;
    win.show();
    return app.exec();
}
