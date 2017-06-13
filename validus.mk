# Inherit some common stuff.
$(call inherit-product, vendor/validus/config/common_full_phone.mk)
$(call inherit-product, vendor/validus/config/caf_fw.mk)

$(call inherit-product, device/samsung/j5ltexx/full_j5ltexx.mk)

PRODUCT_BUILD_PROP_OVERRIDES += PRODUCT_NAME=j5ltexx TARGET_DEVICE=j5lte

PRODUCT_NAME := validus_j5ltexx

# Device Maintainers
PRODUCT_BUILD_PROP_OVERRIDES += \
    DEVICE_MAINTAINERS="tioguda"
