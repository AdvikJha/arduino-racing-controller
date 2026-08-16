# Assembly

## Materials and Estimated Cost
 - Arduino Pro Micro ($23) or a reliable clone for around $7
 - Copper Wire ($9)
 - Potentiometer ($1)
 - 2 Pushbuttons ($2)
 - 3D Printed Components (~$4, 187g of filament)
 - Mini Protoboard PCB ($2) or Mini Breadboard ($3)

   **Total Estimated Cost: $25-$42**

## Tools required
 - 3D Printer
 - Soldering Iron
 - Hot Glue Gun

## Designing the Pedals
 1. 3D Print the Pedal, Pedal Base, and Button Cover.
 2. Attach the button cover to the push button leaving about 5mm of the button exposed.
 3. Solder one of the push button's terminals to a five foot long wire and one of the non connected terminals to a 6 inch long wire.
 4. Put the wires you just soldered through the Pedal Base's hole so that the button is on the inside.
 5. Place the pedal into the pedal base and mark the area where the top of the button cover comes into contact with the pedal.
 6. Hot glue the circular top of the button cover to the area you marked on the pedal.
 7. Apply hot glue beneath the button making a platform for the button.
 8. Repeat steps 1-7 to make your second pedal.
 9. Take the short wire from each pedal and solder them to a third wire that is 4.75 feet long.

## Designing the Steering Wheel
 1. Print the Steering Wheel and Steering Wheel Mount
 2. Hot glue the top of your potentiometer inside the hole of the steering wheel.
 3. Insert the base of your potentiometer into the mount.
 4. Solder a one foot long wire to each of the terminals of the potentiometer.
 5. Apply hot glue covering each of the terminals and ensuring the base of the potentiometer stays in place.

## Completing the Wiring
 1. Insert your Arduino Pro Micro into your breadboard/ PCB.
 2. If you are using a breadboard, solder a jumper wire onto all six of the wires individually (extend, not connect).
 3. Connect the wire from the left pin of the potentiometer to the 5V pin and the wire from the right pin to the GND pin.
 4. Connect the wiper (middle pin of the potentiometer) to the A5 pin.
 5. Connect the wire that is connected to the two shorter wires in the push buttons to GND.
 6. Connect the wire that is connected to the output pin of the push button on the left to D2.
 7. Connect your last remaining wire to D3.
 8. Connect your Arduino to your device using a USB and upload the INO file to your Arduino through the Arduino IDE app.

## Instructions for final use
 - Use the pedal on the left as the accelerator and the other as a brake.
 - If you find the steering wheel is reversed, you likely made a mistake in the wiring. You can fix this by swapping the 'a' and the 'd' on lines 29, 31, 35, and 37 of the code.
 - To change the sensitivity of the steering wheel you can increase or decrease the "OneWayRange" variable in the code file.
