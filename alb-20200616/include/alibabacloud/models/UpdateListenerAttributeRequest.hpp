// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateListenerAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateListenerAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaCertificates, caCertificates_);
      DARABONBA_PTR_TO_JSON(CaEnabled, caEnabled_);
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DefaultActions, defaultActions_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(GzipEnabled, gzipEnabled_);
      DARABONBA_PTR_TO_JSON(Http2Enabled, http2Enabled_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(QuicConfig, quicConfig_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateListenerAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaCertificates, caCertificates_);
      DARABONBA_PTR_FROM_JSON(CaEnabled, caEnabled_);
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DefaultActions, defaultActions_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(GzipEnabled, gzipEnabled_);
      DARABONBA_PTR_FROM_JSON(Http2Enabled, http2Enabled_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(QuicConfig, quicConfig_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    UpdateListenerAttributeRequest() = default ;
    UpdateListenerAttributeRequest(const UpdateListenerAttributeRequest &) = default ;
    UpdateListenerAttributeRequest(UpdateListenerAttributeRequest &&) = default ;
    UpdateListenerAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateListenerAttributeRequest() = default ;
    UpdateListenerAttributeRequest& operator=(const UpdateListenerAttributeRequest &) = default ;
    UpdateListenerAttributeRequest& operator=(UpdateListenerAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class XForwardedForConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const XForwardedForConfig& obj) { 
        DARABONBA_PTR_TO_JSON(XForwardedForClientCertClientVerifyAlias, XForwardedForClientCertClientVerifyAlias_);
        DARABONBA_PTR_TO_JSON(XForwardedForClientCertClientVerifyEnabled, XForwardedForClientCertClientVerifyEnabled_);
        DARABONBA_PTR_TO_JSON(XForwardedForClientCertFingerprintAlias, XForwardedForClientCertFingerprintAlias_);
        DARABONBA_PTR_TO_JSON(XForwardedForClientCertFingerprintEnabled, XForwardedForClientCertFingerprintEnabled_);
        DARABONBA_PTR_TO_JSON(XForwardedForClientCertIssuerDNAlias, XForwardedForClientCertIssuerDNAlias_);
        DARABONBA_PTR_TO_JSON(XForwardedForClientCertIssuerDNEnabled, XForwardedForClientCertIssuerDNEnabled_);
        DARABONBA_PTR_TO_JSON(XForwardedForClientCertSubjectDNAlias, XForwardedForClientCertSubjectDNAlias_);
        DARABONBA_PTR_TO_JSON(XForwardedForClientCertSubjectDNEnabled, XForwardedForClientCertSubjectDNEnabled_);
        DARABONBA_PTR_TO_JSON(XForwardedForClientSourceIpsEnabled, XForwardedForClientSourceIpsEnabled_);
        DARABONBA_PTR_TO_JSON(XForwardedForClientSourceIpsTrusted, XForwardedForClientSourceIpsTrusted_);
        DARABONBA_PTR_TO_JSON(XForwardedForClientSrcPortEnabled, XForwardedForClientSrcPortEnabled_);
        DARABONBA_PTR_TO_JSON(XForwardedForEnabled, XForwardedForEnabled_);
        DARABONBA_PTR_TO_JSON(XForwardedForHostEnabled, XForwardedForHostEnabled_);
        DARABONBA_PTR_TO_JSON(XForwardedForProcessingMode, XForwardedForProcessingMode_);
        DARABONBA_PTR_TO_JSON(XForwardedForProtoEnabled, XForwardedForProtoEnabled_);
        DARABONBA_PTR_TO_JSON(XForwardedForSLBIdEnabled, XForwardedForSLBIdEnabled_);
        DARABONBA_PTR_TO_JSON(XForwardedForSLBPortEnabled, XForwardedForSLBPortEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, XForwardedForConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(XForwardedForClientCertClientVerifyAlias, XForwardedForClientCertClientVerifyAlias_);
        DARABONBA_PTR_FROM_JSON(XForwardedForClientCertClientVerifyEnabled, XForwardedForClientCertClientVerifyEnabled_);
        DARABONBA_PTR_FROM_JSON(XForwardedForClientCertFingerprintAlias, XForwardedForClientCertFingerprintAlias_);
        DARABONBA_PTR_FROM_JSON(XForwardedForClientCertFingerprintEnabled, XForwardedForClientCertFingerprintEnabled_);
        DARABONBA_PTR_FROM_JSON(XForwardedForClientCertIssuerDNAlias, XForwardedForClientCertIssuerDNAlias_);
        DARABONBA_PTR_FROM_JSON(XForwardedForClientCertIssuerDNEnabled, XForwardedForClientCertIssuerDNEnabled_);
        DARABONBA_PTR_FROM_JSON(XForwardedForClientCertSubjectDNAlias, XForwardedForClientCertSubjectDNAlias_);
        DARABONBA_PTR_FROM_JSON(XForwardedForClientCertSubjectDNEnabled, XForwardedForClientCertSubjectDNEnabled_);
        DARABONBA_PTR_FROM_JSON(XForwardedForClientSourceIpsEnabled, XForwardedForClientSourceIpsEnabled_);
        DARABONBA_PTR_FROM_JSON(XForwardedForClientSourceIpsTrusted, XForwardedForClientSourceIpsTrusted_);
        DARABONBA_PTR_FROM_JSON(XForwardedForClientSrcPortEnabled, XForwardedForClientSrcPortEnabled_);
        DARABONBA_PTR_FROM_JSON(XForwardedForEnabled, XForwardedForEnabled_);
        DARABONBA_PTR_FROM_JSON(XForwardedForHostEnabled, XForwardedForHostEnabled_);
        DARABONBA_PTR_FROM_JSON(XForwardedForProcessingMode, XForwardedForProcessingMode_);
        DARABONBA_PTR_FROM_JSON(XForwardedForProtoEnabled, XForwardedForProtoEnabled_);
        DARABONBA_PTR_FROM_JSON(XForwardedForSLBIdEnabled, XForwardedForSLBIdEnabled_);
        DARABONBA_PTR_FROM_JSON(XForwardedForSLBPortEnabled, XForwardedForSLBPortEnabled_);
      };
      XForwardedForConfig() = default ;
      XForwardedForConfig(const XForwardedForConfig &) = default ;
      XForwardedForConfig(XForwardedForConfig &&) = default ;
      XForwardedForConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~XForwardedForConfig() = default ;
      XForwardedForConfig& operator=(const XForwardedForConfig &) = default ;
      XForwardedForConfig& operator=(XForwardedForConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->XForwardedForClientCertClientVerifyAlias_ == nullptr
        && this->XForwardedForClientCertClientVerifyEnabled_ == nullptr && this->XForwardedForClientCertFingerprintAlias_ == nullptr && this->XForwardedForClientCertFingerprintEnabled_ == nullptr && this->XForwardedForClientCertIssuerDNAlias_ == nullptr && this->XForwardedForClientCertIssuerDNEnabled_ == nullptr
        && this->XForwardedForClientCertSubjectDNAlias_ == nullptr && this->XForwardedForClientCertSubjectDNEnabled_ == nullptr && this->XForwardedForClientSourceIpsEnabled_ == nullptr && this->XForwardedForClientSourceIpsTrusted_ == nullptr && this->XForwardedForClientSrcPortEnabled_ == nullptr
        && this->XForwardedForEnabled_ == nullptr && this->XForwardedForHostEnabled_ == nullptr && this->XForwardedForProcessingMode_ == nullptr && this->XForwardedForProtoEnabled_ == nullptr && this->XForwardedForSLBIdEnabled_ == nullptr
        && this->XForwardedForSLBPortEnabled_ == nullptr; };
      // XForwardedForClientCertClientVerifyAlias Field Functions 
      bool hasXForwardedForClientCertClientVerifyAlias() const { return this->XForwardedForClientCertClientVerifyAlias_ != nullptr;};
      void deleteXForwardedForClientCertClientVerifyAlias() { this->XForwardedForClientCertClientVerifyAlias_ = nullptr;};
      inline string getXForwardedForClientCertClientVerifyAlias() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertClientVerifyAlias_, "") };
      inline XForwardedForConfig& setXForwardedForClientCertClientVerifyAlias(string XForwardedForClientCertClientVerifyAlias) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertClientVerifyAlias_, XForwardedForClientCertClientVerifyAlias) };


      // XForwardedForClientCertClientVerifyEnabled Field Functions 
      bool hasXForwardedForClientCertClientVerifyEnabled() const { return this->XForwardedForClientCertClientVerifyEnabled_ != nullptr;};
      void deleteXForwardedForClientCertClientVerifyEnabled() { this->XForwardedForClientCertClientVerifyEnabled_ = nullptr;};
      inline bool getXForwardedForClientCertClientVerifyEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertClientVerifyEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForClientCertClientVerifyEnabled(bool XForwardedForClientCertClientVerifyEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertClientVerifyEnabled_, XForwardedForClientCertClientVerifyEnabled) };


      // XForwardedForClientCertFingerprintAlias Field Functions 
      bool hasXForwardedForClientCertFingerprintAlias() const { return this->XForwardedForClientCertFingerprintAlias_ != nullptr;};
      void deleteXForwardedForClientCertFingerprintAlias() { this->XForwardedForClientCertFingerprintAlias_ = nullptr;};
      inline string getXForwardedForClientCertFingerprintAlias() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertFingerprintAlias_, "") };
      inline XForwardedForConfig& setXForwardedForClientCertFingerprintAlias(string XForwardedForClientCertFingerprintAlias) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertFingerprintAlias_, XForwardedForClientCertFingerprintAlias) };


      // XForwardedForClientCertFingerprintEnabled Field Functions 
      bool hasXForwardedForClientCertFingerprintEnabled() const { return this->XForwardedForClientCertFingerprintEnabled_ != nullptr;};
      void deleteXForwardedForClientCertFingerprintEnabled() { this->XForwardedForClientCertFingerprintEnabled_ = nullptr;};
      inline bool getXForwardedForClientCertFingerprintEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertFingerprintEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForClientCertFingerprintEnabled(bool XForwardedForClientCertFingerprintEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertFingerprintEnabled_, XForwardedForClientCertFingerprintEnabled) };


      // XForwardedForClientCertIssuerDNAlias Field Functions 
      bool hasXForwardedForClientCertIssuerDNAlias() const { return this->XForwardedForClientCertIssuerDNAlias_ != nullptr;};
      void deleteXForwardedForClientCertIssuerDNAlias() { this->XForwardedForClientCertIssuerDNAlias_ = nullptr;};
      inline string getXForwardedForClientCertIssuerDNAlias() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertIssuerDNAlias_, "") };
      inline XForwardedForConfig& setXForwardedForClientCertIssuerDNAlias(string XForwardedForClientCertIssuerDNAlias) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertIssuerDNAlias_, XForwardedForClientCertIssuerDNAlias) };


      // XForwardedForClientCertIssuerDNEnabled Field Functions 
      bool hasXForwardedForClientCertIssuerDNEnabled() const { return this->XForwardedForClientCertIssuerDNEnabled_ != nullptr;};
      void deleteXForwardedForClientCertIssuerDNEnabled() { this->XForwardedForClientCertIssuerDNEnabled_ = nullptr;};
      inline bool getXForwardedForClientCertIssuerDNEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertIssuerDNEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForClientCertIssuerDNEnabled(bool XForwardedForClientCertIssuerDNEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertIssuerDNEnabled_, XForwardedForClientCertIssuerDNEnabled) };


      // XForwardedForClientCertSubjectDNAlias Field Functions 
      bool hasXForwardedForClientCertSubjectDNAlias() const { return this->XForwardedForClientCertSubjectDNAlias_ != nullptr;};
      void deleteXForwardedForClientCertSubjectDNAlias() { this->XForwardedForClientCertSubjectDNAlias_ = nullptr;};
      inline string getXForwardedForClientCertSubjectDNAlias() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertSubjectDNAlias_, "") };
      inline XForwardedForConfig& setXForwardedForClientCertSubjectDNAlias(string XForwardedForClientCertSubjectDNAlias) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertSubjectDNAlias_, XForwardedForClientCertSubjectDNAlias) };


      // XForwardedForClientCertSubjectDNEnabled Field Functions 
      bool hasXForwardedForClientCertSubjectDNEnabled() const { return this->XForwardedForClientCertSubjectDNEnabled_ != nullptr;};
      void deleteXForwardedForClientCertSubjectDNEnabled() { this->XForwardedForClientCertSubjectDNEnabled_ = nullptr;};
      inline bool getXForwardedForClientCertSubjectDNEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertSubjectDNEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForClientCertSubjectDNEnabled(bool XForwardedForClientCertSubjectDNEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertSubjectDNEnabled_, XForwardedForClientCertSubjectDNEnabled) };


      // XForwardedForClientSourceIpsEnabled Field Functions 
      bool hasXForwardedForClientSourceIpsEnabled() const { return this->XForwardedForClientSourceIpsEnabled_ != nullptr;};
      void deleteXForwardedForClientSourceIpsEnabled() { this->XForwardedForClientSourceIpsEnabled_ = nullptr;};
      inline bool getXForwardedForClientSourceIpsEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientSourceIpsEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForClientSourceIpsEnabled(bool XForwardedForClientSourceIpsEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientSourceIpsEnabled_, XForwardedForClientSourceIpsEnabled) };


      // XForwardedForClientSourceIpsTrusted Field Functions 
      bool hasXForwardedForClientSourceIpsTrusted() const { return this->XForwardedForClientSourceIpsTrusted_ != nullptr;};
      void deleteXForwardedForClientSourceIpsTrusted() { this->XForwardedForClientSourceIpsTrusted_ = nullptr;};
      inline string getXForwardedForClientSourceIpsTrusted() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientSourceIpsTrusted_, "") };
      inline XForwardedForConfig& setXForwardedForClientSourceIpsTrusted(string XForwardedForClientSourceIpsTrusted) { DARABONBA_PTR_SET_VALUE(XForwardedForClientSourceIpsTrusted_, XForwardedForClientSourceIpsTrusted) };


      // XForwardedForClientSrcPortEnabled Field Functions 
      bool hasXForwardedForClientSrcPortEnabled() const { return this->XForwardedForClientSrcPortEnabled_ != nullptr;};
      void deleteXForwardedForClientSrcPortEnabled() { this->XForwardedForClientSrcPortEnabled_ = nullptr;};
      inline bool getXForwardedForClientSrcPortEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientSrcPortEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForClientSrcPortEnabled(bool XForwardedForClientSrcPortEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientSrcPortEnabled_, XForwardedForClientSrcPortEnabled) };


      // XForwardedForEnabled Field Functions 
      bool hasXForwardedForEnabled() const { return this->XForwardedForEnabled_ != nullptr;};
      void deleteXForwardedForEnabled() { this->XForwardedForEnabled_ = nullptr;};
      inline bool getXForwardedForEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForEnabled(bool XForwardedForEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForEnabled_, XForwardedForEnabled) };


      // XForwardedForHostEnabled Field Functions 
      bool hasXForwardedForHostEnabled() const { return this->XForwardedForHostEnabled_ != nullptr;};
      void deleteXForwardedForHostEnabled() { this->XForwardedForHostEnabled_ = nullptr;};
      inline bool getXForwardedForHostEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForHostEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForHostEnabled(bool XForwardedForHostEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForHostEnabled_, XForwardedForHostEnabled) };


      // XForwardedForProcessingMode Field Functions 
      bool hasXForwardedForProcessingMode() const { return this->XForwardedForProcessingMode_ != nullptr;};
      void deleteXForwardedForProcessingMode() { this->XForwardedForProcessingMode_ = nullptr;};
      inline string getXForwardedForProcessingMode() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForProcessingMode_, "") };
      inline XForwardedForConfig& setXForwardedForProcessingMode(string XForwardedForProcessingMode) { DARABONBA_PTR_SET_VALUE(XForwardedForProcessingMode_, XForwardedForProcessingMode) };


      // XForwardedForProtoEnabled Field Functions 
      bool hasXForwardedForProtoEnabled() const { return this->XForwardedForProtoEnabled_ != nullptr;};
      void deleteXForwardedForProtoEnabled() { this->XForwardedForProtoEnabled_ = nullptr;};
      inline bool getXForwardedForProtoEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForProtoEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForProtoEnabled(bool XForwardedForProtoEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForProtoEnabled_, XForwardedForProtoEnabled) };


      // XForwardedForSLBIdEnabled Field Functions 
      bool hasXForwardedForSLBIdEnabled() const { return this->XForwardedForSLBIdEnabled_ != nullptr;};
      void deleteXForwardedForSLBIdEnabled() { this->XForwardedForSLBIdEnabled_ = nullptr;};
      inline bool getXForwardedForSLBIdEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForSLBIdEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForSLBIdEnabled(bool XForwardedForSLBIdEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForSLBIdEnabled_, XForwardedForSLBIdEnabled) };


      // XForwardedForSLBPortEnabled Field Functions 
      bool hasXForwardedForSLBPortEnabled() const { return this->XForwardedForSLBPortEnabled_ != nullptr;};
      void deleteXForwardedForSLBPortEnabled() { this->XForwardedForSLBPortEnabled_ = nullptr;};
      inline bool getXForwardedForSLBPortEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForSLBPortEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForSLBPortEnabled(bool XForwardedForSLBPortEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForSLBPortEnabled_, XForwardedForSLBPortEnabled) };


    protected:
      // The name of the custom header. The header takes effect only when you set **XForwardedForClientCertClientVerifyEnabled **to **true**.
      // 
      // The name must be 1 to 40 characters in length. It can contain lowercase letters, digits, hyphens (-), and underscores (_).
      // 
      // >  This parameter is only available for HTTPS listeners.
      shared_ptr<string> XForwardedForClientCertClientVerifyAlias_ {};
      // Specifies whether to use the `X-Forwarded-Clientcert-clientverify` header to retrieve the verification result of the client certificate. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  This parameter is only available for HTTPS listeners.
      shared_ptr<bool> XForwardedForClientCertClientVerifyEnabled_ {};
      // The name of the custom header. The header takes effect only when you set **XForwardedForClientCertFingerprintEnabled** to **true**.
      // 
      // The name must be 1 to 40 characters in length. It can contain lowercase letters, digits, hyphens (-), and underscores (_).
      // 
      // >  This parameter is only available for HTTPS listeners.
      shared_ptr<string> XForwardedForClientCertFingerprintAlias_ {};
      // Specifies whether to use the `X-Forwarded-Clientcert-fingerprint` header to retrieve the fingerprint of the client certificate. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  This parameter is only available for HTTPS listeners.
      shared_ptr<bool> XForwardedForClientCertFingerprintEnabled_ {};
      // The name of the custom header. The header takes effect only when you set **XForwardedForClientCertIssuerDNEnabled** to **true**.
      // 
      // The name must be 1 to 40 characters in length. It can contain lowercase letters, digits, hyphens (-), and underscores (_).
      // 
      // >  This parameter is only available for HTTPS listeners.
      shared_ptr<string> XForwardedForClientCertIssuerDNAlias_ {};
      // Specifies whether to use the `X-Forwarded-Clientcert-issuerdn` header to retrieve information about the authority that issues the client certificate. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  This parameter is only available for HTTPS listeners.
      shared_ptr<bool> XForwardedForClientCertIssuerDNEnabled_ {};
      // The name of the custom header. This parameter is valid only if the **XForwardedForClientCertSubjectDNEnabled** parameter is set to **true**.
      // 
      // The name must be 1 to 40 characters in length. It can contain lowercase letters, digits, hyphens (-), and underscores (_).
      // 
      // >  This parameter is only available for HTTPS listeners.
      shared_ptr<string> XForwardedForClientCertSubjectDNAlias_ {};
      // Specifies whether to use the `X-Forwarded-Clientcert-subjectdn` header to retrieve information about the owner of the client certificate. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  This parameter is only available for HTTPS listeners.
      shared_ptr<bool> XForwardedForClientCertSubjectDNEnabled_ {};
      // Specifies whether to use the X-Forwarded-For header to preserve client IP addresses. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  This parameter is only available for HTTP and HTTPS listeners.
      shared_ptr<bool> XForwardedForClientSourceIpsEnabled_ {};
      // The trusted proxy IP address.
      // 
      // ALB instances traverse the IP addresses in the `X-Forwarded-For` header from the rightmost IP address to the leftmost IP address. The first IP address that is not on the trusted IP address list is considered the client IP address. Requests from the client IP address are throttled.
      shared_ptr<string> XForwardedForClientSourceIpsTrusted_ {};
      // Specifies whether to use the `X-Forwarded-Client-srcport` header to retrieve the client port. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  This parameter is only available for HTTP and HTTPS listeners.
      shared_ptr<bool> XForwardedForClientSrcPortEnabled_ {};
      // Specifies whether to use the `X-Forwarded-For` header to retrieve the client IP address. Valid values:
      // 
      // *   **true** (default)
      // *   **false**
      // 
      // > *   If this parameter is set to **true**, the default value of the **XForwardedForProcessingMode** parameter is **append**. You can change it to **remove**.
      // > *   If this parameter is set to **false**, the `X-Forwarded-For` header in the request is not modified in any way before the request is sent to backend servers.
      // > *   This parameter is only available for HTTP and HTTPS listeners.
      shared_ptr<bool> XForwardedForEnabled_ {};
      // Specifies whether to use the `X-Forwarded-Host` header to retrieve the client domain name. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      // 
      // >  This parameter is available for HTTP, HTTPS, and QUIC listeners.
      shared_ptr<bool> XForwardedForHostEnabled_ {};
      // Specifies how the `X-Forwarded-For` header is processed. This parameter takes effect only when **XForwardedForEnabled** is set to **true**. Valid values:
      // 
      // *   **append** (default)
      // *   **remove**
      // 
      // > *   If this parameter is set to **append**, ALB appends the IP address of the last hop to the existing `X-Forwarded-For` header in the request before the request is sent to backend servers.
      // > *   If this parameter is set to **remove**, ALB removes the `X-Forwarded-For` header in the request before the request is sent to backend servers, no matter whether the request carries the `X-Forwarded-For` header.
      // > *   This parameter is only available for HTTP and HTTPS listeners.
      shared_ptr<string> XForwardedForProcessingMode_ {};
      // Specifies whether to use the `X-Forwarded-Proto` header to retrieve the listener protocol. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  This parameter is available for HTTP, HTTPS, and QUIC listeners.
      shared_ptr<bool> XForwardedForProtoEnabled_ {};
      // Specifies whether to use the `SLB-ID` header to retrieve the ID of the ALB instance. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  This parameter is available for HTTP, HTTPS, and QUIC listeners.
      shared_ptr<bool> XForwardedForSLBIdEnabled_ {};
      // Specifies whether to use the `X-Forwarded-Port` header to retrieve the listener port of the ALB instance. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  This parameter is available for HTTP, HTTPS, and QUIC listeners.
      shared_ptr<bool> XForwardedForSLBPortEnabled_ {};
    };

    class QuicConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuicConfig& obj) { 
        DARABONBA_PTR_TO_JSON(QuicListenerId, quicListenerId_);
        DARABONBA_PTR_TO_JSON(QuicUpgradeEnabled, quicUpgradeEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, QuicConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(QuicListenerId, quicListenerId_);
        DARABONBA_PTR_FROM_JSON(QuicUpgradeEnabled, quicUpgradeEnabled_);
      };
      QuicConfig() = default ;
      QuicConfig(const QuicConfig &) = default ;
      QuicConfig(QuicConfig &&) = default ;
      QuicConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuicConfig() = default ;
      QuicConfig& operator=(const QuicConfig &) = default ;
      QuicConfig& operator=(QuicConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->quicListenerId_ == nullptr
        && this->quicUpgradeEnabled_ == nullptr; };
      // quicListenerId Field Functions 
      bool hasQuicListenerId() const { return this->quicListenerId_ != nullptr;};
      void deleteQuicListenerId() { this->quicListenerId_ = nullptr;};
      inline string getQuicListenerId() const { DARABONBA_PTR_GET_DEFAULT(quicListenerId_, "") };
      inline QuicConfig& setQuicListenerId(string quicListenerId) { DARABONBA_PTR_SET_VALUE(quicListenerId_, quicListenerId) };


      // quicUpgradeEnabled Field Functions 
      bool hasQuicUpgradeEnabled() const { return this->quicUpgradeEnabled_ != nullptr;};
      void deleteQuicUpgradeEnabled() { this->quicUpgradeEnabled_ = nullptr;};
      inline bool getQuicUpgradeEnabled() const { DARABONBA_PTR_GET_DEFAULT(quicUpgradeEnabled_, false) };
      inline QuicConfig& setQuicUpgradeEnabled(bool quicUpgradeEnabled) { DARABONBA_PTR_SET_VALUE(quicUpgradeEnabled_, quicUpgradeEnabled) };


    protected:
      // The QUIC listener ID. This parameter is required if **QuicUpgradeEnabled** is set to **true**. Only HTTPS listeners support this parameter.
      // 
      // > You must add the HTTPS listener and the QUIC listener to the same ALB instance. In addition, make sure that the QUIC listener has never been associated with another listener.
      shared_ptr<string> quicListenerId_ {};
      // Specifies whether to enable QUIC upgrade. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // > Only HTTPS listeners support this parameter.
      shared_ptr<bool> quicUpgradeEnabled_ {};
    };

    class DefaultActions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultActions& obj) { 
        DARABONBA_PTR_TO_JSON(ForwardGroupConfig, forwardGroupConfig_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultActions& obj) { 
        DARABONBA_PTR_FROM_JSON(ForwardGroupConfig, forwardGroupConfig_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      DefaultActions() = default ;
      DefaultActions(const DefaultActions &) = default ;
      DefaultActions(DefaultActions &&) = default ;
      DefaultActions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultActions() = default ;
      DefaultActions& operator=(const DefaultActions &) = default ;
      DefaultActions& operator=(DefaultActions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ForwardGroupConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ForwardGroupConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
        };
        friend void from_json(const Darabonba::Json& j, ForwardGroupConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
        };
        ForwardGroupConfig() = default ;
        ForwardGroupConfig(const ForwardGroupConfig &) = default ;
        ForwardGroupConfig(ForwardGroupConfig &&) = default ;
        ForwardGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ForwardGroupConfig() = default ;
        ForwardGroupConfig& operator=(const ForwardGroupConfig &) = default ;
        ForwardGroupConfig& operator=(ForwardGroupConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ServerGroupTuples : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServerGroupTuples& obj) { 
            DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
          };
          friend void from_json(const Darabonba::Json& j, ServerGroupTuples& obj) { 
            DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
          };
          ServerGroupTuples() = default ;
          ServerGroupTuples(const ServerGroupTuples &) = default ;
          ServerGroupTuples(ServerGroupTuples &&) = default ;
          ServerGroupTuples(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServerGroupTuples() = default ;
          ServerGroupTuples& operator=(const ServerGroupTuples &) = default ;
          ServerGroupTuples& operator=(ServerGroupTuples &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->serverGroupId_ == nullptr; };
          // serverGroupId Field Functions 
          bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
          void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
          inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
          inline ServerGroupTuples& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


        protected:
          // The ID of the server group to which requests are forwarded.
          // 
          // This parameter is required.
          shared_ptr<string> serverGroupId_ {};
        };

        virtual bool empty() const override { return this->serverGroupTuples_ == nullptr; };
        // serverGroupTuples Field Functions 
        bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
        void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
        inline const vector<ForwardGroupConfig::ServerGroupTuples> & getServerGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<ForwardGroupConfig::ServerGroupTuples>) };
        inline vector<ForwardGroupConfig::ServerGroupTuples> getServerGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<ForwardGroupConfig::ServerGroupTuples>) };
        inline ForwardGroupConfig& setServerGroupTuples(const vector<ForwardGroupConfig::ServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
        inline ForwardGroupConfig& setServerGroupTuples(vector<ForwardGroupConfig::ServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


      protected:
        // The server groups to which requests are forwarded.
        // 
        // This parameter is required.
        shared_ptr<vector<ForwardGroupConfig::ServerGroupTuples>> serverGroupTuples_ {};
      };

      virtual bool empty() const override { return this->forwardGroupConfig_ == nullptr
        && this->type_ == nullptr; };
      // forwardGroupConfig Field Functions 
      bool hasForwardGroupConfig() const { return this->forwardGroupConfig_ != nullptr;};
      void deleteForwardGroupConfig() { this->forwardGroupConfig_ = nullptr;};
      inline const DefaultActions::ForwardGroupConfig & getForwardGroupConfig() const { DARABONBA_PTR_GET_CONST(forwardGroupConfig_, DefaultActions::ForwardGroupConfig) };
      inline DefaultActions::ForwardGroupConfig getForwardGroupConfig() { DARABONBA_PTR_GET(forwardGroupConfig_, DefaultActions::ForwardGroupConfig) };
      inline DefaultActions& setForwardGroupConfig(const DefaultActions::ForwardGroupConfig & forwardGroupConfig) { DARABONBA_PTR_SET_VALUE(forwardGroupConfig_, forwardGroupConfig) };
      inline DefaultActions& setForwardGroupConfig(DefaultActions::ForwardGroupConfig && forwardGroupConfig) { DARABONBA_PTR_SET_RVALUE(forwardGroupConfig_, forwardGroupConfig) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DefaultActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The forwarding action. This parameter takes effect only when you set **Type** to **ForwardGroup**. You can specify at most 20 actions.
      shared_ptr<DefaultActions::ForwardGroupConfig> forwardGroupConfig_ {};
      // The action type. You can specify only one type.
      // 
      // Set the value to **ForwardGroup**, which specifies that requests are forwarded to multiple server groups.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    class Certificates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Certificates& obj) { 
        DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      };
      friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
        DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      };
      Certificates() = default ;
      Certificates(const Certificates &) = default ;
      Certificates(Certificates &&) = default ;
      Certificates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Certificates() = default ;
      Certificates& operator=(const Certificates &) = default ;
      Certificates& operator=(Certificates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certificateId_ == nullptr; };
      // certificateId Field Functions 
      bool hasCertificateId() const { return this->certificateId_ != nullptr;};
      void deleteCertificateId() { this->certificateId_ = nullptr;};
      inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
      inline Certificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    protected:
      // The certificate ID.
      shared_ptr<string> certificateId_ {};
    };

    class CaCertificates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CaCertificates& obj) { 
        DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      };
      friend void from_json(const Darabonba::Json& j, CaCertificates& obj) { 
        DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      };
      CaCertificates() = default ;
      CaCertificates(const CaCertificates &) = default ;
      CaCertificates(CaCertificates &&) = default ;
      CaCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CaCertificates() = default ;
      CaCertificates& operator=(const CaCertificates &) = default ;
      CaCertificates& operator=(CaCertificates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certificateId_ == nullptr; };
      // certificateId Field Functions 
      bool hasCertificateId() const { return this->certificateId_ != nullptr;};
      void deleteCertificateId() { this->certificateId_ = nullptr;};
      inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
      inline CaCertificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    protected:
      // The ID of the CA certificate.
      // 
      // >  This parameter is required if **CaEnabled** is set to **true**.
      shared_ptr<string> certificateId_ {};
    };

    virtual bool empty() const override { return this->caCertificates_ == nullptr
        && this->caEnabled_ == nullptr && this->certificates_ == nullptr && this->clientToken_ == nullptr && this->defaultActions_ == nullptr && this->dryRun_ == nullptr
        && this->gzipEnabled_ == nullptr && this->http2Enabled_ == nullptr && this->idleTimeout_ == nullptr && this->listenerDescription_ == nullptr && this->listenerId_ == nullptr
        && this->quicConfig_ == nullptr && this->requestTimeout_ == nullptr && this->securityPolicyId_ == nullptr && this->XForwardedForConfig_ == nullptr; };
    // caCertificates Field Functions 
    bool hasCaCertificates() const { return this->caCertificates_ != nullptr;};
    void deleteCaCertificates() { this->caCertificates_ = nullptr;};
    inline const vector<UpdateListenerAttributeRequest::CaCertificates> & getCaCertificates() const { DARABONBA_PTR_GET_CONST(caCertificates_, vector<UpdateListenerAttributeRequest::CaCertificates>) };
    inline vector<UpdateListenerAttributeRequest::CaCertificates> getCaCertificates() { DARABONBA_PTR_GET(caCertificates_, vector<UpdateListenerAttributeRequest::CaCertificates>) };
    inline UpdateListenerAttributeRequest& setCaCertificates(const vector<UpdateListenerAttributeRequest::CaCertificates> & caCertificates) { DARABONBA_PTR_SET_VALUE(caCertificates_, caCertificates) };
    inline UpdateListenerAttributeRequest& setCaCertificates(vector<UpdateListenerAttributeRequest::CaCertificates> && caCertificates) { DARABONBA_PTR_SET_RVALUE(caCertificates_, caCertificates) };


    // caEnabled Field Functions 
    bool hasCaEnabled() const { return this->caEnabled_ != nullptr;};
    void deleteCaEnabled() { this->caEnabled_ = nullptr;};
    inline bool getCaEnabled() const { DARABONBA_PTR_GET_DEFAULT(caEnabled_, false) };
    inline UpdateListenerAttributeRequest& setCaEnabled(bool caEnabled) { DARABONBA_PTR_SET_VALUE(caEnabled_, caEnabled) };


    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<UpdateListenerAttributeRequest::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<UpdateListenerAttributeRequest::Certificates>) };
    inline vector<UpdateListenerAttributeRequest::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<UpdateListenerAttributeRequest::Certificates>) };
    inline UpdateListenerAttributeRequest& setCertificates(const vector<UpdateListenerAttributeRequest::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline UpdateListenerAttributeRequest& setCertificates(vector<UpdateListenerAttributeRequest::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateListenerAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // defaultActions Field Functions 
    bool hasDefaultActions() const { return this->defaultActions_ != nullptr;};
    void deleteDefaultActions() { this->defaultActions_ = nullptr;};
    inline const vector<UpdateListenerAttributeRequest::DefaultActions> & getDefaultActions() const { DARABONBA_PTR_GET_CONST(defaultActions_, vector<UpdateListenerAttributeRequest::DefaultActions>) };
    inline vector<UpdateListenerAttributeRequest::DefaultActions> getDefaultActions() { DARABONBA_PTR_GET(defaultActions_, vector<UpdateListenerAttributeRequest::DefaultActions>) };
    inline UpdateListenerAttributeRequest& setDefaultActions(const vector<UpdateListenerAttributeRequest::DefaultActions> & defaultActions) { DARABONBA_PTR_SET_VALUE(defaultActions_, defaultActions) };
    inline UpdateListenerAttributeRequest& setDefaultActions(vector<UpdateListenerAttributeRequest::DefaultActions> && defaultActions) { DARABONBA_PTR_SET_RVALUE(defaultActions_, defaultActions) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateListenerAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // gzipEnabled Field Functions 
    bool hasGzipEnabled() const { return this->gzipEnabled_ != nullptr;};
    void deleteGzipEnabled() { this->gzipEnabled_ = nullptr;};
    inline bool getGzipEnabled() const { DARABONBA_PTR_GET_DEFAULT(gzipEnabled_, false) };
    inline UpdateListenerAttributeRequest& setGzipEnabled(bool gzipEnabled) { DARABONBA_PTR_SET_VALUE(gzipEnabled_, gzipEnabled) };


    // http2Enabled Field Functions 
    bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
    void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
    inline bool getHttp2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
    inline UpdateListenerAttributeRequest& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline UpdateListenerAttributeRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerDescription Field Functions 
    bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
    void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
    inline string getListenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
    inline UpdateListenerAttributeRequest& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline UpdateListenerAttributeRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // quicConfig Field Functions 
    bool hasQuicConfig() const { return this->quicConfig_ != nullptr;};
    void deleteQuicConfig() { this->quicConfig_ = nullptr;};
    inline const UpdateListenerAttributeRequest::QuicConfig & getQuicConfig() const { DARABONBA_PTR_GET_CONST(quicConfig_, UpdateListenerAttributeRequest::QuicConfig) };
    inline UpdateListenerAttributeRequest::QuicConfig getQuicConfig() { DARABONBA_PTR_GET(quicConfig_, UpdateListenerAttributeRequest::QuicConfig) };
    inline UpdateListenerAttributeRequest& setQuicConfig(const UpdateListenerAttributeRequest::QuicConfig & quicConfig) { DARABONBA_PTR_SET_VALUE(quicConfig_, quicConfig) };
    inline UpdateListenerAttributeRequest& setQuicConfig(UpdateListenerAttributeRequest::QuicConfig && quicConfig) { DARABONBA_PTR_SET_RVALUE(quicConfig_, quicConfig) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline UpdateListenerAttributeRequest& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline UpdateListenerAttributeRequest& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // XForwardedForConfig Field Functions 
    bool hasXForwardedForConfig() const { return this->XForwardedForConfig_ != nullptr;};
    void deleteXForwardedForConfig() { this->XForwardedForConfig_ = nullptr;};
    inline const UpdateListenerAttributeRequest::XForwardedForConfig & getXForwardedForConfig() const { DARABONBA_PTR_GET_CONST(XForwardedForConfig_, UpdateListenerAttributeRequest::XForwardedForConfig) };
    inline UpdateListenerAttributeRequest::XForwardedForConfig getXForwardedForConfig() { DARABONBA_PTR_GET(XForwardedForConfig_, UpdateListenerAttributeRequest::XForwardedForConfig) };
    inline UpdateListenerAttributeRequest& setXForwardedForConfig(const UpdateListenerAttributeRequest::XForwardedForConfig & xForwardedForConfig) { DARABONBA_PTR_SET_VALUE(XForwardedForConfig_, xForwardedForConfig) };
    inline UpdateListenerAttributeRequest& setXForwardedForConfig(UpdateListenerAttributeRequest::XForwardedForConfig && xForwardedForConfig) { DARABONBA_PTR_SET_RVALUE(XForwardedForConfig_, xForwardedForConfig) };


  protected:
    // The CA certificate. You can specify only one CA certificate.
    shared_ptr<vector<UpdateListenerAttributeRequest::CaCertificates>> caCertificates_ {};
    // Specifies whether to enable mutual authentication. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> caEnabled_ {};
    // The certificates. You can add at most 20 certificates.
    // 
    // >  Only server certificates are supported.
    shared_ptr<vector<UpdateListenerAttributeRequest::Certificates>> certificates_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The actions of the default forwarding rule.
    shared_ptr<vector<UpdateListenerAttributeRequest::DefaultActions>> defaultActions_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a `2xx HTTP` status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to enable GZIP compression for specific types of files. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> gzipEnabled_ {};
    // Specifies whether to enable HTTP/2. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > This parameter is available only when you create an HTTPS listener.
    shared_ptr<bool> http2Enabled_ {};
    // The timeout period for idle connections. Unit: seconds. Valid values: **1 to 60**
    // 
    // If no requests are received within the specified timeout period, ALB closes the current connection. When another request is received, ALB establishes a new connection.
    shared_ptr<int32_t> idleTimeout_ {};
    // The name of the listener.
    // 
    // The name must be 2 to 256 characters in length, and can contain letters, digits, commas (,), periods (.), semicolons (;), forward slashes (/), at signs (@), underscores (_), and hyphens (-).
    shared_ptr<string> listenerDescription_ {};
    // The ID of the Application Load Balancer (ALB) instance.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The configuration information when the listener is associated with a QUIC listener.
    shared_ptr<UpdateListenerAttributeRequest::QuicConfig> quicConfig_ {};
    // The timeout period of a request. Unit: seconds. Valid values: **1 to 180**.
    // 
    // If no response is received from the backend server within the specified timeout period, ALB returns an `HTTP 504` error code to the client.
    shared_ptr<int32_t> requestTimeout_ {};
    // The security policy ID. System security policies and custom security policies are supported.
    // 
    // > This parameter is available only when you create an HTTPS listener.
    shared_ptr<string> securityPolicyId_ {};
    // The configurations of the X-Forwarded-For header.
    shared_ptr<UpdateListenerAttributeRequest::XForwardedForConfig> XForwardedForConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
