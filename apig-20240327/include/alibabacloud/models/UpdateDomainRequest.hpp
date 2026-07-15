// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOMAINREQUEST_HPP_
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
  class UpdateDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(caCertIdentifier, caCertIdentifier_);
      DARABONBA_PTR_TO_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(clientCACert, clientCACert_);
      DARABONBA_PTR_TO_JSON(domainScope, domainScope_);
      DARABONBA_PTR_TO_JSON(forceHttps, forceHttps_);
      DARABONBA_PTR_TO_JSON(http2Option, http2Option_);
      DARABONBA_PTR_TO_JSON(mTLSEnabled, mTLSEnabled_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(tlsCipherSuitesConfig, tlsCipherSuitesConfig_);
      DARABONBA_PTR_TO_JSON(tlsMax, tlsMax_);
      DARABONBA_PTR_TO_JSON(tlsMin, tlsMin_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(caCertIdentifier, caCertIdentifier_);
      DARABONBA_PTR_FROM_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(clientCACert, clientCACert_);
      DARABONBA_PTR_FROM_JSON(domainScope, domainScope_);
      DARABONBA_PTR_FROM_JSON(forceHttps, forceHttps_);
      DARABONBA_PTR_FROM_JSON(http2Option, http2Option_);
      DARABONBA_PTR_FROM_JSON(mTLSEnabled, mTLSEnabled_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(tlsCipherSuitesConfig, tlsCipherSuitesConfig_);
      DARABONBA_PTR_FROM_JSON(tlsMax, tlsMax_);
      DARABONBA_PTR_FROM_JSON(tlsMin, tlsMin_);
    };
    UpdateDomainRequest() = default ;
    UpdateDomainRequest(const UpdateDomainRequest &) = default ;
    UpdateDomainRequest(UpdateDomainRequest &&) = default ;
    UpdateDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDomainRequest() = default ;
    UpdateDomainRequest& operator=(const UpdateDomainRequest &) = default ;
    UpdateDomainRequest& operator=(UpdateDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caCertIdentifier_ == nullptr
        && this->certIdentifier_ == nullptr && this->clientCACert_ == nullptr && this->domainScope_ == nullptr && this->forceHttps_ == nullptr && this->http2Option_ == nullptr
        && this->mTLSEnabled_ == nullptr && this->protocol_ == nullptr && this->tlsCipherSuitesConfig_ == nullptr && this->tlsMax_ == nullptr && this->tlsMin_ == nullptr; };
    // caCertIdentifier Field Functions 
    bool hasCaCertIdentifier() const { return this->caCertIdentifier_ != nullptr;};
    void deleteCaCertIdentifier() { this->caCertIdentifier_ = nullptr;};
    inline string getCaCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(caCertIdentifier_, "") };
    inline UpdateDomainRequest& setCaCertIdentifier(string caCertIdentifier) { DARABONBA_PTR_SET_VALUE(caCertIdentifier_, caCertIdentifier) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline UpdateDomainRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // clientCACert Field Functions 
    bool hasClientCACert() const { return this->clientCACert_ != nullptr;};
    void deleteClientCACert() { this->clientCACert_ = nullptr;};
    inline string getClientCACert() const { DARABONBA_PTR_GET_DEFAULT(clientCACert_, "") };
    inline UpdateDomainRequest& setClientCACert(string clientCACert) { DARABONBA_PTR_SET_VALUE(clientCACert_, clientCACert) };


    // domainScope Field Functions 
    bool hasDomainScope() const { return this->domainScope_ != nullptr;};
    void deleteDomainScope() { this->domainScope_ = nullptr;};
    inline string getDomainScope() const { DARABONBA_PTR_GET_DEFAULT(domainScope_, "") };
    inline UpdateDomainRequest& setDomainScope(string domainScope) { DARABONBA_PTR_SET_VALUE(domainScope_, domainScope) };


    // forceHttps Field Functions 
    bool hasForceHttps() const { return this->forceHttps_ != nullptr;};
    void deleteForceHttps() { this->forceHttps_ = nullptr;};
    inline bool getForceHttps() const { DARABONBA_PTR_GET_DEFAULT(forceHttps_, false) };
    inline UpdateDomainRequest& setForceHttps(bool forceHttps) { DARABONBA_PTR_SET_VALUE(forceHttps_, forceHttps) };


    // http2Option Field Functions 
    bool hasHttp2Option() const { return this->http2Option_ != nullptr;};
    void deleteHttp2Option() { this->http2Option_ = nullptr;};
    inline string getHttp2Option() const { DARABONBA_PTR_GET_DEFAULT(http2Option_, "") };
    inline UpdateDomainRequest& setHttp2Option(string http2Option) { DARABONBA_PTR_SET_VALUE(http2Option_, http2Option) };


    // mTLSEnabled Field Functions 
    bool hasMTLSEnabled() const { return this->mTLSEnabled_ != nullptr;};
    void deleteMTLSEnabled() { this->mTLSEnabled_ = nullptr;};
    inline bool getMTLSEnabled() const { DARABONBA_PTR_GET_DEFAULT(mTLSEnabled_, false) };
    inline UpdateDomainRequest& setMTLSEnabled(bool mTLSEnabled) { DARABONBA_PTR_SET_VALUE(mTLSEnabled_, mTLSEnabled) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateDomainRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // tlsCipherSuitesConfig Field Functions 
    bool hasTlsCipherSuitesConfig() const { return this->tlsCipherSuitesConfig_ != nullptr;};
    void deleteTlsCipherSuitesConfig() { this->tlsCipherSuitesConfig_ = nullptr;};
    inline const TlsCipherSuitesConfig & getTlsCipherSuitesConfig() const { DARABONBA_PTR_GET_CONST(tlsCipherSuitesConfig_, TlsCipherSuitesConfig) };
    inline TlsCipherSuitesConfig getTlsCipherSuitesConfig() { DARABONBA_PTR_GET(tlsCipherSuitesConfig_, TlsCipherSuitesConfig) };
    inline UpdateDomainRequest& setTlsCipherSuitesConfig(const TlsCipherSuitesConfig & tlsCipherSuitesConfig) { DARABONBA_PTR_SET_VALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };
    inline UpdateDomainRequest& setTlsCipherSuitesConfig(TlsCipherSuitesConfig && tlsCipherSuitesConfig) { DARABONBA_PTR_SET_RVALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };


    // tlsMax Field Functions 
    bool hasTlsMax() const { return this->tlsMax_ != nullptr;};
    void deleteTlsMax() { this->tlsMax_ = nullptr;};
    inline string getTlsMax() const { DARABONBA_PTR_GET_DEFAULT(tlsMax_, "") };
    inline UpdateDomainRequest& setTlsMax(string tlsMax) { DARABONBA_PTR_SET_VALUE(tlsMax_, tlsMax) };


    // tlsMin Field Functions 
    bool hasTlsMin() const { return this->tlsMin_ != nullptr;};
    void deleteTlsMin() { this->tlsMin_ = nullptr;};
    inline string getTlsMin() const { DARABONBA_PTR_GET_DEFAULT(tlsMin_, "") };
    inline UpdateDomainRequest& setTlsMin(string tlsMin) { DARABONBA_PTR_SET_VALUE(tlsMin_, tlsMin) };


  protected:
    // The CA certificate identifier.
    shared_ptr<string> caCertIdentifier_ {};
    // The certificate identifier.
    shared_ptr<string> certIdentifier_ {};
    // The client CA certificate.
    shared_ptr<string> clientCACert_ {};
    // The scope of the domain name.
    shared_ptr<string> domainScope_ {};
    // Specifies whether to enable forced HTTPS redirect when the protocol type is set to HTTPS. This parameter is required when the protocol is HTTPS.
    shared_ptr<bool> forceHttps_ {};
    // The HTTP/2 settings.
    shared_ptr<string> http2Option_ {};
    // Specifies whether to enable mutual TLS (mTLS) authentication.
    shared_ptr<bool> mTLSEnabled_ {};
    // The protocol type supported by the domain name.
    // 
    // - HTTP: Only HTTP is supported.
    // - HTTPS: Only HTTPS is supported.
    shared_ptr<string> protocol_ {};
    // The cipher suite configuration.
    shared_ptr<TlsCipherSuitesConfig> tlsCipherSuitesConfig_ {};
    // The maximum TLS protocol version. TLS 1.3 is the maximum supported version.
    shared_ptr<string> tlsMax_ {};
    // The minimum TLS protocol version. TLS 1.0 is the minimum supported version.
    shared_ptr<string> tlsMin_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
