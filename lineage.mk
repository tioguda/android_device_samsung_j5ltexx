# Inherit some common CM stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

$(call inherit-product, device/samsung/j5ltexx/full_j5ltexx.mk)

PRODUCT_BUILD_PROP_OVERRIDES += PRODUCT_NAME=j5ltexx TARGET_DEVICE=j5lte

<<<<<<< HEAD:cm.mk
PRODUCT_NAME := lineage_j5ltexx
