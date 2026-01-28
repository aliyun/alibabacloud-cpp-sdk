// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWDAGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWDAGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateWorkflowDAGShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowDAGShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Dag, dagShrink_);
      DARABONBA_PTR_TO_JSON(DagVersion, dagVersion_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowDAGShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Dag, dagShrink_);
      DARABONBA_PTR_FROM_JSON(DagVersion, dagVersion_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    UpdateWorkflowDAGShrinkRequest() = default ;
    UpdateWorkflowDAGShrinkRequest(const UpdateWorkflowDAGShrinkRequest &) = default ;
    UpdateWorkflowDAGShrinkRequest(UpdateWorkflowDAGShrinkRequest &&) = default ;
    UpdateWorkflowDAGShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowDAGShrinkRequest() = default ;
    UpdateWorkflowDAGShrinkRequest& operator=(const UpdateWorkflowDAGShrinkRequest &) = default ;
    UpdateWorkflowDAGShrinkRequest& operator=(UpdateWorkflowDAGShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->dagShrink_ == nullptr && this->dagVersion_ == nullptr && this->workflowId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateWorkflowDAGShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateWorkflowDAGShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dagShrink Field Functions 
    bool hasDagShrink() const { return this->dagShrink_ != nullptr;};
    void deleteDagShrink() { this->dagShrink_ = nullptr;};
    inline string getDagShrink() const { DARABONBA_PTR_GET_DEFAULT(dagShrink_, "") };
    inline UpdateWorkflowDAGShrinkRequest& setDagShrink(string dagShrink) { DARABONBA_PTR_SET_VALUE(dagShrink_, dagShrink) };


    // dagVersion Field Functions 
    bool hasDagVersion() const { return this->dagVersion_ != nullptr;};
    void deleteDagVersion() { this->dagVersion_ = nullptr;};
    inline string getDagVersion() const { DARABONBA_PTR_GET_DEFAULT(dagVersion_, "") };
    inline UpdateWorkflowDAGShrinkRequest& setDagVersion(string dagVersion) { DARABONBA_PTR_SET_VALUE(dagVersion_, dagVersion) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline UpdateWorkflowDAGShrinkRequest& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> dagShrink_ {};
    shared_ptr<string> dagVersion_ {};
    // This parameter is required.
    shared_ptr<int64_t> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
