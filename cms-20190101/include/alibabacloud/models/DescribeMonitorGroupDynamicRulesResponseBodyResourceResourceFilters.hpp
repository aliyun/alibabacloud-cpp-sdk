// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPDYNAMICRULESRESPONSEBODYRESOURCERESOURCEFILTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPDYNAMICRULESRESPONSEBODYRESOURCERESOURCEFILTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
    };
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters() = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters(const DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters &) = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters(DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters &&) = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters() = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters& operator=(const DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters &) = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters& operator=(DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter>) };
    inline vector<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter> filter() { DARABONBA_PTR_GET(filter_, vector<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter>) };
    inline DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters& setFilter(const vector<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters& setFilter(vector<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


  protected:
    std::shared_ptr<vector<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFiltersFilter>> filter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
