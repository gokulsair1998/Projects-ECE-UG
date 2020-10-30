Methodology:
Feeling of a human changes the according to their activities .We know the feelings of a person impacts 
directly or indirectly onto his/her heart beat.This changes the pulse beat per minute directly or indirectly 
depending upon his/her feelings.

So we will be detecting the heartbeat of a person using the heart rate sensor and depending 
on his/her heartbeat his/her feeling will be decided.

Based on the feelings of the person we will chart the appropriate songs playlist and this playlist will 
be played automatically depending upon his/her mood which will be detected.

The audio songs being played are analog in nature and so for a microcontroller it is difficult to understand and process the analog signal,
so we employed sampling of the analog signal at nyquist rate i.e..(fc=2fm) to get 8 bit digital output .This sampled output is then applied to 
built-in DAC of the arduino and processed further by running our programed device.

NOTE:Tmrpcm library should be added from the arduino ide.
     the music files should be converted to 8 bit sampled wav file and stored in SD card
     https://youtu.be/uSUZbLlRi1g refer the link for beter undestanding of tmrpcm library