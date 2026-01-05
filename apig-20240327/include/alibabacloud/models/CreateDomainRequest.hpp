// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TlsCipherSuitesConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(caCertIdentifier, caCertIdentifier_);
      DARABONBA_PTR_TO_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(clientCACert, clientCACert_);
      DARABONBA_PTR_TO_JSON(forceHttps, forceHttps_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(http2Option, http2Option_);
      DARABONBA_PTR_TO_JSON(mTLSEnabled, mTLSEnabled_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tlsCipherSuitesConfig, tlsCipherSuitesConfig_);
      DARABONBA_PTR_TO_JSON(tlsMax, tlsMax_);
      DARABONBA_PTR_TO_JSON(tlsMin, tlsMin_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(caCertIdentifier, caCertIdentifier_);
      DARABONBA_PTR_FROM_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(clientCACert, clientCACert_);
      DARABONBA_PTR_FROM_JSON(forceHttps, forceHttps_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(http2Option, http2Option_);
      DARABONBA_PTR_FROM_JSON(mTLSEnabled, mTLSEnabled_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tlsCipherSuitesConfig, tlsCipherSuitesConfig_);
      DARABONBA_PTR_FROM_JSON(tlsMax, tlsMax_);
      DARABONBA_PTR_FROM_JSON(tlsMin, tlsMin_);
    };
    CreateDomainRequest() = default ;
    CreateDomainRequest(const CreateDomainRequest &) = default ;
    CreateDomainRequest(CreateDomainRequest &&) = default ;
    CreateDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainRequest() = default ;
    CreateDomainRequest& operator=(const CreateDomainRequest &) = default ;
    CreateDomainRequest& operator=(CreateDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caCertIdentifier_ == nullptr
        && this->certIdentifier_ == nullptr && this->clientCACert_ == nullptr && this->forceHttps_ == nullptr && this->gatewayType_ == nullptr && this->http2Option_ == nullptr
        && this->mTLSEnabled_ == nullptr && this->name_ == nullptr && this->protocol_ == nullptr && this->resourceGroupId_ == nullptr && this->tlsCipherSuitesConfig_ == nullptr
        && this->tlsMax_ == nullptr && this->tlsMin_ == nullptr; };
    // caCertIdentifier Field Functions 
    bool hasCaCertIdentifier() const { return this->caCertIdentifier_ != nullptr;};
    void deleteCaCertIdentifier() { this->caCertIdentifier_ = nullptr;};
    inline string getCaCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(caCertIdentifier_, "") };
    inline CreateDomainRequest& setCaCertIdentifier(string caCertIdentifier) { DARABONBA_PTR_SET_VALUE(caCertIdentifier_, caCertIdentifier) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline CreateDomainRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // clientCACert Field Functions 
    bool hasClientCACert() const { return this->clientCACert_ != nullptr;};
    void deleteClientCACert() { this->clientCACert_ = nullptr;};
    inline string getClientCACert() const { DARABONBA_PTR_GET_DEFAULT(clientCACert_, "") };
    inline CreateDomainRequest& setClientCACert(string clientCACert) { DARABONBA_PTR_SET_VALUE(clientCACert_, clientCACert) };


    // forceHttps Field Functions 
    bool hasForceHttps() const { return this->forceHttps_ != nullptr;};
    void deleteForceHttps() { this->forceHttps_ = nullptr;};
    inline bool getForceHttps() const { DARABONBA_PTR_GET_DEFAULT(forceHttps_, false) };
    inline CreateDomainRequest& setForceHttps(bool forceHttps) { DARABONBA_PTR_SET_VALUE(forceHttps_, forceHttps) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline CreateDomainRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // http2Option Field Functions 
    bool hasHttp2Option() const { return this->http2Option_ != nullptr;};
    void deleteHttp2Option() { this->http2Option_ = nullptr;};
    inline string getHttp2Option() const { DARABONBA_PTR_GET_DEFAULT(http2Option_, "") };
    inline CreateDomainRequest& setHttp2Option(string http2Option) { DARABONBA_PTR_SET_VALUE(http2Option_, http2Option) };


    // mTLSEnabled Field Functions 
    bool hasMTLSEnabled() const { return this->mTLSEnabled_ != nullptr;};
    void deleteMTLSEnabled() { this->mTLSEnabled_ = nullptr;};
    inline bool getMTLSEnabled() const { DARABONBA_PTR_GET_DEFAULT(mTLSEnabled_, false) };
    inline CreateDomainRequest& setMTLSEnabled(bool mTLSEnabled) { DARABONBA_PTR_SET_VALUE(mTLSEnabled_, mTLSEnabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDomainRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateDomainRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDomainRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tlsCipherSuitesConfig Field Functions 
    bool hasTlsCipherSuitesConfig() const { return this->tlsCipherSuitesConfig_ != nullptr;};
    void deleteTlsCipherSuitesConfig() { this->tlsCipherSuitesConfig_ = nullptr;};
    inline const TlsCipherSuitesConfig & getTlsCipherSuitesConfig() const { DARABONBA_PTR_GET_CONST(tlsCipherSuitesConfig_, TlsCipherSuitesConfig) };
    inline TlsCipherSuitesConfig getTlsCipherSuitesConfig() { DARABONBA_PTR_GET(tlsCipherSuitesConfig_, TlsCipherSuitesConfig) };
    inline CreateDomainRequest& setTlsCipherSuitesConfig(const TlsCipherSuitesConfig & tlsCipherSuitesConfig) { DARABONBA_PTR_SET_VALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };
    inline CreateDomainRequest& setTlsCipherSuitesConfig(TlsCipherSuitesConfig && tlsCipherSuitesConfig) { DARABONBA_PTR_SET_RVALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };


    // tlsMax Field Functions 
    bool hasTlsMax() const { return this->tlsMax_ != nullptr;};
    void deleteTlsMax() { this->tlsMax_ = nullptr;};
    inline string getTlsMax() const { DARABONBA_PTR_GET_DEFAULT(tlsMax_, "") };
    inline CreateDomainRequest& setTlsMax(string tlsMax) { DARABONBA_PTR_SET_VALUE(tlsMax_, tlsMax) };


    // tlsMin Field Functions 
    bool hasTlsMin() const { return this->tlsMin_ != nullptr;};
    void deleteTlsMin() { this->tlsMin_ = nullptr;};
    inline string getTlsMin() const { DARABONBA_PTR_GET_DEFAULT(tlsMin_, "") };
    inline CreateDomainRequest& setTlsMin(string tlsMin) { DARABONBA_PTR_SET_VALUE(tlsMin_, tlsMin) };


  protected:
    // The CA certificate ID.
    shared_ptr<string> caCertIdentifier_ {};
    // The certificate ID.
    shared_ptr<string> certIdentifier_ {};
    // The client CA certificate.
    shared_ptr<string> clientCACert_ {};
    // Specifies whether to enable forcible HTTPS redirection.
    shared_ptr<bool> forceHttps_ {};
    shared_ptr<string> gatewayType_ {};
    // The HTTP/2 configuration.
    // 
    // Valid values:
    // 
    // *   GlobalConfig
    // *   Close
    // *   Open
    shared_ptr<string> http2Option_ {};
    // Specifies whether to enable mutual authentication.
    shared_ptr<bool> mTLSEnabled_ {};
    // The domain name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The protocol type supported by the domain name.
    // 
    // *   HTTP: Only HTTP is supported.
    // *   HTTPS: Only HTTPS is supported.
    // 
    // This parameter is required.
    shared_ptr<string> protocol_ {};
    // The [resource group ID](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    // The cipher suite configuration.
    shared_ptr<TlsCipherSuitesConfig> tlsCipherSuitesConfig_ {};
    // The maximum version of the TLS protocol. Up to TLS 1.3 is supported.
    shared_ptr<string> tlsMax_ {};
    // The minimum version of the TLS protocol. Down to TLS 1.0 is supported.
    shared_ptr<string> tlsMin_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
