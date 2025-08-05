// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOMAINRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOMAINRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDomainResponseBodyDataStatisticsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetDomainResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDomainResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(caCertIdentifier, caCertIdentifier_);
      DARABONBA_PTR_TO_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(certName, certName_);
      DARABONBA_PTR_TO_JSON(clientCACert, clientCACert_);
      DARABONBA_PTR_TO_JSON(createFrom, createFrom_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(default, default_);
      DARABONBA_PTR_TO_JSON(domainId, domainId_);
      DARABONBA_PTR_TO_JSON(forceHttps, forceHttps_);
      DARABONBA_PTR_TO_JSON(http2Option, http2Option_);
      DARABONBA_PTR_TO_JSON(issuer, issuer_);
      DARABONBA_PTR_TO_JSON(mTLSEnabled, mTLSEnabled_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(notAfterTimstamp, notAfterTimstamp_);
      DARABONBA_PTR_TO_JSON(notBeforeTimestamp, notBeforeTimestamp_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(sans, sans_);
      DARABONBA_PTR_TO_JSON(statisticsInfo, statisticsInfo_);
      DARABONBA_PTR_TO_JSON(tlsCipherSuitesConfig, tlsCipherSuitesConfig_);
      DARABONBA_PTR_TO_JSON(tlsMax, tlsMax_);
      DARABONBA_PTR_TO_JSON(tlsMin, tlsMin_);
      DARABONBA_PTR_TO_JSON(updatetimestamp, updatetimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetDomainResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(caCertIdentifier, caCertIdentifier_);
      DARABONBA_PTR_FROM_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(certName, certName_);
      DARABONBA_PTR_FROM_JSON(clientCACert, clientCACert_);
      DARABONBA_PTR_FROM_JSON(createFrom, createFrom_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(default, default_);
      DARABONBA_PTR_FROM_JSON(domainId, domainId_);
      DARABONBA_PTR_FROM_JSON(forceHttps, forceHttps_);
      DARABONBA_PTR_FROM_JSON(http2Option, http2Option_);
      DARABONBA_PTR_FROM_JSON(issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(mTLSEnabled, mTLSEnabled_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(notAfterTimstamp, notAfterTimstamp_);
      DARABONBA_PTR_FROM_JSON(notBeforeTimestamp, notBeforeTimestamp_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(sans, sans_);
      DARABONBA_PTR_FROM_JSON(statisticsInfo, statisticsInfo_);
      DARABONBA_PTR_FROM_JSON(tlsCipherSuitesConfig, tlsCipherSuitesConfig_);
      DARABONBA_PTR_FROM_JSON(tlsMax, tlsMax_);
      DARABONBA_PTR_FROM_JSON(tlsMin, tlsMin_);
      DARABONBA_PTR_FROM_JSON(updatetimestamp, updatetimestamp_);
    };
    GetDomainResponseBodyData() = default ;
    GetDomainResponseBodyData(const GetDomainResponseBodyData &) = default ;
    GetDomainResponseBodyData(GetDomainResponseBodyData &&) = default ;
    GetDomainResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDomainResponseBodyData() = default ;
    GetDomainResponseBodyData& operator=(const GetDomainResponseBodyData &) = default ;
    GetDomainResponseBodyData& operator=(GetDomainResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->algorithm_ != nullptr
        && this->caCertIdentifier_ != nullptr && this->certIdentifier_ != nullptr && this->certName_ != nullptr && this->clientCACert_ != nullptr && this->createFrom_ != nullptr
        && this->createTimestamp_ != nullptr && this->default_ != nullptr && this->domainId_ != nullptr && this->forceHttps_ != nullptr && this->http2Option_ != nullptr
        && this->issuer_ != nullptr && this->mTLSEnabled_ != nullptr && this->name_ != nullptr && this->notAfterTimstamp_ != nullptr && this->notBeforeTimestamp_ != nullptr
        && this->protocol_ != nullptr && this->resourceGroupId_ != nullptr && this->sans_ != nullptr && this->statisticsInfo_ != nullptr && this->tlsCipherSuitesConfig_ != nullptr
        && this->tlsMax_ != nullptr && this->tlsMin_ != nullptr && this->updatetimestamp_ != nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline GetDomainResponseBodyData& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // caCertIdentifier Field Functions 
    bool hasCaCertIdentifier() const { return this->caCertIdentifier_ != nullptr;};
    void deleteCaCertIdentifier() { this->caCertIdentifier_ = nullptr;};
    inline string caCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(caCertIdentifier_, "") };
    inline GetDomainResponseBodyData& setCaCertIdentifier(string caCertIdentifier) { DARABONBA_PTR_SET_VALUE(caCertIdentifier_, caCertIdentifier) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline GetDomainResponseBodyData& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline GetDomainResponseBodyData& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // clientCACert Field Functions 
    bool hasClientCACert() const { return this->clientCACert_ != nullptr;};
    void deleteClientCACert() { this->clientCACert_ = nullptr;};
    inline string clientCACert() const { DARABONBA_PTR_GET_DEFAULT(clientCACert_, "") };
    inline GetDomainResponseBodyData& setClientCACert(string clientCACert) { DARABONBA_PTR_SET_VALUE(clientCACert_, clientCACert) };


    // createFrom Field Functions 
    bool hasCreateFrom() const { return this->createFrom_ != nullptr;};
    void deleteCreateFrom() { this->createFrom_ = nullptr;};
    inline string createFrom() const { DARABONBA_PTR_GET_DEFAULT(createFrom_, "") };
    inline GetDomainResponseBodyData& setCreateFrom(string createFrom) { DARABONBA_PTR_SET_VALUE(createFrom_, createFrom) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline GetDomainResponseBodyData& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // default Field Functions 
    bool hasDefault() const { return this->default_ != nullptr;};
    void deleteDefault() { this->default_ = nullptr;};
    inline bool _default() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
    inline GetDomainResponseBodyData& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline GetDomainResponseBodyData& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // forceHttps Field Functions 
    bool hasForceHttps() const { return this->forceHttps_ != nullptr;};
    void deleteForceHttps() { this->forceHttps_ = nullptr;};
    inline bool forceHttps() const { DARABONBA_PTR_GET_DEFAULT(forceHttps_, false) };
    inline GetDomainResponseBodyData& setForceHttps(bool forceHttps) { DARABONBA_PTR_SET_VALUE(forceHttps_, forceHttps) };


    // http2Option Field Functions 
    bool hasHttp2Option() const { return this->http2Option_ != nullptr;};
    void deleteHttp2Option() { this->http2Option_ = nullptr;};
    inline string http2Option() const { DARABONBA_PTR_GET_DEFAULT(http2Option_, "") };
    inline GetDomainResponseBodyData& setHttp2Option(string http2Option) { DARABONBA_PTR_SET_VALUE(http2Option_, http2Option) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline GetDomainResponseBodyData& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // mTLSEnabled Field Functions 
    bool hasMTLSEnabled() const { return this->mTLSEnabled_ != nullptr;};
    void deleteMTLSEnabled() { this->mTLSEnabled_ = nullptr;};
    inline bool mTLSEnabled() const { DARABONBA_PTR_GET_DEFAULT(mTLSEnabled_, false) };
    inline GetDomainResponseBodyData& setMTLSEnabled(bool mTLSEnabled) { DARABONBA_PTR_SET_VALUE(mTLSEnabled_, mTLSEnabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDomainResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notAfterTimstamp Field Functions 
    bool hasNotAfterTimstamp() const { return this->notAfterTimstamp_ != nullptr;};
    void deleteNotAfterTimstamp() { this->notAfterTimstamp_ = nullptr;};
    inline int64_t notAfterTimstamp() const { DARABONBA_PTR_GET_DEFAULT(notAfterTimstamp_, 0L) };
    inline GetDomainResponseBodyData& setNotAfterTimstamp(int64_t notAfterTimstamp) { DARABONBA_PTR_SET_VALUE(notAfterTimstamp_, notAfterTimstamp) };


    // notBeforeTimestamp Field Functions 
    bool hasNotBeforeTimestamp() const { return this->notBeforeTimestamp_ != nullptr;};
    void deleteNotBeforeTimestamp() { this->notBeforeTimestamp_ = nullptr;};
    inline int64_t notBeforeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(notBeforeTimestamp_, 0L) };
    inline GetDomainResponseBodyData& setNotBeforeTimestamp(int64_t notBeforeTimestamp) { DARABONBA_PTR_SET_VALUE(notBeforeTimestamp_, notBeforeTimestamp) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetDomainResponseBodyData& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetDomainResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string sans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline GetDomainResponseBodyData& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    // statisticsInfo Field Functions 
    bool hasStatisticsInfo() const { return this->statisticsInfo_ != nullptr;};
    void deleteStatisticsInfo() { this->statisticsInfo_ = nullptr;};
    inline const Models::GetDomainResponseBodyDataStatisticsInfo & statisticsInfo() const { DARABONBA_PTR_GET_CONST(statisticsInfo_, Models::GetDomainResponseBodyDataStatisticsInfo) };
    inline Models::GetDomainResponseBodyDataStatisticsInfo statisticsInfo() { DARABONBA_PTR_GET(statisticsInfo_, Models::GetDomainResponseBodyDataStatisticsInfo) };
    inline GetDomainResponseBodyData& setStatisticsInfo(const Models::GetDomainResponseBodyDataStatisticsInfo & statisticsInfo) { DARABONBA_PTR_SET_VALUE(statisticsInfo_, statisticsInfo) };
    inline GetDomainResponseBodyData& setStatisticsInfo(Models::GetDomainResponseBodyDataStatisticsInfo && statisticsInfo) { DARABONBA_PTR_SET_RVALUE(statisticsInfo_, statisticsInfo) };


    // tlsCipherSuitesConfig Field Functions 
    bool hasTlsCipherSuitesConfig() const { return this->tlsCipherSuitesConfig_ != nullptr;};
    void deleteTlsCipherSuitesConfig() { this->tlsCipherSuitesConfig_ = nullptr;};
    inline const Models::TlsCipherSuitesConfig & tlsCipherSuitesConfig() const { DARABONBA_PTR_GET_CONST(tlsCipherSuitesConfig_, Models::TlsCipherSuitesConfig) };
    inline Models::TlsCipherSuitesConfig tlsCipherSuitesConfig() { DARABONBA_PTR_GET(tlsCipherSuitesConfig_, Models::TlsCipherSuitesConfig) };
    inline GetDomainResponseBodyData& setTlsCipherSuitesConfig(const Models::TlsCipherSuitesConfig & tlsCipherSuitesConfig) { DARABONBA_PTR_SET_VALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };
    inline GetDomainResponseBodyData& setTlsCipherSuitesConfig(Models::TlsCipherSuitesConfig && tlsCipherSuitesConfig) { DARABONBA_PTR_SET_RVALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };


    // tlsMax Field Functions 
    bool hasTlsMax() const { return this->tlsMax_ != nullptr;};
    void deleteTlsMax() { this->tlsMax_ = nullptr;};
    inline string tlsMax() const { DARABONBA_PTR_GET_DEFAULT(tlsMax_, "") };
    inline GetDomainResponseBodyData& setTlsMax(string tlsMax) { DARABONBA_PTR_SET_VALUE(tlsMax_, tlsMax) };


    // tlsMin Field Functions 
    bool hasTlsMin() const { return this->tlsMin_ != nullptr;};
    void deleteTlsMin() { this->tlsMin_ = nullptr;};
    inline string tlsMin() const { DARABONBA_PTR_GET_DEFAULT(tlsMin_, "") };
    inline GetDomainResponseBodyData& setTlsMin(string tlsMin) { DARABONBA_PTR_SET_VALUE(tlsMin_, tlsMin) };


    // updatetimestamp Field Functions 
    bool hasUpdatetimestamp() const { return this->updatetimestamp_ != nullptr;};
    void deleteUpdatetimestamp() { this->updatetimestamp_ = nullptr;};
    inline int64_t updatetimestamp() const { DARABONBA_PTR_GET_DEFAULT(updatetimestamp_, 0L) };
    inline GetDomainResponseBodyData& setUpdatetimestamp(int64_t updatetimestamp) { DARABONBA_PTR_SET_VALUE(updatetimestamp_, updatetimestamp) };


  protected:
    // The encryption algorithm.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The CA certificate ID.
    std::shared_ptr<string> caCertIdentifier_ = nullptr;
    // The certificate ID.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The certificate name.
    std::shared_ptr<string> certName_ = nullptr;
    // The client CA certificate.
    std::shared_ptr<string> clientCACert_ = nullptr;
    // The creation source.
    // 
    // Valid values:
    // 
    // *   Console
    // *   Ingress
    std::shared_ptr<string> createFrom_ = nullptr;
    // The creation timestamp.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // Indicates whether the domain name is the default domain name.
    std::shared_ptr<bool> default_ = nullptr;
    // The ID of the domain name.
    std::shared_ptr<string> domainId_ = nullptr;
    // Indicates whether forcible HTTPS redirection is enabled.
    std::shared_ptr<bool> forceHttps_ = nullptr;
    // The HTTP/2 configuration.
    // 
    // Valid values:
    // 
    // *   GlobalConfig
    // *   Close
    // *   Open
    std::shared_ptr<string> http2Option_ = nullptr;
    // The certificate issuer.
    std::shared_ptr<string> issuer_ = nullptr;
    // Indicates whether mutual authentication is enabled.
    // 
    // Valid values:
    // 
    // *   false
    // *   true
    std::shared_ptr<bool> mTLSEnabled_ = nullptr;
    // The domain name.
    std::shared_ptr<string> name_ = nullptr;
    // The expiration time of the certificate.
    std::shared_ptr<int64_t> notAfterTimstamp_ = nullptr;
    // The time when the certificate started to take effect.
    std::shared_ptr<int64_t> notBeforeTimestamp_ = nullptr;
    // The supported protocol. Valid values:
    // 
    // *   HTTP: Only HTTP is supported.
    // *   HTTPS: Only HTTPS is supported.
    std::shared_ptr<string> protocol_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // All domain names that are bound to the certificate.
    std::shared_ptr<string> sans_ = nullptr;
    // The information about online resources.
    std::shared_ptr<Models::GetDomainResponseBodyDataStatisticsInfo> statisticsInfo_ = nullptr;
    // The cipher suite configuration.
    std::shared_ptr<Models::TlsCipherSuitesConfig> tlsCipherSuitesConfig_ = nullptr;
    // The maximum version of the TLS protocol. Up to TLS 1.3 is supported.
    std::shared_ptr<string> tlsMax_ = nullptr;
    // The minimum version of the TLS protocol. Down to TLS 1.0 is supported.
    std::shared_ptr<string> tlsMin_ = nullptr;
    // The update timestamp.
    std::shared_ptr<int64_t> updatetimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
