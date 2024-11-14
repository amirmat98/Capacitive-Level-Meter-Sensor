import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.3

Item{
    id:main
    property real percent: 80 //Percentage value
         property color borderColor:"#d2691e"//Border color
         property color backgroundColor: "#00ffff" // background color
         property color foregroundColor: "#ff69b4" //Foreground color
    property bool animation: true
    onPercentChanged: {
        canvas.requestPaint()
    }

    Rectangle{
        id:control
        width: Math.min(parent.width,parent.height)
        height: Math.min(parent.width,parent.height)
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        Canvas{
            id:canvas
            anchors.fill: parent
                         property real p: main.percent/100 //percent
                         property real r: parent.width/2 //radius
                         property real d: 2*r //diameter
                         property real j: 0 //Animation displacement


            onPaint: {
                var ctx = getContext("2d")
                ctx.lineWidth = 2
                ctx.save()
                ctx.translate(parent.width/2,parent.height/2)
                                 var y = r-p*d //Ripple height Y
                ctx.beginPath()
                ctx.arc(0,0,r,0,2*Math.PI)
                ctx.fillStyle = main.backgroundColor
                ctx.fill()
                ctx.strokeStyle = main.borderColor
                ctx.stroke()
                ctx.clip()
                ctx.beginPath()
                ctx.moveTo(-r,y)
                for(var i=0;i<r*2;i++){
                    ctx.lineTo(-r+i,y+18*Math.sin((i+j)*Math.PI/180+20*p*Math.PI))
                }
                ctx.lineTo(r,r)
                ctx.lineTo(-r,r)
                ctx.closePath()
                ctx.fillStyle = main.foregroundColor
                ctx.fill()
                ctx.stroke()
                ctx.restore()
            }
        }

        Text {
            id: text_value
            color: "#f0fb37"
            text: main.percent+'%'
            font.bold: true
            anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pointSize: 30
        }
    }
    Timer{
        repeat: true
        interval: 10
        running: main.animation
        onTriggered: {
            canvas.j = canvas.j+5
            canvas.requestPaint()
        }
    }

}

