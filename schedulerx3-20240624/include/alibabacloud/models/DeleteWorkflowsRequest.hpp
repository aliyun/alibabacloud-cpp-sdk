// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKFLOWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKFLOWSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class DeleteWorkflowsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkflowsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DeleteJobs, deleteJobs_);
      DARABONBA_PTR_TO_JSON(WorkflowIds, workflowIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkflowsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DeleteJobs, deleteJobs_);
      DARABONBA_PTR_FROM_JSON(WorkflowIds, workflowIds_);
    };
    DeleteWorkflowsRequest() = default ;
    DeleteWorkflowsRequest(const DeleteWorkflowsRequest &) = default ;
    DeleteWorkflowsRequest(DeleteWorkflowsRequest &&) = default ;
    DeleteWorkflowsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkflowsRequest() = default ;
    DeleteWorkflowsRequest& operator=(const DeleteWorkflowsRequest &) = default ;
    DeleteWorkflowsRequest& operator=(DeleteWorkflowsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->clusterId_ == nullptr && return this->deleteJobs_ == nullptr && return this->workflowIds_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DeleteWorkflowsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteWorkflowsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // deleteJobs Field Functions 
    bool hasDeleteJobs() const { return this->deleteJobs_ != nullptr;};
    void deleteDeleteJobs() { this->deleteJobs_ = nullptr;};
    inline bool deleteJobs() const { DARABONBA_PTR_GET_DEFAULT(deleteJobs_, false) };
    inline DeleteWorkflowsRequest& setDeleteJobs(bool deleteJobs) { DARABONBA_PTR_SET_VALUE(deleteJobs_, deleteJobs) };


    // workflowIds Field Functions 
    bool hasWorkflowIds() const { return this->workflowIds_ != nullptr;};
    void deleteWorkflowIds() { this->workflowIds_ = nullptr;};
    inline const vector<int64_t> & workflowIds() const { DARABONBA_PTR_GET_CONST(workflowIds_, vector<int64_t>) };
    inline vector<int64_t> workflowIds() { DARABONBA_PTR_GET(workflowIds_, vector<int64_t>) };
    inline DeleteWorkflowsRequest& setWorkflowIds(const vector<int64_t> & workflowIds) { DARABONBA_PTR_SET_VALUE(workflowIds_, workflowIds) };
    inline DeleteWorkflowsRequest& setWorkflowIds(vector<int64_t> && workflowIds) { DARABONBA_PTR_SET_RVALUE(workflowIds_, workflowIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<bool> deleteJobs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> workflowIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
