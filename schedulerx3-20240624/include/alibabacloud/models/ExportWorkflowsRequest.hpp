// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTWORKFLOWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTWORKFLOWSREQUEST_HPP_
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
  class ExportWorkflowsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportWorkflowsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportWorkflowsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    ExportWorkflowsRequest() = default ;
    ExportWorkflowsRequest(const ExportWorkflowsRequest &) = default ;
    ExportWorkflowsRequest(ExportWorkflowsRequest &&) = default ;
    ExportWorkflowsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportWorkflowsRequest() = default ;
    ExportWorkflowsRequest& operator=(const ExportWorkflowsRequest &) = default ;
    ExportWorkflowsRequest& operator=(ExportWorkflowsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->workflowId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ExportWorkflowsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ExportWorkflowsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline const vector<int64_t> & getWorkflowId() const { DARABONBA_PTR_GET_CONST(workflowId_, vector<int64_t>) };
    inline vector<int64_t> getWorkflowId() { DARABONBA_PTR_GET(workflowId_, vector<int64_t>) };
    inline ExportWorkflowsRequest& setWorkflowId(const vector<int64_t> & workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };
    inline ExportWorkflowsRequest& setWorkflowId(vector<int64_t> && workflowId) { DARABONBA_PTR_SET_RVALUE(workflowId_, workflowId) };


  protected:
    shared_ptr<string> appName_ {};
    // A short description of struct
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<vector<int64_t>> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
