// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOGROUPINGRULEREQUESTRULECONTENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOGROUPINGRULEREQUESTRULECONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateAutoGroupingRuleRequestRuleContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoGroupingRuleRequestRuleContents& obj) { 
      DARABONBA_PTR_TO_JSON(AutoGroupingScopeCondition, autoGroupingScopeCondition_);
      DARABONBA_PTR_TO_JSON(TargetResourceGroupCondition, targetResourceGroupCondition_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoGroupingRuleRequestRuleContents& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoGroupingScopeCondition, autoGroupingScopeCondition_);
      DARABONBA_PTR_FROM_JSON(TargetResourceGroupCondition, targetResourceGroupCondition_);
    };
    CreateAutoGroupingRuleRequestRuleContents() = default ;
    CreateAutoGroupingRuleRequestRuleContents(const CreateAutoGroupingRuleRequestRuleContents &) = default ;
    CreateAutoGroupingRuleRequestRuleContents(CreateAutoGroupingRuleRequestRuleContents &&) = default ;
    CreateAutoGroupingRuleRequestRuleContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoGroupingRuleRequestRuleContents() = default ;
    CreateAutoGroupingRuleRequestRuleContents& operator=(const CreateAutoGroupingRuleRequestRuleContents &) = default ;
    CreateAutoGroupingRuleRequestRuleContents& operator=(CreateAutoGroupingRuleRequestRuleContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoGroupingScopeCondition_ == nullptr
        && return this->targetResourceGroupCondition_ == nullptr; };
    // autoGroupingScopeCondition Field Functions 
    bool hasAutoGroupingScopeCondition() const { return this->autoGroupingScopeCondition_ != nullptr;};
    void deleteAutoGroupingScopeCondition() { this->autoGroupingScopeCondition_ = nullptr;};
    inline string autoGroupingScopeCondition() const { DARABONBA_PTR_GET_DEFAULT(autoGroupingScopeCondition_, "") };
    inline CreateAutoGroupingRuleRequestRuleContents& setAutoGroupingScopeCondition(string autoGroupingScopeCondition) { DARABONBA_PTR_SET_VALUE(autoGroupingScopeCondition_, autoGroupingScopeCondition) };


    // targetResourceGroupCondition Field Functions 
    bool hasTargetResourceGroupCondition() const { return this->targetResourceGroupCondition_ != nullptr;};
    void deleteTargetResourceGroupCondition() { this->targetResourceGroupCondition_ = nullptr;};
    inline string targetResourceGroupCondition() const { DARABONBA_PTR_GET_DEFAULT(targetResourceGroupCondition_, "") };
    inline CreateAutoGroupingRuleRequestRuleContents& setTargetResourceGroupCondition(string targetResourceGroupCondition) { DARABONBA_PTR_SET_VALUE(targetResourceGroupCondition_, targetResourceGroupCondition) };


  protected:
    // The condition for the range of resources to be automatically transferred.
    std::shared_ptr<string> autoGroupingScopeCondition_ = nullptr;
    // The condition for the destination resource group.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetResourceGroupCondition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
