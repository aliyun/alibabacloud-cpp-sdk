// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkFlowTopNMetricRequestFilterConditions.hpp>
#include <alibabacloud/models/DescribeNetworkFlowTopNMetricRequestFilterDateRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeNetworkFlowTopNMetricRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTopNMetricRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(DateRange, dateRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTopNMetricRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(DateRange, dateRange_);
    };
    DescribeNetworkFlowTopNMetricRequestFilter() = default ;
    DescribeNetworkFlowTopNMetricRequestFilter(const DescribeNetworkFlowTopNMetricRequestFilter &) = default ;
    DescribeNetworkFlowTopNMetricRequestFilter(DescribeNetworkFlowTopNMetricRequestFilter &&) = default ;
    DescribeNetworkFlowTopNMetricRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTopNMetricRequestFilter() = default ;
    DescribeNetworkFlowTopNMetricRequestFilter& operator=(const DescribeNetworkFlowTopNMetricRequestFilter &) = default ;
    DescribeNetworkFlowTopNMetricRequestFilter& operator=(DescribeNetworkFlowTopNMetricRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditions_ != nullptr
        && this->dateRange_ != nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::DescribeNetworkFlowTopNMetricRequestFilterConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::DescribeNetworkFlowTopNMetricRequestFilterConditions>) };
    inline vector<Models::DescribeNetworkFlowTopNMetricRequestFilterConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::DescribeNetworkFlowTopNMetricRequestFilterConditions>) };
    inline DescribeNetworkFlowTopNMetricRequestFilter& setConditions(const vector<Models::DescribeNetworkFlowTopNMetricRequestFilterConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline DescribeNetworkFlowTopNMetricRequestFilter& setConditions(vector<Models::DescribeNetworkFlowTopNMetricRequestFilterConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // dateRange Field Functions 
    bool hasDateRange() const { return this->dateRange_ != nullptr;};
    void deleteDateRange() { this->dateRange_ = nullptr;};
    inline const Models::DescribeNetworkFlowTopNMetricRequestFilterDateRange & dateRange() const { DARABONBA_PTR_GET_CONST(dateRange_, Models::DescribeNetworkFlowTopNMetricRequestFilterDateRange) };
    inline Models::DescribeNetworkFlowTopNMetricRequestFilterDateRange dateRange() { DARABONBA_PTR_GET(dateRange_, Models::DescribeNetworkFlowTopNMetricRequestFilterDateRange) };
    inline DescribeNetworkFlowTopNMetricRequestFilter& setDateRange(const Models::DescribeNetworkFlowTopNMetricRequestFilterDateRange & dateRange) { DARABONBA_PTR_SET_VALUE(dateRange_, dateRange) };
    inline DescribeNetworkFlowTopNMetricRequestFilter& setDateRange(Models::DescribeNetworkFlowTopNMetricRequestFilterDateRange && dateRange) { DARABONBA_PTR_SET_RVALUE(dateRange_, dateRange) };


  protected:
    // The list of filter conditions. Each node describes a filter condition.
    std::shared_ptr<vector<Models::DescribeNetworkFlowTopNMetricRequestFilterConditions>> conditions_ = nullptr;
    // Specifies the date range for the query.
    // 
    // This parameter is required.
    std::shared_ptr<Models::DescribeNetworkFlowTopNMetricRequestFilterDateRange> dateRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
