# Astrolate-Starling
 Hall effect based keyboard 96 keys with knob and OLED display

Disclaimer: Do Not try to repeat it, it will be cost you more than ready one, you will lose more time than you expected. Therefore it has no sense. But for those who are interested:
![photo_1_2024-04-17_22-33-16](https://github.com/Astr0late/Astrolate-Starling/assets/92204862/55485710-be8a-4c21-8687-7e106b0f98b6)

## Useful links
[Summary components table:](https://docs.google.com/spreadsheets/d/1auTscNj8H9j_fcgZ-bffcughIZliOqQW7MaIze0y600/edit?usp=sharing)

[Schematic and PCB design:](https://oshwlab.com/online_admin/hall_keyboard)

[USB Descriptor and Request Parser:](https://eleccelerator.com/usbdescreqparser)


It all started, when i realized that magnetic switches is killer-feature. When i planned to start this project, there are was no DrunkDeerA75 or cheap magnetic switches.
And even more, i wanted 96 keys layout with knob, oled screen and function that i can control display brightness.
Than all started... 

## PCB design
I developed pcb design that i can do myself

![photo_2024-04-18_10-11-13](https://github.com/Astr0late/Astrolate-Starling/assets/92204862/58e3bbd2-e314-4cb8-a02a-4e589fb0e774)

![photo_23_2024-04-17_22-33-16](https://github.com/Astr0late/Astrolate-Starling/assets/92204862/920af4eb-b748-4c22-9407-e7c1430d48fd)

I will not talk about the process of making a PCB at home, since there is a lot of this information on the Internet, and besides, it is more profitable and easier to order it in China.
In scheme, you see black pill, i didn`t bother with desoldering the same elements on the board.
One important moment, you must desolder S4 diode(if your version of Black pill has it) and replace it with more powerful one or 0 resistor like me :)

![photo_2024-04-18_08-51-29](https://github.com/Astr0late/Astrolate-Starling/assets/92204862/2273e9d6-99e5-4888-9a79-494f306910da)

There are many ways how to improve this design from different power lines for leds and sensors, to endless...

## Assemblying
![photo_25_2024-04-17_22-33-16](https://github.com/Astr0late/Astrolate-Starling/assets/92204862/e05a078f-d728-4ad6-bee8-6d2a50be36a0)
![photo_18_2024-04-17_22-33-16](https://github.com/Astr0late/Astrolate-Starling/assets/92204862/51baf2d7-e2b4-4aa7-acab-d210dd680068)
![photo_8_2024-04-17_22-33-16](https://github.com/Astr0late/Astrolate-Starling/assets/92204862/f327015a-5969-4d19-a3e7-25984236764d)

## Switches
That was tricky. At that moment i can't find a cheap switches. Best one is 10 pc for 6.5$. I decided to try to 3D print them.
![photo_11_2024-04-17_22-33-16](https://github.com/Astr0late/Astrolate-Starling/assets/92204862/fd51321b-54a9-444b-8ccd-b3da8f834313)
![photo_2024-04-18_09-12-02](https://github.com/Astr0late/Astrolate-Starling/assets/92204862/7b0b5354-0c49-4de6-ab83-e4e7c99901ba)
Of course it's failed. To small parts for 0.4mm nozzle and it takes too much time for 1switch. But fortunately, after a while i finally found good switches for good price.

## Code
I didn't complete all features which i want. Maybe in near future i will done rapid trigger, add some color effects and correct memory handling.

Sound test and others in vid. directory


