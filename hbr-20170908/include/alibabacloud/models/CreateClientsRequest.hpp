// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateClientsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertSetting, alertSetting_);
      DARABONBA_PTR_TO_JSON(ClientInfo, clientInfo_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(UseHttps, useHttps_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClientsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertSetting, alertSetting_);
      DARABONBA_PTR_FROM_JSON(ClientInfo, clientInfo_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(UseHttps, useHttps_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    CreateClientsRequest() = default ;
    CreateClientsRequest(const CreateClientsRequest &) = default ;
    CreateClientsRequest(CreateClientsRequest &&) = default ;
    CreateClientsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientsRequest() = default ;
    CreateClientsRequest& operator=(const CreateClientsRequest &) = default ;
    CreateClientsRequest& operator=(CreateClientsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertSetting_ == nullptr
        && return this->clientInfo_ == nullptr && return this->crossAccountRoleName_ == nullptr && return this->crossAccountType_ == nullptr && return this->crossAccountUserId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->useHttps_ == nullptr && return this->vaultId_ == nullptr; };
    // alertSetting Field Functions 
    bool hasAlertSetting() const { return this->alertSetting_ != nullptr;};
    void deleteAlertSetting() { this->alertSetting_ = nullptr;};
    inline string alertSetting() const { DARABONBA_PTR_GET_DEFAULT(alertSetting_, "") };
    inline CreateClientsRequest& setAlertSetting(string alertSetting) { DARABONBA_PTR_SET_VALUE(alertSetting_, alertSetting) };


    // clientInfo Field Functions 
    bool hasClientInfo() const { return this->clientInfo_ != nullptr;};
    void deleteClientInfo() { this->clientInfo_ = nullptr;};
    inline string clientInfo() const { DARABONBA_PTR_GET_DEFAULT(clientInfo_, "") };
    inline CreateClientsRequest& setClientInfo(string clientInfo) { DARABONBA_PTR_SET_VALUE(clientInfo_, clientInfo) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline CreateClientsRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline CreateClientsRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline CreateClientsRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClientsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // useHttps Field Functions 
    bool hasUseHttps() const { return this->useHttps_ != nullptr;};
    void deleteUseHttps() { this->useHttps_ = nullptr;};
    inline bool useHttps() const { DARABONBA_PTR_GET_DEFAULT(useHttps_, false) };
    inline CreateClientsRequest& setUseHttps(bool useHttps) { DARABONBA_PTR_SET_VALUE(useHttps_, useHttps) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline CreateClientsRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The alert settings. Valid value: INHERITED, which indicates that the HBR client sends alert notifications by using the same method configured for the backup vault.
    std::shared_ptr<string> alertSetting_ = nullptr;
    // The installation information of the HBR clients.
    std::shared_ptr<string> clientInfo_ = nullptr;
    // The name of the Resource Access Management (RAM) role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // The backup type. Valid values:
    // 
    // - **SELF_ACCOUNT**: Data is backed up within the same Alibaba Cloud account.
    // - **CROSS_ACCOUNT**: Data is backed up across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Specifies whether to transmit data over HTTPS. Valid values:
    // 
    // *   true: transmits data over HTTPS.
    // *   false: transmits data over HTTP.
    std::shared_ptr<bool> useHttps_ = nullptr;
    // The ID of the backup vault.
    // 
    // This parameter is required.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
