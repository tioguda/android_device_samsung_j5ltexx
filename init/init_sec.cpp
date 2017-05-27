#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "log.h"
#include "property_service.h"
#include "util.h"
#include "vendor_init.h"

#include "init_sec.h"

std::string bootloader;
std::string device;
char* devicename;

device_variant check_device_and_get_variant()
{
    bootloader = property_get("ro.bootloader");
    return match(bootloader);
}

void init_dsds() {
    property_set("ro.multisim.set_audio_params", "true");
    property_set("ro.multisim.simslotcount", "2");
    property_set("persist.radio.multisim.config", "dsds");
}

void init_single() {
    property_set("ro.multisim.set_audio_params", "true");
    property_set("ro.multisim.simslotcount", "1");
    property_set("persist.radio.multisim.config", "none");
}

void vendor_load_properties()
{
    device_variant variant = check_device_and_get_variant();

    switch (variant) {
        case J500FN:
            /* SM-J500FN */
            property_set("ro.build.fingerprint", "samsung/j5nltexx/j5nlte:7.1.2/MMB29M/J500FNXXU1BPK3:user/release-keys");
            property_set("ro.build.description", "j5nltexx-user 7.1.2 MMB29M J500FNXXU1BPK3 release-keys");
            property_set("ro.product.model", "SM-J500FN");
            property_set("ro.product.device", "j5nlte");
            init_single();
            break;
        case J500Y:
            /* SM-J500Y */
            property_set("ro.build.fingerprint", "samsung/j5nltexx/j5nlte:7.1.2/MMB29M/J500FNXXU1BPK3:user/release-keys");
            property_set("ro.build.description", "j5nltexx-user 7.1.2 MMB29M J500FNXXU1BPK3 release-keys");
            property_set("ro.product.model", "SM-J500Y");
            property_set("ro.product.device", "j5yltedo");
            init_single();
            break;
        case J500F:
            /* SM-J500F */
            property_set("ro.build.fingerprint", "samsung/j5nltexx/j5nlte:7.1.2/MMB29M/J500FNXXU1BPK3:user/release-keys");
            property_set("ro.build.description", "j5nltexx-user 7.1.2 MMB29M J500FNXXU1BPK3 release-keys");
            property_set("ro.product.model", "SM-J500F");
            property_set("ro.product.device", "j5lte");
            init_dsds();
            break;
        case J500G:
            /* SM-J500G */
            property_set("ro.build.fingerprint", "samsung/j5nltexx/j5nlte:7.1.2/MMB29M/J500FNXXU1BPK3:user/release-keys");
            property_set("ro.build.description", "j5nltexx-user 7.1.2 MMB29M J500FNXXU1BPK3 release-keys");
            property_set("ro.product.model", "SM-J500G");
            property_set("ro.product.device", "j5lteub");
            init_dsds();
            break;
        case J500M:
            /* SM-J500M */
            property_set("ro.build.fingerprint", "samsung/j5nltexx/j5nlte:7.1.2/MMB29M/J500FNXXU1BPK3:user/release-keys");
            property_set("ro.build.description", "j5nltexx-user 7.1.2 MMB29M J500FNXXU1BPK3 release-keys");
            property_set("ro.product.model", "SM-J500M");
            property_set("ro.product.device", "j5ltedx");
            init_dsds();
            break;
    }

    device = property_get("ro.product.device");
    INFO("Found bootloader id %s setting build properties for %s device\n", bootloader.c_str(), device.c_str());
}
