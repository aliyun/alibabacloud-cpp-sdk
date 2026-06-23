// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEORDERRELATIONINFOTOMSENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEORDERRELATIONINFOTOMSENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class SaveOrderRelationInfoToMsenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveOrderRelationInfoToMsenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BizOrderId, bizOrderId_);
      DARABONBA_PTR_TO_JSON(BizOrderStatus, bizOrderStatus_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(CpExtra, cpExtra_);
      DARABONBA_PTR_TO_JSON(CustomId, customId_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(ItemTitle, itemTitle_);
      DARABONBA_PTR_TO_JSON(MiniProgramId, miniProgramId_);
      DARABONBA_PTR_TO_JSON(OpenUid, openUid_);
      DARABONBA_PTR_TO_JSON(PlatformId, platformId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveOrderRelationInfoToMsenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BizOrderId, bizOrderId_);
      DARABONBA_PTR_FROM_JSON(BizOrderStatus, bizOrderStatus_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(CpExtra, cpExtra_);
      DARABONBA_PTR_FROM_JSON(CustomId, customId_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(ItemTitle, itemTitle_);
      DARABONBA_PTR_FROM_JSON(MiniProgramId, miniProgramId_);
      DARABONBA_PTR_FROM_JSON(OpenUid, openUid_);
      DARABONBA_PTR_FROM_JSON(PlatformId, platformId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SaveOrderRelationInfoToMsenceRequest() = default ;
    SaveOrderRelationInfoToMsenceRequest(const SaveOrderRelationInfoToMsenceRequest &) = default ;
    SaveOrderRelationInfoToMsenceRequest(SaveOrderRelationInfoToMsenceRequest &&) = default ;
    SaveOrderRelationInfoToMsenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveOrderRelationInfoToMsenceRequest() = default ;
    SaveOrderRelationInfoToMsenceRequest& operator=(const SaveOrderRelationInfoToMsenceRequest &) = default ;
    SaveOrderRelationInfoToMsenceRequest& operator=(SaveOrderRelationInfoToMsenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->appId_ == nullptr && this->bizOrderId_ == nullptr && this->bizOrderStatus_ == nullptr && this->clientType_ == nullptr && this->cpExtra_ == nullptr
        && this->customId_ == nullptr && this->itemId_ == nullptr && this->itemTitle_ == nullptr && this->miniProgramId_ == nullptr && this->openUid_ == nullptr
        && this->platformId_ == nullptr && this->tenantId_ == nullptr && this->workspaceId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline SaveOrderRelationInfoToMsenceRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SaveOrderRelationInfoToMsenceRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bizOrderId Field Functions 
    bool hasBizOrderId() const { return this->bizOrderId_ != nullptr;};
    void deleteBizOrderId() { this->bizOrderId_ = nullptr;};
    inline string getBizOrderId() const { DARABONBA_PTR_GET_DEFAULT(bizOrderId_, "") };
    inline SaveOrderRelationInfoToMsenceRequest& setBizOrderId(string bizOrderId) { DARABONBA_PTR_SET_VALUE(bizOrderId_, bizOrderId) };


    // bizOrderStatus Field Functions 
    bool hasBizOrderStatus() const { return this->bizOrderStatus_ != nullptr;};
    void deleteBizOrderStatus() { this->bizOrderStatus_ = nullptr;};
    inline int32_t getBizOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(bizOrderStatus_, 0) };
    inline SaveOrderRelationInfoToMsenceRequest& setBizOrderStatus(int32_t bizOrderStatus) { DARABONBA_PTR_SET_VALUE(bizOrderStatus_, bizOrderStatus) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline SaveOrderRelationInfoToMsenceRequest& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // cpExtra Field Functions 
    bool hasCpExtra() const { return this->cpExtra_ != nullptr;};
    void deleteCpExtra() { this->cpExtra_ = nullptr;};
    inline string getCpExtra() const { DARABONBA_PTR_GET_DEFAULT(cpExtra_, "") };
    inline SaveOrderRelationInfoToMsenceRequest& setCpExtra(string cpExtra) { DARABONBA_PTR_SET_VALUE(cpExtra_, cpExtra) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string getCustomId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline SaveOrderRelationInfoToMsenceRequest& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline SaveOrderRelationInfoToMsenceRequest& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // itemTitle Field Functions 
    bool hasItemTitle() const { return this->itemTitle_ != nullptr;};
    void deleteItemTitle() { this->itemTitle_ = nullptr;};
    inline string getItemTitle() const { DARABONBA_PTR_GET_DEFAULT(itemTitle_, "") };
    inline SaveOrderRelationInfoToMsenceRequest& setItemTitle(string itemTitle) { DARABONBA_PTR_SET_VALUE(itemTitle_, itemTitle) };


    // miniProgramId Field Functions 
    bool hasMiniProgramId() const { return this->miniProgramId_ != nullptr;};
    void deleteMiniProgramId() { this->miniProgramId_ = nullptr;};
    inline string getMiniProgramId() const { DARABONBA_PTR_GET_DEFAULT(miniProgramId_, "") };
    inline SaveOrderRelationInfoToMsenceRequest& setMiniProgramId(string miniProgramId) { DARABONBA_PTR_SET_VALUE(miniProgramId_, miniProgramId) };


    // openUid Field Functions 
    bool hasOpenUid() const { return this->openUid_ != nullptr;};
    void deleteOpenUid() { this->openUid_ = nullptr;};
    inline string getOpenUid() const { DARABONBA_PTR_GET_DEFAULT(openUid_, "") };
    inline SaveOrderRelationInfoToMsenceRequest& setOpenUid(string openUid) { DARABONBA_PTR_SET_VALUE(openUid_, openUid) };


    // platformId Field Functions 
    bool hasPlatformId() const { return this->platformId_ != nullptr;};
    void deletePlatformId() { this->platformId_ = nullptr;};
    inline string getPlatformId() const { DARABONBA_PTR_GET_DEFAULT(platformId_, "") };
    inline SaveOrderRelationInfoToMsenceRequest& setPlatformId(string platformId) { DARABONBA_PTR_SET_VALUE(platformId_, platformId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SaveOrderRelationInfoToMsenceRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SaveOrderRelationInfoToMsenceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<int32_t> amount_ {};
    shared_ptr<string> appId_ {};
    shared_ptr<string> bizOrderId_ {};
    shared_ptr<int32_t> bizOrderStatus_ {};
    shared_ptr<string> clientType_ {};
    shared_ptr<string> cpExtra_ {};
    shared_ptr<string> customId_ {};
    shared_ptr<string> itemId_ {};
    shared_ptr<string> itemTitle_ {};
    shared_ptr<string> miniProgramId_ {};
    shared_ptr<string> openUid_ {};
    shared_ptr<string> platformId_ {};
    shared_ptr<string> tenantId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
