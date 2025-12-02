// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODYGROUPSINFOGPUELASTICPLAN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODYGROUPSINFOGPUELASTICPLAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlanRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan() = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan(const DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan &) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan(DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan &&) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan() = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan& operator=(const DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan &) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan& operator=(DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->rules_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlanRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlanRules>) };
    inline vector<Models::DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlanRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlanRules>) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan& setRules(const vector<Models::DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlanRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlan& setRules(vector<Models::DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlanRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDBResourceGroupResponseBodyGroupsInfoGpuElasticPlanRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
