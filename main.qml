import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    width: 700
    height: 700
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        property var isEmailInserted: false
        property var isPasswordInserted: false
        id: background
        width: 500; height: 500
        color: "black"

        Rectangle {
            id: testing
            width: 100; height: 100
            anchors.centerIn: parent
            color: "red"
            MouseArea {
                id: theButton
                anchors.fill: parent
                onClicked: parent.color = "yellow"
                enabled: false
            }
        }

        TextField {
            id: emailBox
            anchors.left: parent.left; anchors.top: parent.top
            placeholderText: qsTr("email")
            onPressed: placeholderText = qsTr("")
            onTextEdited: {
                background.isEmailInserted = true;
                if (background.isPasswordInserted == true)
                    theButton.enabled = true;
            }
        }

        TextField {
            id: passwordBox
            anchors.right: parent.right; anchors.top: parent.top
            placeholderText: qsTr("password")
            onPressed: placeholderText = qsTr("")
            onTextEdited: {
                background.isPasswordInserted = true;
                if (background.isEmailInserted == true)
                    theButton.enabled = true;
            }
        }
    }
}

