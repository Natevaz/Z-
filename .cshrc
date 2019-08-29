#
# If we have a system wide cshrc file then source it..
# Note: On SGIs the /etc/cshrc file is sourced by default.
#
setenv SYS_CSHRC /.cshrc
if ( -f ${SYS_CSHRC} ) then
    source ${SYS_CSHRC}
endif
 
# Place your own stuff here...

