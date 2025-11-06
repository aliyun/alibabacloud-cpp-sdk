// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCDPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCDPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcdpGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcdpGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(MpaasMappcenterMcdpGroupCreateJsonStr, mpaasMappcenterMcdpGroupCreateJsonStr_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcdpGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(MpaasMappcenterMcdpGroupCreateJsonStr, mpaasMappcenterMcdpGroupCreateJsonStr_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateMcdpGroupRequest() = default ;
    CreateMcdpGroupRequest(const CreateMcdpGroupRequest &) = default ;
    CreateMcdpGroupRequest(CreateMcdpGroupRequest &&) = default ;
    CreateMcdpGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcdpGroupRequest() = default ;
    CreateMcdpGroupRequest& operator=(const CreateMcdpGroupRequest &) = default ;
    CreateMcdpGroupRequest& operator=(CreateMcdpGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->mpaasMappcenterMcdpGroupCreateJsonStr_ == nullptr && return this->tenantId_ == nullptr && return this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateMcdpGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // mpaasMappcenterMcdpGroupCreateJsonStr Field Functions 
    bool hasMpaasMappcenterMcdpGroupCreateJsonStr() const { return this->mpaasMappcenterMcdpGroupCreateJsonStr_ != nullptr;};
    void deleteMpaasMappcenterMcdpGroupCreateJsonStr() { this->mpaasMappcenterMcdpGroupCreateJsonStr_ = nullptr;};
    inline string mpaasMappcenterMcdpGroupCreateJsonStr() const { DARABONBA_PTR_GET_DEFAULT(mpaasMappcenterMcdpGroupCreateJsonStr_, "") };
    inline CreateMcdpGroupRequest& setMpaasMappcenterMcdpGroupCreateJsonStr(string mpaasMappcenterMcdpGroupCreateJsonStr) { DARABONBA_PTR_SET_VALUE(mpaasMappcenterMcdpGroupCreateJsonStr_, mpaasMappcenterMcdpGroupCreateJsonStr) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateMcdpGroupRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateMcdpGroupRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mpaasMappcenterMcdpGroupCreateJsonStr_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
