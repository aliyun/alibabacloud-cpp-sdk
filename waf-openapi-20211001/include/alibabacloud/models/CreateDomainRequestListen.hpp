// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINREQUESTLISTEN_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINREQUESTLISTEN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateDomainRequestListen : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainRequestListen& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_TO_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_TO_JSON(EnableTLSv3, enableTLSv3_);
      DARABONBA_PTR_TO_JSON(ExclusiveIp, exclusiveIp_);
      DARABONBA_PTR_TO_JSON(FocusHttps, focusHttps_);
      DARABONBA_PTR_TO_JSON(Http2Enabled, http2Enabled_);
      DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_TO_JSON(IPv6Enabled, IPv6Enabled_);
      DARABONBA_PTR_TO_JSON(ProtectionResource, protectionResource_);
      DARABONBA_PTR_TO_JSON(SM2AccessOnly, SM2AccessOnly_);
      DARABONBA_PTR_TO_JSON(SM2CertId, SM2CertId_);
      DARABONBA_PTR_TO_JSON(SM2Enabled, SM2Enabled_);
      DARABONBA_PTR_TO_JSON(TLSVersion, TLSVersion_);
      DARABONBA_PTR_TO_JSON(XffHeaderMode, xffHeaderMode_);
      DARABONBA_PTR_TO_JSON(XffHeaders, xffHeaders_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainRequestListen& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_FROM_JSON(CustomCiphers, customCiphers_);
      DARABONBA_PTR_FROM_JSON(EnableTLSv3, enableTLSv3_);
      DARABONBA_PTR_FROM_JSON(ExclusiveIp, exclusiveIp_);
      DARABONBA_PTR_FROM_JSON(FocusHttps, focusHttps_);
      DARABONBA_PTR_FROM_JSON(Http2Enabled, http2Enabled_);
      DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_FROM_JSON(IPv6Enabled, IPv6Enabled_);
      DARABONBA_PTR_FROM_JSON(ProtectionResource, protectionResource_);
      DARABONBA_PTR_FROM_JSON(SM2AccessOnly, SM2AccessOnly_);
      DARABONBA_PTR_FROM_JSON(SM2CertId, SM2CertId_);
      DARABONBA_PTR_FROM_JSON(SM2Enabled, SM2Enabled_);
      DARABONBA_PTR_FROM_JSON(TLSVersion, TLSVersion_);
      DARABONBA_PTR_FROM_JSON(XffHeaderMode, xffHeaderMode_);
      DARABONBA_PTR_FROM_JSON(XffHeaders, xffHeaders_);
    };
    CreateDomainRequestListen() = default ;
    CreateDomainRequestListen(const CreateDomainRequestListen &) = default ;
    CreateDomainRequestListen(CreateDomainRequestListen &&) = default ;
    CreateDomainRequestListen(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainRequestListen() = default ;
    CreateDomainRequestListen& operator=(const CreateDomainRequestListen &) = default ;
    CreateDomainRequestListen& operator=(CreateDomainRequestListen &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certId_ != nullptr
        && this->cipherSuite_ != nullptr && this->customCiphers_ != nullptr && this->enableTLSv3_ != nullptr && this->exclusiveIp_ != nullptr && this->focusHttps_ != nullptr
        && this->http2Enabled_ != nullptr && this->httpPorts_ != nullptr && this->httpsPorts_ != nullptr && this->IPv6Enabled_ != nullptr && this->protectionResource_ != nullptr
        && this->SM2AccessOnly_ != nullptr && this->SM2CertId_ != nullptr && this->SM2Enabled_ != nullptr && this->TLSVersion_ != nullptr && this->xffHeaderMode_ != nullptr
        && this->xffHeaders_ != nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline CreateDomainRequestListen& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // cipherSuite Field Functions 
    bool hasCipherSuite() const { return this->cipherSuite_ != nullptr;};
    void deleteCipherSuite() { this->cipherSuite_ = nullptr;};
    inline int32_t cipherSuite() const { DARABONBA_PTR_GET_DEFAULT(cipherSuite_, 0) };
    inline CreateDomainRequestListen& setCipherSuite(int32_t cipherSuite) { DARABONBA_PTR_SET_VALUE(cipherSuite_, cipherSuite) };


    // customCiphers Field Functions 
    bool hasCustomCiphers() const { return this->customCiphers_ != nullptr;};
    void deleteCustomCiphers() { this->customCiphers_ = nullptr;};
    inline const vector<string> & customCiphers() const { DARABONBA_PTR_GET_CONST(customCiphers_, vector<string>) };
    inline vector<string> customCiphers() { DARABONBA_PTR_GET(customCiphers_, vector<string>) };
    inline CreateDomainRequestListen& setCustomCiphers(const vector<string> & customCiphers) { DARABONBA_PTR_SET_VALUE(customCiphers_, customCiphers) };
    inline CreateDomainRequestListen& setCustomCiphers(vector<string> && customCiphers) { DARABONBA_PTR_SET_RVALUE(customCiphers_, customCiphers) };


    // enableTLSv3 Field Functions 
    bool hasEnableTLSv3() const { return this->enableTLSv3_ != nullptr;};
    void deleteEnableTLSv3() { this->enableTLSv3_ = nullptr;};
    inline bool enableTLSv3() const { DARABONBA_PTR_GET_DEFAULT(enableTLSv3_, false) };
    inline CreateDomainRequestListen& setEnableTLSv3(bool enableTLSv3) { DARABONBA_PTR_SET_VALUE(enableTLSv3_, enableTLSv3) };


    // exclusiveIp Field Functions 
    bool hasExclusiveIp() const { return this->exclusiveIp_ != nullptr;};
    void deleteExclusiveIp() { this->exclusiveIp_ = nullptr;};
    inline bool exclusiveIp() const { DARABONBA_PTR_GET_DEFAULT(exclusiveIp_, false) };
    inline CreateDomainRequestListen& setExclusiveIp(bool exclusiveIp) { DARABONBA_PTR_SET_VALUE(exclusiveIp_, exclusiveIp) };


    // focusHttps Field Functions 
    bool hasFocusHttps() const { return this->focusHttps_ != nullptr;};
    void deleteFocusHttps() { this->focusHttps_ = nullptr;};
    inline bool focusHttps() const { DARABONBA_PTR_GET_DEFAULT(focusHttps_, false) };
    inline CreateDomainRequestListen& setFocusHttps(bool focusHttps) { DARABONBA_PTR_SET_VALUE(focusHttps_, focusHttps) };


    // http2Enabled Field Functions 
    bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
    void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
    inline bool http2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
    inline CreateDomainRequestListen& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


    // httpPorts Field Functions 
    bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
    void deleteHttpPorts() { this->httpPorts_ = nullptr;};
    inline const vector<int32_t> & httpPorts() const { DARABONBA_PTR_GET_CONST(httpPorts_, vector<int32_t>) };
    inline vector<int32_t> httpPorts() { DARABONBA_PTR_GET(httpPorts_, vector<int32_t>) };
    inline CreateDomainRequestListen& setHttpPorts(const vector<int32_t> & httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };
    inline CreateDomainRequestListen& setHttpPorts(vector<int32_t> && httpPorts) { DARABONBA_PTR_SET_RVALUE(httpPorts_, httpPorts) };


    // httpsPorts Field Functions 
    bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
    void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
    inline const vector<int32_t> & httpsPorts() const { DARABONBA_PTR_GET_CONST(httpsPorts_, vector<int32_t>) };
    inline vector<int32_t> httpsPorts() { DARABONBA_PTR_GET(httpsPorts_, vector<int32_t>) };
    inline CreateDomainRequestListen& setHttpsPorts(const vector<int32_t> & httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };
    inline CreateDomainRequestListen& setHttpsPorts(vector<int32_t> && httpsPorts) { DARABONBA_PTR_SET_RVALUE(httpsPorts_, httpsPorts) };


    // IPv6Enabled Field Functions 
    bool hasIPv6Enabled() const { return this->IPv6Enabled_ != nullptr;};
    void deleteIPv6Enabled() { this->IPv6Enabled_ = nullptr;};
    inline bool IPv6Enabled() const { DARABONBA_PTR_GET_DEFAULT(IPv6Enabled_, false) };
    inline CreateDomainRequestListen& setIPv6Enabled(bool IPv6Enabled) { DARABONBA_PTR_SET_VALUE(IPv6Enabled_, IPv6Enabled) };


    // protectionResource Field Functions 
    bool hasProtectionResource() const { return this->protectionResource_ != nullptr;};
    void deleteProtectionResource() { this->protectionResource_ = nullptr;};
    inline string protectionResource() const { DARABONBA_PTR_GET_DEFAULT(protectionResource_, "") };
    inline CreateDomainRequestListen& setProtectionResource(string protectionResource) { DARABONBA_PTR_SET_VALUE(protectionResource_, protectionResource) };


    // SM2AccessOnly Field Functions 
    bool hasSM2AccessOnly() const { return this->SM2AccessOnly_ != nullptr;};
    void deleteSM2AccessOnly() { this->SM2AccessOnly_ = nullptr;};
    inline bool SM2AccessOnly() const { DARABONBA_PTR_GET_DEFAULT(SM2AccessOnly_, false) };
    inline CreateDomainRequestListen& setSM2AccessOnly(bool SM2AccessOnly) { DARABONBA_PTR_SET_VALUE(SM2AccessOnly_, SM2AccessOnly) };


    // SM2CertId Field Functions 
    bool hasSM2CertId() const { return this->SM2CertId_ != nullptr;};
    void deleteSM2CertId() { this->SM2CertId_ = nullptr;};
    inline string SM2CertId() const { DARABONBA_PTR_GET_DEFAULT(SM2CertId_, "") };
    inline CreateDomainRequestListen& setSM2CertId(string SM2CertId) { DARABONBA_PTR_SET_VALUE(SM2CertId_, SM2CertId) };


    // SM2Enabled Field Functions 
    bool hasSM2Enabled() const { return this->SM2Enabled_ != nullptr;};
    void deleteSM2Enabled() { this->SM2Enabled_ = nullptr;};
    inline bool SM2Enabled() const { DARABONBA_PTR_GET_DEFAULT(SM2Enabled_, false) };
    inline CreateDomainRequestListen& setSM2Enabled(bool SM2Enabled) { DARABONBA_PTR_SET_VALUE(SM2Enabled_, SM2Enabled) };


    // TLSVersion Field Functions 
    bool hasTLSVersion() const { return this->TLSVersion_ != nullptr;};
    void deleteTLSVersion() { this->TLSVersion_ = nullptr;};
    inline string TLSVersion() const { DARABONBA_PTR_GET_DEFAULT(TLSVersion_, "") };
    inline CreateDomainRequestListen& setTLSVersion(string TLSVersion) { DARABONBA_PTR_SET_VALUE(TLSVersion_, TLSVersion) };


    // xffHeaderMode Field Functions 
    bool hasXffHeaderMode() const { return this->xffHeaderMode_ != nullptr;};
    void deleteXffHeaderMode() { this->xffHeaderMode_ = nullptr;};
    inline int32_t xffHeaderMode() const { DARABONBA_PTR_GET_DEFAULT(xffHeaderMode_, 0) };
    inline CreateDomainRequestListen& setXffHeaderMode(int32_t xffHeaderMode) { DARABONBA_PTR_SET_VALUE(xffHeaderMode_, xffHeaderMode) };


    // xffHeaders Field Functions 
    bool hasXffHeaders() const { return this->xffHeaders_ != nullptr;};
    void deleteXffHeaders() { this->xffHeaders_ = nullptr;};
    inline const vector<string> & xffHeaders() const { DARABONBA_PTR_GET_CONST(xffHeaders_, vector<string>) };
    inline vector<string> xffHeaders() { DARABONBA_PTR_GET(xffHeaders_, vector<string>) };
    inline CreateDomainRequestListen& setXffHeaders(const vector<string> & xffHeaders) { DARABONBA_PTR_SET_VALUE(xffHeaders_, xffHeaders) };
    inline CreateDomainRequestListen& setXffHeaders(vector<string> && xffHeaders) { DARABONBA_PTR_SET_RVALUE(xffHeaders_, xffHeaders) };


  protected:
    // The ID of the certificate that you want to add. This parameter is available only if you specify **HttpsPorts**.
    std::shared_ptr<string> certId_ = nullptr;
    // The type of the cipher suites that you want to add. This parameter is available only if you specify **HttpsPorts**. Valid values:
    // 
    // *   **1**: all cipher suites.
    // *   **2**: strong cipher suites. This value is available only if you set **TLSVersion** to **tlsv1.2**.
    // *   **99**: custom cipher suites.
    std::shared_ptr<int32_t> cipherSuite_ = nullptr;
    // The custom cipher suites that you want to add.
    std::shared_ptr<vector<string>> customCiphers_ = nullptr;
    // Specifies whether to support TLS 1.3. This parameter is available only if you specify **HttpsPorts**. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableTLSv3_ = nullptr;
    // Specifies whether to enable the exclusive IP address feature. This parameter is available only if you set **IPv6Enabled** to **false** and **ProtectionResource** to **share**. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> exclusiveIp_ = nullptr;
    // Specifies whether to enable force redirect from HTTP to HTTPS for received requests. This parameter is available only if you specify HttpsPorts and leave HttpPorts empty. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> focusHttps_ = nullptr;
    // Specifies whether to enable HTTP/2. This parameter is available only if you specify **HttpsPorts**. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> http2Enabled_ = nullptr;
    // The HTTP listener ports.
    std::shared_ptr<vector<int32_t>> httpPorts_ = nullptr;
    // The HTTPS listener ports.
    std::shared_ptr<vector<int32_t>> httpsPorts_ = nullptr;
    // Specifies whether to enable IPv6 protection. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> IPv6Enabled_ = nullptr;
    // The type of the protection resource. Valid values:
    // 
    // *   **share** (default): a shared cluster.
    // *   **gslb**: shared cluster-based intelligent load balancing.
    std::shared_ptr<string> protectionResource_ = nullptr;
    // Specifies whether to allow access only from SM certificate-based clients. This parameter is available only if you set SM2Enabled to true.
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> SM2AccessOnly_ = nullptr;
    // The ID of the SM certificate that you want to add. This parameter is available only if you set SM2Enabled to true.
    std::shared_ptr<string> SM2CertId_ = nullptr;
    // Specifies whether to add an SM certificate.
    std::shared_ptr<bool> SM2Enabled_ = nullptr;
    // The Transport Layer Security (TLS) version that you want to add. This parameter is available only if you specify **HttpsPorts**. Valid values:
    // 
    // *   **tlsv1**
    // *   **tlsv1.1**
    // *   **tlsv1.2**
    std::shared_ptr<string> TLSVersion_ = nullptr;
    // The method that is used to obtain the originating IP address of a client. Valid values:
    // 
    // *   **0** (default): Client traffic is not filtered by a Layer 7 proxy before the traffic reaches WAF.
    // *   **1**: WAF reads the first value of the X-Forwarded-For (XFF) header field as the originating IP address of the client.
    // *   **2**: WAF reads the value of a custom header field as the originating IP address of the client.
    std::shared_ptr<int32_t> xffHeaderMode_ = nullptr;
    // The custom header fields that are used to obtain the originating IP address of a client.
    std::shared_ptr<vector<string>> xffHeaders_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
