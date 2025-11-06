// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddGatewayDomainRequestTlsCipherSuitesConfigJSON.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddGatewayDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Http2, http2_);
      DARABONBA_PTR_TO_JSON(MustHttps, mustHttps_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(TlsCipherSuitesConfigJSON, tlsCipherSuitesConfigJSON_);
      DARABONBA_PTR_TO_JSON(TlsMax, tlsMax_);
      DARABONBA_PTR_TO_JSON(TlsMin, tlsMin_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Http2, http2_);
      DARABONBA_PTR_FROM_JSON(MustHttps, mustHttps_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(TlsCipherSuitesConfigJSON, tlsCipherSuitesConfigJSON_);
      DARABONBA_PTR_FROM_JSON(TlsMax, tlsMax_);
      DARABONBA_PTR_FROM_JSON(TlsMin, tlsMin_);
    };
    AddGatewayDomainRequest() = default ;
    AddGatewayDomainRequest(const AddGatewayDomainRequest &) = default ;
    AddGatewayDomainRequest(AddGatewayDomainRequest &&) = default ;
    AddGatewayDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayDomainRequest() = default ;
    AddGatewayDomainRequest& operator=(const AddGatewayDomainRequest &) = default ;
    AddGatewayDomainRequest& operator=(AddGatewayDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->certIdentifier_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->http2_ == nullptr && return this->mustHttps_ == nullptr && return this->name_ == nullptr
        && return this->protocol_ == nullptr && return this->tlsCipherSuitesConfigJSON_ == nullptr && return this->tlsMax_ == nullptr && return this->tlsMin_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddGatewayDomainRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline AddGatewayDomainRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddGatewayDomainRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // http2 Field Functions 
    bool hasHttp2() const { return this->http2_ != nullptr;};
    void deleteHttp2() { this->http2_ = nullptr;};
    inline string http2() const { DARABONBA_PTR_GET_DEFAULT(http2_, "") };
    inline AddGatewayDomainRequest& setHttp2(string http2) { DARABONBA_PTR_SET_VALUE(http2_, http2) };


    // mustHttps Field Functions 
    bool hasMustHttps() const { return this->mustHttps_ != nullptr;};
    void deleteMustHttps() { this->mustHttps_ = nullptr;};
    inline bool mustHttps() const { DARABONBA_PTR_GET_DEFAULT(mustHttps_, false) };
    inline AddGatewayDomainRequest& setMustHttps(bool mustHttps) { DARABONBA_PTR_SET_VALUE(mustHttps_, mustHttps) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddGatewayDomainRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline AddGatewayDomainRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // tlsCipherSuitesConfigJSON Field Functions 
    bool hasTlsCipherSuitesConfigJSON() const { return this->tlsCipherSuitesConfigJSON_ != nullptr;};
    void deleteTlsCipherSuitesConfigJSON() { this->tlsCipherSuitesConfigJSON_ = nullptr;};
    inline const AddGatewayDomainRequestTlsCipherSuitesConfigJSON & tlsCipherSuitesConfigJSON() const { DARABONBA_PTR_GET_CONST(tlsCipherSuitesConfigJSON_, AddGatewayDomainRequestTlsCipherSuitesConfigJSON) };
    inline AddGatewayDomainRequestTlsCipherSuitesConfigJSON tlsCipherSuitesConfigJSON() { DARABONBA_PTR_GET(tlsCipherSuitesConfigJSON_, AddGatewayDomainRequestTlsCipherSuitesConfigJSON) };
    inline AddGatewayDomainRequest& setTlsCipherSuitesConfigJSON(const AddGatewayDomainRequestTlsCipherSuitesConfigJSON & tlsCipherSuitesConfigJSON) { DARABONBA_PTR_SET_VALUE(tlsCipherSuitesConfigJSON_, tlsCipherSuitesConfigJSON) };
    inline AddGatewayDomainRequest& setTlsCipherSuitesConfigJSON(AddGatewayDomainRequestTlsCipherSuitesConfigJSON && tlsCipherSuitesConfigJSON) { DARABONBA_PTR_SET_RVALUE(tlsCipherSuitesConfigJSON_, tlsCipherSuitesConfigJSON) };


    // tlsMax Field Functions 
    bool hasTlsMax() const { return this->tlsMax_ != nullptr;};
    void deleteTlsMax() { this->tlsMax_ = nullptr;};
    inline string tlsMax() const { DARABONBA_PTR_GET_DEFAULT(tlsMax_, "") };
    inline AddGatewayDomainRequest& setTlsMax(string tlsMax) { DARABONBA_PTR_SET_VALUE(tlsMax_, tlsMax) };


    // tlsMin Field Functions 
    bool hasTlsMin() const { return this->tlsMin_ != nullptr;};
    void deleteTlsMin() { this->tlsMin_ = nullptr;};
    inline string tlsMin() const { DARABONBA_PTR_GET_DEFAULT(tlsMin_, "") };
    inline AddGatewayDomainRequest& setTlsMin(string tlsMin) { DARABONBA_PTR_SET_VALUE(tlsMin_, tlsMin) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // Specifies whether to enable `HTTP/2`.
    // 
    // *   `open`: enables `HTTP/2`
    // *   `close`: disables `HTTP/2`
    // *   `globalConfig`: uses global configurations
    std::shared_ptr<string> http2_ = nullptr;
    // Specifies whether to enable HTTPS.
    std::shared_ptr<bool> mustHttps_ = nullptr;
    // The domain name.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the protocol. Valid values:
    // 
    // *   `HTTP`
    // *   `HTTPS`
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<AddGatewayDomainRequestTlsCipherSuitesConfigJSON> tlsCipherSuitesConfigJSON_ = nullptr;
    // The maximum version of Transport Layer Security (TLS).
    std::shared_ptr<string> tlsMax_ = nullptr;
    // The minimum version of TLS.
    std::shared_ptr<string> tlsMin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
