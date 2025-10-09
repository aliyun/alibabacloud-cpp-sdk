// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExecuteAdhocWorkflowInstanceRequestTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ExecuteAdhocWorkflowInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAdhocWorkflowInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAdhocWorkflowInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    ExecuteAdhocWorkflowInstanceRequest() = default ;
    ExecuteAdhocWorkflowInstanceRequest(const ExecuteAdhocWorkflowInstanceRequest &) = default ;
    ExecuteAdhocWorkflowInstanceRequest(ExecuteAdhocWorkflowInstanceRequest &&) = default ;
    ExecuteAdhocWorkflowInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAdhocWorkflowInstanceRequest() = default ;
    ExecuteAdhocWorkflowInstanceRequest& operator=(const ExecuteAdhocWorkflowInstanceRequest &) = default ;
    ExecuteAdhocWorkflowInstanceRequest& operator=(ExecuteAdhocWorkflowInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizDate_ != nullptr
        && this->envType_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr && this->projectId_ != nullptr && this->tasks_ != nullptr; };
    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline int64_t bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, 0L) };
    inline ExecuteAdhocWorkflowInstanceRequest& setBizDate(int64_t bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ExecuteAdhocWorkflowInstanceRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ExecuteAdhocWorkflowInstanceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ExecuteAdhocWorkflowInstanceRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ExecuteAdhocWorkflowInstanceRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ExecuteAdhocWorkflowInstanceRequestTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ExecuteAdhocWorkflowInstanceRequestTasks>) };
    inline vector<ExecuteAdhocWorkflowInstanceRequestTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<ExecuteAdhocWorkflowInstanceRequestTasks>) };
    inline ExecuteAdhocWorkflowInstanceRequest& setTasks(const vector<ExecuteAdhocWorkflowInstanceRequestTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ExecuteAdhocWorkflowInstanceRequest& setTasks(vector<ExecuteAdhocWorkflowInstanceRequestTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


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
    std::shared_ptr<vector<ExecuteAdhocWorkflowInstanceRequestTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
