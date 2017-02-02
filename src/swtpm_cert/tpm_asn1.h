#if HAVE_CONFIG_H
# include "config.h"
#endif

#include <libtasn1.h>

const asn1_static_node tpm_asn1_tab[] = {
  { "TPM", 536875024, NULL },
  { NULL, 1073741836, NULL },
  { "tcg", 1879048204, NULL },
  { "joint-iso-itu-t", 1073741825, "2"},
  { "international-organizations", 1073741825, "23"},
  { "tcg", 1, "133"},
  { "tcg-attribute", 1879048204, NULL },
  { NULL, 1073741825, "tcg"},
  { NULL, 1, "2"},
  { "tcg-at-tpmManufacturer", 1879048204, NULL },
  { NULL, 1073741825, "tcg-attribute"},
  { NULL, 1, "1"},
  { "tcg-at-tpmModel", 1879048204, NULL },
  { NULL, 1073741825, "tcg-attribute"},
  { NULL, 1, "2"},
  { "tcg-at-tpmVersion", 1879048204, NULL },
  { NULL, 1073741825, "tcg-attribute"},
  { NULL, 1, "3"},
  { "tcg-at-platformManufacturer", 1879048204, NULL },
  { NULL, 1073741825, "tcg-attribute"},
  { NULL, 1, "4"},
  { "tcg-at-platformModel", 1879048204, NULL },
  { NULL, 1073741825, "tcg-attribute"},
  { NULL, 1, "5"},
  { "tcg-at-platformVersion", 1879048204, NULL },
  { NULL, 1073741825, "tcg-attribute"},
  { NULL, 1, "6"},
  { "TPMManufacturerInfo", 1610612741, NULL },
  { "tpmManufacturerSet", 1073741826, "TPMManufacturerSet"},
  { "tpmModelSet", 1073741826, "TPMModelSet"},
  { "tpmVersionSet", 2, "TPMVersionSet"},
  { "TPMManufacturerSet", 1610612750, NULL },
  { "tpmManufacturer", 201326594, "TPMManufacturer"},
  { "TPMManufacturer", 1610612741, NULL },
  { "id", 1073741836, NULL },
  { "manufacturer", 34, NULL },
  { "TPMModelSet", 1610612750, NULL },
  { "tpmModel", 201326594, "TPMModel"},
  { "TPMModel", 1610612741, NULL },
  { "id", 1073741836, NULL },
  { "model", 34, NULL },
  { "TPMVersionSet", 1610612750, NULL },
  { "tpmVersion", 201326594, "TPMVersion"},
  { "TPMVersion", 1610612741, NULL },
  { "id", 1073741836, NULL },
  { "version", 34, NULL },
  { "PlatformManufacturerInfo", 1610612741, NULL },
  { "platformManufacturerSet", 1073741826, "PlatformManufacturerSet"},
  { "platformModelSet", 1073741826, "PlatformModelSet"},
  { "platformVersionSet", 2, "PlatformVersionSet"},
  { "PlatformManufacturerSet", 1610612750, NULL },
  { "platformManufacturer", 201326594, "PlatformManufacturer"},
  { "PlatformManufacturer", 1610612741, NULL },
  { "id", 1073741836, NULL },
  { "manufacturer", 34, NULL },
  { "PlatformModelSet", 1610612750, NULL },
  { "platformModel", 201326594, "PlatformModel"},
  { "PlatformModel", 1610612741, NULL },
  { "id", 1073741836, NULL },
  { "model", 34, NULL },
  { "PlatformVersionSet", 1610612750, NULL },
  { "platformVersion", 201326594, "PlatformVersion"},
  { "PlatformVersion", 536870917, NULL },
  { "id", 1073741836, NULL },
  { "version", 34, NULL },
  { NULL, 0, NULL }
};
