// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTPROVISIONCONFIGINPUT_HPP_
#define ALIBABACLOUD_MODELS_PUTPROVISIONCONFIGINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScheduledAction.hpp>
#include <alibabacloud/models/TargetTrackingPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class PutProvisionConfigInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutProvisionConfigInput& obj) { 
      DARABONBA_PTR_TO_JSON(alwaysAllocateCPU, alwaysAllocateCPU_);
      DARABONBA_PTR_TO_JSON(alwaysAllocateGPU, alwaysAllocateGPU_);
      DARABONBA_PTR_TO_JSON(defaultTarget, defaultTarget_);
      DARABONBA_PTR_TO_JSON(scheduledActions, scheduledActions_);
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(targetTrackingPolicies, targetTrackingPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, PutProvisionConfigInput& obj) { 
      DARABONBA_PTR_FROM_JSON(alwaysAllocateCPU, alwaysAllocateCPU_);
      DARABONBA_PTR_FROM_JSON(alwaysAllocateGPU, alwaysAllocateGPU_);
      DARABONBA_PTR_FROM_JSON(defaultTarget, defaultTarget_);
      DARABONBA_PTR_FROM_JSON(scheduledActions, scheduledActions_);
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(targetTrackingPolicies, targetTrackingPolicies_);
    };
    PutProvisionConfigInput() = default ;
    PutProvisionConfigInput(const PutProvisionConfigInput &) = default ;
    PutProvisionConfigInput(PutProvisionConfigInput &&) = default ;
    PutProvisionConfigInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutProvisionConfigInput() = default ;
    PutProvisionConfigInput& operator=(const PutProvisionConfigInput &) = default ;
    PutProvisionConfigInput& operator=(PutProvisionConfigInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alwaysAllocateCPU_ == nullptr
        && return this->alwaysAllocateGPU_ == nullptr && return this->defaultTarget_ == nullptr && return this->scheduledActions_ == nullptr && return this->target_ == nullptr && return this->targetTrackingPolicies_ == nullptr; };
    // alwaysAllocateCPU Field Functions 
    bool hasAlwaysAllocateCPU() const { return this->alwaysAllocateCPU_ != nullptr;};
    void deleteAlwaysAllocateCPU() { this->alwaysAllocateCPU_ = nullptr;};
    inline bool alwaysAllocateCPU() const { DARABONBA_PTR_GET_DEFAULT(alwaysAllocateCPU_, false) };
    inline PutProvisionConfigInput& setAlwaysAllocateCPU(bool alwaysAllocateCPU) { DARABONBA_PTR_SET_VALUE(alwaysAllocateCPU_, alwaysAllocateCPU) };


    // alwaysAllocateGPU Field Functions 
    bool hasAlwaysAllocateGPU() const { return this->alwaysAllocateGPU_ != nullptr;};
    void deleteAlwaysAllocateGPU() { this->alwaysAllocateGPU_ = nullptr;};
    inline bool alwaysAllocateGPU() const { DARABONBA_PTR_GET_DEFAULT(alwaysAllocateGPU_, false) };
    inline PutProvisionConfigInput& setAlwaysAllocateGPU(bool alwaysAllocateGPU) { DARABONBA_PTR_SET_VALUE(alwaysAllocateGPU_, alwaysAllocateGPU) };


    // defaultTarget Field Functions 
    bool hasDefaultTarget() const { return this->defaultTarget_ != nullptr;};
    void deleteDefaultTarget() { this->defaultTarget_ = nullptr;};
    inline int64_t defaultTarget() const { DARABONBA_PTR_GET_DEFAULT(defaultTarget_, 0L) };
    inline PutProvisionConfigInput& setDefaultTarget(int64_t defaultTarget) { DARABONBA_PTR_SET_VALUE(defaultTarget_, defaultTarget) };


    // scheduledActions Field Functions 
    bool hasScheduledActions() const { return this->scheduledActions_ != nullptr;};
    void deleteScheduledActions() { this->scheduledActions_ = nullptr;};
    inline const vector<ScheduledAction> & scheduledActions() const { DARABONBA_PTR_GET_CONST(scheduledActions_, vector<ScheduledAction>) };
    inline vector<ScheduledAction> scheduledActions() { DARABONBA_PTR_GET(scheduledActions_, vector<ScheduledAction>) };
    inline PutProvisionConfigInput& setScheduledActions(const vector<ScheduledAction> & scheduledActions) { DARABONBA_PTR_SET_VALUE(scheduledActions_, scheduledActions) };
    inline PutProvisionConfigInput& setScheduledActions(vector<ScheduledAction> && scheduledActions) { DARABONBA_PTR_SET_RVALUE(scheduledActions_, scheduledActions) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline int64_t target() const { DARABONBA_PTR_GET_DEFAULT(target_, 0L) };
    inline PutProvisionConfigInput& setTarget(int64_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetTrackingPolicies Field Functions 
    bool hasTargetTrackingPolicies() const { return this->targetTrackingPolicies_ != nullptr;};
    void deleteTargetTrackingPolicies() { this->targetTrackingPolicies_ = nullptr;};
    inline const vector<TargetTrackingPolicy> & targetTrackingPolicies() const { DARABONBA_PTR_GET_CONST(targetTrackingPolicies_, vector<TargetTrackingPolicy>) };
    inline vector<TargetTrackingPolicy> targetTrackingPolicies() { DARABONBA_PTR_GET(targetTrackingPolicies_, vector<TargetTrackingPolicy>) };
    inline PutProvisionConfigInput& setTargetTrackingPolicies(const vector<TargetTrackingPolicy> & targetTrackingPolicies) { DARABONBA_PTR_SET_VALUE(targetTrackingPolicies_, targetTrackingPolicies) };
    inline PutProvisionConfigInput& setTargetTrackingPolicies(vector<TargetTrackingPolicy> && targetTrackingPolicies) { DARABONBA_PTR_SET_RVALUE(targetTrackingPolicies_, targetTrackingPolicies) };


  protected:
    std::shared_ptr<bool> alwaysAllocateCPU_ = nullptr;
    std::shared_ptr<bool> alwaysAllocateGPU_ = nullptr;
    std::shared_ptr<int64_t> defaultTarget_ = nullptr;
    std::shared_ptr<vector<ScheduledAction>> scheduledActions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> target_ = nullptr;
    std::shared_ptr<vector<TargetTrackingPolicy>> targetTrackingPolicies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
