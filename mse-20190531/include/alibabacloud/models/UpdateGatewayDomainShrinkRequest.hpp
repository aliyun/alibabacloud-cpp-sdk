// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYDOMAINSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYDOMAINSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayDomainShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayDomainShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(CaCertIdentifier, caCertIdentifier_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Http2, http2_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MtlsEnabled, mtlsEnabled_);
      DARABONBA_PTR_TO_JSON(MustHttps, mustHttps_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(TlsCipherSuitesConfigJSON, tlsCipherSuitesConfigJSONShrink_);
      DARABONBA_PTR_TO_JSON(TlsMax, tlsMax_);
      DARABONBA_PTR_TO_JSON(TlsMin, tlsMin_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayDomainShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(CaCertIdentifier, caCertIdentifier_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Http2, http2_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MtlsEnabled, mtlsEnabled_);
      DARABONBA_PTR_FROM_JSON(MustHttps, mustHttps_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(TlsCipherSuitesConfigJSON, tlsCipherSuitesConfigJSONShrink_);
      DARABONBA_PTR_FROM_JSON(TlsMax, tlsMax_);
      DARABONBA_PTR_FROM_JSON(TlsMin, tlsMin_);
    };
    UpdateGatewayDomainShrinkRequest() = default ;
    UpdateGatewayDomainShrinkRequest(const UpdateGatewayDomainShrinkRequest &) = default ;
    UpdateGatewayDomainShrinkRequest(UpdateGatewayDomainShrinkRequest &&) = default ;
    UpdateGatewayDomainShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayDomainShrinkRequest() = default ;
    UpdateGatewayDomainShrinkRequest& operator=(const UpdateGatewayDomainShrinkRequest &) = default ;
    UpdateGatewayDomainShrinkRequest& operator=(UpdateGatewayDomainShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->caCertIdentifier_ == nullptr && this->certIdentifier_ == nullptr && this->enableWaf_ == nullptr && this->gatewayUniqueId_ == nullptr && this->http2_ == nullptr
        && this->id_ == nullptr && this->mtlsEnabled_ == nullptr && this->mustHttps_ == nullptr && this->protocol_ == nullptr && this->tlsCipherSuitesConfigJSONShrink_ == nullptr
        && this->tlsMax_ == nullptr && this->tlsMin_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayDomainShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // caCertIdentifier Field Functions 
    bool hasCaCertIdentifier() const { return this->caCertIdentifier_ != nullptr;};
    void deleteCaCertIdentifier() { this->caCertIdentifier_ = nullptr;};
    inline string getCaCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(caCertIdentifier_, "") };
    inline UpdateGatewayDomainShrinkRequest& setCaCertIdentifier(string caCertIdentifier) { DARABONBA_PTR_SET_VALUE(caCertIdentifier_, caCertIdentifier) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline UpdateGatewayDomainShrinkRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // enableWaf Field Functions 
    bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
    void deleteEnableWaf() { this->enableWaf_ = nullptr;};
    inline bool getEnableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
    inline UpdateGatewayDomainShrinkRequest& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayDomainShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // http2 Field Functions 
    bool hasHttp2() const { return this->http2_ != nullptr;};
    void deleteHttp2() { this->http2_ = nullptr;};
    inline string getHttp2() const { DARABONBA_PTR_GET_DEFAULT(http2_, "") };
    inline UpdateGatewayDomainShrinkRequest& setHttp2(string http2) { DARABONBA_PTR_SET_VALUE(http2_, http2) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayDomainShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mtlsEnabled Field Functions 
    bool hasMtlsEnabled() const { return this->mtlsEnabled_ != nullptr;};
    void deleteMtlsEnabled() { this->mtlsEnabled_ = nullptr;};
    inline bool getMtlsEnabled() const { DARABONBA_PTR_GET_DEFAULT(mtlsEnabled_, false) };
    inline UpdateGatewayDomainShrinkRequest& setMtlsEnabled(bool mtlsEnabled) { DARABONBA_PTR_SET_VALUE(mtlsEnabled_, mtlsEnabled) };


    // mustHttps Field Functions 
    bool hasMustHttps() const { return this->mustHttps_ != nullptr;};
    void deleteMustHttps() { this->mustHttps_ = nullptr;};
    inline bool getMustHttps() const { DARABONBA_PTR_GET_DEFAULT(mustHttps_, false) };
    inline UpdateGatewayDomainShrinkRequest& setMustHttps(bool mustHttps) { DARABONBA_PTR_SET_VALUE(mustHttps_, mustHttps) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateGatewayDomainShrinkRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // tlsCipherSuitesConfigJSONShrink Field Functions 
    bool hasTlsCipherSuitesConfigJSONShrink() const { return this->tlsCipherSuitesConfigJSONShrink_ != nullptr;};
    void deleteTlsCipherSuitesConfigJSONShrink() { this->tlsCipherSuitesConfigJSONShrink_ = nullptr;};
    inline string getTlsCipherSuitesConfigJSONShrink() const { DARABONBA_PTR_GET_DEFAULT(tlsCipherSuitesConfigJSONShrink_, "") };
    inline UpdateGatewayDomainShrinkRequest& setTlsCipherSuitesConfigJSONShrink(string tlsCipherSuitesConfigJSONShrink) { DARABONBA_PTR_SET_VALUE(tlsCipherSuitesConfigJSONShrink_, tlsCipherSuitesConfigJSONShrink) };


    // tlsMax Field Functions 
    bool hasTlsMax() const { return this->tlsMax_ != nullptr;};
    void deleteTlsMax() { this->tlsMax_ = nullptr;};
    inline string getTlsMax() const { DARABONBA_PTR_GET_DEFAULT(tlsMax_, "") };
    inline UpdateGatewayDomainShrinkRequest& setTlsMax(string tlsMax) { DARABONBA_PTR_SET_VALUE(tlsMax_, tlsMax) };


    // tlsMin Field Functions 
    bool hasTlsMin() const { return this->tlsMin_ != nullptr;};
    void deleteTlsMin() { this->tlsMin_ = nullptr;};
    inline string getTlsMin() const { DARABONBA_PTR_GET_DEFAULT(tlsMin_, "") };
    inline UpdateGatewayDomainShrinkRequest& setTlsMin(string tlsMin) { DARABONBA_PTR_SET_VALUE(tlsMin_, tlsMin) };


  protected:
    // The language of the returned information. Valid values:
    // - zh: Chinese (default).
    // - en: English.
    shared_ptr<string> acceptLanguage_ {};
    // The CA certificate content.
    shared_ptr<string> caCertIdentifier_ {};
    // The certificate ID.
    shared_ptr<string> certIdentifier_ {};
    // Specifies whether to enable Web Application Firewall (WAF) for the gateway domain name.
    shared_ptr<bool> enableWaf_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // Specifies whether to enable HTTP/2. Valid values:
    // - `open`: enables HTTP/2.
    // - `close`: disables HTTP/2.
    // - `globalConfig`: uses the global configuration.
    shared_ptr<string> http2_ {};
    // The ID of the domain name to be updated.
    shared_ptr<int64_t> id_ {};
    // Specifies whether to enable mTLS.
    shared_ptr<bool> mtlsEnabled_ {};
    // Specifies whether to force HTTPS.
    shared_ptr<bool> mustHttps_ {};
    // The protocol type. Valid values:
    // - HTTPS
    // - HTTP
    shared_ptr<string> protocol_ {};
    // The TLS cipher suite configuration.
    shared_ptr<string> tlsCipherSuitesConfigJSONShrink_ {};
    // The maximum TLS version.
    shared_ptr<string> tlsMax_ {};
    // The minimum TLS version.
    shared_ptr<string> tlsMin_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
