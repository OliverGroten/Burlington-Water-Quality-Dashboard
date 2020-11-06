/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/transport_sockets/tls/v3/secret.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_EXTENSIONS_TRANSPORT_SOCKETS_TLS_V3_SECRET_PROTO_UPB_H_
#define ENVOY_EXTENSIONS_TRANSPORT_SOCKETS_TLS_V3_SECRET_PROTO_UPB_H_

#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/decode.h"
#else
  #include  "upb/decode.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/encode.h"
#else
  #include  "upb/encode.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_extensions_transport_sockets_tls_v3_GenericSecret;
struct envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig;
struct envoy_extensions_transport_sockets_tls_v3_Secret;
typedef struct envoy_extensions_transport_sockets_tls_v3_GenericSecret envoy_extensions_transport_sockets_tls_v3_GenericSecret;
typedef struct envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig;
typedef struct envoy_extensions_transport_sockets_tls_v3_Secret envoy_extensions_transport_sockets_tls_v3_Secret;
extern const upb_msglayout envoy_extensions_transport_sockets_tls_v3_GenericSecret_msginit;
extern const upb_msglayout envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_msginit;
extern const upb_msglayout envoy_extensions_transport_sockets_tls_v3_Secret_msginit;
struct envoy_config_core_v3_ConfigSource;
struct envoy_config_core_v3_DataSource;
struct envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext;
struct envoy_extensions_transport_sockets_tls_v3_TlsCertificate;
struct envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys;
struct udpa_core_v1_ResourceLocator;
extern const upb_msglayout envoy_config_core_v3_ConfigSource_msginit;
extern const upb_msglayout envoy_config_core_v3_DataSource_msginit;
extern const upb_msglayout envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_msginit;
extern const upb_msglayout envoy_extensions_transport_sockets_tls_v3_TlsCertificate_msginit;
extern const upb_msglayout envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_msginit;
extern const upb_msglayout udpa_core_v1_ResourceLocator_msginit;


/* envoy.extensions.transport_sockets.tls.v3.GenericSecret */

UPB_INLINE envoy_extensions_transport_sockets_tls_v3_GenericSecret *envoy_extensions_transport_sockets_tls_v3_GenericSecret_new(upb_arena *arena) {
  return (envoy_extensions_transport_sockets_tls_v3_GenericSecret *)_upb_msg_new(&envoy_extensions_transport_sockets_tls_v3_GenericSecret_msginit, arena);
}
UPB_INLINE envoy_extensions_transport_sockets_tls_v3_GenericSecret *envoy_extensions_transport_sockets_tls_v3_GenericSecret_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_transport_sockets_tls_v3_GenericSecret *ret = envoy_extensions_transport_sockets_tls_v3_GenericSecret_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_extensions_transport_sockets_tls_v3_GenericSecret_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_extensions_transport_sockets_tls_v3_GenericSecret_serialize(const envoy_extensions_transport_sockets_tls_v3_GenericSecret *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_transport_sockets_tls_v3_GenericSecret_msginit, arena, len);
}

UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_GenericSecret_has_secret(const envoy_extensions_transport_sockets_tls_v3_GenericSecret *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_GenericSecret_secret(const envoy_extensions_transport_sockets_tls_v3_GenericSecret *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), const struct envoy_config_core_v3_DataSource*); }

UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_GenericSecret_set_secret(envoy_extensions_transport_sockets_tls_v3_GenericSecret *msg, struct envoy_config_core_v3_DataSource* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), struct envoy_config_core_v3_DataSource*) = value;
}
UPB_INLINE struct envoy_config_core_v3_DataSource* envoy_extensions_transport_sockets_tls_v3_GenericSecret_mutable_secret(envoy_extensions_transport_sockets_tls_v3_GenericSecret *msg, upb_arena *arena) {
  struct envoy_config_core_v3_DataSource* sub = (struct envoy_config_core_v3_DataSource*)envoy_extensions_transport_sockets_tls_v3_GenericSecret_secret(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_DataSource*)_upb_msg_new(&envoy_config_core_v3_DataSource_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_GenericSecret_set_secret(msg, sub);
  }
  return sub;
}

/* envoy.extensions.transport_sockets.tls.v3.SdsSecretConfig */

UPB_INLINE envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_new(upb_arena *arena) {
  return (envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *)_upb_msg_new(&envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_msginit, arena);
}
UPB_INLINE envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *ret = envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_serialize(const envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_name(const envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_has_sds_config(const envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16)); }
UPB_INLINE const struct envoy_config_core_v3_ConfigSource* envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_sds_config(const envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), const struct envoy_config_core_v3_ConfigSource*); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_has_sds_resource_locator(const envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(12, 24)); }
UPB_INLINE const struct udpa_core_v1_ResourceLocator* envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_sds_resource_locator(const envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const struct udpa_core_v1_ResourceLocator*); }

UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_set_name(envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_set_sds_config(envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *msg, struct envoy_config_core_v3_ConfigSource* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), struct envoy_config_core_v3_ConfigSource*) = value;
}
UPB_INLINE struct envoy_config_core_v3_ConfigSource* envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_mutable_sds_config(envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *msg, upb_arena *arena) {
  struct envoy_config_core_v3_ConfigSource* sub = (struct envoy_config_core_v3_ConfigSource*)envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_sds_config(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_ConfigSource*)_upb_msg_new(&envoy_config_core_v3_ConfigSource_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_set_sds_config(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_set_sds_resource_locator(envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *msg, struct udpa_core_v1_ResourceLocator* value) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), struct udpa_core_v1_ResourceLocator*) = value;
}
UPB_INLINE struct udpa_core_v1_ResourceLocator* envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_mutable_sds_resource_locator(envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig *msg, upb_arena *arena) {
  struct udpa_core_v1_ResourceLocator* sub = (struct udpa_core_v1_ResourceLocator*)envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_sds_resource_locator(msg);
  if (sub == NULL) {
    sub = (struct udpa_core_v1_ResourceLocator*)_upb_msg_new(&udpa_core_v1_ResourceLocator_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_set_sds_resource_locator(msg, sub);
  }
  return sub;
}

/* envoy.extensions.transport_sockets.tls.v3.Secret */

UPB_INLINE envoy_extensions_transport_sockets_tls_v3_Secret *envoy_extensions_transport_sockets_tls_v3_Secret_new(upb_arena *arena) {
  return (envoy_extensions_transport_sockets_tls_v3_Secret *)_upb_msg_new(&envoy_extensions_transport_sockets_tls_v3_Secret_msginit, arena);
}
UPB_INLINE envoy_extensions_transport_sockets_tls_v3_Secret *envoy_extensions_transport_sockets_tls_v3_Secret_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_transport_sockets_tls_v3_Secret *ret = envoy_extensions_transport_sockets_tls_v3_Secret_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_extensions_transport_sockets_tls_v3_Secret_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_extensions_transport_sockets_tls_v3_Secret_serialize(const envoy_extensions_transport_sockets_tls_v3_Secret *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_transport_sockets_tls_v3_Secret_msginit, arena, len);
}

typedef enum {
  envoy_extensions_transport_sockets_tls_v3_Secret_type_tls_certificate = 2,
  envoy_extensions_transport_sockets_tls_v3_Secret_type_session_ticket_keys = 3,
  envoy_extensions_transport_sockets_tls_v3_Secret_type_validation_context = 4,
  envoy_extensions_transport_sockets_tls_v3_Secret_type_generic_secret = 5,
  envoy_extensions_transport_sockets_tls_v3_Secret_type_NOT_SET = 0
} envoy_extensions_transport_sockets_tls_v3_Secret_type_oneofcases;
UPB_INLINE envoy_extensions_transport_sockets_tls_v3_Secret_type_oneofcases envoy_extensions_transport_sockets_tls_v3_Secret_type_case(const envoy_extensions_transport_sockets_tls_v3_Secret* msg) { return (envoy_extensions_transport_sockets_tls_v3_Secret_type_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(12, 24), int32_t); }

UPB_INLINE upb_strview envoy_extensions_transport_sockets_tls_v3_Secret_name(const envoy_extensions_transport_sockets_tls_v3_Secret *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_Secret_has_tls_certificate(const envoy_extensions_transport_sockets_tls_v3_Secret *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 2; }
UPB_INLINE const struct envoy_extensions_transport_sockets_tls_v3_TlsCertificate* envoy_extensions_transport_sockets_tls_v3_Secret_tls_certificate(const envoy_extensions_transport_sockets_tls_v3_Secret *msg) { return UPB_READ_ONEOF(msg, const struct envoy_extensions_transport_sockets_tls_v3_TlsCertificate*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 2, NULL); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_Secret_has_session_ticket_keys(const envoy_extensions_transport_sockets_tls_v3_Secret *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 3; }
UPB_INLINE const struct envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys* envoy_extensions_transport_sockets_tls_v3_Secret_session_ticket_keys(const envoy_extensions_transport_sockets_tls_v3_Secret *msg) { return UPB_READ_ONEOF(msg, const struct envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 3, NULL); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_Secret_has_validation_context(const envoy_extensions_transport_sockets_tls_v3_Secret *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 4; }
UPB_INLINE const struct envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext* envoy_extensions_transport_sockets_tls_v3_Secret_validation_context(const envoy_extensions_transport_sockets_tls_v3_Secret *msg) { return UPB_READ_ONEOF(msg, const struct envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 4, NULL); }
UPB_INLINE bool envoy_extensions_transport_sockets_tls_v3_Secret_has_generic_secret(const envoy_extensions_transport_sockets_tls_v3_Secret *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 5; }
UPB_INLINE const envoy_extensions_transport_sockets_tls_v3_GenericSecret* envoy_extensions_transport_sockets_tls_v3_Secret_generic_secret(const envoy_extensions_transport_sockets_tls_v3_Secret *msg) { return UPB_READ_ONEOF(msg, const envoy_extensions_transport_sockets_tls_v3_GenericSecret*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 5, NULL); }

UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_Secret_set_name(envoy_extensions_transport_sockets_tls_v3_Secret *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_Secret_set_tls_certificate(envoy_extensions_transport_sockets_tls_v3_Secret *msg, struct envoy_extensions_transport_sockets_tls_v3_TlsCertificate* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_extensions_transport_sockets_tls_v3_TlsCertificate*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 2);
}
UPB_INLINE struct envoy_extensions_transport_sockets_tls_v3_TlsCertificate* envoy_extensions_transport_sockets_tls_v3_Secret_mutable_tls_certificate(envoy_extensions_transport_sockets_tls_v3_Secret *msg, upb_arena *arena) {
  struct envoy_extensions_transport_sockets_tls_v3_TlsCertificate* sub = (struct envoy_extensions_transport_sockets_tls_v3_TlsCertificate*)envoy_extensions_transport_sockets_tls_v3_Secret_tls_certificate(msg);
  if (sub == NULL) {
    sub = (struct envoy_extensions_transport_sockets_tls_v3_TlsCertificate*)_upb_msg_new(&envoy_extensions_transport_sockets_tls_v3_TlsCertificate_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_Secret_set_tls_certificate(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_Secret_set_session_ticket_keys(envoy_extensions_transport_sockets_tls_v3_Secret *msg, struct envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 3);
}
UPB_INLINE struct envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys* envoy_extensions_transport_sockets_tls_v3_Secret_mutable_session_ticket_keys(envoy_extensions_transport_sockets_tls_v3_Secret *msg, upb_arena *arena) {
  struct envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys* sub = (struct envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys*)envoy_extensions_transport_sockets_tls_v3_Secret_session_ticket_keys(msg);
  if (sub == NULL) {
    sub = (struct envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys*)_upb_msg_new(&envoy_extensions_transport_sockets_tls_v3_TlsSessionTicketKeys_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_Secret_set_session_ticket_keys(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_Secret_set_validation_context(envoy_extensions_transport_sockets_tls_v3_Secret *msg, struct envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 4);
}
UPB_INLINE struct envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext* envoy_extensions_transport_sockets_tls_v3_Secret_mutable_validation_context(envoy_extensions_transport_sockets_tls_v3_Secret *msg, upb_arena *arena) {
  struct envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext* sub = (struct envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext*)envoy_extensions_transport_sockets_tls_v3_Secret_validation_context(msg);
  if (sub == NULL) {
    sub = (struct envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext*)_upb_msg_new(&envoy_extensions_transport_sockets_tls_v3_CertificateValidationContext_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_Secret_set_validation_context(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_transport_sockets_tls_v3_Secret_set_generic_secret(envoy_extensions_transport_sockets_tls_v3_Secret *msg, envoy_extensions_transport_sockets_tls_v3_GenericSecret* value) {
  UPB_WRITE_ONEOF(msg, envoy_extensions_transport_sockets_tls_v3_GenericSecret*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 5);
}
UPB_INLINE struct envoy_extensions_transport_sockets_tls_v3_GenericSecret* envoy_extensions_transport_sockets_tls_v3_Secret_mutable_generic_secret(envoy_extensions_transport_sockets_tls_v3_Secret *msg, upb_arena *arena) {
  struct envoy_extensions_transport_sockets_tls_v3_GenericSecret* sub = (struct envoy_extensions_transport_sockets_tls_v3_GenericSecret*)envoy_extensions_transport_sockets_tls_v3_Secret_generic_secret(msg);
  if (sub == NULL) {
    sub = (struct envoy_extensions_transport_sockets_tls_v3_GenericSecret*)_upb_msg_new(&envoy_extensions_transport_sockets_tls_v3_GenericSecret_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_transport_sockets_tls_v3_Secret_set_generic_secret(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* ENVOY_EXTENSIONS_TRANSPORT_SOCKETS_TLS_V3_SECRET_PROTO_UPB_H_ */
