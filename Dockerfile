FROM debian:bullseye-20220125

RUN apt update \
    && apt install git sudo python3-venv python3-pip gcc-arm-none-eabi gcc-avr avrdude dfu-programmer dfu-util -y \
    && echo "developer ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

# RUN useradd -m developer

# USER developer

RUN python3 -m pip install --user qmk \
    && echo 'PATH="$PATH:$HOME/.local/bin"' >> $HOME/.bashrc

RUN mkdir -p /home/developer/qmk

WORKDIR /home/developer/qmk

