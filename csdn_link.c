-18->ti+i2c+read+modify+write to register
https://github.com/yuvadm/tiva-c/blob/master/sensorlib/tmp100.c

-17->ADXL343 interrupt
https://learn.adafruit.com/adxl343-breakout-learning-guide/hw-interrupts

-16->THRESH_ACT
https://ez.analog.com/mems/f/q-a/86168/adxl375-thresh_act-thresh_inact-time_inact-register-values
https://forums.adafruit.com/viewtopic.php?f=25&t=68927

-15->msp430+issh+adc->rising edge
-https://e2e.ti.com/support/microcontrollers/msp430/f/166/t/322220
-14->text book about msp430 and ADC->
    https://books.google.ca/books?id=TaWSAwAAQBAJ&pg=PA252&lpg=PA252&dq=falling+edge+and+ADC+and+msp430&source=bl&ots=xyuR_8RD7f&sig=ACfU3U2LVrhIdF0RtT9NZFZkfLxrArMRGQ&hl=en&sa=X&ved=2ahUKEwjx6Nej-5jjAhVrQt8KHTk3BOcQ6AEwEXoECAkQAQ#v=onepage&q=falling%20edge%20and%20ADC%20and%20msp430&f=false

-13->msp430 and adc and reboot
    ->https://e2e.ti.com/support/microcontrollers/msp430/f/166/t/355858

-12->msp430 timer and PWM
       -http://www.ece.utep.edu/courses/web3376/Notes_files/ee3376-timer.ppt.pdf
       -http://www.ece.utep.edu/courses/web3376/Notes.html
       -

-11->msp430 adc inversion
    -https://coder-tronics.com/msp430-adc-tutorial/
    -https://www.youtube.com/watch?v=2EkHDtLCw2M
-10->fall edge interrupt
    ->http://referencedesigner.com/blog/msp430-interrupt-rising-and-falling-edge/2089/
-9->edge detection->https://www.youtube.com/watch?v=R3WSlk9lHss
                  ->https://www.embeddedrelated.com/showarticle/182.php

-8->pxout msp430 43 as ->https://siddharthnandhanp.wordpress.com/2015/06/07/pxdir-register/
    -P3DIR->0 means output and 1 means input
       -example 1->so P1DIR=BIT1 + BIT6; means port1pin1 and port1 pin6 is output
       -example 2 P3DIR&0x01->port3pin0 is output, other pins are input as
  https://siddharthnandhanp.wordpress.com/2015/06/07/pxin-register/
       -p1selx example
           ->https://siddharthnandhanp.wordpress.com/2015/06/15/pxsel-register/
       -
       -
       -
    -
    -
    -
    -
    -
    -

-7->msp430 watchdog timer example
-slac668h.zip
-http://www.ti.com/product/MSP430FR6989
-https://e2e.ti.com/support/microcontrollers/msp430/f/166/t/444678?MSP430FR69989-Watchdog-Example

-6->MSP430 nmi csdn
-https://blog.csdn.net/TFTJT/article/details/52880055
-https://blog.csdn.net/xdyegong/article/details/50225157

-5->uart msp 430 example
   http://www.simplyembedded.org/tutorials/msp430-uart/
-3->UART msp430 csdn
-https://blog.csdn.net/xforce94/article/details/20227127
-

-4->UART
https://www.youtube.com/watch?v=V6m2skVlsQI
https://www.youtube.com/watch?v=MebhACqcdno
-3->localtime_r issue
https://bbs.csdn.net/topics/350255556
-2->deboucing
https://reference.digilentinc.com/learn/microprocessor/tutorials/debouncing-via-software/start
https://www.youtube.com/results?search_query=software+debouncing

-1->bitwise operation
MSP-EXP430FR2311_Software_Examples_windows
http://software-dl.ti.com/msp430/msp430_public_sw/mcu/msp430/MSP-EXP430FR2311/latest/index_FDS.html

0->MSP430F5438 I2C学习笔记——AT24C02
https://blog.csdn.net/xukai871105/article/details/10286599

1->MSP430学习笔记1——msp430概述
https://blog.csdn.net/mao_hui_fei/article/details/80482465

2->MSP430单片机各种寄存器总结（5）——Timer_A0
https://blog.csdn.net/weixin_43830248/article/details/85217404

3->MSP430单片机各种寄存器总结（1）——CPU 寄存器

  https://blog.csdn.net/u011123091/article/details/52740002
4->MSP430单片机各种寄存器总结（2）——UCS
https://blog.csdn.net/weixin_43830248/article/details/85202949
    -(2.4) UCSCTL4
    -Selecting source signal of  SMCLK, ACLK and MCLK in UCSCTL4
    -Memory address Register (Mar)->(https://en.m.wikipedia.org/wiki/Memory_address_register)
-Memory address register(MAR) vs memory data register(MDR)
    -Square brackets
    –contents of the register (or the memory location) contents of the register (or the memory location)
For example, [MAR] is interpreted as “the contents of the
memory address register”
[MAR] = 3
    -https://sites.ualberta.ca/~smartynk/Resources/ECE%20212/L03_cpu_memory.pdf
    -
    -
5->MSP430单片机各种寄存器总结（3）——IO
https://blog.csdn.net/weixin_43830248/article/details/85215951
    -See youtube of "Electronics 201:Pull-up and pull-down resistor"
->PULL up resistor
    -If the switch is open, the 5V will go to the CPU->Turns ON
    -If the switch is closed, the 5V will go to the ground->Turns OFF
    -The reason is that there is the internal impedence within the pin of CPU, therefore current will choose to flow with the one 
    in least impedence (6:30) 
->Pull Down resistor (7:04)
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -PxREN register, Pull up/down resistors
https://siddharthnandhanp.wordpress.com/2015/06/07/pxren-register-pull-updown-resistors/
    -enable/disable pull up/pull down resistor
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
    -
5->
