// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class ModifyAutoScalingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoScalingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ObservationWindow, observationWindow_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(ScaleInStep, scaleInStep_);
      DARABONBA_PTR_TO_JSON(ScaleOutStep, scaleOutStep_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TargetMetric, targetMetric_);
      DARABONBA_PTR_TO_JSON(TargetNodes, targetNodes_);
      DARABONBA_PTR_TO_JSON(ThresholdLower, thresholdLower_);
      DARABONBA_PTR_TO_JSON(ThresholdUpper, thresholdUpper_);
      DARABONBA_PTR_TO_JSON(TriggerCronExpr, triggerCronExpr_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoScalingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ObservationWindow, observationWindow_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(ScaleInStep, scaleInStep_);
      DARABONBA_PTR_FROM_JSON(ScaleOutStep, scaleOutStep_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TargetMetric, targetMetric_);
      DARABONBA_PTR_FROM_JSON(TargetNodes, targetNodes_);
      DARABONBA_PTR_FROM_JSON(ThresholdLower, thresholdLower_);
      DARABONBA_PTR_FROM_JSON(ThresholdUpper, thresholdUpper_);
      DARABONBA_PTR_FROM_JSON(TriggerCronExpr, triggerCronExpr_);
    };
    ModifyAutoScalingRuleRequest() = default ;
    ModifyAutoScalingRuleRequest(const ModifyAutoScalingRuleRequest &) = default ;
    ModifyAutoScalingRuleRequest(ModifyAutoScalingRuleRequest &&) = default ;
    ModifyAutoScalingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoScalingRuleRequest() = default ;
    ModifyAutoScalingRuleRequest& operator=(const ModifyAutoScalingRuleRequest &) = default ;
    ModifyAutoScalingRuleRequest& operator=(ModifyAutoScalingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->enabled_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->observationWindow_ == nullptr && this->operationType_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->ruleType_ == nullptr && this->scaleInStep_ == nullptr && this->scaleOutStep_ == nullptr && this->securityToken_ == nullptr
        && this->silenceTime_ == nullptr && this->startTime_ == nullptr && this->targetMetric_ == nullptr && this->targetNodes_ == nullptr && this->thresholdLower_ == nullptr
        && this->thresholdUpper_ == nullptr && this->triggerCronExpr_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline ModifyAutoScalingRuleRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ModifyAutoScalingRuleRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ModifyAutoScalingRuleRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyAutoScalingRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // observationWindow Field Functions 
    bool hasObservationWindow() const { return this->observationWindow_ != nullptr;};
    void deleteObservationWindow() { this->observationWindow_ = nullptr;};
    inline int32_t getObservationWindow() const { DARABONBA_PTR_GET_DEFAULT(observationWindow_, 0) };
    inline ModifyAutoScalingRuleRequest& setObservationWindow(int32_t observationWindow) { DARABONBA_PTR_SET_VALUE(observationWindow_, observationWindow) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline ModifyAutoScalingRuleRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyAutoScalingRuleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyAutoScalingRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyAutoScalingRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyAutoScalingRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ModifyAutoScalingRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyAutoScalingRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ModifyAutoScalingRuleRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scaleInStep Field Functions 
    bool hasScaleInStep() const { return this->scaleInStep_ != nullptr;};
    void deleteScaleInStep() { this->scaleInStep_ = nullptr;};
    inline int32_t getScaleInStep() const { DARABONBA_PTR_GET_DEFAULT(scaleInStep_, 0) };
    inline ModifyAutoScalingRuleRequest& setScaleInStep(int32_t scaleInStep) { DARABONBA_PTR_SET_VALUE(scaleInStep_, scaleInStep) };


    // scaleOutStep Field Functions 
    bool hasScaleOutStep() const { return this->scaleOutStep_ != nullptr;};
    void deleteScaleOutStep() { this->scaleOutStep_ = nullptr;};
    inline int32_t getScaleOutStep() const { DARABONBA_PTR_GET_DEFAULT(scaleOutStep_, 0) };
    inline ModifyAutoScalingRuleRequest& setScaleOutStep(int32_t scaleOutStep) { DARABONBA_PTR_SET_VALUE(scaleOutStep_, scaleOutStep) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyAutoScalingRuleRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline ModifyAutoScalingRuleRequest& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ModifyAutoScalingRuleRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // targetMetric Field Functions 
    bool hasTargetMetric() const { return this->targetMetric_ != nullptr;};
    void deleteTargetMetric() { this->targetMetric_ = nullptr;};
    inline string getTargetMetric() const { DARABONBA_PTR_GET_DEFAULT(targetMetric_, "") };
    inline ModifyAutoScalingRuleRequest& setTargetMetric(string targetMetric) { DARABONBA_PTR_SET_VALUE(targetMetric_, targetMetric) };


    // targetNodes Field Functions 
    bool hasTargetNodes() const { return this->targetNodes_ != nullptr;};
    void deleteTargetNodes() { this->targetNodes_ = nullptr;};
    inline int32_t getTargetNodes() const { DARABONBA_PTR_GET_DEFAULT(targetNodes_, 0) };
    inline ModifyAutoScalingRuleRequest& setTargetNodes(int32_t targetNodes) { DARABONBA_PTR_SET_VALUE(targetNodes_, targetNodes) };


    // thresholdLower Field Functions 
    bool hasThresholdLower() const { return this->thresholdLower_ != nullptr;};
    void deleteThresholdLower() { this->thresholdLower_ = nullptr;};
    inline int32_t getThresholdLower() const { DARABONBA_PTR_GET_DEFAULT(thresholdLower_, 0) };
    inline ModifyAutoScalingRuleRequest& setThresholdLower(int32_t thresholdLower) { DARABONBA_PTR_SET_VALUE(thresholdLower_, thresholdLower) };


    // thresholdUpper Field Functions 
    bool hasThresholdUpper() const { return this->thresholdUpper_ != nullptr;};
    void deleteThresholdUpper() { this->thresholdUpper_ = nullptr;};
    inline int32_t getThresholdUpper() const { DARABONBA_PTR_GET_DEFAULT(thresholdUpper_, 0) };
    inline ModifyAutoScalingRuleRequest& setThresholdUpper(int32_t thresholdUpper) { DARABONBA_PTR_SET_VALUE(thresholdUpper_, thresholdUpper) };


    // triggerCronExpr Field Functions 
    bool hasTriggerCronExpr() const { return this->triggerCronExpr_ != nullptr;};
    void deleteTriggerCronExpr() { this->triggerCronExpr_ = nullptr;};
    inline string getTriggerCronExpr() const { DARABONBA_PTR_GET_DEFAULT(triggerCronExpr_, "") };
    inline ModifyAutoScalingRuleRequest& setTriggerCronExpr(string triggerCronExpr) { DARABONBA_PTR_SET_VALUE(triggerCronExpr_, triggerCronExpr) };


  protected:
    // This parameter is required.
    shared_ptr<string> configId_ {};
    shared_ptr<bool> enabled_ {};
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> observationWindow_ {};
    shared_ptr<string> operationType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
    shared_ptr<string> ruleName_ {};
    shared_ptr<string> ruleType_ {};
    shared_ptr<int32_t> scaleInStep_ {};
    shared_ptr<int32_t> scaleOutStep_ {};
    shared_ptr<string> securityToken_ {};
    shared_ptr<int32_t> silenceTime_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> targetMetric_ {};
    shared_ptr<int32_t> targetNodes_ {};
    shared_ptr<int32_t> thresholdLower_ {};
    shared_ptr<int32_t> thresholdUpper_ {};
    shared_ptr<string> triggerCronExpr_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
