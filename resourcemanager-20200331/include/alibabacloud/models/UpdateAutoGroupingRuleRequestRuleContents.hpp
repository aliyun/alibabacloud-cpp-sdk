// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTOGROUPINGRULEREQUESTRULECONTENTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTOGROUPINGRULEREQUESTRULECONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateAutoGroupingRuleRequestRuleContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAutoGroupingRuleRequestRuleContents& obj) { 
      DARABONBA_PTR_TO_JSON(AutoGroupingScopeCondition, autoGroupingScopeCondition_);
      DARABONBA_PTR_TO_JSON(RuleContentId, ruleContentId_);
      DARABONBA_PTR_TO_JSON(TargetResourceGroupCondition, targetResourceGroupCondition_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAutoGroupingRuleRequestRuleContents& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoGroupingScopeCondition, autoGroupingScopeCondition_);
      DARABONBA_PTR_FROM_JSON(RuleContentId, ruleContentId_);
      DARABONBA_PTR_FROM_JSON(TargetResourceGroupCondition, targetResourceGroupCondition_);
    };
    UpdateAutoGroupingRuleRequestRuleContents() = default ;
    UpdateAutoGroupingRuleRequestRuleContents(const UpdateAutoGroupingRuleRequestRuleContents &) = default ;
    UpdateAutoGroupingRuleRequestRuleContents(UpdateAutoGroupingRuleRequestRuleContents &&) = default ;
    UpdateAutoGroupingRuleRequestRuleContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAutoGroupingRuleRequestRuleContents() = default ;
    UpdateAutoGroupingRuleRequestRuleContents& operator=(const UpdateAutoGroupingRuleRequestRuleContents &) = default ;
    UpdateAutoGroupingRuleRequestRuleContents& operator=(UpdateAutoGroupingRuleRequestRuleContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoGroupingScopeCondition_ == nullptr
        && return this->ruleContentId_ == nullptr && return this->targetResourceGroupCondition_ == nullptr; };
    // autoGroupingScopeCondition Field Functions 
    bool hasAutoGroupingScopeCondition() const { return this->autoGroupingScopeCondition_ != nullptr;};
    void deleteAutoGroupingScopeCondition() { this->autoGroupingScopeCondition_ = nullptr;};
    inline string autoGroupingScopeCondition() const { DARABONBA_PTR_GET_DEFAULT(autoGroupingScopeCondition_, "") };
    inline UpdateAutoGroupingRuleRequestRuleContents& setAutoGroupingScopeCondition(string autoGroupingScopeCondition) { DARABONBA_PTR_SET_VALUE(autoGroupingScopeCondition_, autoGroupingScopeCondition) };


    // ruleContentId Field Functions 
    bool hasRuleContentId() const { return this->ruleContentId_ != nullptr;};
    void deleteRuleContentId() { this->ruleContentId_ = nullptr;};
    inline string ruleContentId() const { DARABONBA_PTR_GET_DEFAULT(ruleContentId_, "") };
    inline UpdateAutoGroupingRuleRequestRuleContents& setRuleContentId(string ruleContentId) { DARABONBA_PTR_SET_VALUE(ruleContentId_, ruleContentId) };


    // targetResourceGroupCondition Field Functions 
    bool hasTargetResourceGroupCondition() const { return this->targetResourceGroupCondition_ != nullptr;};
    void deleteTargetResourceGroupCondition() { this->targetResourceGroupCondition_ = nullptr;};
    inline string targetResourceGroupCondition() const { DARABONBA_PTR_GET_DEFAULT(targetResourceGroupCondition_, "") };
    inline UpdateAutoGroupingRuleRequestRuleContents& setTargetResourceGroupCondition(string targetResourceGroupCondition) { DARABONBA_PTR_SET_VALUE(targetResourceGroupCondition_, targetResourceGroupCondition) };


  protected:
    // The condition for the range of resources that are automatically transferred.
    std::shared_ptr<string> autoGroupingScopeCondition_ = nullptr;
    // The ID of the content record.
    std::shared_ptr<string> ruleContentId_ = nullptr;
    // The condition for the destination resource group.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetResourceGroupCondition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
