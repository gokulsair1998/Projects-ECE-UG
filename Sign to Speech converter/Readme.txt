Working principle:
The movement of each finger is tracked using the flex sensor, which is fixed to the hand glove or glove like material.
Each flex sensor gives the discrete PWM (pulse width modulation) signal, which corresponds to a value from 0 to 255 in 
decimal, based on the finger movement. In the database, the combination of each flex sensor is checked and appropriate 
sound message is selected from the SD card. All the sound messages are pre-recorded audio files in WAV format, stored in
the SD card. The audio messages are be further used by the microcontroller and finally, the appropriate sound message is
passed through 2 PWM output ports, which is then fed to the speaker.

NOTE: Add tmrpcm library from manage libraries in Arduino ide
     the music files should be converted to 8 bit sampled wav file and stored in SD card
     https://youtu.be/uSUZbLlRi1g.refer the link for beter undestanding of tmrpcm library

