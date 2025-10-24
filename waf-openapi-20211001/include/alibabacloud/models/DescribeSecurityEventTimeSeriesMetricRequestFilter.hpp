// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTIMESERIESMETRICREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTIMESERIESMETRICREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityEventTimeSeriesMetricRequestFilterConditions.hpp>
#include <alibabacloud/models/DescribeSecurityEventTimeSeriesMetricRequestFilterDateRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventTimeSeriesMetricRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventTimeSeriesMetricRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(DateRange, dateRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventTimeSeriesMetricRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(DateRange, dateRange_);
    };
    DescribeSecurityEventTimeSeriesMetricRequestFilter() = default ;
    DescribeSecurityEventTimeSeriesMetricRequestFilter(const DescribeSecurityEventTimeSeriesMetricRequestFilter &) = default ;
    DescribeSecurityEventTimeSeriesMetricRequestFilter(DescribeSecurityEventTimeSeriesMetricRequestFilter &&) = default ;
    DescribeSecurityEventTimeSeriesMetricRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventTimeSeriesMetricRequestFilter() = default ;
    DescribeSecurityEventTimeSeriesMetricRequestFilter& operator=(const DescribeSecurityEventTimeSeriesMetricRequestFilter &) = default ;
    DescribeSecurityEventTimeSeriesMetricRequestFilter& operator=(DescribeSecurityEventTimeSeriesMetricRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->dateRange_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::DescribeSecurityEventTimeSeriesMetricRequestFilterConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::DescribeSecurityEventTimeSeriesMetricRequestFilterConditions>) };
    inline vector<Models::DescribeSecurityEventTimeSeriesMetricRequestFilterConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::DescribeSecurityEventTimeSeriesMetricRequestFilterConditions>) };
    inline DescribeSecurityEventTimeSeriesMetricRequestFilter& setConditions(const vector<Models::DescribeSecurityEventTimeSeriesMetricRequestFilterConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline DescribeSecurityEventTimeSeriesMetricRequestFilter& setConditions(vector<Models::DescribeSecurityEventTimeSeriesMetricRequestFilterConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // dateRange Field Functions 
    bool hasDateRange() const { return this->dateRange_ != nullptr;};
    void deleteDateRange() { this->dateRange_ = nullptr;};
    inline const Models::DescribeSecurityEventTimeSeriesMetricRequestFilterDateRange & dateRange() const { DARABONBA_PTR_GET_CONST(dateRange_, Models::DescribeSecurityEventTimeSeriesMetricRequestFilterDateRange) };
    inline Models::DescribeSecurityEventTimeSeriesMetricRequestFilterDateRange dateRange() { DARABONBA_PTR_GET(dateRange_, Models::DescribeSecurityEventTimeSeriesMetricRequestFilterDateRange) };
    inline DescribeSecurityEventTimeSeriesMetricRequestFilter& setDateRange(const Models::DescribeSecurityEventTimeSeriesMetricRequestFilterDateRange & dateRange) { DARABONBA_PTR_SET_VALUE(dateRange_, dateRange) };
    inline DescribeSecurityEventTimeSeriesMetricRequestFilter& setDateRange(Models::DescribeSecurityEventTimeSeriesMetricRequestFilterDateRange && dateRange) { DARABONBA_PTR_SET_RVALUE(dateRange_, dateRange) };


  protected:
    // The filter conditions. Each object describes a filter condition.
    std::shared_ptr<vector<Models::DescribeSecurityEventTimeSeriesMetricRequestFilterConditions>> conditions_ = nullptr;
    // The time range for the query.
    // 
    // This parameter is required.
    std::shared_ptr<Models::DescribeSecurityEventTimeSeriesMetricRequestFilterDateRange> dateRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
