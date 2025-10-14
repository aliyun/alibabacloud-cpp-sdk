// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATISTICSSUMMARYRESPONSEBODYSTATISTICSSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATISTICSSUMMARYRESPONSEBODYSTATISTICSSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(resolveAnalysisStatus, resolveAnalysisStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(resolveAnalysisStatus, resolveAnalysisStatus_);
    };
    DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic() = default ;
    DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic(const DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic &) = default ;
    DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic(DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic &&) = default ;
    DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic() = default ;
    DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic& operator=(const DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic &) = default ;
    DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic& operator=(DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->domainName_ == nullptr && return this->domainType_ == nullptr && return this->resolveAnalysisStatus_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // resolveAnalysisStatus Field Functions 
    bool hasResolveAnalysisStatus() const { return this->resolveAnalysisStatus_ != nullptr;};
    void deleteResolveAnalysisStatus() { this->resolveAnalysisStatus_ = nullptr;};
    inline string resolveAnalysisStatus() const { DARABONBA_PTR_GET_DEFAULT(resolveAnalysisStatus_, "") };
    inline DescribeDomainStatisticsSummaryResponseBodyStatisticsStatistic& setResolveAnalysisStatus(string resolveAnalysisStatus) { DARABONBA_PTR_SET_VALUE(resolveAnalysisStatus_, resolveAnalysisStatus) };


  protected:
    // The number of DNS requests.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The type of the domain name. The parameter value is not case-sensitive. Valid values:
    // 
    // PUBLIC (default): hosted public domain name
    // 
    // CACHE: cache-accelerated domain name
    std::shared_ptr<string> domainType_ = nullptr;
    // Indicates whether the DNS traffic analysis feature is enabled for the domain name. Valid values:
    // 
    // *   OPEN
    // *   CLOSE
    std::shared_ptr<string> resolveAnalysisStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
