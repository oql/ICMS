#!/bin/bash

# nd : nfs-directory
# need fswebcam to execute this file

ND= #blabla
DATE=$(date +"%Y-%m-%d_%H%M")
RESOL= #blabla ex) 1280x720

fswebcam -r $RESOL --no-banner $ND/$DATE.jpg

# At crontab */30 * * * * <path of this shell script>
