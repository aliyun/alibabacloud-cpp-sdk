// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPREQUESTGPUELASTICPLAN_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPREQUESTGPUELASTICPLAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyDBResourceGroupRequestGpuElasticPlanRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyDBResourceGroupRequestGpuElasticPlan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBResourceGroupRequestGpuElasticPlan& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBResourceGroupRequestGpuElasticPlan& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    ModifyDBResourceGroupRequestGpuElasticPlan() = default ;
    ModifyDBResourceGroupRequestGpuElasticPlan(const ModifyDBResourceGroupRequestGpuElasticPlan &) = default ;
    ModifyDBResourceGroupRequestGpuElasticPlan(ModifyDBResourceGroupRequestGpuElasticPlan &&) = default ;
    ModifyDBResourceGroupRequestGpuElasticPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBResourceGroupRequestGpuElasticPlan() = default ;
    ModifyDBResourceGroupRequestGpuElasticPlan& operator=(const ModifyDBResourceGroupRequestGpuElasticPlan &) = default ;
    ModifyDBResourceGroupRequestGpuElasticPlan& operator=(ModifyDBResourceGroupRequestGpuElasticPlan &&) = default ;
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
    inline ModifyDBResourceGroupRequestGpuElasticPlan& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::ModifyDBResourceGroupRequestGpuElasticPlanRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::ModifyDBResourceGroupRequestGpuElasticPlanRules>) };
    inline vector<Models::ModifyDBResourceGroupRequestGpuElasticPlanRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::ModifyDBResourceGroupRequestGpuElasticPlanRules>) };
    inline ModifyDBResourceGroupRequestGpuElasticPlan& setRules(const vector<Models::ModifyDBResourceGroupRequestGpuElasticPlanRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ModifyDBResourceGroupRequestGpuElasticPlan& setRules(vector<Models::ModifyDBResourceGroupRequestGpuElasticPlanRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<vector<Models::ModifyDBResourceGroupRequestGpuElasticPlanRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
