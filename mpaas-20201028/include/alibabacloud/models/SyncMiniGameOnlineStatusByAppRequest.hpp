// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCMINIGAMEONLINESTATUSBYAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCMINIGAMEONLINESTATUSBYAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class SyncMiniGameOnlineStatusByAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncMiniGameOnlineStatusByAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(MiniProgramCode, miniProgramCode_);
      DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncMiniGameOnlineStatusByAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(MiniProgramCode, miniProgramCode_);
      DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SyncMiniGameOnlineStatusByAppRequest() = default ;
    SyncMiniGameOnlineStatusByAppRequest(const SyncMiniGameOnlineStatusByAppRequest &) = default ;
    SyncMiniGameOnlineStatusByAppRequest(SyncMiniGameOnlineStatusByAppRequest &&) = default ;
    SyncMiniGameOnlineStatusByAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncMiniGameOnlineStatusByAppRequest() = default ;
    SyncMiniGameOnlineStatusByAppRequest& operator=(const SyncMiniGameOnlineStatusByAppRequest &) = default ;
    SyncMiniGameOnlineStatusByAppRequest& operator=(SyncMiniGameOnlineStatusByAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->miniProgramCode_ == nullptr && this->onlineStatus_ == nullptr && this->tenantId_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SyncMiniGameOnlineStatusByAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // miniProgramCode Field Functions 
    bool hasMiniProgramCode() const { return this->miniProgramCode_ != nullptr;};
    void deleteMiniProgramCode() { this->miniProgramCode_ = nullptr;};
    inline string getMiniProgramCode() const { DARABONBA_PTR_GET_DEFAULT(miniProgramCode_, "") };
    inline SyncMiniGameOnlineStatusByAppRequest& setMiniProgramCode(string miniProgramCode) { DARABONBA_PTR_SET_VALUE(miniProgramCode_, miniProgramCode) };


    // onlineStatus Field Functions 
    bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
    void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
    inline int32_t getOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, 0) };
    inline SyncMiniGameOnlineStatusByAppRequest& setOnlineStatus(int32_t onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SyncMiniGameOnlineStatusByAppRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SyncMiniGameOnlineStatusByAppRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> miniProgramCode_ {};
    // This parameter is required.
    shared_ptr<int32_t> onlineStatus_ {};
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
