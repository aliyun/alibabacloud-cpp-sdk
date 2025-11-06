// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMCDPCROWDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMCDPCROWDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class DeleteMcdpCrowdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMcdpCrowdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(MpaasMappcenterMcdpCrowdDeleteJsonStr, mpaasMappcenterMcdpCrowdDeleteJsonStr_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMcdpCrowdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(MpaasMappcenterMcdpCrowdDeleteJsonStr, mpaasMappcenterMcdpCrowdDeleteJsonStr_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteMcdpCrowdRequest() = default ;
    DeleteMcdpCrowdRequest(const DeleteMcdpCrowdRequest &) = default ;
    DeleteMcdpCrowdRequest(DeleteMcdpCrowdRequest &&) = default ;
    DeleteMcdpCrowdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMcdpCrowdRequest() = default ;
    DeleteMcdpCrowdRequest& operator=(const DeleteMcdpCrowdRequest &) = default ;
    DeleteMcdpCrowdRequest& operator=(DeleteMcdpCrowdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->mpaasMappcenterMcdpCrowdDeleteJsonStr_ == nullptr && return this->tenantId_ == nullptr && return this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteMcdpCrowdRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // mpaasMappcenterMcdpCrowdDeleteJsonStr Field Functions 
    bool hasMpaasMappcenterMcdpCrowdDeleteJsonStr() const { return this->mpaasMappcenterMcdpCrowdDeleteJsonStr_ != nullptr;};
    void deleteMpaasMappcenterMcdpCrowdDeleteJsonStr() { this->mpaasMappcenterMcdpCrowdDeleteJsonStr_ = nullptr;};
    inline string mpaasMappcenterMcdpCrowdDeleteJsonStr() const { DARABONBA_PTR_GET_DEFAULT(mpaasMappcenterMcdpCrowdDeleteJsonStr_, "") };
    inline DeleteMcdpCrowdRequest& setMpaasMappcenterMcdpCrowdDeleteJsonStr(string mpaasMappcenterMcdpCrowdDeleteJsonStr) { DARABONBA_PTR_SET_VALUE(mpaasMappcenterMcdpCrowdDeleteJsonStr_, mpaasMappcenterMcdpCrowdDeleteJsonStr) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DeleteMcdpCrowdRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteMcdpCrowdRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mpaasMappcenterMcdpCrowdDeleteJsonStr_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
