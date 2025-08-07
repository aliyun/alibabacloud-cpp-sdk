// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTIMESERIESMETRICRESPONSEBODYTIMESERIESMETADATADATERANGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTIMESERIESMETRICRESPONSEBODYTIMESERIESMETADATADATERANGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange() = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange(const DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange &) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange(DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange &&) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange() = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange& operator=(const DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange &) = default ;
    DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange& operator=(DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endDate_ != nullptr
        && this->startDate_ != nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline DescribeNetworkFlowTimeSeriesMetricResponseBodyTimeSeriesMetaDataDateRange& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The end time of the query range (Unix timestamp, seconds). Same as the EndDate request parameter.
    std::shared_ptr<int64_t> endDate_ = nullptr;
    // The start time of the query range (Unix timestamp, seconds). Same as the StartDate request parameter.
    std::shared_ptr<int64_t> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
