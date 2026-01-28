// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEDISABLEWORKFLOWSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEDISABLEWORKFLOWSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class OperateDisableWorkflowsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateDisableWorkflowsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(WorkflowIds, workflowIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, OperateDisableWorkflowsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(WorkflowIds, workflowIdsShrink_);
    };
    OperateDisableWorkflowsShrinkRequest() = default ;
    OperateDisableWorkflowsShrinkRequest(const OperateDisableWorkflowsShrinkRequest &) = default ;
    OperateDisableWorkflowsShrinkRequest(OperateDisableWorkflowsShrinkRequest &&) = default ;
    OperateDisableWorkflowsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateDisableWorkflowsShrinkRequest() = default ;
    OperateDisableWorkflowsShrinkRequest& operator=(const OperateDisableWorkflowsShrinkRequest &) = default ;
    OperateDisableWorkflowsShrinkRequest& operator=(OperateDisableWorkflowsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->workflowIdsShrink_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline OperateDisableWorkflowsShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline OperateDisableWorkflowsShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // workflowIdsShrink Field Functions 
    bool hasWorkflowIdsShrink() const { return this->workflowIdsShrink_ != nullptr;};
    void deleteWorkflowIdsShrink() { this->workflowIdsShrink_ = nullptr;};
    inline string getWorkflowIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(workflowIdsShrink_, "") };
    inline OperateDisableWorkflowsShrinkRequest& setWorkflowIdsShrink(string workflowIdsShrink) { DARABONBA_PTR_SET_VALUE(workflowIdsShrink_, workflowIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> workflowIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
