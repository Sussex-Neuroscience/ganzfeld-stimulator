# ganzfeld-stimulator

## Overview
We built a 'full-field' LED stimulator as a visual stimulus generator for in vivo rodent physiolgoy experiments. The stimulator can generate arbitrary temporal patterns of green and UV light (chromatic channels the mouse visual system is sensitive to) such as high frequency flicker of sinusoidal dimming. Stimulation patterns are generated using PWM signals from a microcontroller.


## Parts 

| Item | Link | Quantity | Cost | Datasheet |
|------|------|----------|------|-----------|
| **LEDS**| | | |
| UV LED   |[C3535U- UNL1-A1G11H-380 TSLC, UV LED, 390nm 480mW 125 °, 2-Pin Surface Mount package](https://uk.rs-online.com/web/p/uv-leds/9033769) | (6 x 6 array) = 36 + any spares | £6.88 each |
| Green LED | [ams OSRAM3 V Green LED PLCC 2 SMD, TOPLED LT T673-Q1R2-25](https://uk.rs-online.com/web/p/leds/6648197) | (6 x 6 array) = 36 + any spares | £0.196 each|
| LED mounting PCB |  [Custom PCB board for mounting LEDs](repo link) | 6 (Each board is populated with 6 of green and 6 UV) | ?? | 
| Soldering stencil | [Custom stencil](repo link) | 1 | ?? |
|**PSU and Drivers**|||
| LED Driver | [Recom LED Driver, 2 → 35V dc Output, 350mA Output, Constant Current Dimmable](https://uk.rs-online.com/web/p/led-drivers/0416913) | ?? | £12.16 each | [detailed](https://g.recomcdn.com/media/Datasheet/pdf/.fYUQjOlW/.t2a80a771bdbb0ef300f7/Datasheet-93/RCD-24.pdf) |
| PSU | [12V dc Output, 5A Output](https://uk.rs-online.com/web/p/ac-dc-adapters/8808408?gb=s) | ?? | £21.38 each |
|**Box Construction**| | |
| Structure | [MakerBeam starter kit](https://www.technobotsonline.com/makerbeamxl-regular-starter-kit-in-black-anodised-threaded.html) | 1 | £102.95 (possible to buy specific parts separately) |
| Structure | [MakerBeam Construction Cubes](https://www.technobotsonline.com/makerbeam-xl-black-corner-cubes-pack-of-12.html) | 1x box of 12 (need 8) |  £18.00 for 12 |
| Reflective Walls + floor | [RS PRO Aluminium Metal Sheet 300mm x 500mm, 2mm Thick](https://uk.rs-online.com/web/p/metal-sheets/0434059) | 1*(200x200mm), 4*(50x200mm) | £49.07 for 5 300x500mm sheets |
|**Diffuser** | | |
| Tracing paper | e.g. [amazon](https://www.amazon.co.uk/GLADFRESIT-Translucent-Architecture-Scrapbooking-Printing/dp/B0C3VX6JPX/ref=asc_df_B0C3VX6JPX/?tag=googshopuk-21&linkCode=df0&hvadid=662823090693&hvpos=&hvnetw=g&hvrand=10142952570193465802&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=1006565&hvtargid=pla-2196737734548&psc=1&mcid=5f2980b322dd33169770b0c6ecff1379) | 2 sheets + spares | £5.99 |
| Diffusion holder | [Custom 3D printed part](repo link) | ?? | ?? |

## Construction

### Building the stimulator structure
We opted to make a 200x200mm box with a ~50mm depth for achieving a uniform intensity of light. The box can easily be scaled larger and smaller to suit your purposes accordingly.

1) Join 4 x 200mm beams to form a square, using the construction cubes in the corners. You need to make 2 of these for the top and bottom of the box.
2) Cut a ~200x200mm piece of aluminium to slot into the centre of one of the square. You'll need to slightly adjust the size so it fits into the grooves of the beams. This will provide the base for the LED PCBs. (drill a hole of diameter xx for wires)
3) Add 4 x 50mm beams upright to the 4 corners of one of the squares.
4) Screw in the other 200x200mm square to these upright beams to form the top of the box.
5) Cut 4 more pieces of aluminium to form the 4 walls of the box. You want them to be flush with the top of the box to maximise reflectivity of the light inside the box.

### Populating the LEDs on the PCB boards
Use the soldering stencil to populate each of the PCB boards with 6 x green and 6 x UV LEDs. The LEDs are arranged in alternating rows of 3 green/UV.


