// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELISTENERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELISTENERREQUEST_HPP_
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
  class CreateListenerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateListenerRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(QuicConfig, quicConfig_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateListenerRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(QuicConfig, quicConfig_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    CreateListenerRequest() = default ;
    CreateListenerRequest(const CreateListenerRequest &) = default ;
    CreateListenerRequest(CreateListenerRequest &&) = default ;
    CreateListenerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateListenerRequest() = default ;
    CreateListenerRequest& operator=(const CreateListenerRequest &) = default ;
    CreateListenerRequest& operator=(CreateListenerRequest &&) = default ;
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
      // The name of the custom header. This parameter takes effect only when **XForwardedForClientCertClientVerifyEnabled** is set to **true**.
      // 
      // The name must be 1 to 40 characters in length, and can contain lowercase letters, hyphens (-), underscores (_), and digits.
      // 
      // >  Only HTTPS listeners support this parameter.
      shared_ptr<string> XForwardedForClientCertClientVerifyAlias_ {};
      // Specifies whether to use the `X-Forwarded-Clientcert-clientverify` header to retrieve the verification result of the client certificate. Valid values:
      // 
      // *   **true**: uses the X-Forwarded-Clientcert-clientverify header.
      // *   **false** (default): does not use the X-Forwarded-Clientcert-clientverify header.
      // 
      // >  Only HTTPS listeners support this parameter.
      shared_ptr<bool> XForwardedForClientCertClientVerifyEnabled_ {};
      // The name of the custom header. This parameter takes effect only when **XForwardedForClientCertFingerprintEnabled** is set to **true**.
      // 
      // The name must be 1 to 40 characters in length, and can contain lowercase letters, hyphens (-), underscores (_), and digits.
      // 
      // >  Only HTTPS listeners support this parameter.
      shared_ptr<string> XForwardedForClientCertFingerprintAlias_ {};
      // Specifies whether to use the `X-Forwarded-Clientcert-fingerprint` header to retrieve the fingerprint of the client certificate. Valid values:
      // 
      // *   **true**: uses the X-Forwarded-Clientcert-fingerprint header.
      // *   **false** (default): does not use the X-Forwarded-Clientcert-fingerprint header.
      // 
      // >  Only HTTPS listeners support this parameter.
      shared_ptr<bool> XForwardedForClientCertFingerprintEnabled_ {};
      // The name of the custom header. This parameter takes effect only when **XForwardedForClientCertIssuerDNEnabled** is set to **true**.
      // 
      // The name must be 1 to 40 characters in length, and can contain lowercase letters, hyphens (-), underscores (_), and digits.
      // 
      // >  Only HTTPS listeners support this parameter.
      shared_ptr<string> XForwardedForClientCertIssuerDNAlias_ {};
      // Specifies whether to use the `X-Forwarded-Clientcert-issuerdn` header to retrieve information about the authority that issues the client certificate. Valid values:
      // 
      // *   **true**: uses the X-Forwarded-Clientcert-issuerdn header.
      // *   **false** (default): does not use the X-Forwarded-Clientcert-issuerdn header.
      // 
      // >  Only HTTPS listeners support this parameter.
      shared_ptr<bool> XForwardedForClientCertIssuerDNEnabled_ {};
      // The name of the custom header. This parameter takes effect only when **XForwardedForClientCertSubjectDNEnabled** is set to **true**.
      // 
      // The name must be 1 to 40 characters in length, and can contain lowercase letters, hyphens (-), underscores (_), and digits.
      // 
      // >  Only HTTPS listeners support this parameter.
      shared_ptr<string> XForwardedForClientCertSubjectDNAlias_ {};
      // Specifies whether to use the `X-Forwarded-Clientcert-subjectdn` header to retrieve information about the owner of the client certificate. Valid values:
      // 
      // *   **true**: uses the X-Forwarded-Clientcert-subjectdn header.
      // *   **false** (default): does not use the X-Forwarded-Clientcert-subjectdn header.
      // 
      // >  Only HTTPS listeners support this parameter.
      shared_ptr<bool> XForwardedForClientCertSubjectDNEnabled_ {};
      // Specifies whether to allow the ALB instance to retrieve client IP addresses from the `X-Forwarded-For` header. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      // 
      // >  HTTP and HTTPS listeners support this parameter.
      shared_ptr<bool> XForwardedForClientSourceIpsEnabled_ {};
      // The trusted proxy IP address.
      // 
      // ALB traverses `X-Forwarded-For` backwards and selects the first IP address that is not in the trusted IP list as the originating IP address of the client, which will be throttled if source IP address throttling is enabled.
      shared_ptr<string> XForwardedForClientSourceIpsTrusted_ {};
      // Specifies whether to use the `X-Forwarded-Client-srcport` header to retrieve the client port. Valid values:
      // 
      // *   **true**: uses the X-Forwarded-Client-srcport header.
      // *   **false** (default): does not use the X-Forwarded-Client-srcport header.
      // 
      // >  HTTP and HTTPS listeners support this parameter.
      shared_ptr<bool> XForwardedForClientSrcPortEnabled_ {};
      // Specifies whether to use the `X-Forwarded-For` header to retrieve client IP addresses. Valid values:
      // 
      // *   **true** (default)
      // *   **false**
      // 
      // >  HTTP and HTTPS listeners support this parameter.
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
      // Specifies whether to use the `X-Forwarded-Proto` header to retrieve the listener protocol of the ALB instance. Valid values:
      // 
      // *   **true**: uses the X-Forwarded-Proto header.
      // *   **false** (default): does not use the X-Forwarded-Proto header.
      // 
      // >  HTTP, HTTPS, and QUIC listeners support this parameter.
      shared_ptr<bool> XForwardedForProtoEnabled_ {};
      // Specifies whether to use the `SLB-ID` header to retrieve the ID of the ALB instance. Valid values:
      // 
      // *   **true**: uses the SLB-ID header.
      // *   **false** (default): does not use the SLB-ID header.
      // 
      // >  HTTP, HTTPS, and QUIC listeners support this parameter.
      shared_ptr<bool> XForwardedForSLBIdEnabled_ {};
      // Specifies whether to use the `X-Forwarded-Port` header to retrieve the listener port of the ALB instance. Valid values:
      // 
      // *   **true**: uses the X-Forwarded-Port header.
      // *   **false** (default): does not use the X-Forwarded-Port header.
      // 
      // >  HTTP, HTTPS, and QUIC listeners support this parameter.
      shared_ptr<bool> XForwardedForSLBPortEnabled_ {};
    };

    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. The tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. The tag value can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
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
      // The ID of the QUIC listener that you want to associate with the HTTPS listener. Only HTTPS listeners support this parameter. This parameter is required when **QuicUpgradeEnabled** is set to **true**.
      // 
      // >  The HTTPS listener and the QUIC listener must be added to the same ALB instance. Make sure that the QUIC listener is not associated with any other listeners.
      shared_ptr<string> quicListenerId_ {};
      // Specifies whether to enable QUIC upgrade. Valid values:
      // 
      // *   **true**: enables QUIC upgrade.
      // *   **false** (default): disables QUIC upgrade.
      // 
      // >  Only HTTPS listeners support this parameter.
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
        // The destination server group to which requests are forwarded.
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
      // The configuration of the forwarding action. You can specify at most 20 actions.
      // 
      // This parameter is required.
      shared_ptr<DefaultActions::ForwardGroupConfig> forwardGroupConfig_ {};
      // The action type. You can specify only one action type. Valid value:
      // 
      // **ForwardGroup**: forwards requests to multiple Server groups.
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
      // The ID of the certificate. Only server certificates are supported. You can specify up to 20 certificate IDs.
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
        && this->gzipEnabled_ == nullptr && this->http2Enabled_ == nullptr && this->idleTimeout_ == nullptr && this->listenerDescription_ == nullptr && this->listenerPort_ == nullptr
        && this->listenerProtocol_ == nullptr && this->loadBalancerId_ == nullptr && this->quicConfig_ == nullptr && this->requestTimeout_ == nullptr && this->securityPolicyId_ == nullptr
        && this->tag_ == nullptr && this->XForwardedForConfig_ == nullptr; };
    // caCertificates Field Functions 
    bool hasCaCertificates() const { return this->caCertificates_ != nullptr;};
    void deleteCaCertificates() { this->caCertificates_ = nullptr;};
    inline const vector<CreateListenerRequest::CaCertificates> & getCaCertificates() const { DARABONBA_PTR_GET_CONST(caCertificates_, vector<CreateListenerRequest::CaCertificates>) };
    inline vector<CreateListenerRequest::CaCertificates> getCaCertificates() { DARABONBA_PTR_GET(caCertificates_, vector<CreateListenerRequest::CaCertificates>) };
    inline CreateListenerRequest& setCaCertificates(const vector<CreateListenerRequest::CaCertificates> & caCertificates) { DARABONBA_PTR_SET_VALUE(caCertificates_, caCertificates) };
    inline CreateListenerRequest& setCaCertificates(vector<CreateListenerRequest::CaCertificates> && caCertificates) { DARABONBA_PTR_SET_RVALUE(caCertificates_, caCertificates) };


    // caEnabled Field Functions 
    bool hasCaEnabled() const { return this->caEnabled_ != nullptr;};
    void deleteCaEnabled() { this->caEnabled_ = nullptr;};
    inline bool getCaEnabled() const { DARABONBA_PTR_GET_DEFAULT(caEnabled_, false) };
    inline CreateListenerRequest& setCaEnabled(bool caEnabled) { DARABONBA_PTR_SET_VALUE(caEnabled_, caEnabled) };


    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<CreateListenerRequest::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<CreateListenerRequest::Certificates>) };
    inline vector<CreateListenerRequest::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<CreateListenerRequest::Certificates>) };
    inline CreateListenerRequest& setCertificates(const vector<CreateListenerRequest::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline CreateListenerRequest& setCertificates(vector<CreateListenerRequest::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateListenerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // defaultActions Field Functions 
    bool hasDefaultActions() const { return this->defaultActions_ != nullptr;};
    void deleteDefaultActions() { this->defaultActions_ = nullptr;};
    inline const vector<CreateListenerRequest::DefaultActions> & getDefaultActions() const { DARABONBA_PTR_GET_CONST(defaultActions_, vector<CreateListenerRequest::DefaultActions>) };
    inline vector<CreateListenerRequest::DefaultActions> getDefaultActions() { DARABONBA_PTR_GET(defaultActions_, vector<CreateListenerRequest::DefaultActions>) };
    inline CreateListenerRequest& setDefaultActions(const vector<CreateListenerRequest::DefaultActions> & defaultActions) { DARABONBA_PTR_SET_VALUE(defaultActions_, defaultActions) };
    inline CreateListenerRequest& setDefaultActions(vector<CreateListenerRequest::DefaultActions> && defaultActions) { DARABONBA_PTR_SET_RVALUE(defaultActions_, defaultActions) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateListenerRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // gzipEnabled Field Functions 
    bool hasGzipEnabled() const { return this->gzipEnabled_ != nullptr;};
    void deleteGzipEnabled() { this->gzipEnabled_ = nullptr;};
    inline bool getGzipEnabled() const { DARABONBA_PTR_GET_DEFAULT(gzipEnabled_, false) };
    inline CreateListenerRequest& setGzipEnabled(bool gzipEnabled) { DARABONBA_PTR_SET_VALUE(gzipEnabled_, gzipEnabled) };


    // http2Enabled Field Functions 
    bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
    void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
    inline bool getHttp2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
    inline CreateListenerRequest& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline CreateListenerRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerDescription Field Functions 
    bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
    void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
    inline string getListenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
    inline CreateListenerRequest& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline CreateListenerRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline CreateListenerRequest& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CreateListenerRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // quicConfig Field Functions 
    bool hasQuicConfig() const { return this->quicConfig_ != nullptr;};
    void deleteQuicConfig() { this->quicConfig_ = nullptr;};
    inline const CreateListenerRequest::QuicConfig & getQuicConfig() const { DARABONBA_PTR_GET_CONST(quicConfig_, CreateListenerRequest::QuicConfig) };
    inline CreateListenerRequest::QuicConfig getQuicConfig() { DARABONBA_PTR_GET(quicConfig_, CreateListenerRequest::QuicConfig) };
    inline CreateListenerRequest& setQuicConfig(const CreateListenerRequest::QuicConfig & quicConfig) { DARABONBA_PTR_SET_VALUE(quicConfig_, quicConfig) };
    inline CreateListenerRequest& setQuicConfig(CreateListenerRequest::QuicConfig && quicConfig) { DARABONBA_PTR_SET_RVALUE(quicConfig_, quicConfig) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline CreateListenerRequest& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline CreateListenerRequest& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateListenerRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateListenerRequest::Tag>) };
    inline vector<CreateListenerRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateListenerRequest::Tag>) };
    inline CreateListenerRequest& setTag(const vector<CreateListenerRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateListenerRequest& setTag(vector<CreateListenerRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // XForwardedForConfig Field Functions 
    bool hasXForwardedForConfig() const { return this->XForwardedForConfig_ != nullptr;};
    void deleteXForwardedForConfig() { this->XForwardedForConfig_ = nullptr;};
    inline const CreateListenerRequest::XForwardedForConfig & getXForwardedForConfig() const { DARABONBA_PTR_GET_CONST(XForwardedForConfig_, CreateListenerRequest::XForwardedForConfig) };
    inline CreateListenerRequest::XForwardedForConfig getXForwardedForConfig() { DARABONBA_PTR_GET(XForwardedForConfig_, CreateListenerRequest::XForwardedForConfig) };
    inline CreateListenerRequest& setXForwardedForConfig(const CreateListenerRequest::XForwardedForConfig & xForwardedForConfig) { DARABONBA_PTR_SET_VALUE(XForwardedForConfig_, xForwardedForConfig) };
    inline CreateListenerRequest& setXForwardedForConfig(CreateListenerRequest::XForwardedForConfig && xForwardedForConfig) { DARABONBA_PTR_SET_RVALUE(XForwardedForConfig_, xForwardedForConfig) };


  protected:
    // The certificate authority (CA) certificates. You can specify only one CA certificate.
    shared_ptr<vector<CreateListenerRequest::CaCertificates>> caCertificates_ {};
    // Specifies whether to enable mutual authentication. Valid values:
    // 
    // *   **true**: enables mutual authentication.
    // *   **false** (default): disables mutual authentication.
    shared_ptr<bool> caEnabled_ {};
    // The details about each certificate.
    shared_ptr<vector<CreateListenerRequest::Certificates>> certificates_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among all requests. The token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, the system automatically uses the value of **RequestId** as the value of **ClientToken**. **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The actions of the forwarding rule.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateListenerRequest::DefaultActions>> defaultActions_ {};
    // Specifies whether to perform only a precheck. Valid values:
    // 
    // *   **true**: prechecks the request without creating a listener. The system checks the required parameters, request syntax, and limits. If the request fails the precheck, an error code is returned based on the cause of the failure. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // *   **false** (default): sends the API request. If the request passes the precheck, a 2xx HTTP status code is returned and the system proceeds to create a listener.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to enable `Gzip` compression to compress specific types of files. Valid values:
    // 
    // *   **true** (default): enables Gzip compression.
    // *   **false**: disables Gzip compression.
    shared_ptr<bool> gzipEnabled_ {};
    // Specifies whether to enable `HTTP/2`. Valid values:
    // 
    // *   **true** (default): enables HTTP/2.
    // *   **false**: disables HTTP/2.
    // 
    // >  Only HTTPS listeners support this parameter.
    shared_ptr<bool> http2Enabled_ {};
    // The timeout period of an idle connection. Unit: seconds.
    // 
    // Valid values: **1 to 60**.
    // 
    // Default value: **15**.
    // 
    // If no requests are received within the specified timeout period, ALB closes the current connection. When a new request is received, ALB establishes a new connection.
    shared_ptr<int32_t> idleTimeout_ {};
    // The name of the listener.
    // 
    // The description must be 2 to 256 characters in length, and can contain letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_). Regular expressions are supported.
    shared_ptr<string> listenerDescription_ {};
    // The frontend port that is used by the ALB instance.
    // 
    // Valid values: **1 to 65535**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> listenerPort_ {};
    // The listener protocol.
    // 
    // Valid values: **HTTP**, **HTTPS**, and **QUIC**.
    // 
    // This parameter is required.
    shared_ptr<string> listenerProtocol_ {};
    // The ID of the ALB instance.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
    // Select a QUIC listener and associate it with the ALB instance.
    shared_ptr<CreateListenerRequest::QuicConfig> quicConfig_ {};
    // The timeout period of a request. Unit: seconds.
    // 
    // Valid values: **1 to 180**.
    // 
    // Default value: **60**.
    // 
    // If no response is received from the backend server during the request timeout period, ALB sends an `HTTP 504` error code to the client.
    shared_ptr<int32_t> requestTimeout_ {};
    // The ID of the security policy. System security policies and custom security policies are supported.
    // 
    // Default value: **tls_cipher_policy_1_0** (system security policy).
    // 
    // >  Only HTTPS listeners support this parameter.
    shared_ptr<string> securityPolicyId_ {};
    // The tags.
    shared_ptr<vector<CreateListenerRequest::Tag>> tag_ {};
    // The configuration of the XForward header.
    shared_ptr<CreateListenerRequest::XForwardedForConfig> XForwardedForConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
