# Supported Memory Configurations

* Microm
```
export DDR_CON=micron
```
* Samsung
```
export DDR_CON=samsung
```

# Build Command
```
make SOC=MX8QX B=clsom R=B0 D=1 M=1 DL=5 V=0 qx DDR_CON=${DDR_CON}
```
