---
title: Battery Level
sidebar_label: Battery Level
---

See the [battery level feature page](../features/battery.md) for more details on configuring a battery sensor.

See [Configuration Overview](index.md) for instructions on how to change these settings.

### Devicetree

Applies to: [`/chosen` node](https://docs.zephyrproject.org/latest/guides/dts/intro.html#aliases-and-chosen-nodes)

| Property      | Type | Description                                   |
| ------------- | ---- | --------------------------------------------- |
| `zmk,battery` | path | The node for the battery sensor driver to use |

## Battery Voltage Divider Sensor

Driver for reading the voltage of a battery using an ADC connected to a voltage divider.

### Devicetree

Applies to: `compatible = "zmk,battery-voltage-divider"`

See [Zephyr's voltage divider documentation](https://docs.zephyrproject.org/latest/build/dts/api/bindings/adc/voltage-divider.html).

## nRF VDDH Battery Sensor

Driver for reading the voltage of a battery using a Nordic nRF52's VDDH pin. This driver has no configuration except for the required `label` property.

### Devicetree

Applies to: `compatible = "zmk,battery-nrf-vddh"`

Definition file: [zmk/app/drivers/zephyr/dts/bindings/sensor/zmk,battery-nrf-vddh.yaml](https://github.com/zmkfirmware/zmk/blob/main/app/drivers/zephyr/dts/bindings/sensor/zmk%2Cbattery-nrf-vddh.yaml)

| Property | Type   | Description               |
| -------- | ------ | ------------------------- |
| `label`  | string | Unique label for the node |
