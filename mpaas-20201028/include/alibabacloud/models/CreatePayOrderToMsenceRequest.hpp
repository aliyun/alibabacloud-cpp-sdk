// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPAYORDERTOMSENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPAYORDERTOMSENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreatePayOrderToMsenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePayOrderToMsenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
      DARABONBA_PTR_TO_JSON(CustomId, customId_);
      DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(MiniProgramId, miniProgramId_);
      DARABONBA_PTR_TO_JSON(PlatformId, platformId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePayOrderToMsenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
      DARABONBA_PTR_FROM_JSON(CustomId, customId_);
      DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(MiniProgramId, miniProgramId_);
      DARABONBA_PTR_FROM_JSON(PlatformId, platformId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreatePayOrderToMsenceRequest() = default ;
    CreatePayOrderToMsenceRequest(const CreatePayOrderToMsenceRequest &) = default ;
    CreatePayOrderToMsenceRequest(CreatePayOrderToMsenceRequest &&) = default ;
    CreatePayOrderToMsenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePayOrderToMsenceRequest() = default ;
    CreatePayOrderToMsenceRequest& operator=(const CreatePayOrderToMsenceRequest &) = default ;
    CreatePayOrderToMsenceRequest& operator=(CreatePayOrderToMsenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->appId_ == nullptr && this->authToken_ == nullptr && this->customId_ == nullptr && this->extraInfo_ == nullptr && this->miniProgramId_ == nullptr
        && this->platformId_ == nullptr && this->tenantId_ == nullptr && this->workspaceId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreatePayOrderToMsenceRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreatePayOrderToMsenceRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline CreatePayOrderToMsenceRequest& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string getCustomId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline CreatePayOrderToMsenceRequest& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & getExtraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & getExtraInfo() { DARABONBA_GET(extraInfo_) };
    inline CreatePayOrderToMsenceRequest& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline CreatePayOrderToMsenceRequest& setExtraInfo(Darabonba::Json && extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // miniProgramId Field Functions 
    bool hasMiniProgramId() const { return this->miniProgramId_ != nullptr;};
    void deleteMiniProgramId() { this->miniProgramId_ = nullptr;};
    inline string getMiniProgramId() const { DARABONBA_PTR_GET_DEFAULT(miniProgramId_, "") };
    inline CreatePayOrderToMsenceRequest& setMiniProgramId(string miniProgramId) { DARABONBA_PTR_SET_VALUE(miniProgramId_, miniProgramId) };


    // platformId Field Functions 
    bool hasPlatformId() const { return this->platformId_ != nullptr;};
    void deletePlatformId() { this->platformId_ = nullptr;};
    inline string getPlatformId() const { DARABONBA_PTR_GET_DEFAULT(platformId_, "") };
    inline CreatePayOrderToMsenceRequest& setPlatformId(string platformId) { DARABONBA_PTR_SET_VALUE(platformId_, platformId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreatePayOrderToMsenceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreatePayOrderToMsenceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<int32_t> amount_ {};
    shared_ptr<string> appId_ {};
    shared_ptr<string> authToken_ {};
    shared_ptr<string> customId_ {};
    Darabonba::Json extraInfo_ {};
    shared_ptr<string> miniProgramId_ {};
    shared_ptr<string> platformId_ {};
    shared_ptr<string> tenantId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
