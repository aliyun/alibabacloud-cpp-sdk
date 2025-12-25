// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTWORKFLOWSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTWORKFLOWSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ExportWorkflowsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportWorkflowsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowIdShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ExportWorkflowsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowIdShrink_);
    };
    ExportWorkflowsShrinkRequest() = default ;
    ExportWorkflowsShrinkRequest(const ExportWorkflowsShrinkRequest &) = default ;
    ExportWorkflowsShrinkRequest(ExportWorkflowsShrinkRequest &&) = default ;
    ExportWorkflowsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportWorkflowsShrinkRequest() = default ;
    ExportWorkflowsShrinkRequest& operator=(const ExportWorkflowsShrinkRequest &) = default ;
    ExportWorkflowsShrinkRequest& operator=(ExportWorkflowsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->clusterId_ == nullptr && return this->workflowIdShrink_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ExportWorkflowsShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ExportWorkflowsShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // workflowIdShrink Field Functions 
    bool hasWorkflowIdShrink() const { return this->workflowIdShrink_ != nullptr;};
    void deleteWorkflowIdShrink() { this->workflowIdShrink_ = nullptr;};
    inline string workflowIdShrink() const { DARABONBA_PTR_GET_DEFAULT(workflowIdShrink_, "") };
    inline ExportWorkflowsShrinkRequest& setWorkflowIdShrink(string workflowIdShrink) { DARABONBA_PTR_SET_VALUE(workflowIdShrink_, workflowIdShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // A short description of struct
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> workflowIdShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
