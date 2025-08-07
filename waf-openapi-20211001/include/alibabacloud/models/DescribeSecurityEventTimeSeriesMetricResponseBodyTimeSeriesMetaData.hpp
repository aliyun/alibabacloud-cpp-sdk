// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTIMESERIESMETRICRESPONSEBODYTIMESERIESMETADATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTIMESERIESMETRICRESPONSEBODYTIMESERIESMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData& obj) { 
      DARABONBA_PTR_TO_JSON(AggregateInterval, aggregateInterval_);
      DARABONBA_PTR_TO_JSON(DateRange, dateRange_);
      DARABONBA_PTR_TO_JSON(Units, units_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregateInterval, aggregateInterval_);
      DARABONBA_PTR_FROM_JSON(DateRange, dateRange_);
      DARABONBA_PTR_FROM_JSON(Units, units_);
    };
    DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData() = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData(const DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData &) = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData(DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData &&) = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData() = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData& operator=(const DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData &) = default ;
    DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData& operator=(DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregateInterval_ != nullptr
        && this->dateRange_ != nullptr && this->units_ != nullptr; };
    // aggregateInterval Field Functions 
    bool hasAggregateInterval() const { return this->aggregateInterval_ != nullptr;};
    void deleteAggregateInterval() { this->aggregateInterval_ = nullptr;};
    inline string aggregateInterval() const { DARABONBA_PTR_GET_DEFAULT(aggregateInterval_, "") };
    inline DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData& setAggregateInterval(string aggregateInterval) { DARABONBA_PTR_SET_VALUE(aggregateInterval_, aggregateInterval) };


    // dateRange Field Functions 
    bool hasDateRange() const { return this->dateRange_ != nullptr;};
    void deleteDateRange() { this->dateRange_ = nullptr;};
    inline const Models::DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange & dateRange() const { DARABONBA_PTR_GET_CONST(dateRange_, Models::DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange) };
    inline Models::DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange dateRange() { DARABONBA_PTR_GET(dateRange_, Models::DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange) };
    inline DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData& setDateRange(const Models::DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange & dateRange) { DARABONBA_PTR_SET_VALUE(dateRange_, dateRange) };
    inline DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData& setDateRange(Models::DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange && dateRange) { DARABONBA_PTR_SET_RVALUE(dateRange_, dateRange) };


    // units Field Functions 
    bool hasUnits() const { return this->units_ != nullptr;};
    void deleteUnits() { this->units_ = nullptr;};
    inline string units() const { DARABONBA_PTR_GET_DEFAULT(units_, "") };
    inline DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaData& setUnits(string units) { DARABONBA_PTR_SET_VALUE(units_, units) };


  protected:
    // The time granularity of data points in the time series data returned. For example, a value of 15m indicates that data points are collected at 15-minute intervals. For more information about time granularities, see the **Time granularities of data points in time series** section below.
    std::shared_ptr<string> aggregateInterval_ = nullptr;
    // The time range that is used for the query.
    std::shared_ptr<Models::DescribeSecurityEventTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange> dateRange_ = nullptr;
    // The unit of the statistics returned. It is fixed as requests.
    std::shared_ptr<string> units_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
