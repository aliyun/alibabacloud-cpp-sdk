// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEMDSCUBETASKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEMDSCUBETASKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ChangeMdsCubeTaskStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeMdsCubeTaskStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TemplateResourceId, templateResourceId_);
      DARABONBA_PTR_TO_JSON(TemplateTaskId, templateTaskId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeMdsCubeTaskStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TemplateResourceId, templateResourceId_);
      DARABONBA_PTR_FROM_JSON(TemplateTaskId, templateTaskId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ChangeMdsCubeTaskStatusRequest() = default ;
    ChangeMdsCubeTaskStatusRequest(const ChangeMdsCubeTaskStatusRequest &) = default ;
    ChangeMdsCubeTaskStatusRequest(ChangeMdsCubeTaskStatusRequest &&) = default ;
    ChangeMdsCubeTaskStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeMdsCubeTaskStatusRequest() = default ;
    ChangeMdsCubeTaskStatusRequest& operator=(const ChangeMdsCubeTaskStatusRequest &) = default ;
    ChangeMdsCubeTaskStatusRequest& operator=(ChangeMdsCubeTaskStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->taskStatus_ == nullptr && return this->templateResourceId_ == nullptr && return this->templateTaskId_ == nullptr && return this->tenantId_ == nullptr && return this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ChangeMdsCubeTaskStatusRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline ChangeMdsCubeTaskStatusRequest& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // templateResourceId Field Functions 
    bool hasTemplateResourceId() const { return this->templateResourceId_ != nullptr;};
    void deleteTemplateResourceId() { this->templateResourceId_ = nullptr;};
    inline int64_t templateResourceId() const { DARABONBA_PTR_GET_DEFAULT(templateResourceId_, 0L) };
    inline ChangeMdsCubeTaskStatusRequest& setTemplateResourceId(int64_t templateResourceId) { DARABONBA_PTR_SET_VALUE(templateResourceId_, templateResourceId) };


    // templateTaskId Field Functions 
    bool hasTemplateTaskId() const { return this->templateTaskId_ != nullptr;};
    void deleteTemplateTaskId() { this->templateTaskId_ = nullptr;};
    inline int64_t templateTaskId() const { DARABONBA_PTR_GET_DEFAULT(templateTaskId_, 0L) };
    inline ChangeMdsCubeTaskStatusRequest& setTemplateTaskId(int64_t templateTaskId) { DARABONBA_PTR_SET_VALUE(templateTaskId_, templateTaskId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ChangeMdsCubeTaskStatusRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ChangeMdsCubeTaskStatusRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<int64_t> templateResourceId_ = nullptr;
    std::shared_ptr<int64_t> templateTaskId_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
