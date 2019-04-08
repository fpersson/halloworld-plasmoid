import QtQuick 2.5
import QtQuick.Layouts 1.3
import QtQuick.Controls 1.3
import QtQuick.Dialogs 1.3
import QtQuick.Controls.Styles 1.3
import Helloworld 1.0

Rectangle {
    id: page
    width: 320; height: 480
    color: "lightgray"

    Helloworld {
        id: helloworld
    }

    Text {
        id: helloText
        text: helloworld.getMessage
        y: 30
        anchors.horizontalCenter: page.horizontalCenter
        font.pointSize: 24; font.bold: true
    }
}
