# Inherit some common CM stuff.
$(call inherit-product, vendor/ownrom/config/common_full_phone.mk)

$(call inherit-product, device/samsung/j5ltexx/full_j5ltexx.mk)

PRODUCT_BUILD_PROP_OVERRIDES += PRODUCT_NAME=j5ltexx TARGET_DEVICE=j5lte

PRODUCT_NAME := ownrom_j5ltexx
