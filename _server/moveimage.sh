#!/bin/bash

# nd : nfs-directory
# sd : save-directory(to save images in)

ND= #blabla
SD= #blabla

cp -vr $ND $SD

# At crontab */10 * * * * <path of this shell script>
