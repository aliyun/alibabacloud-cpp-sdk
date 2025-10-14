// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTMONITORGROUPDYNAMICRULEREQUESTGROUPRULES_HPP_
#define ALIBABACLOUD_MODELS_PUTMONITORGROUPDYNAMICRULEREQUESTGROUPRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutMonitorGroupDynamicRuleRequestGroupRulesFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutMonitorGroupDynamicRuleRequestGroupRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutMonitorGroupDynamicRuleRequestGroupRules& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(FilterRelation, filterRelation_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
    };
    friend void from_json(const Darabonba::Json& j, PutMonitorGroupDynamicRuleRequestGroupRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(FilterRelation, filterRelation_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
    };
    PutMonitorGroupDynamicRuleRequestGroupRules() = default ;
    PutMonitorGroupDynamicRuleRequestGroupRules(const PutMonitorGroupDynamicRuleRequestGroupRules &) = default ;
    PutMonitorGroupDynamicRuleRequestGroupRules(PutMonitorGroupDynamicRuleRequestGroupRules &&) = default ;
    PutMonitorGroupDynamicRuleRequestGroupRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutMonitorGroupDynamicRuleRequestGroupRules() = default ;
    PutMonitorGroupDynamicRuleRequestGroupRules& operator=(const PutMonitorGroupDynamicRuleRequestGroupRules &) = default ;
    PutMonitorGroupDynamicRuleRequestGroupRules& operator=(PutMonitorGroupDynamicRuleRequestGroupRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->filterRelation_ == nullptr && return this->filters_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline PutMonitorGroupDynamicRuleRequestGroupRules& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // filterRelation Field Functions 
    bool hasFilterRelation() const { return this->filterRelation_ != nullptr;};
    void deleteFilterRelation() { this->filterRelation_ = nullptr;};
    inline string filterRelation() const { DARABONBA_PTR_GET_DEFAULT(filterRelation_, "") };
    inline PutMonitorGroupDynamicRuleRequestGroupRules& setFilterRelation(string filterRelation) { DARABONBA_PTR_SET_VALUE(filterRelation_, filterRelation) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<Models::PutMonitorGroupDynamicRuleRequestGroupRulesFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<Models::PutMonitorGroupDynamicRuleRequestGroupRulesFilters>) };
    inline vector<Models::PutMonitorGroupDynamicRuleRequestGroupRulesFilters> filters() { DARABONBA_PTR_GET(filters_, vector<Models::PutMonitorGroupDynamicRuleRequestGroupRulesFilters>) };
    inline PutMonitorGroupDynamicRuleRequestGroupRules& setFilters(const vector<Models::PutMonitorGroupDynamicRuleRequestGroupRulesFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline PutMonitorGroupDynamicRuleRequestGroupRules& setFilters(vector<Models::PutMonitorGroupDynamicRuleRequestGroupRulesFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


  protected:
    // The cloud service to which the alert rule is applied. Valid values of N: 1 to 3. Valid values:
    // 
    // *   ecs: Elastic Compute Service (ECS)
    // *   rds: ApsaraDB RDS
    // *   slb: Server Load Balancer (SLB)
    // 
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    // The logical operator used between conditional expressions in the alert rule. Valid values of N: 1 to 3. Valid values:
    // 
    // *   and: The instances that meet all the conditional expressions are automatically added to the application group.
    // *   or: The instances that meet one of the conditional expressions are automatically added to the application group.
    // 
    // This parameter is required.
    std::shared_ptr<string> filterRelation_ = nullptr;
    // None.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::PutMonitorGroupDynamicRuleRequestGroupRulesFilters>> filters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
