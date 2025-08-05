// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    virtual bool empty() const override { this->caCertIdentifier_ != nullptr
        && this->certIdentifier_ != nullptr && this->clientCACert_ != nullptr && this->forceHttps_ != nullptr && this->http2Option_ != nullptr && this->mTLSEnabled_ != nullptr
        && this->protocol_ != nullptr && this->tlsCipherSuitesConfig_ != nullptr && this->tlsMax_ != nullptr && this->tlsMin_ != nullptr; };
    // caCertIdentifier Field Functions 
    bool hasCaCertIdentifier() const { return this->caCertIdentifier_ != nullptr;};
    void deleteCaCertIdentifier() { this->caCertIdentifier_ = nullptr;};
    inline string caCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(caCertIdentifier_, "") };
    inline UpdateDomainRequest& setCaCertIdentifier(string caCertIdentifier) { DARABONBA_PTR_SET_VALUE(caCertIdentifier_, caCertIdentifier) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline UpdateDomainRequest& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // clientCACert Field Functions 
    bool hasClientCACert() const { return this->clientCACert_ != nullptr;};
    void deleteClientCACert() { this->clientCACert_ = nullptr;};
    inline string clientCACert() const { DARABONBA_PTR_GET_DEFAULT(clientCACert_, "") };
    inline UpdateDomainRequest& setClientCACert(string clientCACert) { DARABONBA_PTR_SET_VALUE(clientCACert_, clientCACert) };


    // forceHttps Field Functions 
    bool hasForceHttps() const { return this->forceHttps_ != nullptr;};
    void deleteForceHttps() { this->forceHttps_ = nullptr;};
    inline bool forceHttps() const { DARABONBA_PTR_GET_DEFAULT(forceHttps_, false) };
    inline UpdateDomainRequest& setForceHttps(bool forceHttps) { DARABONBA_PTR_SET_VALUE(forceHttps_, forceHttps) };


    // http2Option Field Functions 
    bool hasHttp2Option() const { return this->http2Option_ != nullptr;};
    void deleteHttp2Option() { this->http2Option_ = nullptr;};
    inline string http2Option() const { DARABONBA_PTR_GET_DEFAULT(http2Option_, "") };
    inline UpdateDomainRequest& setHttp2Option(string http2Option) { DARABONBA_PTR_SET_VALUE(http2Option_, http2Option) };


    // mTLSEnabled Field Functions 
    bool hasMTLSEnabled() const { return this->mTLSEnabled_ != nullptr;};
    void deleteMTLSEnabled() { this->mTLSEnabled_ = nullptr;};
    inline bool mTLSEnabled() const { DARABONBA_PTR_GET_DEFAULT(mTLSEnabled_, false) };
    inline UpdateDomainRequest& setMTLSEnabled(bool mTLSEnabled) { DARABONBA_PTR_SET_VALUE(mTLSEnabled_, mTLSEnabled) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateDomainRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // tlsCipherSuitesConfig Field Functions 
    bool hasTlsCipherSuitesConfig() const { return this->tlsCipherSuitesConfig_ != nullptr;};
    void deleteTlsCipherSuitesConfig() { this->tlsCipherSuitesConfig_ = nullptr;};
    inline const TlsCipherSuitesConfig & tlsCipherSuitesConfig() const { DARABONBA_PTR_GET_CONST(tlsCipherSuitesConfig_, TlsCipherSuitesConfig) };
    inline TlsCipherSuitesConfig tlsCipherSuitesConfig() { DARABONBA_PTR_GET(tlsCipherSuitesConfig_, TlsCipherSuitesConfig) };
    inline UpdateDomainRequest& setTlsCipherSuitesConfig(const TlsCipherSuitesConfig & tlsCipherSuitesConfig) { DARABONBA_PTR_SET_VALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };
    inline UpdateDomainRequest& setTlsCipherSuitesConfig(TlsCipherSuitesConfig && tlsCipherSuitesConfig) { DARABONBA_PTR_SET_RVALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };


    // tlsMax Field Functions 
    bool hasTlsMax() const { return this->tlsMax_ != nullptr;};
    void deleteTlsMax() { this->tlsMax_ = nullptr;};
    inline string tlsMax() const { DARABONBA_PTR_GET_DEFAULT(tlsMax_, "") };
    inline UpdateDomainRequest& setTlsMax(string tlsMax) { DARABONBA_PTR_SET_VALUE(tlsMax_, tlsMax) };


    // tlsMin Field Functions 
    bool hasTlsMin() const { return this->tlsMin_ != nullptr;};
    void deleteTlsMin() { this->tlsMin_ = nullptr;};
    inline string tlsMin() const { DARABONBA_PTR_GET_DEFAULT(tlsMin_, "") };
    inline UpdateDomainRequest& setTlsMin(string tlsMin) { DARABONBA_PTR_SET_VALUE(tlsMin_, tlsMin) };


  protected:
    // The CA certificate ID.
    std::shared_ptr<string> caCertIdentifier_ = nullptr;
    // The certificate ID.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The client CA certificate.
    std::shared_ptr<string> clientCACert_ = nullptr;
    // Specifies whether to enable HTTPS redirection. If protocol is set to HTTPS, forceHttps is required.
    std::shared_ptr<bool> forceHttps_ = nullptr;
    // The HTTP/2 configuration.
    // 
    // Enumerated values:
    // 
    // *   GlobalConfig
    // *   Close
    // *   Open
    std::shared_ptr<string> http2Option_ = nullptr;
    // Specifies whether to enable mutual TLS (mTLS) authentication.
    std::shared_ptr<bool> mTLSEnabled_ = nullptr;
    // The protocol type to be supported by the domain name. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    // 
    // This parameter is required.
    std::shared_ptr<string> protocol_ = nullptr;
    // The cipher suite configuration.
    std::shared_ptr<TlsCipherSuitesConfig> tlsCipherSuitesConfig_ = nullptr;
    // The maximum TLS version. Up to TLS 1.3 is supported.
    std::shared_ptr<string> tlsMax_ = nullptr;
    // The minimum TLS version. Down to TLS 1.0 is supported.
    std::shared_ptr<string> tlsMin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
