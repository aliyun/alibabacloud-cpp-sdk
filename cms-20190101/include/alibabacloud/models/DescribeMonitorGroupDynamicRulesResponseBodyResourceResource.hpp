// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPDYNAMICRULESRESPONSEBODYRESOURCERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPDYNAMICRULESRESPONSEBODYRESOURCERESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupDynamicRulesResponseBodyResourceResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupDynamicRulesResponseBodyResourceResource& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(FilterRelation, filterRelation_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupDynamicRulesResponseBodyResourceResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(FilterRelation, filterRelation_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
    };
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResource() = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResource(const DescribeMonitorGroupDynamicRulesResponseBodyResourceResource &) = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResource(DescribeMonitorGroupDynamicRulesResponseBodyResourceResource &&) = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupDynamicRulesResponseBodyResourceResource() = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResource& operator=(const DescribeMonitorGroupDynamicRulesResponseBodyResourceResource &) = default ;
    DescribeMonitorGroupDynamicRulesResponseBodyResourceResource& operator=(DescribeMonitorGroupDynamicRulesResponseBodyResourceResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->filterRelation_ != nullptr && this->filters_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeMonitorGroupDynamicRulesResponseBodyResourceResource& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // filterRelation Field Functions 
    bool hasFilterRelation() const { return this->filterRelation_ != nullptr;};
    void deleteFilterRelation() { this->filterRelation_ = nullptr;};
    inline string filterRelation() const { DARABONBA_PTR_GET_DEFAULT(filterRelation_, "") };
    inline DescribeMonitorGroupDynamicRulesResponseBodyResourceResource& setFilterRelation(string filterRelation) { DARABONBA_PTR_SET_VALUE(filterRelation_, filterRelation) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters & filters() const { DARABONBA_PTR_GET_CONST(filters_, Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters) };
    inline Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters filters() { DARABONBA_PTR_GET(filters_, Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters) };
    inline DescribeMonitorGroupDynamicRulesResponseBodyResourceResource& setFilters(const Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeMonitorGroupDynamicRulesResponseBodyResourceResource& setFilters(Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


  protected:
    // The type of the cloud service to which the dynamic rule belongs. Valid values:
    // 
    // *   ecs: Elastic Compute Service (ECS)
    // *   rds: ApsaraDB RDS
    // *   slb: Server Load Balancer (SLB)
    std::shared_ptr<string> category_ = nullptr;
    // The filter condition. Valid values:
    // 
    // *   and: queries the instances that meet all alert rules.
    // *   or: queries the instances that meet any alert rule.
    std::shared_ptr<string> filterRelation_ = nullptr;
    // The dynamic rules of the application group.
    std::shared_ptr<Models::DescribeMonitorGroupDynamicRulesResponseBodyResourceResourceFilters> filters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
