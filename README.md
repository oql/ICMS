# ICMS
Integrated camera module system

## __SERVER REQUIREMENT
### _NFS SERVER
module client mount server's nfs directory and put image that caught by webcam

### _Make Directory per Module
server makes nfs directory per module

### _WEB SERVER
via node.js, service image and video by module client with login.

### _Computing Image
compare image with previous one (by magicwand library) and create new image that show changed part

## __MODULE REQUIREMENT
### _Raspberry pi or AVR or ARM cortex-m
prototype with raspberry pi and make price lower by using AVR or ARM cortex-m

### _Mount Webcam
module mount webcam and caught picture or video

### _Mode Select
1. video
2. picture


