// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULEDPLANAPPLIEDINFO_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULEDPLANAPPLIEDINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ScheduledPlanAppliedInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScheduledPlanAppliedInfo& obj) { 
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(expectedState, expectedState_);
      DARABONBA_PTR_TO_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(modifierName, modifierName_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(scheduledPlanId, scheduledPlanId_);
      DARABONBA_PTR_TO_JSON(scheduledPlanName, scheduledPlanName_);
      DARABONBA_PTR_TO_JSON(statusState, statusState_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ScheduledPlanAppliedInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(expectedState, expectedState_);
      DARABONBA_PTR_FROM_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(modifierName, modifierName_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(scheduledPlanId, scheduledPlanId_);
      DARABONBA_PTR_FROM_JSON(scheduledPlanName, scheduledPlanName_);
      DARABONBA_PTR_FROM_JSON(statusState, statusState_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ScheduledPlanAppliedInfo() = default ;
    ScheduledPlanAppliedInfo(const ScheduledPlanAppliedInfo &) = default ;
    ScheduledPlanAppliedInfo(ScheduledPlanAppliedInfo &&) = default ;
    ScheduledPlanAppliedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScheduledPlanAppliedInfo() = default ;
    ScheduledPlanAppliedInfo& operator=(const ScheduledPlanAppliedInfo &) = default ;
    ScheduledPlanAppliedInfo& operator=(ScheduledPlanAppliedInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentId_ == nullptr
        && return this->expectedState_ == nullptr && return this->modifiedAt_ == nullptr && return this->modifier_ == nullptr && return this->modifierName_ == nullptr && return this->namespace_ == nullptr
        && return this->scheduledPlanId_ == nullptr && return this->scheduledPlanName_ == nullptr && return this->statusState_ == nullptr && return this->workspace_ == nullptr; };
    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string deploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline ScheduledPlanAppliedInfo& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // expectedState Field Functions 
    bool hasExpectedState() const { return this->expectedState_ != nullptr;};
    void deleteExpectedState() { this->expectedState_ = nullptr;};
    inline string expectedState() const { DARABONBA_PTR_GET_DEFAULT(expectedState_, "") };
    inline ScheduledPlanAppliedInfo& setExpectedState(string expectedState) { DARABONBA_PTR_SET_VALUE(expectedState_, expectedState) };


    // modifiedAt Field Functions 
    bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
    void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
    inline string modifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, "") };
    inline ScheduledPlanAppliedInfo& setModifiedAt(string modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ScheduledPlanAppliedInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // modifierName Field Functions 
    bool hasModifierName() const { return this->modifierName_ != nullptr;};
    void deleteModifierName() { this->modifierName_ = nullptr;};
    inline string modifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
    inline ScheduledPlanAppliedInfo& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ScheduledPlanAppliedInfo& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // scheduledPlanId Field Functions 
    bool hasScheduledPlanId() const { return this->scheduledPlanId_ != nullptr;};
    void deleteScheduledPlanId() { this->scheduledPlanId_ = nullptr;};
    inline string scheduledPlanId() const { DARABONBA_PTR_GET_DEFAULT(scheduledPlanId_, "") };
    inline ScheduledPlanAppliedInfo& setScheduledPlanId(string scheduledPlanId) { DARABONBA_PTR_SET_VALUE(scheduledPlanId_, scheduledPlanId) };


    // scheduledPlanName Field Functions 
    bool hasScheduledPlanName() const { return this->scheduledPlanName_ != nullptr;};
    void deleteScheduledPlanName() { this->scheduledPlanName_ = nullptr;};
    inline string scheduledPlanName() const { DARABONBA_PTR_GET_DEFAULT(scheduledPlanName_, "") };
    inline ScheduledPlanAppliedInfo& setScheduledPlanName(string scheduledPlanName) { DARABONBA_PTR_SET_VALUE(scheduledPlanName_, scheduledPlanName) };


    // statusState Field Functions 
    bool hasStatusState() const { return this->statusState_ != nullptr;};
    void deleteStatusState() { this->statusState_ = nullptr;};
    inline string statusState() const { DARABONBA_PTR_GET_DEFAULT(statusState_, "") };
    inline ScheduledPlanAppliedInfo& setStatusState(string statusState) { DARABONBA_PTR_SET_VALUE(statusState_, statusState) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ScheduledPlanAppliedInfo& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> deploymentId_ = nullptr;
    std::shared_ptr<string> expectedState_ = nullptr;
    std::shared_ptr<string> modifiedAt_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> modifierName_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> scheduledPlanId_ = nullptr;
    std::shared_ptr<string> scheduledPlanName_ = nullptr;
    std::shared_ptr<string> statusState_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
