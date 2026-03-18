// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ModifyScalingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewTriggerType, newTriggerType_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(OldTriggerType, oldTriggerType_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(ScalingRuleId, scalingRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewTriggerType, newTriggerType_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(OldTriggerType, oldTriggerType_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleId, scalingRuleId_);
    };
    ModifyScalingRuleRequest() = default ;
    ModifyScalingRuleRequest(const ModifyScalingRuleRequest &) = default ;
    ModifyScalingRuleRequest(ModifyScalingRuleRequest &&) = default ;
    ModifyScalingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingRuleRequest() = default ;
    ModifyScalingRuleRequest& operator=(const ModifyScalingRuleRequest &) = default ;
    ModifyScalingRuleRequest& operator=(ModifyScalingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newTriggerType_ == nullptr
        && this->nodeGroupId_ == nullptr && this->oldTriggerType_ == nullptr && this->rule_ == nullptr && this->scalingRuleId_ == nullptr; };
    // newTriggerType Field Functions 
    bool hasNewTriggerType() const { return this->newTriggerType_ != nullptr;};
    void deleteNewTriggerType() { this->newTriggerType_ = nullptr;};
    inline string getNewTriggerType() const { DARABONBA_PTR_GET_DEFAULT(newTriggerType_, "") };
    inline ModifyScalingRuleRequest& setNewTriggerType(string newTriggerType) { DARABONBA_PTR_SET_VALUE(newTriggerType_, newTriggerType) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ModifyScalingRuleRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // oldTriggerType Field Functions 
    bool hasOldTriggerType() const { return this->oldTriggerType_ != nullptr;};
    void deleteOldTriggerType() { this->oldTriggerType_ = nullptr;};
    inline string getOldTriggerType() const { DARABONBA_PTR_GET_DEFAULT(oldTriggerType_, "") };
    inline ModifyScalingRuleRequest& setOldTriggerType(string oldTriggerType) { DARABONBA_PTR_SET_VALUE(oldTriggerType_, oldTriggerType) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline ModifyScalingRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // scalingRuleId Field Functions 
    bool hasScalingRuleId() const { return this->scalingRuleId_ != nullptr;};
    void deleteScalingRuleId() { this->scalingRuleId_ = nullptr;};
    inline string getScalingRuleId() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleId_, "") };
    inline ModifyScalingRuleRequest& setScalingRuleId(string scalingRuleId) { DARABONBA_PTR_SET_VALUE(scalingRuleId_, scalingRuleId) };


  protected:
    // This parameter is required.
    shared_ptr<string> newTriggerType_ {};
    // This parameter is required.
    shared_ptr<string> nodeGroupId_ {};
    // This parameter is required.
    shared_ptr<string> oldTriggerType_ {};
    // This parameter is required.
    shared_ptr<string> rule_ {};
    // This parameter is required.
    shared_ptr<string> scalingRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
