// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTIMESERIESMETRICREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTIMESERIESMETRICREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkFlowTimeSeriesMetricRequestFilterConditions.hpp>
#include <alibabacloud/models/DescribeNetworkFlowTimeSeriesMetricRequestFilterDateRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeNetworkFlowTimeSeriesMetricRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTimeSeriesMetricRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(DateRange, dateRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTimeSeriesMetricRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(DateRange, dateRange_);
    };
    DescribeNetworkFlowTimeSeriesMetricRequestFilter() = default ;
    DescribeNetworkFlowTimeSeriesMetricRequestFilter(const DescribeNetworkFlowTimeSeriesMetricRequestFilter &) = default ;
    DescribeNetworkFlowTimeSeriesMetricRequestFilter(DescribeNetworkFlowTimeSeriesMetricRequestFilter &&) = default ;
    DescribeNetworkFlowTimeSeriesMetricRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTimeSeriesMetricRequestFilter() = default ;
    DescribeNetworkFlowTimeSeriesMetricRequestFilter& operator=(const DescribeNetworkFlowTimeSeriesMetricRequestFilter &) = default ;
    DescribeNetworkFlowTimeSeriesMetricRequestFilter& operator=(DescribeNetworkFlowTimeSeriesMetricRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->dateRange_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::DescribeNetworkFlowTimeSeriesMetricRequestFilterConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::DescribeNetworkFlowTimeSeriesMetricRequestFilterConditions>) };
    inline vector<Models::DescribeNetworkFlowTimeSeriesMetricRequestFilterConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::DescribeNetworkFlowTimeSeriesMetricRequestFilterConditions>) };
    inline DescribeNetworkFlowTimeSeriesMetricRequestFilter& setConditions(const vector<Models::DescribeNetworkFlowTimeSeriesMetricRequestFilterConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline DescribeNetworkFlowTimeSeriesMetricRequestFilter& setConditions(vector<Models::DescribeNetworkFlowTimeSeriesMetricRequestFilterConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // dateRange Field Functions 
    bool hasDateRange() const { return this->dateRange_ != nullptr;};
    void deleteDateRange() { this->dateRange_ = nullptr;};
    inline const Models::DescribeNetworkFlowTimeSeriesMetricRequestFilterDateRange & dateRange() const { DARABONBA_PTR_GET_CONST(dateRange_, Models::DescribeNetworkFlowTimeSeriesMetricRequestFilterDateRange) };
    inline Models::DescribeNetworkFlowTimeSeriesMetricRequestFilterDateRange dateRange() { DARABONBA_PTR_GET(dateRange_, Models::DescribeNetworkFlowTimeSeriesMetricRequestFilterDateRange) };
    inline DescribeNetworkFlowTimeSeriesMetricRequestFilter& setDateRange(const Models::DescribeNetworkFlowTimeSeriesMetricRequestFilterDateRange & dateRange) { DARABONBA_PTR_SET_VALUE(dateRange_, dateRange) };
    inline DescribeNetworkFlowTimeSeriesMetricRequestFilter& setDateRange(Models::DescribeNetworkFlowTimeSeriesMetricRequestFilterDateRange && dateRange) { DARABONBA_PTR_SET_RVALUE(dateRange_, dateRange) };


  protected:
    // The list of filter conditions. Each node describes a filter condition.
    std::shared_ptr<vector<Models::DescribeNetworkFlowTimeSeriesMetricRequestFilterConditions>> conditions_ = nullptr;
    // Specifies the date range for the query.
    // 
    // This parameter is required.
    std::shared_ptr<Models::DescribeNetworkFlowTimeSeriesMetricRequestFilterDateRange> dateRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
