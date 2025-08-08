// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMCDPAIMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMCDPAIMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class DeleteMcdpAimRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMcdpAimRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(MpaasMappcenterMcdpAimDeleteJsonStr, mpaasMappcenterMcdpAimDeleteJsonStr_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMcdpAimRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(MpaasMappcenterMcdpAimDeleteJsonStr, mpaasMappcenterMcdpAimDeleteJsonStr_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteMcdpAimRequest() = default ;
    DeleteMcdpAimRequest(const DeleteMcdpAimRequest &) = default ;
    DeleteMcdpAimRequest(DeleteMcdpAimRequest &&) = default ;
    DeleteMcdpAimRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMcdpAimRequest() = default ;
    DeleteMcdpAimRequest& operator=(const DeleteMcdpAimRequest &) = default ;
    DeleteMcdpAimRequest& operator=(DeleteMcdpAimRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->mpaasMappcenterMcdpAimDeleteJsonStr_ != nullptr && this->tenantId_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteMcdpAimRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // mpaasMappcenterMcdpAimDeleteJsonStr Field Functions 
    bool hasMpaasMappcenterMcdpAimDeleteJsonStr() const { return this->mpaasMappcenterMcdpAimDeleteJsonStr_ != nullptr;};
    void deleteMpaasMappcenterMcdpAimDeleteJsonStr() { this->mpaasMappcenterMcdpAimDeleteJsonStr_ = nullptr;};
    inline string mpaasMappcenterMcdpAimDeleteJsonStr() const { DARABONBA_PTR_GET_DEFAULT(mpaasMappcenterMcdpAimDeleteJsonStr_, "") };
    inline DeleteMcdpAimRequest& setMpaasMappcenterMcdpAimDeleteJsonStr(string mpaasMappcenterMcdpAimDeleteJsonStr) { DARABONBA_PTR_SET_VALUE(mpaasMappcenterMcdpAimDeleteJsonStr_, mpaasMappcenterMcdpAimDeleteJsonStr) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DeleteMcdpAimRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteMcdpAimRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mpaasMappcenterMcdpAimDeleteJsonStr_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
