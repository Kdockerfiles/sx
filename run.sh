#!/usr/bin/env sh

SX_CLUSTER_NAME=${SX_CLUSTER_NAME:-sx}
SX_MAX_SIZE=${SX_MAX_SIZE:-101G}

if [ ! -r "/usr/local/etc/sxserver/sxsetup.conf" ]; then
expect > /dev/null <<- DONE
    set timeout 120
    spawn sxsetup
    expect "Enter the cluster name"
    send -- "$SX_CLUSTER_NAME\r"
    expect "Path to SX storage"
    send -- "\r"
    expect "Maximum size"
    send -- "$SX_MAX_SIZE\r"
    expect "Enable SSL?"
    send -- "\r"
    expect "Enter the IP address"
    send -- "\r"
    expect "Is this (*) the first node of a new cluster?"
    send -- "\r"
    expect "Is this correct?"
    send -- "\r"
    expect eof
DONE

    sxserver restart
else
    sxserver start
fi

sleep infinity
