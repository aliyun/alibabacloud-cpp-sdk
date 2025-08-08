// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERAPPUPLOADPROCESSINMSAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERAPPUPLOADPROCESSINMSAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetUserAppUploadProcessInMsaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserAppUploadProcessInMsaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserAppUploadProcessInMsaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetUserAppUploadProcessInMsaRequest() = default ;
    GetUserAppUploadProcessInMsaRequest(const GetUserAppUploadProcessInMsaRequest &) = default ;
    GetUserAppUploadProcessInMsaRequest(GetUserAppUploadProcessInMsaRequest &&) = default ;
    GetUserAppUploadProcessInMsaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserAppUploadProcessInMsaRequest() = default ;
    GetUserAppUploadProcessInMsaRequest& operator=(const GetUserAppUploadProcessInMsaRequest &) = default ;
    GetUserAppUploadProcessInMsaRequest& operator=(GetUserAppUploadProcessInMsaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->id_ != nullptr && this->tenantId_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetUserAppUploadProcessInMsaRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetUserAppUploadProcessInMsaRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetUserAppUploadProcessInMsaRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetUserAppUploadProcessInMsaRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
