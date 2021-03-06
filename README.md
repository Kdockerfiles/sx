**[Dockerized SX](https://hub.docker.com/r/kdockerfiles/sx/)**

**Head note:** This image is meant for easy automation, therefore it might not give you the same advanced configuration options as the [original Skylable one](https://hub.docker.com/r/skylable/sx/).

# Usage

```sh
$ docker run kdockerfiles/sx:2.3-4
```

## Available environment variables

```sh
$ docker run kdockerfiles/sx:2.3-4 -e SX_CLUSTER_NAME=my_sx_cluster
```

Sets the name of the cluster (default: `sx`).

```sh
$ docker run kdockerfiles/sx:2.3-4 -e SX_MAX_SIZE=1T
```

Maximum size of the single node storage (default: 101G).

*Note:* If you plan to also use [libres3](https://github.com/kdockerfiles/libres3), this should be set to a slightly larger value than a single `libres3` replica size.

```sh
$ docker run kdockerfiles/sx:2.3-4 -e SX_USER=user -e SX_TOKEN=Et6pb+wgWTVmq3VpLJlJWWgzrcnNHTu47WlXOrwTuQv+XDmal2jzMAAA
```

Adds additional admin user with predefined (aka. *forced*) access token (default: noop).

## Available ports

`80`: HTTP endpoint.

`443`: HTTPS endpoint.

*Note:* SX will only listen on one of these, depending on whether it's in secure or insecure mode.

## Available volumes

`/usr/local/etc/sxserver`: Exposes current SX configuration.

Main use case is to mount this into [libres3](https://github.com/kdockerfiles/libres3) container, but it can also be used to provide predefined SX configuration.

## Available scripts

```sh
$ docker exec sx_container create_user user Et6pb+wgWTVmq3VpLJlJWWgzrcnNHTu47WlXOrwTuQv+XDmal2jzMAAA
```

Creates new admin user with predefined access token (it is the same as when `SX_USER` and `SX_TOKEN` are specified at container creation).

*Note:* This contains SSL keys, among other things, so be a little careful when mounting to the outside world.

**Foot note:** This repository also contains an (unmodified) checkout of the SX source code. It was extracted as-is, then `make clean`-ed, from the official Docker SX image. This is because the original sources location is not available anymore and the Github mirror is two versions behind.
