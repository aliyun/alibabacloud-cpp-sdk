// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURESTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainSecureStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSecureStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_TO_JSON(NoSslCount, noSslCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_TO_JSON(TotalDomainCount, totalDomainCount_);
      DARABONBA_PTR_TO_JSON(VulCount, vulCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSecureStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmCount, alarmCount_);
      DARABONBA_PTR_FROM_JSON(NoSslCount, noSslCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_FROM_JSON(TotalDomainCount, totalDomainCount_);
      DARABONBA_PTR_FROM_JSON(VulCount, vulCount_);
    };
    DescribeDomainSecureStatisticsResponseBody() = default ;
    DescribeDomainSecureStatisticsResponseBody(const DescribeDomainSecureStatisticsResponseBody &) = default ;
    DescribeDomainSecureStatisticsResponseBody(DescribeDomainSecureStatisticsResponseBody &&) = default ;
    DescribeDomainSecureStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSecureStatisticsResponseBody() = default ;
    DescribeDomainSecureStatisticsResponseBody& operator=(const DescribeDomainSecureStatisticsResponseBody &) = default ;
    DescribeDomainSecureStatisticsResponseBody& operator=(DescribeDomainSecureStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmCount_ == nullptr
        && this->noSslCount_ == nullptr && this->requestId_ == nullptr && this->riskCount_ == nullptr && this->totalDomainCount_ == nullptr && this->vulCount_ == nullptr; };
    // alarmCount Field Functions 
    bool hasAlarmCount() const { return this->alarmCount_ != nullptr;};
    void deleteAlarmCount() { this->alarmCount_ = nullptr;};
    inline int32_t getAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(alarmCount_, 0) };
    inline DescribeDomainSecureStatisticsResponseBody& setAlarmCount(int32_t alarmCount) { DARABONBA_PTR_SET_VALUE(alarmCount_, alarmCount) };


    // noSslCount Field Functions 
    bool hasNoSslCount() const { return this->noSslCount_ != nullptr;};
    void deleteNoSslCount() { this->noSslCount_ = nullptr;};
    inline int32_t getNoSslCount() const { DARABONBA_PTR_GET_DEFAULT(noSslCount_, 0) };
    inline DescribeDomainSecureStatisticsResponseBody& setNoSslCount(int32_t noSslCount) { DARABONBA_PTR_SET_VALUE(noSslCount_, noSslCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainSecureStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline int32_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
    inline DescribeDomainSecureStatisticsResponseBody& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    // totalDomainCount Field Functions 
    bool hasTotalDomainCount() const { return this->totalDomainCount_ != nullptr;};
    void deleteTotalDomainCount() { this->totalDomainCount_ = nullptr;};
    inline int32_t getTotalDomainCount() const { DARABONBA_PTR_GET_DEFAULT(totalDomainCount_, 0) };
    inline DescribeDomainSecureStatisticsResponseBody& setTotalDomainCount(int32_t totalDomainCount) { DARABONBA_PTR_SET_VALUE(totalDomainCount_, totalDomainCount) };


    // vulCount Field Functions 
    bool hasVulCount() const { return this->vulCount_ != nullptr;};
    void deleteVulCount() { this->vulCount_ = nullptr;};
    inline int32_t getVulCount() const { DARABONBA_PTR_GET_DEFAULT(vulCount_, 0) };
    inline DescribeDomainSecureStatisticsResponseBody& setVulCount(int32_t vulCount) { DARABONBA_PTR_SET_VALUE(vulCount_, vulCount) };


  protected:
    // The number of domain names that trigger security alerts.
    shared_ptr<int32_t> alarmCount_ {};
    // The number of the websites for which no certificates are installed.
    shared_ptr<int32_t> noSslCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of the domain names that have security risks.
    shared_ptr<int32_t> riskCount_ {};
    // The total number of domain names.
    shared_ptr<int32_t> totalDomainCount_ {};
    // The number of the domain names that have vulnerabilities.
    shared_ptr<int32_t> vulCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
