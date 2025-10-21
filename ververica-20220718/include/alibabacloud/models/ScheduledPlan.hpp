// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULEDPLAN_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULEDPLAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PeriodicSchedulingPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ScheduledPlan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScheduledPlan& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(modifierName, modifierName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(origin, origin_);
      DARABONBA_PTR_TO_JSON(periodicSchedulingPolicies, periodicSchedulingPolicies_);
      DARABONBA_PTR_TO_JSON(scheduledPlanId, scheduledPlanId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updatedByUser, updatedByUser_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ScheduledPlan& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(modifierName, modifierName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(origin, origin_);
      DARABONBA_PTR_FROM_JSON(periodicSchedulingPolicies, periodicSchedulingPolicies_);
      DARABONBA_PTR_FROM_JSON(scheduledPlanId, scheduledPlanId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updatedByUser, updatedByUser_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ScheduledPlan() = default ;
    ScheduledPlan(const ScheduledPlan &) = default ;
    ScheduledPlan(ScheduledPlan &&) = default ;
    ScheduledPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScheduledPlan() = default ;
    ScheduledPlan& operator=(const ScheduledPlan &) = default ;
    ScheduledPlan& operator=(ScheduledPlan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->creator_ == nullptr && return this->creatorName_ == nullptr && return this->deploymentId_ == nullptr && return this->modifiedAt_ == nullptr && return this->modifier_ == nullptr
        && return this->modifierName_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->origin_ == nullptr && return this->periodicSchedulingPolicies_ == nullptr
        && return this->scheduledPlanId_ == nullptr && return this->status_ == nullptr && return this->updatedByUser_ == nullptr && return this->workspace_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ScheduledPlan& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ScheduledPlan& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline ScheduledPlan& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string deploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline ScheduledPlan& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // modifiedAt Field Functions 
    bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
    void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
    inline string modifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, "") };
    inline ScheduledPlan& setModifiedAt(string modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ScheduledPlan& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // modifierName Field Functions 
    bool hasModifierName() const { return this->modifierName_ != nullptr;};
    void deleteModifierName() { this->modifierName_ = nullptr;};
    inline string modifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
    inline ScheduledPlan& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ScheduledPlan& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ScheduledPlan& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline ScheduledPlan& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // periodicSchedulingPolicies Field Functions 
    bool hasPeriodicSchedulingPolicies() const { return this->periodicSchedulingPolicies_ != nullptr;};
    void deletePeriodicSchedulingPolicies() { this->periodicSchedulingPolicies_ = nullptr;};
    inline const vector<PeriodicSchedulingPolicy> & periodicSchedulingPolicies() const { DARABONBA_PTR_GET_CONST(periodicSchedulingPolicies_, vector<PeriodicSchedulingPolicy>) };
    inline vector<PeriodicSchedulingPolicy> periodicSchedulingPolicies() { DARABONBA_PTR_GET(periodicSchedulingPolicies_, vector<PeriodicSchedulingPolicy>) };
    inline ScheduledPlan& setPeriodicSchedulingPolicies(const vector<PeriodicSchedulingPolicy> & periodicSchedulingPolicies) { DARABONBA_PTR_SET_VALUE(periodicSchedulingPolicies_, periodicSchedulingPolicies) };
    inline ScheduledPlan& setPeriodicSchedulingPolicies(vector<PeriodicSchedulingPolicy> && periodicSchedulingPolicies) { DARABONBA_PTR_SET_RVALUE(periodicSchedulingPolicies_, periodicSchedulingPolicies) };


    // scheduledPlanId Field Functions 
    bool hasScheduledPlanId() const { return this->scheduledPlanId_ != nullptr;};
    void deleteScheduledPlanId() { this->scheduledPlanId_ = nullptr;};
    inline string scheduledPlanId() const { DARABONBA_PTR_GET_DEFAULT(scheduledPlanId_, "") };
    inline ScheduledPlan& setScheduledPlanId(string scheduledPlanId) { DARABONBA_PTR_SET_VALUE(scheduledPlanId_, scheduledPlanId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ScheduledPlan& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedByUser Field Functions 
    bool hasUpdatedByUser() const { return this->updatedByUser_ != nullptr;};
    void deleteUpdatedByUser() { this->updatedByUser_ = nullptr;};
    inline bool updatedByUser() const { DARABONBA_PTR_GET_DEFAULT(updatedByUser_, false) };
    inline ScheduledPlan& setUpdatedByUser(bool updatedByUser) { DARABONBA_PTR_SET_VALUE(updatedByUser_, updatedByUser) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ScheduledPlan& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> creatorName_ = nullptr;
    std::shared_ptr<string> deploymentId_ = nullptr;
    std::shared_ptr<string> modifiedAt_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> modifierName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> origin_ = nullptr;
    std::shared_ptr<vector<PeriodicSchedulingPolicy>> periodicSchedulingPolicies_ = nullptr;
    std::shared_ptr<string> scheduledPlanId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<bool> updatedByUser_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
