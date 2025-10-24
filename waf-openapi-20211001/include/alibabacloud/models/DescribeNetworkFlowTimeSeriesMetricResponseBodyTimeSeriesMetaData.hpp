// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTIMESERIESMETRICRESPONSEBODYTIMESERIESMETADATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTIMESERIESMETRICRESPONSEBODYTIMESERIESMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData& obj) { 
      DARABONBA_PTR_TO_JSON(AggregateInterval, aggregateInterval_);
      DARABONBA_PTR_TO_JSON(DateRange, dateRange_);
      DARABONBA_PTR_TO_JSON(Units, units_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregateInterval, aggregateInterval_);
      DARABONBA_PTR_FROM_JSON(DateRange, dateRange_);
      DARABONBA_PTR_FROM_JSON(Units, units_);
    };
    DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData() = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData(const DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData &) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData(DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData &&) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData() = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData& operator=(const DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData &) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData& operator=(DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregateInterval_ == nullptr
        && return this->dateRange_ == nullptr && return this->units_ == nullptr; };
    // aggregateInterval Field Functions 
    bool hasAggregateInterval() const { return this->aggregateInterval_ != nullptr;};
    void deleteAggregateInterval() { this->aggregateInterval_ = nullptr;};
    inline string aggregateInterval() const { DARABONBA_PTR_GET_DEFAULT(aggregateInterval_, "") };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData& setAggregateInterval(string aggregateInterval) { DARABONBA_PTR_SET_VALUE(aggregateInterval_, aggregateInterval) };


    // dateRange Field Functions 
    bool hasDateRange() const { return this->dateRange_ != nullptr;};
    void deleteDateRange() { this->dateRange_ = nullptr;};
    inline const Models::DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange & dateRange() const { DARABONBA_PTR_GET_CONST(dateRange_, Models::DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange) };
    inline Models::DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange dateRange() { DARABONBA_PTR_GET(dateRange_, Models::DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData& setDateRange(const Models::DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange & dateRange) { DARABONBA_PTR_SET_VALUE(dateRange_, dateRange) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData& setDateRange(Models::DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange && dateRange) { DARABONBA_PTR_SET_RVALUE(dateRange_, dateRange) };


    // units Field Functions 
    bool hasUnits() const { return this->units_ != nullptr;};
    void deleteUnits() { this->units_ = nullptr;};
    inline string units() const { DARABONBA_PTR_GET_DEFAULT(units_, "") };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaData& setUnits(string units) { DARABONBA_PTR_SET_VALUE(units_, units) };


  protected:
    // The time granularity. For example, 15m indicates that each data point is counted every 15 minutes. For details, see the **Time granularity of time series data points** section below.
    std::shared_ptr<string> aggregateInterval_ = nullptr;
    // The query time range.
    std::shared_ptr<Models::DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange> dateRange_ = nullptr;
    // The unit of the returned data. It is fixed as requests.
    std::shared_ptr<string> units_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
