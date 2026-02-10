// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURERISKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURERISKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainSecureRiskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSecureRiskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NoSslCount, noSslCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_TO_JSON(RiskList, riskList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSecureRiskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NoSslCount, noSslCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_FROM_JSON(RiskList, riskList_);
    };
    DescribeDomainSecureRiskListResponseBody() = default ;
    DescribeDomainSecureRiskListResponseBody(const DescribeDomainSecureRiskListResponseBody &) = default ;
    DescribeDomainSecureRiskListResponseBody(DescribeDomainSecureRiskListResponseBody &&) = default ;
    DescribeDomainSecureRiskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSecureRiskListResponseBody() = default ;
    DescribeDomainSecureRiskListResponseBody& operator=(const DescribeDomainSecureRiskListResponseBody &) = default ;
    DescribeDomainSecureRiskListResponseBody& operator=(DescribeDomainSecureRiskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskList& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(SslBrand, sslBrand_);
        DARABONBA_PTR_TO_JSON(SslStatus, sslStatus_);
        DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
        DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
      };
      friend void from_json(const Darabonba::Json& j, RiskList& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(SslBrand, sslBrand_);
        DARABONBA_PTR_FROM_JSON(SslStatus, sslStatus_);
        DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
        DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
      };
      RiskList() = default ;
      RiskList(const RiskList &) = default ;
      RiskList(RiskList &&) = default ;
      RiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskList() = default ;
      RiskList& operator=(const RiskList &) = default ;
      RiskList& operator=(RiskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmCount_ == nullptr
        && this->domain_ == nullptr && this->sslBrand_ == nullptr && this->sslStatus_ == nullptr && this->uuidList_ == nullptr && this->vulCount_ == nullptr; };
      // alarmCount Field Functions 
      bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
      void deleteAlarmCount() { this->alarmCount_ = nullptr;};
      inline int32_t getAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
      inline RiskList& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline RiskList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // sslBrand Field Functions 
      bool hasSslBrand() const { return this->sslBrand_ != nullptr;};
      void deleteSslBrand() { this->sslBrand_ = nullptr;};
      inline string getSslBrand() const { DARABONBA_PTR_GET_DEFAULT(sslBrand_, "") };
      inline RiskList& setSslBrand(string sslBrand) { DARABONBA_PTR_SET_VALUE(sslBrand_, sslBrand) };


      // sslStatus Field Functions 
      bool hasSslStatus() const { return this->sslStatus_ != nullptr;};
      void deleteSslStatus() { this->sslStatus_ = nullptr;};
      inline int32_t getSslStatus() const { DARABONBA_PTR_GET_DEFAULT(sslStatus_, 0) };
      inline RiskList& setSslStatus(int32_t sslStatus) { DARABONBA_PTR_SET_VALUE(sslStatus_, sslStatus) };


      // uuidList Field Functions 
      bool hasUuidList() const { return this->uuidList_ != nullptr;};
      void deleteUuidList() { this->uuidList_ = nullptr;};
      inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
      inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
      inline RiskList& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
      inline RiskList& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


      // vulCount Field Functions 
      bool hasVulCount() const { return this->vulCount_ != nullptr;};
      void deleteVulCount() { this->vulCount_ = nullptr;};
      inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
      inline RiskList& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


    protected:
      // The number of alerts.
      shared_ptr<int32_t> alarmCount_ {};
      // The domain name.
      shared_ptr<string> domain_ {};
      // The issuer of the certificate.
      shared_ptr<string> sslBrand_ {};
      // Indicates whether the certificate is configured. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<int32_t> sslStatus_ {};
      // The UUIDs of the backend servers of the website.
      shared_ptr<vector<string>> uuidList_ {};
      // The number of vulnerabilities.
      shared_ptr<int32_t> vulCount_ {};
    };

    virtual bool empty() const override { return this->noSslCount_ == nullptr
        && this->requestId_ == nullptr && this->riskCount_ == nullptr && this->riskList_ == nullptr; };
    // noSslCount Field Functions 
    bool hasNoSslCount() const { return this->noSslCount_ != nullptr;};
    void deleteNoSslCount() { this->noSslCount_ = nullptr;};
    inline int32_t getNoSslCount() const { DARABONBA_PTR_GET_DEFAULT(noSslCount_, 0) };
    inline DescribeDomainSecureRiskListResponseBody& setNoSslCount(int32_t noSslCount) { DARABONBA_PTR_SET_VALUE(noSslCount_, noSslCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainSecureRiskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline int32_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
    inline DescribeDomainSecureRiskListResponseBody& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    // riskList Field Functions 
    bool hasRiskList() const { return this->riskList_ != nullptr;};
    void deleteRiskList() { this->riskList_ = nullptr;};
    inline const vector<DescribeDomainSecureRiskListResponseBody::RiskList> & getRiskList() const { DARABONBA_PTR_GET_CONST(riskList_, vector<DescribeDomainSecureRiskListResponseBody::RiskList>) };
    inline vector<DescribeDomainSecureRiskListResponseBody::RiskList> getRiskList() { DARABONBA_PTR_GET(riskList_, vector<DescribeDomainSecureRiskListResponseBody::RiskList>) };
    inline DescribeDomainSecureRiskListResponseBody& setRiskList(const vector<DescribeDomainSecureRiskListResponseBody::RiskList> & riskList) { DARABONBA_PTR_SET_VALUE(riskList_, riskList) };
    inline DescribeDomainSecureRiskListResponseBody& setRiskList(vector<DescribeDomainSecureRiskListResponseBody::RiskList> && riskList) { DARABONBA_PTR_SET_RVALUE(riskList_, riskList) };


  protected:
    // The number of the websites for which no certificates are installed.
    shared_ptr<int32_t> noSslCount_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The number of risks.
    shared_ptr<int32_t> riskCount_ {};
    // The risks.
    shared_ptr<vector<DescribeDomainSecureRiskListResponseBody::RiskList>> riskList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
