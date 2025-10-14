// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSRESPONSEBODYSTATISTICSSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSRESPONSEBODYSTATISTICSSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecordStatisticsResponseBodyStatisticsStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordStatisticsResponseBodyStatisticsStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordStatisticsResponseBodyStatisticsStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeRecordStatisticsResponseBodyStatisticsStatistic() = default ;
    DescribeRecordStatisticsResponseBodyStatisticsStatistic(const DescribeRecordStatisticsResponseBodyStatisticsStatistic &) = default ;
    DescribeRecordStatisticsResponseBodyStatisticsStatistic(DescribeRecordStatisticsResponseBodyStatisticsStatistic &&) = default ;
    DescribeRecordStatisticsResponseBodyStatisticsStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordStatisticsResponseBodyStatisticsStatistic() = default ;
    DescribeRecordStatisticsResponseBodyStatisticsStatistic& operator=(const DescribeRecordStatisticsResponseBodyStatisticsStatistic &) = default ;
    DescribeRecordStatisticsResponseBodyStatisticsStatistic& operator=(DescribeRecordStatisticsResponseBodyStatisticsStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->timestamp_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeRecordStatisticsResponseBodyStatisticsStatistic& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeRecordStatisticsResponseBodyStatisticsStatistic& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The number of DNS requests.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The statistical timestamp. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
