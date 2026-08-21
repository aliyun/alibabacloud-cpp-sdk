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
      DARABONBA_PTR_TO_JSON(domainScope, domainScope_);
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
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(caCertIdentifier, caCertIdentifier_);
      DARABONBA_PTR_FROM_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(clientCACert, clientCACert_);
      DARABONBA_PTR_FROM_JSON(domainScope, domainScope_);
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
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
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
        && this->certIdentifier_ == nullptr && this->clientCACert_ == nullptr && this->domainScope_ == nullptr && this->forceHttps_ == nullptr && this->gatewayType_ == nullptr
        && this->http2Option_ == nullptr && this->mTLSEnabled_ == nullptr && this->name_ == nullptr && this->protocol_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tlsCipherSuitesConfig_ == nullptr && this->tlsMax_ == nullptr && this->tlsMin_ == nullptr && this->clientToken_ == nullptr && this->dryRun_ == nullptr; };
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


    // domainScope Field Functions 
    bool hasDomainScope() const { return this->domainScope_ != nullptr;};
    void deleteDomainScope() { this->domainScope_ = nullptr;};
    inline string getDomainScope() const { DARABONBA_PTR_GET_DEFAULT(domainScope_, "") };
    inline CreateDomainRequest& setDomainScope(string domainScope) { DARABONBA_PTR_SET_VALUE(domainScope_, domainScope) };


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


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDomainRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateDomainRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The CA certificate identifier. This parameter is optional for Dedicated with HTTPS. This parameter is not allowed for Serverless and is not validated for Dedicated with HTTP.
    shared_ptr<string> caCertIdentifier_ {};
    // The certificate identifier. This parameter is required for Dedicated with HTTPS and must pass validation. This parameter is not allowed for Serverless and is not validated for Dedicated with HTTP.
    shared_ptr<string> certIdentifier_ {};
    // The client CA certificate. This parameter is conditionally required for Dedicated with HTTPS (required when MTLSEnabled is set to true). This parameter is not allowed for Serverless and is not validated for Dedicated with HTTP.
    shared_ptr<string> clientCACert_ {};
    // The domain scope. Valid values: Dedicated (dedicated gateway domain name), Serverless (Serverless gateway domain name). Default value: Dedicated.
    shared_ptr<string> domainScope_ {};
    // Specifies whether to enable forced HTTPS redirect when the protocol type is HTTPS. This parameter is required for Serverless and for Dedicated with HTTPS. This parameter is not validated for Dedicated with HTTP.
    shared_ptr<bool> forceHttps_ {};
    // The gateway type. If not specified, the default value is API.
    shared_ptr<string> gatewayType_ {};
    // The HTTP/2 setting. Valid values: GlobalConfig (follows the global configuration), Open (enabled), Close (disabled). Default value: GlobalConfig. This setting is supported only for HTTPS domain names in the Dedicated scope.
    shared_ptr<string> http2Option_ {};
    // Specifies whether to enable mTLS mutual authentication. This parameter is optional for Dedicated with HTTPS. If set to true, ClientCACert is required. This parameter is not allowed for Serverless.
    shared_ptr<bool> mTLSEnabled_ {};
    // The domain name. The name must be 1 to 128 characters in length, such as abc.com.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The protocol type used by the domain name. Valid values: HTTP, HTTPS. This parameter is required for the Dedicated scope and is not allowed for the Serverless scope.
    shared_ptr<string> protocol_ {};
    // The [resource group ID](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    // The TLS cipher suite configuration, including the configuration type, cipher suite names, and supported TLS versions. This configuration is supported only for HTTPS domain names in the Dedicated scope.
    shared_ptr<TlsCipherSuitesConfig> tlsCipherSuitesConfig_ {};
    // The maximum TLS protocol version. This parameter is optional for Dedicated with HTTPS. If not specified, the value is derived from TlsMin. The value must be greater than or equal to TlsMin. This parameter is not allowed for Serverless.
    shared_ptr<string> tlsMax_ {};
    // The minimum TLS protocol version. This parameter is optional for Dedicated with HTTPS. If not specified, the default value is TLS 1.0. Valid values range from TLS 1.0 to TLS 1.3, compatible with TLSv1.x. This parameter is not allowed for Serverless.
    shared_ptr<string> tlsMin_ {};
    // The idempotency token generated by the caller as a globally unique value (UUID recommended). The value must be up to 64 characters in length. Within approximately 24 hours after the first successful request, a duplicate request with the same ClientToken and identical request parameters directly returns the domainId created by the first request without creating a duplicate domain name. If the same ClientToken is used with different request parameters, an IdempotentParameterMismatch error is returned. If the first request is still being processed, an IdempotentProcessing error is returned. If this parameter is not specified, idempotency control is not enabled, and the behavior is consistent with the existing version.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run. If set to true, all synchronous validations consistent with actual creation are performed (including idempotency checks for existing test domain names), but no domain name is created and no side effects are produced. If not specified or set to false, the behavior is consistent with the existing version.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
