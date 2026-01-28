// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKFLOWSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKFLOWSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class DeleteWorkflowsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkflowsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DeleteJobs, deleteJobs_);
      DARABONBA_PTR_TO_JSON(WorkflowIds, workflowIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkflowsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DeleteJobs, deleteJobs_);
      DARABONBA_PTR_FROM_JSON(WorkflowIds, workflowIdsShrink_);
    };
    DeleteWorkflowsShrinkRequest() = default ;
    DeleteWorkflowsShrinkRequest(const DeleteWorkflowsShrinkRequest &) = default ;
    DeleteWorkflowsShrinkRequest(DeleteWorkflowsShrinkRequest &&) = default ;
    DeleteWorkflowsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkflowsShrinkRequest() = default ;
    DeleteWorkflowsShrinkRequest& operator=(const DeleteWorkflowsShrinkRequest &) = default ;
    DeleteWorkflowsShrinkRequest& operator=(DeleteWorkflowsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->deleteJobs_ == nullptr && this->workflowIdsShrink_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DeleteWorkflowsShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteWorkflowsShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // deleteJobs Field Functions 
    bool hasDeleteJobs() const { return this->deleteJobs_ != nullptr;};
    void deleteDeleteJobs() { this->deleteJobs_ = nullptr;};
    inline bool getDeleteJobs() const { DARABONBA_PTR_GET_DEFAULT(deleteJobs_, false) };
    inline DeleteWorkflowsShrinkRequest& setDeleteJobs(bool deleteJobs) { DARABONBA_PTR_SET_VALUE(deleteJobs_, deleteJobs) };


    // workflowIdsShrink Field Functions 
    bool hasWorkflowIdsShrink() const { return this->workflowIdsShrink_ != nullptr;};
    void deleteWorkflowIdsShrink() { this->workflowIdsShrink_ = nullptr;};
    inline string getWorkflowIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(workflowIdsShrink_, "") };
    inline DeleteWorkflowsShrinkRequest& setWorkflowIdsShrink(string workflowIdsShrink) { DARABONBA_PTR_SET_VALUE(workflowIdsShrink_, workflowIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<bool> deleteJobs_ {};
    // This parameter is required.
    shared_ptr<string> workflowIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
