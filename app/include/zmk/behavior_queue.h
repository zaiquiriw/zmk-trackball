/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <kernel.h>
#include <stdint.h>
#include <zmk/behavior.h>

int zmk_behavior_queue_add(uint32_t position, const struct zmk_behavior_binding behavior,
                           bool press, uint32_t wait);
