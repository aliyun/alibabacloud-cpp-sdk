// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULEDPLANEXECUTEDINFO_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULEDPLANEXECUTEDINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScheduledPlanExecutedStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ScheduledPlanExecutedInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScheduledPlanExecutedInfo& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(jobResourceUpgradingId, jobResourceUpgradingId_);
      DARABONBA_PTR_TO_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(modifierName, modifierName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(origin, origin_);
      DARABONBA_PTR_TO_JSON(originJobId, originJobId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ScheduledPlanExecutedInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(jobResourceUpgradingId, jobResourceUpgradingId_);
      DARABONBA_PTR_FROM_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(modifierName, modifierName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(origin, origin_);
      DARABONBA_PTR_FROM_JSON(originJobId, originJobId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ScheduledPlanExecutedInfo() = default ;
    ScheduledPlanExecutedInfo(const ScheduledPlanExecutedInfo &) = default ;
    ScheduledPlanExecutedInfo(ScheduledPlanExecutedInfo &&) = default ;
    ScheduledPlanExecutedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScheduledPlanExecutedInfo() = default ;
    ScheduledPlanExecutedInfo& operator=(const ScheduledPlanExecutedInfo &) = default ;
    ScheduledPlanExecutedInfo& operator=(ScheduledPlanExecutedInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->creator_ == nullptr && this->creatorName_ == nullptr && this->deploymentId_ == nullptr && this->jobResourceUpgradingId_ == nullptr && this->modifiedAt_ == nullptr
        && this->modifier_ == nullptr && this->modifierName_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->origin_ == nullptr
        && this->originJobId_ == nullptr && this->status_ == nullptr && this->workspace_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ScheduledPlanExecutedInfo& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ScheduledPlanExecutedInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline ScheduledPlanExecutedInfo& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline ScheduledPlanExecutedInfo& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // jobResourceUpgradingId Field Functions 
    bool hasJobResourceUpgradingId() const { return this->jobResourceUpgradingId_ != nullptr;};
    void deleteJobResourceUpgradingId() { this->jobResourceUpgradingId_ = nullptr;};
    inline string getJobResourceUpgradingId() const { DARABONBA_PTR_GET_DEFAULT(jobResourceUpgradingId_, "") };
    inline ScheduledPlanExecutedInfo& setJobResourceUpgradingId(string jobResourceUpgradingId) { DARABONBA_PTR_SET_VALUE(jobResourceUpgradingId_, jobResourceUpgradingId) };


    // modifiedAt Field Functions 
    bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
    void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
    inline string getModifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, "") };
    inline ScheduledPlanExecutedInfo& setModifiedAt(string modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ScheduledPlanExecutedInfo& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // modifierName Field Functions 
    bool hasModifierName() const { return this->modifierName_ != nullptr;};
    void deleteModifierName() { this->modifierName_ = nullptr;};
    inline string getModifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
    inline ScheduledPlanExecutedInfo& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ScheduledPlanExecutedInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ScheduledPlanExecutedInfo& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline ScheduledPlanExecutedInfo& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // originJobId Field Functions 
    bool hasOriginJobId() const { return this->originJobId_ != nullptr;};
    void deleteOriginJobId() { this->originJobId_ = nullptr;};
    inline string getOriginJobId() const { DARABONBA_PTR_GET_DEFAULT(originJobId_, "") };
    inline ScheduledPlanExecutedInfo& setOriginJobId(string originJobId) { DARABONBA_PTR_SET_VALUE(originJobId_, originJobId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const ScheduledPlanExecutedStatus & getStatus() const { DARABONBA_PTR_GET_CONST(status_, ScheduledPlanExecutedStatus) };
    inline ScheduledPlanExecutedStatus getStatus() { DARABONBA_PTR_GET(status_, ScheduledPlanExecutedStatus) };
    inline ScheduledPlanExecutedInfo& setStatus(const ScheduledPlanExecutedStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ScheduledPlanExecutedInfo& setStatus(ScheduledPlanExecutedStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ScheduledPlanExecutedInfo& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<string> createdAt_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<string> creatorName_ {};
    shared_ptr<string> deploymentId_ {};
    shared_ptr<string> jobResourceUpgradingId_ {};
    shared_ptr<string> modifiedAt_ {};
    shared_ptr<string> modifier_ {};
    shared_ptr<string> modifierName_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<string> origin_ {};
    shared_ptr<string> originJobId_ {};
    shared_ptr<ScheduledPlanExecutedStatus> status_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
