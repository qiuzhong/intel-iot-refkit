# Use the pre-generated keys for IMA signing.
IMA_EVM_KEY_DIR = "${IMA_EVM_BASE}/data/debug-keys"

# Enable local root access. Always use _append, to
# avoid getting this change overwritten by a
# REFKIT_IMAGE_EXTRA_FEATURES = "foo" in local.conf.
REFKIT_IMAGE_EXTRA_FEATURES_append = " autologin"

# Mark images as "development" by extending /etc/motd.
REFKIT_EXTRA_MOTD () {
************************************
*** This is a development image! ***
*** Do not use in production.    ***
************************************
}

# Everything ready, avoid initial sanity check.
REFKIT_IMAGE_BUILD_MODE_SELECTED = "1"

REFKIT_IMAGE_COMPUTERVISION_EXTRA_FEATURES_append = " computervision-test"
REFKIT_IMAGE_COMMON_EXTRA_FEATURES_append = " common-test"
