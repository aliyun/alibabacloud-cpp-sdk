// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLIENTSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLIENTSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdateClientSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClientSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertOnPartialComplete, alertOnPartialComplete_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(DataNetworkType, dataNetworkType_);
      DARABONBA_PTR_TO_JSON(DataProxySetting, dataProxySetting_);
      DARABONBA_PTR_TO_JSON(MaxCpuCore, maxCpuCore_);
      DARABONBA_PTR_TO_JSON(MaxMemory, maxMemory_);
      DARABONBA_PTR_TO_JSON(MaxWorker, maxWorker_);
      DARABONBA_PTR_TO_JSON(ProxyHost, proxyHost_);
      DARABONBA_PTR_TO_JSON(ProxyPassword, proxyPassword_);
      DARABONBA_PTR_TO_JSON(ProxyPort, proxyPort_);
      DARABONBA_PTR_TO_JSON(ProxyUser, proxyUser_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(UseHttps, useHttps_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClientSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertOnPartialComplete, alertOnPartialComplete_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(DataNetworkType, dataNetworkType_);
      DARABONBA_PTR_FROM_JSON(DataProxySetting, dataProxySetting_);
      DARABONBA_PTR_FROM_JSON(MaxCpuCore, maxCpuCore_);
      DARABONBA_PTR_FROM_JSON(MaxMemory, maxMemory_);
      DARABONBA_PTR_FROM_JSON(MaxWorker, maxWorker_);
      DARABONBA_PTR_FROM_JSON(ProxyHost, proxyHost_);
      DARABONBA_PTR_FROM_JSON(ProxyPassword, proxyPassword_);
      DARABONBA_PTR_FROM_JSON(ProxyPort, proxyPort_);
      DARABONBA_PTR_FROM_JSON(ProxyUser, proxyUser_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(UseHttps, useHttps_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    UpdateClientSettingsRequest() = default ;
    UpdateClientSettingsRequest(const UpdateClientSettingsRequest &) = default ;
    UpdateClientSettingsRequest(UpdateClientSettingsRequest &&) = default ;
    UpdateClientSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClientSettingsRequest() = default ;
    UpdateClientSettingsRequest& operator=(const UpdateClientSettingsRequest &) = default ;
    UpdateClientSettingsRequest& operator=(UpdateClientSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertOnPartialComplete_ == nullptr
        && return this->clientId_ == nullptr && return this->dataNetworkType_ == nullptr && return this->dataProxySetting_ == nullptr && return this->maxCpuCore_ == nullptr && return this->maxMemory_ == nullptr
        && return this->maxWorker_ == nullptr && return this->proxyHost_ == nullptr && return this->proxyPassword_ == nullptr && return this->proxyPort_ == nullptr && return this->proxyUser_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->useHttps_ == nullptr && return this->vaultId_ == nullptr; };
    // alertOnPartialComplete Field Functions 
    bool hasAlertOnPartialComplete() const { return this->alertOnPartialComplete_ != nullptr;};
    void deleteAlertOnPartialComplete() { this->alertOnPartialComplete_ = nullptr;};
    inline bool alertOnPartialComplete() const { DARABONBA_PTR_GET_DEFAULT(alertOnPartialComplete_, false) };
    inline UpdateClientSettingsRequest& setAlertOnPartialComplete(bool alertOnPartialComplete) { DARABONBA_PTR_SET_VALUE(alertOnPartialComplete_, alertOnPartialComplete) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline UpdateClientSettingsRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // dataNetworkType Field Functions 
    bool hasDataNetworkType() const { return this->dataNetworkType_ != nullptr;};
    void deleteDataNetworkType() { this->dataNetworkType_ = nullptr;};
    inline string dataNetworkType() const { DARABONBA_PTR_GET_DEFAULT(dataNetworkType_, "") };
    inline UpdateClientSettingsRequest& setDataNetworkType(string dataNetworkType) { DARABONBA_PTR_SET_VALUE(dataNetworkType_, dataNetworkType) };


    // dataProxySetting Field Functions 
    bool hasDataProxySetting() const { return this->dataProxySetting_ != nullptr;};
    void deleteDataProxySetting() { this->dataProxySetting_ = nullptr;};
    inline string dataProxySetting() const { DARABONBA_PTR_GET_DEFAULT(dataProxySetting_, "") };
    inline UpdateClientSettingsRequest& setDataProxySetting(string dataProxySetting) { DARABONBA_PTR_SET_VALUE(dataProxySetting_, dataProxySetting) };


    // maxCpuCore Field Functions 
    bool hasMaxCpuCore() const { return this->maxCpuCore_ != nullptr;};
    void deleteMaxCpuCore() { this->maxCpuCore_ = nullptr;};
    inline int32_t maxCpuCore() const { DARABONBA_PTR_GET_DEFAULT(maxCpuCore_, 0) };
    inline UpdateClientSettingsRequest& setMaxCpuCore(int32_t maxCpuCore) { DARABONBA_PTR_SET_VALUE(maxCpuCore_, maxCpuCore) };


    // maxMemory Field Functions 
    bool hasMaxMemory() const { return this->maxMemory_ != nullptr;};
    void deleteMaxMemory() { this->maxMemory_ = nullptr;};
    inline int64_t maxMemory() const { DARABONBA_PTR_GET_DEFAULT(maxMemory_, 0L) };
    inline UpdateClientSettingsRequest& setMaxMemory(int64_t maxMemory) { DARABONBA_PTR_SET_VALUE(maxMemory_, maxMemory) };


    // maxWorker Field Functions 
    bool hasMaxWorker() const { return this->maxWorker_ != nullptr;};
    void deleteMaxWorker() { this->maxWorker_ = nullptr;};
    inline int32_t maxWorker() const { DARABONBA_PTR_GET_DEFAULT(maxWorker_, 0) };
    inline UpdateClientSettingsRequest& setMaxWorker(int32_t maxWorker) { DARABONBA_PTR_SET_VALUE(maxWorker_, maxWorker) };


    // proxyHost Field Functions 
    bool hasProxyHost() const { return this->proxyHost_ != nullptr;};
    void deleteProxyHost() { this->proxyHost_ = nullptr;};
    inline string proxyHost() const { DARABONBA_PTR_GET_DEFAULT(proxyHost_, "") };
    inline UpdateClientSettingsRequest& setProxyHost(string proxyHost) { DARABONBA_PTR_SET_VALUE(proxyHost_, proxyHost) };


    // proxyPassword Field Functions 
    bool hasProxyPassword() const { return this->proxyPassword_ != nullptr;};
    void deleteProxyPassword() { this->proxyPassword_ = nullptr;};
    inline string proxyPassword() const { DARABONBA_PTR_GET_DEFAULT(proxyPassword_, "") };
    inline UpdateClientSettingsRequest& setProxyPassword(string proxyPassword) { DARABONBA_PTR_SET_VALUE(proxyPassword_, proxyPassword) };


    // proxyPort Field Functions 
    bool hasProxyPort() const { return this->proxyPort_ != nullptr;};
    void deleteProxyPort() { this->proxyPort_ = nullptr;};
    inline int32_t proxyPort() const { DARABONBA_PTR_GET_DEFAULT(proxyPort_, 0) };
    inline UpdateClientSettingsRequest& setProxyPort(int32_t proxyPort) { DARABONBA_PTR_SET_VALUE(proxyPort_, proxyPort) };


    // proxyUser Field Functions 
    bool hasProxyUser() const { return this->proxyUser_ != nullptr;};
    void deleteProxyUser() { this->proxyUser_ = nullptr;};
    inline string proxyUser() const { DARABONBA_PTR_GET_DEFAULT(proxyUser_, "") };
    inline UpdateClientSettingsRequest& setProxyUser(string proxyUser) { DARABONBA_PTR_SET_VALUE(proxyUser_, proxyUser) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateClientSettingsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // useHttps Field Functions 
    bool hasUseHttps() const { return this->useHttps_ != nullptr;};
    void deleteUseHttps() { this->useHttps_ = nullptr;};
    inline bool useHttps() const { DARABONBA_PTR_GET_DEFAULT(useHttps_, false) };
    inline UpdateClientSettingsRequest& setUseHttps(bool useHttps) { DARABONBA_PTR_SET_VALUE(useHttps_, useHttps) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline UpdateClientSettingsRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // Specifies whether to generate alert for partially completed jobs. This parameter is valid only for on-premises file backup and ECS file backup.
    std::shared_ptr<bool> alertOnPartialComplete_ = nullptr;
    // The ID of the HBR client.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    // The type of the endpoint on the data plane. Valid values:
    // 
    // *   **PUBLIC**: Internet
    // *   **VPC**: virtual private cloud (VPC)
    // *   **CLASSIC**: classic network
    std::shared_ptr<string> dataNetworkType_ = nullptr;
    // The proxy configuration on the data plane. Valid values:
    // 
    // *   **DISABLE**: The proxy is not used.
    // *   **USE_CONTROL_PROXY** (default): The configuration is the same as that on the control plane.
    // *   **CUSTOM**: The configuration is customized (HTTP).
    std::shared_ptr<string> dataProxySetting_ = nullptr;
    // The number of CPU cores used by a single backup job. The value 0 indicates that the number is unlimited.
    std::shared_ptr<int32_t> maxCpuCore_ = nullptr;
    // The maximum memory that can be used by the client. Unit: bytes. Only V2.13.0 and later are supported.
    std::shared_ptr<int64_t> maxMemory_ = nullptr;
    // The number of concurrent backup jobs. The value 0 indicates that the number is unlimited.
    std::shared_ptr<int32_t> maxWorker_ = nullptr;
    // The custom host IP address of the proxy server on the data plane.
    std::shared_ptr<string> proxyHost_ = nullptr;
    // The custom password of the proxy server on the data plane.
    std::shared_ptr<string> proxyPassword_ = nullptr;
    // The custom host port of the proxy server on the data plane.
    std::shared_ptr<int32_t> proxyPort_ = nullptr;
    // The custom username of the proxy server on the data plane.
    std::shared_ptr<string> proxyUser_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Specifies whether to transmit the data on the data plane over HTTPS. Valid values:
    // 
    // *   true: Data is transmitted over HTTPS.
    // *   false: Data is transmitted over HTTP.
    std::shared_ptr<bool> useHttps_ = nullptr;
    // The ID of the backup vault. This parameter is required for the old HBR client.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
