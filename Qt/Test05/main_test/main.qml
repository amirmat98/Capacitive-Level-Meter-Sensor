import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.3

Item {
    id: window
    visible: true
    width: 400
    height: 400
    //title: qsTr("PercentChart")

    Percent {
        id: main
        anchors.bottomMargin: 40
        anchors.fill: parent
        percent: 82
        //percent: Heightincpp.getvalue();
        animation: true
        borderColor:"#d2691e"
        backgroundColor: "#ff69b4"
        foregroundColor: "#00ffff"

    }

    /*
    Slider {
        id: slider
        stepSize: 1
        to: 100
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 0
        value: main.percent
        onValueChanged: {
            main.percent = slider.value
        }
    }
    */
}
