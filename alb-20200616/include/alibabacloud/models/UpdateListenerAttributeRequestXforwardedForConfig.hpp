// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUESTXFORWARDEDFORCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUESTXFORWARDEDFORCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateListenerAttributeRequestXForwardedForConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateListenerAttributeRequestXForwardedForConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateListenerAttributeRequestXForwardedForConfig& obj) { 
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
    UpdateListenerAttributeRequestXForwardedForConfig() = default ;
    UpdateListenerAttributeRequestXForwardedForConfig(const UpdateListenerAttributeRequestXForwardedForConfig &) = default ;
    UpdateListenerAttributeRequestXForwardedForConfig(UpdateListenerAttributeRequestXForwardedForConfig &&) = default ;
    UpdateListenerAttributeRequestXForwardedForConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateListenerAttributeRequestXForwardedForConfig() = default ;
    UpdateListenerAttributeRequestXForwardedForConfig& operator=(const UpdateListenerAttributeRequestXForwardedForConfig &) = default ;
    UpdateListenerAttributeRequestXForwardedForConfig& operator=(UpdateListenerAttributeRequestXForwardedForConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->XForwardedForClientCertClientVerifyAlias_ != nullptr
        && this->XForwardedForClientCertClientVerifyEnabled_ != nullptr && this->XForwardedForClientCertFingerprintAlias_ != nullptr && this->XForwardedForClientCertFingerprintEnabled_ != nullptr && this->XForwardedForClientCertIssuerDNAlias_ != nullptr && this->XForwardedForClientCertIssuerDNEnabled_ != nullptr
        && this->XForwardedForClientCertSubjectDNAlias_ != nullptr && this->XForwardedForClientCertSubjectDNEnabled_ != nullptr && this->XForwardedForClientSourceIpsEnabled_ != nullptr && this->XForwardedForClientSourceIpsTrusted_ != nullptr && this->XForwardedForClientSrcPortEnabled_ != nullptr
        && this->XForwardedForEnabled_ != nullptr && this->XForwardedForHostEnabled_ != nullptr && this->XForwardedForProcessingMode_ != nullptr && this->XForwardedForProtoEnabled_ != nullptr && this->XForwardedForSLBIdEnabled_ != nullptr
        && this->XForwardedForSLBPortEnabled_ != nullptr; };
    // XForwardedForClientCertClientVerifyAlias Field Functions 
    bool hasXForwardedForClientCertClientVerifyAlias() const { return this->XForwardedForClientCertClientVerifyAlias_ != nullptr;};
    void deleteXForwardedForClientCertClientVerifyAlias() { this->XForwardedForClientCertClientVerifyAlias_ = nullptr;};
    inline string XForwardedForClientCertClientVerifyAlias() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertClientVerifyAlias_, "") };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForClientCertClientVerifyAlias(string XForwardedForClientCertClientVerifyAlias) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertClientVerifyAlias_, XForwardedForClientCertClientVerifyAlias) };


    // XForwardedForClientCertClientVerifyEnabled Field Functions 
    bool hasXForwardedForClientCertClientVerifyEnabled() const { return this->XForwardedForClientCertClientVerifyEnabled_ != nullptr;};
    void deleteXForwardedForClientCertClientVerifyEnabled() { this->XForwardedForClientCertClientVerifyEnabled_ = nullptr;};
    inline bool XForwardedForClientCertClientVerifyEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertClientVerifyEnabled_, false) };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForClientCertClientVerifyEnabled(bool XForwardedForClientCertClientVerifyEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertClientVerifyEnabled_, XForwardedForClientCertClientVerifyEnabled) };


    // XForwardedForClientCertFingerprintAlias Field Functions 
    bool hasXForwardedForClientCertFingerprintAlias() const { return this->XForwardedForClientCertFingerprintAlias_ != nullptr;};
    void deleteXForwardedForClientCertFingerprintAlias() { this->XForwardedForClientCertFingerprintAlias_ = nullptr;};
    inline string XForwardedForClientCertFingerprintAlias() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertFingerprintAlias_, "") };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForClientCertFingerprintAlias(string XForwardedForClientCertFingerprintAlias) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertFingerprintAlias_, XForwardedForClientCertFingerprintAlias) };


    // XForwardedForClientCertFingerprintEnabled Field Functions 
    bool hasXForwardedForClientCertFingerprintEnabled() const { return this->XForwardedForClientCertFingerprintEnabled_ != nullptr;};
    void deleteXForwardedForClientCertFingerprintEnabled() { this->XForwardedForClientCertFingerprintEnabled_ = nullptr;};
    inline bool XForwardedForClientCertFingerprintEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertFingerprintEnabled_, false) };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForClientCertFingerprintEnabled(bool XForwardedForClientCertFingerprintEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertFingerprintEnabled_, XForwardedForClientCertFingerprintEnabled) };


    // XForwardedForClientCertIssuerDNAlias Field Functions 
    bool hasXForwardedForClientCertIssuerDNAlias() const { return this->XForwardedForClientCertIssuerDNAlias_ != nullptr;};
    void deleteXForwardedForClientCertIssuerDNAlias() { this->XForwardedForClientCertIssuerDNAlias_ = nullptr;};
    inline string XForwardedForClientCertIssuerDNAlias() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertIssuerDNAlias_, "") };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForClientCertIssuerDNAlias(string XForwardedForClientCertIssuerDNAlias) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertIssuerDNAlias_, XForwardedForClientCertIssuerDNAlias) };


    // XForwardedForClientCertIssuerDNEnabled Field Functions 
    bool hasXForwardedForClientCertIssuerDNEnabled() const { return this->XForwardedForClientCertIssuerDNEnabled_ != nullptr;};
    void deleteXForwardedForClientCertIssuerDNEnabled() { this->XForwardedForClientCertIssuerDNEnabled_ = nullptr;};
    inline bool XForwardedForClientCertIssuerDNEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertIssuerDNEnabled_, false) };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForClientCertIssuerDNEnabled(bool XForwardedForClientCertIssuerDNEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertIssuerDNEnabled_, XForwardedForClientCertIssuerDNEnabled) };


    // XForwardedForClientCertSubjectDNAlias Field Functions 
    bool hasXForwardedForClientCertSubjectDNAlias() const { return this->XForwardedForClientCertSubjectDNAlias_ != nullptr;};
    void deleteXForwardedForClientCertSubjectDNAlias() { this->XForwardedForClientCertSubjectDNAlias_ = nullptr;};
    inline string XForwardedForClientCertSubjectDNAlias() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertSubjectDNAlias_, "") };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForClientCertSubjectDNAlias(string XForwardedForClientCertSubjectDNAlias) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertSubjectDNAlias_, XForwardedForClientCertSubjectDNAlias) };


    // XForwardedForClientCertSubjectDNEnabled Field Functions 
    bool hasXForwardedForClientCertSubjectDNEnabled() const { return this->XForwardedForClientCertSubjectDNEnabled_ != nullptr;};
    void deleteXForwardedForClientCertSubjectDNEnabled() { this->XForwardedForClientCertSubjectDNEnabled_ = nullptr;};
    inline bool XForwardedForClientCertSubjectDNEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientCertSubjectDNEnabled_, false) };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForClientCertSubjectDNEnabled(bool XForwardedForClientCertSubjectDNEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientCertSubjectDNEnabled_, XForwardedForClientCertSubjectDNEnabled) };


    // XForwardedForClientSourceIpsEnabled Field Functions 
    bool hasXForwardedForClientSourceIpsEnabled() const { return this->XForwardedForClientSourceIpsEnabled_ != nullptr;};
    void deleteXForwardedForClientSourceIpsEnabled() { this->XForwardedForClientSourceIpsEnabled_ = nullptr;};
    inline bool XForwardedForClientSourceIpsEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientSourceIpsEnabled_, false) };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForClientSourceIpsEnabled(bool XForwardedForClientSourceIpsEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientSourceIpsEnabled_, XForwardedForClientSourceIpsEnabled) };


    // XForwardedForClientSourceIpsTrusted Field Functions 
    bool hasXForwardedForClientSourceIpsTrusted() const { return this->XForwardedForClientSourceIpsTrusted_ != nullptr;};
    void deleteXForwardedForClientSourceIpsTrusted() { this->XForwardedForClientSourceIpsTrusted_ = nullptr;};
    inline string XForwardedForClientSourceIpsTrusted() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientSourceIpsTrusted_, "") };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForClientSourceIpsTrusted(string XForwardedForClientSourceIpsTrusted) { DARABONBA_PTR_SET_VALUE(XForwardedForClientSourceIpsTrusted_, XForwardedForClientSourceIpsTrusted) };


    // XForwardedForClientSrcPortEnabled Field Functions 
    bool hasXForwardedForClientSrcPortEnabled() const { return this->XForwardedForClientSrcPortEnabled_ != nullptr;};
    void deleteXForwardedForClientSrcPortEnabled() { this->XForwardedForClientSrcPortEnabled_ = nullptr;};
    inline bool XForwardedForClientSrcPortEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForClientSrcPortEnabled_, false) };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForClientSrcPortEnabled(bool XForwardedForClientSrcPortEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForClientSrcPortEnabled_, XForwardedForClientSrcPortEnabled) };


    // XForwardedForEnabled Field Functions 
    bool hasXForwardedForEnabled() const { return this->XForwardedForEnabled_ != nullptr;};
    void deleteXForwardedForEnabled() { this->XForwardedForEnabled_ = nullptr;};
    inline bool XForwardedForEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForEnabled_, false) };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForEnabled(bool XForwardedForEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForEnabled_, XForwardedForEnabled) };


    // XForwardedForHostEnabled Field Functions 
    bool hasXForwardedForHostEnabled() const { return this->XForwardedForHostEnabled_ != nullptr;};
    void deleteXForwardedForHostEnabled() { this->XForwardedForHostEnabled_ = nullptr;};
    inline bool XForwardedForHostEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForHostEnabled_, false) };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForHostEnabled(bool XForwardedForHostEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForHostEnabled_, XForwardedForHostEnabled) };


    // XForwardedForProcessingMode Field Functions 
    bool hasXForwardedForProcessingMode() const { return this->XForwardedForProcessingMode_ != nullptr;};
    void deleteXForwardedForProcessingMode() { this->XForwardedForProcessingMode_ = nullptr;};
    inline string XForwardedForProcessingMode() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForProcessingMode_, "") };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForProcessingMode(string XForwardedForProcessingMode) { DARABONBA_PTR_SET_VALUE(XForwardedForProcessingMode_, XForwardedForProcessingMode) };


    // XForwardedForProtoEnabled Field Functions 
    bool hasXForwardedForProtoEnabled() const { return this->XForwardedForProtoEnabled_ != nullptr;};
    void deleteXForwardedForProtoEnabled() { this->XForwardedForProtoEnabled_ = nullptr;};
    inline bool XForwardedForProtoEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForProtoEnabled_, false) };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForProtoEnabled(bool XForwardedForProtoEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForProtoEnabled_, XForwardedForProtoEnabled) };


    // XForwardedForSLBIdEnabled Field Functions 
    bool hasXForwardedForSLBIdEnabled() const { return this->XForwardedForSLBIdEnabled_ != nullptr;};
    void deleteXForwardedForSLBIdEnabled() { this->XForwardedForSLBIdEnabled_ = nullptr;};
    inline bool XForwardedForSLBIdEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForSLBIdEnabled_, false) };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForSLBIdEnabled(bool XForwardedForSLBIdEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForSLBIdEnabled_, XForwardedForSLBIdEnabled) };


    // XForwardedForSLBPortEnabled Field Functions 
    bool hasXForwardedForSLBPortEnabled() const { return this->XForwardedForSLBPortEnabled_ != nullptr;};
    void deleteXForwardedForSLBPortEnabled() { this->XForwardedForSLBPortEnabled_ = nullptr;};
    inline bool XForwardedForSLBPortEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForSLBPortEnabled_, false) };
    inline UpdateListenerAttributeRequestXForwardedForConfig& setXForwardedForSLBPortEnabled(bool XForwardedForSLBPortEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForSLBPortEnabled_, XForwardedForSLBPortEnabled) };


  protected:
    // The name of the custom header. The header takes effect only when you set **XForwardedForClientCertClientVerifyEnabled **to **true**.
    // 
    // The name must be 1 to 40 characters in length. It can contain lowercase letters, digits, hyphens (-), and underscores (_).
    // 
    // >  This parameter is only available for HTTPS listeners.
    std::shared_ptr<string> XForwardedForClientCertClientVerifyAlias_ = nullptr;
    // Specifies whether to use the `X-Forwarded-Clientcert-clientverify` header to retrieve the verification result of the client certificate. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter is only available for HTTPS listeners.
    std::shared_ptr<bool> XForwardedForClientCertClientVerifyEnabled_ = nullptr;
    // The name of the custom header. The header takes effect only when you set **XForwardedForClientCertFingerprintEnabled** to **true**.
    // 
    // The name must be 1 to 40 characters in length. It can contain lowercase letters, digits, hyphens (-), and underscores (_).
    // 
    // >  This parameter is only available for HTTPS listeners.
    std::shared_ptr<string> XForwardedForClientCertFingerprintAlias_ = nullptr;
    // Specifies whether to use the `X-Forwarded-Clientcert-fingerprint` header to retrieve the fingerprint of the client certificate. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter is only available for HTTPS listeners.
    std::shared_ptr<bool> XForwardedForClientCertFingerprintEnabled_ = nullptr;
    // The name of the custom header. The header takes effect only when you set **XForwardedForClientCertIssuerDNEnabled** to **true**.
    // 
    // The name must be 1 to 40 characters in length. It can contain lowercase letters, digits, hyphens (-), and underscores (_).
    // 
    // >  This parameter is only available for HTTPS listeners.
    std::shared_ptr<string> XForwardedForClientCertIssuerDNAlias_ = nullptr;
    // Specifies whether to use the `X-Forwarded-Clientcert-issuerdn` header to retrieve information about the authority that issues the client certificate. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter is only available for HTTPS listeners.
    std::shared_ptr<bool> XForwardedForClientCertIssuerDNEnabled_ = nullptr;
    // The name of the custom header. This parameter is valid only if the **XForwardedForClientCertSubjectDNEnabled** parameter is set to **true**.
    // 
    // The name must be 1 to 40 characters in length. It can contain lowercase letters, digits, hyphens (-), and underscores (_).
    // 
    // >  This parameter is only available for HTTPS listeners.
    std::shared_ptr<string> XForwardedForClientCertSubjectDNAlias_ = nullptr;
    // Specifies whether to use the `X-Forwarded-Clientcert-subjectdn` header to retrieve information about the owner of the client certificate. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter is only available for HTTPS listeners.
    std::shared_ptr<bool> XForwardedForClientCertSubjectDNEnabled_ = nullptr;
    // Specifies whether to use the X-Forwarded-For header to preserve client IP addresses. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter is only available for HTTP and HTTPS listeners.
    std::shared_ptr<bool> XForwardedForClientSourceIpsEnabled_ = nullptr;
    // The trusted proxy IP address.
    // 
    // ALB instances traverse the IP addresses in the `X-Forwarded-For` header from the rightmost IP address to the leftmost IP address. The first IP address that is not on the trusted IP address list is considered the client IP address. Requests from the client IP address are throttled.
    std::shared_ptr<string> XForwardedForClientSourceIpsTrusted_ = nullptr;
    // Specifies whether to use the `X-Forwarded-Client-srcport` header to retrieve the client port. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter is only available for HTTP and HTTPS listeners.
    std::shared_ptr<bool> XForwardedForClientSrcPortEnabled_ = nullptr;
    // Specifies whether to use the `X-Forwarded-For` header to retrieve the client IP address. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    // 
    // > *   If this parameter is set to **true**, the default value of the **XForwardedForProcessingMode** parameter is **append**. You can change it to **remove**.
    // > *   If this parameter is set to **false**, the `X-Forwarded-For` header in the request is not modified in any way before the request is sent to backend servers.
    // > *   This parameter is only available for HTTP and HTTPS listeners.
    std::shared_ptr<bool> XForwardedForEnabled_ = nullptr;
    // Specifies whether to use the `X-Forwarded-Host` header to retrieve the client domain name. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // >  This parameter is available for HTTP, HTTPS, and QUIC listeners.
    std::shared_ptr<bool> XForwardedForHostEnabled_ = nullptr;
    // Specifies how the `X-Forwarded-For` header is processed. This parameter takes effect only when **XForwardedForEnabled** is set to **true**. Valid values:
    // 
    // *   **append** (default)
    // *   **remove**
    // 
    // > *   If this parameter is set to **append**, ALB appends the IP address of the last hop to the existing `X-Forwarded-For` header in the request before the request is sent to backend servers.
    // > *   If this parameter is set to **remove**, ALB removes the `X-Forwarded-For` header in the request before the request is sent to backend servers, no matter whether the request carries the `X-Forwarded-For` header.
    // > *   This parameter is only available for HTTP and HTTPS listeners.
    std::shared_ptr<string> XForwardedForProcessingMode_ = nullptr;
    // Specifies whether to use the `X-Forwarded-Proto` header to retrieve the listener protocol. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter is available for HTTP, HTTPS, and QUIC listeners.
    std::shared_ptr<bool> XForwardedForProtoEnabled_ = nullptr;
    // Specifies whether to use the `SLB-ID` header to retrieve the ID of the ALB instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter is available for HTTP, HTTPS, and QUIC listeners.
    std::shared_ptr<bool> XForwardedForSLBIdEnabled_ = nullptr;
    // Specifies whether to use the `X-Forwarded-Port` header to retrieve the listener port of the ALB instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter is available for HTTP, HTTPS, and QUIC listeners.
    std::shared_ptr<bool> XForwardedForSLBPortEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
