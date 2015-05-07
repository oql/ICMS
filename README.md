# ICMS
Integrated camera module system

## server spec
### nfs server
module client mount server's nfs directory and put image that caught by webcam

### make directory per module
server makes nfs directory per module

### web server
via node.js, service image and video by module client with login.

### compute image
compare image with previous one (by magicwand library) and create new image that show changed part

## module spec
### raspberry pi or AVR or ARM cortex-m
prototype with raspberry pi and make price lower by using AVR or ARM cortex-m
### mount webcam
module mount webcam and caught picture or video
### mode select
1. video
2. picture


