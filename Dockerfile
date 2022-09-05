FROM debian:bullseye-20220125

RUN apt update \
    && apt install git sudo python3-venv python3-pip gcc-arm-none-eabi gcc-avr avrdude dfu-programmer dfu-util -y \
    && echo "developer ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

RUN useradd -m developer

USER developer

RUN python3 -m pip install --user qmk \
    && echo 'PATH="$PATH:$HOME/.local/bin"' >> $HOME/.bashrc

WORKDIR /home/developer
# WORKDIR /root

# ADD . /root/qmk
COPY --chown=developer:developer . /home/developer/qmk

