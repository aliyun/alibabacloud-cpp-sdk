// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCDPMATERIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCDPMATERIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcdpMaterialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcdpMaterialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(MpaasMappcenterMcdpMaterialCreateJsonStr, mpaasMappcenterMcdpMaterialCreateJsonStr_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcdpMaterialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(MpaasMappcenterMcdpMaterialCreateJsonStr, mpaasMappcenterMcdpMaterialCreateJsonStr_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateMcdpMaterialRequest() = default ;
    CreateMcdpMaterialRequest(const CreateMcdpMaterialRequest &) = default ;
    CreateMcdpMaterialRequest(CreateMcdpMaterialRequest &&) = default ;
    CreateMcdpMaterialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcdpMaterialRequest() = default ;
    CreateMcdpMaterialRequest& operator=(const CreateMcdpMaterialRequest &) = default ;
    CreateMcdpMaterialRequest& operator=(CreateMcdpMaterialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->mpaasMappcenterMcdpMaterialCreateJsonStr_ != nullptr && this->tenantId_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateMcdpMaterialRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // mpaasMappcenterMcdpMaterialCreateJsonStr Field Functions 
    bool hasMpaasMappcenterMcdpMaterialCreateJsonStr() const { return this->mpaasMappcenterMcdpMaterialCreateJsonStr_ != nullptr;};
    void deleteMpaasMappcenterMcdpMaterialCreateJsonStr() { this->mpaasMappcenterMcdpMaterialCreateJsonStr_ = nullptr;};
    inline string mpaasMappcenterMcdpMaterialCreateJsonStr() const { DARABONBA_PTR_GET_DEFAULT(mpaasMappcenterMcdpMaterialCreateJsonStr_, "") };
    inline CreateMcdpMaterialRequest& setMpaasMappcenterMcdpMaterialCreateJsonStr(string mpaasMappcenterMcdpMaterialCreateJsonStr) { DARABONBA_PTR_SET_VALUE(mpaasMappcenterMcdpMaterialCreateJsonStr_, mpaasMappcenterMcdpMaterialCreateJsonStr) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateMcdpMaterialRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateMcdpMaterialRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mpaasMappcenterMcdpMaterialCreateJsonStr_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
