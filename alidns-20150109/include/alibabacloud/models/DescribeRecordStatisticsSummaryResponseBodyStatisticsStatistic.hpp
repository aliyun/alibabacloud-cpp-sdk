// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSSUMMARYRESPONSEBODYSTATISTICSSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSSUMMARYRESPONSEBODYSTATISTICSSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
    };
    DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic() = default ;
    DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic(const DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic &) = default ;
    DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic(DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic &&) = default ;
    DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic() = default ;
    DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic& operator=(const DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic &) = default ;
    DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic& operator=(DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->subDomain_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string subDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribeRecordStatisticsSummaryResponseBodyStatisticsStatistic& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


  protected:
    // The number of DNS requests.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The subdomain.
    std::shared_ptr<string> subDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
