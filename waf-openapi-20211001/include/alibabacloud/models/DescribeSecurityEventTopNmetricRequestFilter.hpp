// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityEventTopNMetricRequestFilterConditions.hpp>
#include <alibabacloud/models/DescribeSecurityEventTopNMetricRequestFilterDateRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventTopNMetricRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventTopNMetricRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(DateRange, dateRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventTopNMetricRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(DateRange, dateRange_);
    };
    DescribeSecurityEventTopNMetricRequestFilter() = default ;
    DescribeSecurityEventTopNMetricRequestFilter(const DescribeSecurityEventTopNMetricRequestFilter &) = default ;
    DescribeSecurityEventTopNMetricRequestFilter(DescribeSecurityEventTopNMetricRequestFilter &&) = default ;
    DescribeSecurityEventTopNMetricRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventTopNMetricRequestFilter() = default ;
    DescribeSecurityEventTopNMetricRequestFilter& operator=(const DescribeSecurityEventTopNMetricRequestFilter &) = default ;
    DescribeSecurityEventTopNMetricRequestFilter& operator=(DescribeSecurityEventTopNMetricRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditions_ != nullptr
        && this->dateRange_ != nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::DescribeSecurityEventTopNMetricRequestFilterConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::DescribeSecurityEventTopNMetricRequestFilterConditions>) };
    inline vector<Models::DescribeSecurityEventTopNMetricRequestFilterConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::DescribeSecurityEventTopNMetricRequestFilterConditions>) };
    inline DescribeSecurityEventTopNMetricRequestFilter& setConditions(const vector<Models::DescribeSecurityEventTopNMetricRequestFilterConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline DescribeSecurityEventTopNMetricRequestFilter& setConditions(vector<Models::DescribeSecurityEventTopNMetricRequestFilterConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // dateRange Field Functions 
    bool hasDateRange() const { return this->dateRange_ != nullptr;};
    void deleteDateRange() { this->dateRange_ = nullptr;};
    inline const Models::DescribeSecurityEventTopNMetricRequestFilterDateRange & dateRange() const { DARABONBA_PTR_GET_CONST(dateRange_, Models::DescribeSecurityEventTopNMetricRequestFilterDateRange) };
    inline Models::DescribeSecurityEventTopNMetricRequestFilterDateRange dateRange() { DARABONBA_PTR_GET(dateRange_, Models::DescribeSecurityEventTopNMetricRequestFilterDateRange) };
    inline DescribeSecurityEventTopNMetricRequestFilter& setDateRange(const Models::DescribeSecurityEventTopNMetricRequestFilterDateRange & dateRange) { DARABONBA_PTR_SET_VALUE(dateRange_, dateRange) };
    inline DescribeSecurityEventTopNMetricRequestFilter& setDateRange(Models::DescribeSecurityEventTopNMetricRequestFilterDateRange && dateRange) { DARABONBA_PTR_SET_RVALUE(dateRange_, dateRange) };


  protected:
    // The filter conditions. Each object describes a filter condition.
    std::shared_ptr<vector<Models::DescribeSecurityEventTopNMetricRequestFilterConditions>> conditions_ = nullptr;
    // The time range for the query.
    // 
    // This parameter is required.
    std::shared_ptr<Models::DescribeSecurityEventTopNMetricRequestFilterDateRange> dateRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
