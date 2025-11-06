// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYDOMAINDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYDOMAINDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayDomainDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayDomainDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtAfter, gmtAfter_);
      DARABONBA_PTR_TO_JSON(GmtBefore, gmtBefore_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Http2, http2_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsManaged, isManaged_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(MustHttps, mustHttps_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Sans, sans_);
      DARABONBA_PTR_TO_JSON(TlsCipherSuitesConfig, tlsCipherSuitesConfig_);
      DARABONBA_PTR_TO_JSON(TlsMax, tlsMax_);
      DARABONBA_PTR_TO_JSON(TlsMin, tlsMin_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayDomainDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtAfter, gmtAfter_);
      DARABONBA_PTR_FROM_JSON(GmtBefore, gmtBefore_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Http2, http2_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsManaged, isManaged_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(MustHttps, mustHttps_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Sans, sans_);
      DARABONBA_PTR_FROM_JSON(TlsCipherSuitesConfig, tlsCipherSuitesConfig_);
      DARABONBA_PTR_FROM_JSON(TlsMax, tlsMax_);
      DARABONBA_PTR_FROM_JSON(TlsMin, tlsMin_);
    };
    GetGatewayDomainDetailResponseBodyData() = default ;
    GetGatewayDomainDetailResponseBodyData(const GetGatewayDomainDetailResponseBodyData &) = default ;
    GetGatewayDomainDetailResponseBodyData(GetGatewayDomainDetailResponseBodyData &&) = default ;
    GetGatewayDomainDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayDomainDetailResponseBodyData() = default ;
    GetGatewayDomainDetailResponseBodyData& operator=(const GetGatewayDomainDetailResponseBodyData &) = default ;
    GetGatewayDomainDetailResponseBodyData& operator=(GetGatewayDomainDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterDate_ == nullptr
        && return this->algorithm_ == nullptr && return this->beforeDate_ == nullptr && return this->certIdentifier_ == nullptr && return this->certName_ == nullptr && return this->commonName_ == nullptr
        && return this->gatewayId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->gmtAfter_ == nullptr && return this->gmtBefore_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->http2_ == nullptr && return this->id_ == nullptr && return this->isManaged_ == nullptr && return this->issuer_ == nullptr
        && return this->mustHttps_ == nullptr && return this->name_ == nullptr && return this->protocol_ == nullptr && return this->sans_ == nullptr && return this->tlsCipherSuitesConfig_ == nullptr
        && return this->tlsMax_ == nullptr && return this->tlsMin_ == nullptr; };
    // afterDate Field Functions 
    bool hasAfterDate() const { return this->afterDate_ != nullptr;};
    void deleteAfterDate() { this->afterDate_ = nullptr;};
    inline int64_t afterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, 0L) };
    inline GetGatewayDomainDetailResponseBodyData& setAfterDate(int64_t afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // beforeDate Field Functions 
    bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
    void deleteBeforeDate() { this->beforeDate_ = nullptr;};
    inline int64_t beforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, 0L) };
    inline GetGatewayDomainDetailResponseBodyData& setBeforeDate(int64_t beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline GetGatewayDomainDetailResponseBodyData& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtAfter Field Functions 
    bool hasGmtAfter() const { return this->gmtAfter_ != nullptr;};
    void deleteGmtAfter() { this->gmtAfter_ = nullptr;};
    inline string gmtAfter() const { DARABONBA_PTR_GET_DEFAULT(gmtAfter_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setGmtAfter(string gmtAfter) { DARABONBA_PTR_SET_VALUE(gmtAfter_, gmtAfter) };


    // gmtBefore Field Functions 
    bool hasGmtBefore() const { return this->gmtBefore_ != nullptr;};
    void deleteGmtBefore() { this->gmtBefore_ = nullptr;};
    inline string gmtBefore() const { DARABONBA_PTR_GET_DEFAULT(gmtBefore_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setGmtBefore(string gmtBefore) { DARABONBA_PTR_SET_VALUE(gmtBefore_, gmtBefore) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // http2 Field Functions 
    bool hasHttp2() const { return this->http2_ != nullptr;};
    void deleteHttp2() { this->http2_ = nullptr;};
    inline string http2() const { DARABONBA_PTR_GET_DEFAULT(http2_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setHttp2(string http2) { DARABONBA_PTR_SET_VALUE(http2_, http2) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetGatewayDomainDetailResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isManaged Field Functions 
    bool hasIsManaged() const { return this->isManaged_ != nullptr;};
    void deleteIsManaged() { this->isManaged_ = nullptr;};
    inline bool isManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, false) };
    inline GetGatewayDomainDetailResponseBodyData& setIsManaged(bool isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // mustHttps Field Functions 
    bool hasMustHttps() const { return this->mustHttps_ != nullptr;};
    void deleteMustHttps() { this->mustHttps_ = nullptr;};
    inline bool mustHttps() const { DARABONBA_PTR_GET_DEFAULT(mustHttps_, false) };
    inline GetGatewayDomainDetailResponseBodyData& setMustHttps(bool mustHttps) { DARABONBA_PTR_SET_VALUE(mustHttps_, mustHttps) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string sans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    // tlsCipherSuitesConfig Field Functions 
    bool hasTlsCipherSuitesConfig() const { return this->tlsCipherSuitesConfig_ != nullptr;};
    void deleteTlsCipherSuitesConfig() { this->tlsCipherSuitesConfig_ = nullptr;};
    inline const Models::GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig & tlsCipherSuitesConfig() const { DARABONBA_PTR_GET_CONST(tlsCipherSuitesConfig_, Models::GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig) };
    inline Models::GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig tlsCipherSuitesConfig() { DARABONBA_PTR_GET(tlsCipherSuitesConfig_, Models::GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig) };
    inline GetGatewayDomainDetailResponseBodyData& setTlsCipherSuitesConfig(const Models::GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig & tlsCipherSuitesConfig) { DARABONBA_PTR_SET_VALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };
    inline GetGatewayDomainDetailResponseBodyData& setTlsCipherSuitesConfig(Models::GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig && tlsCipherSuitesConfig) { DARABONBA_PTR_SET_RVALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };


    // tlsMax Field Functions 
    bool hasTlsMax() const { return this->tlsMax_ != nullptr;};
    void deleteTlsMax() { this->tlsMax_ = nullptr;};
    inline string tlsMax() const { DARABONBA_PTR_GET_DEFAULT(tlsMax_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setTlsMax(string tlsMax) { DARABONBA_PTR_SET_VALUE(tlsMax_, tlsMax) };


    // tlsMin Field Functions 
    bool hasTlsMin() const { return this->tlsMin_ != nullptr;};
    void deleteTlsMin() { this->tlsMin_ = nullptr;};
    inline string tlsMin() const { DARABONBA_PTR_GET_DEFAULT(tlsMin_, "") };
    inline GetGatewayDomainDetailResponseBodyData& setTlsMin(string tlsMin) { DARABONBA_PTR_SET_VALUE(tlsMin_, tlsMin) };


  protected:
    // The start time.
    std::shared_ptr<int64_t> afterDate_ = nullptr;
    // The algorithm.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The expiration time.
    std::shared_ptr<int64_t> beforeDate_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The public domain name.
    std::shared_ptr<string> commonName_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The start time.
    std::shared_ptr<string> gmtAfter_ = nullptr;
    // The expiration time.
    std::shared_ptr<string> gmtBefore_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The update time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Indicates whether `HTTP/2` is enabled.
    // 
    // *   `open`: `HTTP/2` is enabled.
    // *   `close`: `HTTP/2` is disabled.
    // *   `globalConfig`: Global configurations are used.
    std::shared_ptr<string> http2_ = nullptr;
    // The ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<bool> isManaged_ = nullptr;
    // The issuer.
    std::shared_ptr<string> issuer_ = nullptr;
    // Indicates whether HTTPS is forcibly used.
    std::shared_ptr<bool> mustHttps_ = nullptr;
    // The domain name.
    std::shared_ptr<string> name_ = nullptr;
    // The protocol of the gateway.
    std::shared_ptr<string> protocol_ = nullptr;
    // The name of the extended field.
    std::shared_ptr<string> sans_ = nullptr;
    std::shared_ptr<Models::GetGatewayDomainDetailResponseBodyDataTlsCipherSuitesConfig> tlsCipherSuitesConfig_ = nullptr;
    // The maximum version of Transport Layer Security (TLS).
    std::shared_ptr<string> tlsMax_ = nullptr;
    // The minimum version of TLS.
    std::shared_ptr<string> tlsMin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
