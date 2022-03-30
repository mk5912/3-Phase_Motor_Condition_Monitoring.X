SamacSys ECAD Model
14615286/774938/2.49/3/4/Connector

DESIGNSPARK_INTERMEDIATE_ASCII

(asciiHeader
	(fileUnits MM)
)
(library Library_1
	(padStyleDef "c225_h150"
		(holeDiam 1.5)
		(padShape (layerNumRef 1) (padShapeType Ellipse)  (shapeWidth 2.250) (shapeHeight 2.250))
		(padShape (layerNumRef 16) (padShapeType Ellipse)  (shapeWidth 2.250) (shapeHeight 2.250))
	)
	(padStyleDef "c435_h290"
		(holeDiam 2.9)
		(padShape (layerNumRef 1) (padShapeType Ellipse)  (shapeWidth 4.350) (shapeHeight 4.350))
		(padShape (layerNumRef 16) (padShapeType Ellipse)  (shapeWidth 4.350) (shapeHeight 4.350))
	)
	(textStyleDef "Default"
		(font
			(fontType Stroke)
			(fontFace "Helvetica")
			(fontHeight 50 mils)
			(strokeWidth 5 mils)
		)
	)
	(patternDef "3817564" (originalName "3817564")
		(multiLayer
			(pad (padNum 1) (padStyleRef c225_h150) (pt 0.000, 0.000) (rotation 90))
			(pad (padNum 2) (padStyleRef c225_h150) (pt 7.900, 0.000) (rotation 90))
			(pad (padNum 3) (padStyleRef c435_h290) (pt 3.950, -10.250) (rotation 90))
		)
		(layerContents (layerNumRef 18)
			(attr "RefDes" "RefDes" (pt 3.950, -6.000) (textStyleRef "Default") (isVisible True))
		)
		(layerContents (layerNumRef 28)
			(line (pt -4.35 4.25) (pt 12.25 4.25) (width 0.1))
		)
		(layerContents (layerNumRef 28)
			(line (pt 12.25 4.25) (pt 12.25 -16.25) (width 0.1))
		)
		(layerContents (layerNumRef 28)
			(line (pt 12.25 -16.25) (pt -4.35 -16.25) (width 0.1))
		)
		(layerContents (layerNumRef 28)
			(line (pt -4.35 -16.25) (pt -4.35 4.25) (width 0.1))
		)
		(layerContents (layerNumRef 18)
			(line (pt -4.35 4.25) (pt 12.25 4.25) (width 0.2))
		)
		(layerContents (layerNumRef 18)
			(line (pt 12.25 4.25) (pt 12.25 -16.25) (width 0.2))
		)
		(layerContents (layerNumRef 18)
			(line (pt 12.25 -16.25) (pt -4.35 -16.25) (width 0.2))
		)
		(layerContents (layerNumRef 18)
			(line (pt -4.35 -16.25) (pt -4.35 4.25) (width 0.2))
		)
		(layerContents (layerNumRef 30)
			(line (pt -5.35 5.25) (pt 13.25 5.25) (width 0.1))
		)
		(layerContents (layerNumRef 30)
			(line (pt 13.25 5.25) (pt 13.25 -17.25) (width 0.1))
		)
		(layerContents (layerNumRef 30)
			(line (pt 13.25 -17.25) (pt -5.35 -17.25) (width 0.1))
		)
		(layerContents (layerNumRef 30)
			(line (pt -5.35 -17.25) (pt -5.35 5.25) (width 0.1))
		)
	)
	(symbolDef "3817564" (originalName "3817564")

		(pin (pinNum 1) (pt 900 mils 0 mils) (rotation 180) (pinLength 200 mils) (pinDisplay (dispPinName true)) (pinName (text (pt 670 mils -25 mils) (rotation 0]) (justify "Right") (textStyleRef "Default"))
		))
		(pin (pinNum 2) (pt 900 mils -100 mils) (rotation 180) (pinLength 200 mils) (pinDisplay (dispPinName true)) (pinName (text (pt 670 mils -125 mils) (rotation 0]) (justify "Right") (textStyleRef "Default"))
		))
		(pin (pinNum 3) (pt 0 mils 0 mils) (rotation 0) (pinLength 200 mils) (pinDisplay (dispPinName true)) (pinName (text (pt 230 mils -25 mils) (rotation 0]) (justify "Left") (textStyleRef "Default"))
		))
		(line (pt 200 mils 100 mils) (pt 700 mils 100 mils) (width 6 mils))
		(line (pt 700 mils 100 mils) (pt 700 mils -200 mils) (width 6 mils))
		(line (pt 700 mils -200 mils) (pt 200 mils -200 mils) (width 6 mils))
		(line (pt 200 mils -200 mils) (pt 200 mils 100 mils) (width 6 mils))
		(attr "RefDes" "RefDes" (pt 750 mils 300 mils) (justify Left) (isVisible True) (textStyleRef "Default"))

	)
	(compDef "3817564" (originalName "3817564") (compHeader (numPins 3) (numParts 1) (refDesPrefix J)
		)
		(compPin "1" (pinName "1") (partNum 1) (symPinNum 1) (gateEq 0) (pinEq 0) (pinType Bidirectional))
		(compPin "2" (pinName "2") (partNum 1) (symPinNum 2) (gateEq 0) (pinEq 0) (pinType Bidirectional))
		(compPin "MH1" (pinName "MH1") (partNum 1) (symPinNum 3) (gateEq 0) (pinEq 0) (pinType Bidirectional))
		(attachedSymbol (partNum 1) (altType Normal) (symbolName "3817564"))
		(attachedPattern (patternNum 1) (patternName "3817564")
			(numPads 3)
			(padPinMap
				(padNum 1) (compPinRef "1")
				(padNum 2) (compPinRef "2")
				(padNum 3) (compPinRef "MH1")
			)
		)
		(attr "Manufacturer_Name" "RS Components")
		(attr "Manufacturer_Part_Number" "3817564")
		(attr "Mouser Part Number" "")
		(attr "Mouser Price/Stock" "")
		(attr "Arrow Part Number" "")
		(attr "Arrow Price/Stock" "")
		(attr "Description" "Miniature PCB Socket Connector PCB Mounting Socket For Type K Thermocouple")
		(attr "Datasheet Link" "https://docs.rs-online.com/edff/0900766b815bb578.pdf")
		(attr "Height" "8 mm")
	)

)
