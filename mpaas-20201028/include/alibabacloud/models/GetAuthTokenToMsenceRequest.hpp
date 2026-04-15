// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHTOKENTOMSENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHTOKENTOMSENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetAuthTokenToMsenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthTokenToMsenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(MiniProgramId, miniProgramId_);
      DARABONBA_PTR_TO_JSON(PlatformId, platformId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthTokenToMsenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(MiniProgramId, miniProgramId_);
      DARABONBA_PTR_FROM_JSON(PlatformId, platformId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetAuthTokenToMsenceRequest() = default ;
    GetAuthTokenToMsenceRequest(const GetAuthTokenToMsenceRequest &) = default ;
    GetAuthTokenToMsenceRequest(GetAuthTokenToMsenceRequest &&) = default ;
    GetAuthTokenToMsenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthTokenToMsenceRequest() = default ;
    GetAuthTokenToMsenceRequest& operator=(const GetAuthTokenToMsenceRequest &) = default ;
    GetAuthTokenToMsenceRequest& operator=(GetAuthTokenToMsenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->authCode_ == nullptr && this->miniProgramId_ == nullptr && this->platformId_ == nullptr && this->tenantId_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAuthTokenToMsenceRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline GetAuthTokenToMsenceRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // miniProgramId Field Functions 
    bool hasMiniProgramId() const { return this->miniProgramId_ != nullptr;};
    void deleteMiniProgramId() { this->miniProgramId_ = nullptr;};
    inline string getMiniProgramId() const { DARABONBA_PTR_GET_DEFAULT(miniProgramId_, "") };
    inline GetAuthTokenToMsenceRequest& setMiniProgramId(string miniProgramId) { DARABONBA_PTR_SET_VALUE(miniProgramId_, miniProgramId) };


    // platformId Field Functions 
    bool hasPlatformId() const { return this->platformId_ != nullptr;};
    void deletePlatformId() { this->platformId_ = nullptr;};
    inline string getPlatformId() const { DARABONBA_PTR_GET_DEFAULT(platformId_, "") };
    inline GetAuthTokenToMsenceRequest& setPlatformId(string platformId) { DARABONBA_PTR_SET_VALUE(platformId_, platformId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetAuthTokenToMsenceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetAuthTokenToMsenceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> appId_ {};
    shared_ptr<string> authCode_ {};
    shared_ptr<string> miniProgramId_ {};
    shared_ptr<string> platformId_ {};
    shared_ptr<string> tenantId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
