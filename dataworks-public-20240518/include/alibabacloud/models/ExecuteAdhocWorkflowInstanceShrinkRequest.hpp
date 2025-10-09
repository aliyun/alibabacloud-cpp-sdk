// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ExecuteAdhocWorkflowInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAdhocWorkflowInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasksShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAdhocWorkflowInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasksShrink_);
    };
    ExecuteAdhocWorkflowInstanceShrinkRequest() = default ;
    ExecuteAdhocWorkflowInstanceShrinkRequest(const ExecuteAdhocWorkflowInstanceShrinkRequest &) = default ;
    ExecuteAdhocWorkflowInstanceShrinkRequest(ExecuteAdhocWorkflowInstanceShrinkRequest &&) = default ;
    ExecuteAdhocWorkflowInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAdhocWorkflowInstanceShrinkRequest() = default ;
    ExecuteAdhocWorkflowInstanceShrinkRequest& operator=(const ExecuteAdhocWorkflowInstanceShrinkRequest &) = default ;
    ExecuteAdhocWorkflowInstanceShrinkRequest& operator=(ExecuteAdhocWorkflowInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizDate_ != nullptr
        && this->envType_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr && this->projectId_ != nullptr && this->tasksShrink_ != nullptr; };
    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline int64_t bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, 0L) };
    inline ExecuteAdhocWorkflowInstanceShrinkRequest& setBizDate(int64_t bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ExecuteAdhocWorkflowInstanceShrinkRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ExecuteAdhocWorkflowInstanceShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ExecuteAdhocWorkflowInstanceShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ExecuteAdhocWorkflowInstanceShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tasksShrink Field Functions 
    bool hasTasksShrink() const { return this->tasksShrink_ != nullptr;};
    void deleteTasksShrink() { this->tasksShrink_ = nullptr;};
    inline string tasksShrink() const { DARABONBA_PTR_GET_DEFAULT(tasksShrink_, "") };
    inline ExecuteAdhocWorkflowInstanceShrinkRequest& setTasksShrink(string tasksShrink) { DARABONBA_PTR_SET_VALUE(tasksShrink_, tasksShrink) };


  protected:
    // The data timestamp.
    std::shared_ptr<int64_t> bizDate_ = nullptr;
    // The environment of the workspace. Valid values:
    // 
    // *   Prod: production environment
    // *   Dev: development environment
    std::shared_ptr<string> envType_ = nullptr;
    // The name of the workflow instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The account ID of the owner.
    // 
    // This parameter is required.
    std::shared_ptr<string> owner_ = nullptr;
    // The workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The tasks.
    // 
    // This parameter is required.
    std::shared_ptr<string> tasksShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
