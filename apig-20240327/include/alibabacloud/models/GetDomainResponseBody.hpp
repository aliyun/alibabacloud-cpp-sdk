// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResourceStatistic.hpp>
#include <alibabacloud/models/TlsCipherSuitesConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetDomainResponseBody() = default ;
    GetDomainResponseBody(const GetDomainResponseBody &) = default ;
    GetDomainResponseBody(GetDomainResponseBody &&) = default ;
    GetDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDomainResponseBody() = default ;
    GetDomainResponseBody& operator=(const GetDomainResponseBody &) = default ;
    GetDomainResponseBody& operator=(GetDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StatisticsInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StatisticsInfo& obj) { 
          DARABONBA_PTR_TO_JSON(resourceStatistics, resourceStatistics_);
          DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, StatisticsInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(resourceStatistics, resourceStatistics_);
          DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
        };
        StatisticsInfo() = default ;
        StatisticsInfo(const StatisticsInfo &) = default ;
        StatisticsInfo(StatisticsInfo &&) = default ;
        StatisticsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StatisticsInfo() = default ;
        StatisticsInfo& operator=(const StatisticsInfo &) = default ;
        StatisticsInfo& operator=(StatisticsInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceStatistics_ == nullptr
        && this->totalCount_ == nullptr; };
        // resourceStatistics Field Functions 
        bool hasResourceStatistics() const { return this->resourceStatistics_ != nullptr;};
        void deleteResourceStatistics() { this->resourceStatistics_ = nullptr;};
        inline const vector<ResourceStatistic> & getResourceStatistics() const { DARABONBA_PTR_GET_CONST(resourceStatistics_, vector<ResourceStatistic>) };
        inline vector<ResourceStatistic> getResourceStatistics() { DARABONBA_PTR_GET(resourceStatistics_, vector<ResourceStatistic>) };
        inline StatisticsInfo& setResourceStatistics(const vector<ResourceStatistic> & resourceStatistics) { DARABONBA_PTR_SET_VALUE(resourceStatistics_, resourceStatistics) };
        inline StatisticsInfo& setResourceStatistics(vector<ResourceStatistic> && resourceStatistics) { DARABONBA_PTR_SET_RVALUE(resourceStatistics_, resourceStatistics) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
        inline StatisticsInfo& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The resource statistics.
        shared_ptr<vector<ResourceStatistic>> resourceStatistics_ {};
        // The total number of resources.
        shared_ptr<string> totalCount_ {};
      };

      virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->caCertIdentifier_ == nullptr && this->certIdentifier_ == nullptr && this->certName_ == nullptr && this->clientCACert_ == nullptr && this->createFrom_ == nullptr
        && this->createTimestamp_ == nullptr && this->default_ == nullptr && this->domainId_ == nullptr && this->forceHttps_ == nullptr && this->http2Option_ == nullptr
        && this->issuer_ == nullptr && this->mTLSEnabled_ == nullptr && this->name_ == nullptr && this->notAfterTimstamp_ == nullptr && this->notBeforeTimestamp_ == nullptr
        && this->protocol_ == nullptr && this->resourceGroupId_ == nullptr && this->sans_ == nullptr && this->statisticsInfo_ == nullptr && this->tlsCipherSuitesConfig_ == nullptr
        && this->tlsMax_ == nullptr && this->tlsMin_ == nullptr && this->updatetimestamp_ == nullptr; };
      // algorithm Field Functions 
      bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
      void deleteAlgorithm() { this->algorithm_ = nullptr;};
      inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
      inline Data& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


      // caCertIdentifier Field Functions 
      bool hasCaCertIdentifier() const { return this->caCertIdentifier_ != nullptr;};
      void deleteCaCertIdentifier() { this->caCertIdentifier_ = nullptr;};
      inline string getCaCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(caCertIdentifier_, "") };
      inline Data& setCaCertIdentifier(string caCertIdentifier) { DARABONBA_PTR_SET_VALUE(caCertIdentifier_, caCertIdentifier) };


      // certIdentifier Field Functions 
      bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
      void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
      inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
      inline Data& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


      // certName Field Functions 
      bool hasCertName() const { return this->certName_ != nullptr;};
      void deleteCertName() { this->certName_ = nullptr;};
      inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
      inline Data& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


      // clientCACert Field Functions 
      bool hasClientCACert() const { return this->clientCACert_ != nullptr;};
      void deleteClientCACert() { this->clientCACert_ = nullptr;};
      inline string getClientCACert() const { DARABONBA_PTR_GET_DEFAULT(clientCACert_, "") };
      inline Data& setClientCACert(string clientCACert) { DARABONBA_PTR_SET_VALUE(clientCACert_, clientCACert) };


      // createFrom Field Functions 
      bool hasCreateFrom() const { return this->createFrom_ != nullptr;};
      void deleteCreateFrom() { this->createFrom_ = nullptr;};
      inline string getCreateFrom() const { DARABONBA_PTR_GET_DEFAULT(createFrom_, "") };
      inline Data& setCreateFrom(string createFrom) { DARABONBA_PTR_SET_VALUE(createFrom_, createFrom) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Data& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // default Field Functions 
      bool hasDefault() const { return this->default_ != nullptr;};
      void deleteDefault() { this->default_ = nullptr;};
      inline bool getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
      inline Data& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline Data& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // forceHttps Field Functions 
      bool hasForceHttps() const { return this->forceHttps_ != nullptr;};
      void deleteForceHttps() { this->forceHttps_ = nullptr;};
      inline bool getForceHttps() const { DARABONBA_PTR_GET_DEFAULT(forceHttps_, false) };
      inline Data& setForceHttps(bool forceHttps) { DARABONBA_PTR_SET_VALUE(forceHttps_, forceHttps) };


      // http2Option Field Functions 
      bool hasHttp2Option() const { return this->http2Option_ != nullptr;};
      void deleteHttp2Option() { this->http2Option_ = nullptr;};
      inline string getHttp2Option() const { DARABONBA_PTR_GET_DEFAULT(http2Option_, "") };
      inline Data& setHttp2Option(string http2Option) { DARABONBA_PTR_SET_VALUE(http2Option_, http2Option) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline Data& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // mTLSEnabled Field Functions 
      bool hasMTLSEnabled() const { return this->mTLSEnabled_ != nullptr;};
      void deleteMTLSEnabled() { this->mTLSEnabled_ = nullptr;};
      inline bool getMTLSEnabled() const { DARABONBA_PTR_GET_DEFAULT(mTLSEnabled_, false) };
      inline Data& setMTLSEnabled(bool mTLSEnabled) { DARABONBA_PTR_SET_VALUE(mTLSEnabled_, mTLSEnabled) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // notAfterTimstamp Field Functions 
      bool hasNotAfterTimstamp() const { return this->notAfterTimstamp_ != nullptr;};
      void deleteNotAfterTimstamp() { this->notAfterTimstamp_ = nullptr;};
      inline int64_t getNotAfterTimstamp() const { DARABONBA_PTR_GET_DEFAULT(notAfterTimstamp_, 0L) };
      inline Data& setNotAfterTimstamp(int64_t notAfterTimstamp) { DARABONBA_PTR_SET_VALUE(notAfterTimstamp_, notAfterTimstamp) };


      // notBeforeTimestamp Field Functions 
      bool hasNotBeforeTimestamp() const { return this->notBeforeTimestamp_ != nullptr;};
      void deleteNotBeforeTimestamp() { this->notBeforeTimestamp_ = nullptr;};
      inline int64_t getNotBeforeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(notBeforeTimestamp_, 0L) };
      inline Data& setNotBeforeTimestamp(int64_t notBeforeTimestamp) { DARABONBA_PTR_SET_VALUE(notBeforeTimestamp_, notBeforeTimestamp) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // sans Field Functions 
      bool hasSans() const { return this->sans_ != nullptr;};
      void deleteSans() { this->sans_ = nullptr;};
      inline string getSans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
      inline Data& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


      // statisticsInfo Field Functions 
      bool hasStatisticsInfo() const { return this->statisticsInfo_ != nullptr;};
      void deleteStatisticsInfo() { this->statisticsInfo_ = nullptr;};
      inline const Data::StatisticsInfo & getStatisticsInfo() const { DARABONBA_PTR_GET_CONST(statisticsInfo_, Data::StatisticsInfo) };
      inline Data::StatisticsInfo getStatisticsInfo() { DARABONBA_PTR_GET(statisticsInfo_, Data::StatisticsInfo) };
      inline Data& setStatisticsInfo(const Data::StatisticsInfo & statisticsInfo) { DARABONBA_PTR_SET_VALUE(statisticsInfo_, statisticsInfo) };
      inline Data& setStatisticsInfo(Data::StatisticsInfo && statisticsInfo) { DARABONBA_PTR_SET_RVALUE(statisticsInfo_, statisticsInfo) };


      // tlsCipherSuitesConfig Field Functions 
      bool hasTlsCipherSuitesConfig() const { return this->tlsCipherSuitesConfig_ != nullptr;};
      void deleteTlsCipherSuitesConfig() { this->tlsCipherSuitesConfig_ = nullptr;};
      inline const TlsCipherSuitesConfig & getTlsCipherSuitesConfig() const { DARABONBA_PTR_GET_CONST(tlsCipherSuitesConfig_, TlsCipherSuitesConfig) };
      inline TlsCipherSuitesConfig getTlsCipherSuitesConfig() { DARABONBA_PTR_GET(tlsCipherSuitesConfig_, TlsCipherSuitesConfig) };
      inline Data& setTlsCipherSuitesConfig(const TlsCipherSuitesConfig & tlsCipherSuitesConfig) { DARABONBA_PTR_SET_VALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };
      inline Data& setTlsCipherSuitesConfig(TlsCipherSuitesConfig && tlsCipherSuitesConfig) { DARABONBA_PTR_SET_RVALUE(tlsCipherSuitesConfig_, tlsCipherSuitesConfig) };


      // tlsMax Field Functions 
      bool hasTlsMax() const { return this->tlsMax_ != nullptr;};
      void deleteTlsMax() { this->tlsMax_ = nullptr;};
      inline string getTlsMax() const { DARABONBA_PTR_GET_DEFAULT(tlsMax_, "") };
      inline Data& setTlsMax(string tlsMax) { DARABONBA_PTR_SET_VALUE(tlsMax_, tlsMax) };


      // tlsMin Field Functions 
      bool hasTlsMin() const { return this->tlsMin_ != nullptr;};
      void deleteTlsMin() { this->tlsMin_ = nullptr;};
      inline string getTlsMin() const { DARABONBA_PTR_GET_DEFAULT(tlsMin_, "") };
      inline Data& setTlsMin(string tlsMin) { DARABONBA_PTR_SET_VALUE(tlsMin_, tlsMin) };


      // updatetimestamp Field Functions 
      bool hasUpdatetimestamp() const { return this->updatetimestamp_ != nullptr;};
      void deleteUpdatetimestamp() { this->updatetimestamp_ = nullptr;};
      inline int64_t getUpdatetimestamp() const { DARABONBA_PTR_GET_DEFAULT(updatetimestamp_, 0L) };
      inline Data& setUpdatetimestamp(int64_t updatetimestamp) { DARABONBA_PTR_SET_VALUE(updatetimestamp_, updatetimestamp) };


    protected:
      // The encryption algorithm.
      shared_ptr<string> algorithm_ {};
      // The CA certificate ID.
      shared_ptr<string> caCertIdentifier_ {};
      // The certificate ID.
      shared_ptr<string> certIdentifier_ {};
      // The certificate name.
      shared_ptr<string> certName_ {};
      // The client CA certificate.
      shared_ptr<string> clientCACert_ {};
      // The creation source.
      // 
      // Valid values:
      // 
      // *   Console
      // *   Ingress
      shared_ptr<string> createFrom_ {};
      // The creation timestamp.
      shared_ptr<int64_t> createTimestamp_ {};
      // Indicates whether the domain name is the default domain name.
      shared_ptr<bool> default_ {};
      // The ID of the domain name.
      shared_ptr<string> domainId_ {};
      // Indicates whether forcible HTTPS redirection is enabled.
      shared_ptr<bool> forceHttps_ {};
      // The HTTP/2 configuration.
      // 
      // Valid values:
      // 
      // *   GlobalConfig
      // *   Close
      // *   Open
      shared_ptr<string> http2Option_ {};
      // The certificate issuer.
      shared_ptr<string> issuer_ {};
      // Indicates whether mutual authentication is enabled.
      // 
      // Valid values:
      // 
      // *   false
      // *   true
      shared_ptr<bool> mTLSEnabled_ {};
      // The domain name.
      shared_ptr<string> name_ {};
      // The expiration time of the certificate.
      shared_ptr<int64_t> notAfterTimstamp_ {};
      // The time when the certificate started to take effect.
      shared_ptr<int64_t> notBeforeTimestamp_ {};
      // The supported protocol. Valid values:
      // 
      // *   HTTP: Only HTTP is supported.
      // *   HTTPS: Only HTTPS is supported.
      shared_ptr<string> protocol_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // All domain names that are bound to the certificate.
      shared_ptr<string> sans_ {};
      // The information about online resources.
      shared_ptr<Data::StatisticsInfo> statisticsInfo_ {};
      // The cipher suite configuration.
      shared_ptr<TlsCipherSuitesConfig> tlsCipherSuitesConfig_ {};
      // The maximum version of the TLS protocol. Up to TLS 1.3 is supported.
      shared_ptr<string> tlsMax_ {};
      // The minimum version of the TLS protocol. Down to TLS 1.0 is supported.
      shared_ptr<string> tlsMin_ {};
      // The update timestamp.
      shared_ptr<int64_t> updatetimestamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDomainResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDomainResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDomainResponseBody::Data) };
    inline GetDomainResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDomainResponseBody::Data) };
    inline GetDomainResponseBody& setData(const GetDomainResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDomainResponseBody& setData(GetDomainResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDomainResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetDomainResponseBody::Data> data_ {};
    // The response message returned.
    shared_ptr<string> message_ {};
    // The request ID, which is used to trace the API call link.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
