// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWDAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWDAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWorkflowDAGRequestDag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateWorkflowDAGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowDAGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Dag, dag_);
      DARABONBA_PTR_TO_JSON(DagVersion, dagVersion_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowDAGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Dag, dag_);
      DARABONBA_PTR_FROM_JSON(DagVersion, dagVersion_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    UpdateWorkflowDAGRequest() = default ;
    UpdateWorkflowDAGRequest(const UpdateWorkflowDAGRequest &) = default ;
    UpdateWorkflowDAGRequest(UpdateWorkflowDAGRequest &&) = default ;
    UpdateWorkflowDAGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowDAGRequest() = default ;
    UpdateWorkflowDAGRequest& operator=(const UpdateWorkflowDAGRequest &) = default ;
    UpdateWorkflowDAGRequest& operator=(UpdateWorkflowDAGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->clusterId_ == nullptr && return this->dag_ == nullptr && return this->dagVersion_ == nullptr && return this->workflowId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateWorkflowDAGRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateWorkflowDAGRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dag Field Functions 
    bool hasDag() const { return this->dag_ != nullptr;};
    void deleteDag() { this->dag_ = nullptr;};
    inline const UpdateWorkflowDAGRequestDag & dag() const { DARABONBA_PTR_GET_CONST(dag_, UpdateWorkflowDAGRequestDag) };
    inline UpdateWorkflowDAGRequestDag dag() { DARABONBA_PTR_GET(dag_, UpdateWorkflowDAGRequestDag) };
    inline UpdateWorkflowDAGRequest& setDag(const UpdateWorkflowDAGRequestDag & dag) { DARABONBA_PTR_SET_VALUE(dag_, dag) };
    inline UpdateWorkflowDAGRequest& setDag(UpdateWorkflowDAGRequestDag && dag) { DARABONBA_PTR_SET_RVALUE(dag_, dag) };


    // dagVersion Field Functions 
    bool hasDagVersion() const { return this->dagVersion_ != nullptr;};
    void deleteDagVersion() { this->dagVersion_ = nullptr;};
    inline string dagVersion() const { DARABONBA_PTR_GET_DEFAULT(dagVersion_, "") };
    inline UpdateWorkflowDAGRequest& setDagVersion(string dagVersion) { DARABONBA_PTR_SET_VALUE(dagVersion_, dagVersion) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline UpdateWorkflowDAGRequest& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<UpdateWorkflowDAGRequestDag> dag_ = nullptr;
    std::shared_ptr<string> dagVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
