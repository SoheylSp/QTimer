import QtQuick 2.14
import QtQuick.Controls 2.14
import com.custom 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Property Sender")

    CustomClass {
        id: customObject
    }

    Text {
        text: customObject.property
        anchors.centerIn: parent
    }

    Timer {
        interval: 5000
        running: true
        repeat: true

    }
}
