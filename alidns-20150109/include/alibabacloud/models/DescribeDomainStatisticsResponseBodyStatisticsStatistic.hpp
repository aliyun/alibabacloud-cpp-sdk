// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATISTICSRESPONSEBODYSTATISTICSSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATISTICSRESPONSEBODYSTATISTICSSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainStatisticsResponseBodyStatisticsStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainStatisticsResponseBodyStatisticsStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainStatisticsResponseBodyStatisticsStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeDomainStatisticsResponseBodyStatisticsStatistic() = default ;
    DescribeDomainStatisticsResponseBodyStatisticsStatistic(const DescribeDomainStatisticsResponseBodyStatisticsStatistic &) = default ;
    DescribeDomainStatisticsResponseBodyStatisticsStatistic(DescribeDomainStatisticsResponseBodyStatisticsStatistic &&) = default ;
    DescribeDomainStatisticsResponseBodyStatisticsStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainStatisticsResponseBodyStatisticsStatistic() = default ;
    DescribeDomainStatisticsResponseBodyStatisticsStatistic& operator=(const DescribeDomainStatisticsResponseBodyStatisticsStatistic &) = default ;
    DescribeDomainStatisticsResponseBodyStatisticsStatistic& operator=(DescribeDomainStatisticsResponseBodyStatisticsStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->domainName_ != nullptr && this->timestamp_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeDomainStatisticsResponseBodyStatisticsStatistic& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainStatisticsResponseBodyStatisticsStatistic& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeDomainStatisticsResponseBodyStatisticsStatistic& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The number of DNS requests.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The statistical timestamp. Unit: milliseconds. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
