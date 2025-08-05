// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTSRESPONSEBODYCLIENTSCLIENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTSRESPONSEBODYCLIENTSCLIENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeClientsResponseBodyClientsClient : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientsResponseBodyClientsClient& obj) { 
      DARABONBA_PTR_TO_JSON(AlertSetting, alertSetting_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientName, clientName_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(HeartBeatTime, heartBeatTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(UseHttps, useHttps_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientsResponseBodyClientsClient& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertSetting, alertSetting_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(HeartBeatTime, heartBeatTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(UseHttps, useHttps_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DescribeClientsResponseBodyClientsClient() = default ;
    DescribeClientsResponseBodyClientsClient(const DescribeClientsResponseBodyClientsClient &) = default ;
    DescribeClientsResponseBodyClientsClient(DescribeClientsResponseBodyClientsClient &&) = default ;
    DescribeClientsResponseBodyClientsClient(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientsResponseBodyClientsClient() = default ;
    DescribeClientsResponseBodyClientsClient& operator=(const DescribeClientsResponseBodyClientsClient &) = default ;
    DescribeClientsResponseBodyClientsClient& operator=(DescribeClientsResponseBodyClientsClient &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertSetting_ != nullptr
        && this->clientId_ != nullptr && this->clientName_ != nullptr && this->clientType_ != nullptr && this->clientVersion_ != nullptr && this->clusterId_ != nullptr
        && this->createdTime_ != nullptr && this->heartBeatTime_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->maxVersion_ != nullptr
        && this->networkType_ != nullptr && this->status_ != nullptr && this->statusMessage_ != nullptr && this->updatedTime_ != nullptr && this->useHttps_ != nullptr
        && this->vaultId_ != nullptr; };
    // alertSetting Field Functions 
    bool hasAlertSetting() const { return this->alertSetting_ != nullptr;};
    void deleteAlertSetting() { this->alertSetting_ = nullptr;};
    inline string alertSetting() const { DARABONBA_PTR_GET_DEFAULT(alertSetting_, "") };
    inline DescribeClientsResponseBodyClientsClient& setAlertSetting(string alertSetting) { DARABONBA_PTR_SET_VALUE(alertSetting_, alertSetting) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeClientsResponseBodyClientsClient& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string clientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline DescribeClientsResponseBodyClientsClient& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline DescribeClientsResponseBodyClientsClient& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline DescribeClientsResponseBodyClientsClient& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClientsResponseBodyClientsClient& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribeClientsResponseBodyClientsClient& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // heartBeatTime Field Functions 
    bool hasHeartBeatTime() const { return this->heartBeatTime_ != nullptr;};
    void deleteHeartBeatTime() { this->heartBeatTime_ = nullptr;};
    inline int64_t heartBeatTime() const { DARABONBA_PTR_GET_DEFAULT(heartBeatTime_, 0L) };
    inline DescribeClientsResponseBodyClientsClient& setHeartBeatTime(int64_t heartBeatTime) { DARABONBA_PTR_SET_VALUE(heartBeatTime_, heartBeatTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeClientsResponseBodyClientsClient& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeClientsResponseBodyClientsClient& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // maxVersion Field Functions 
    bool hasMaxVersion() const { return this->maxVersion_ != nullptr;};
    void deleteMaxVersion() { this->maxVersion_ = nullptr;};
    inline string maxVersion() const { DARABONBA_PTR_GET_DEFAULT(maxVersion_, "") };
    inline DescribeClientsResponseBodyClientsClient& setMaxVersion(string maxVersion) { DARABONBA_PTR_SET_VALUE(maxVersion_, maxVersion) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeClientsResponseBodyClientsClient& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeClientsResponseBodyClientsClient& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline DescribeClientsResponseBodyClientsClient& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DescribeClientsResponseBodyClientsClient& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // useHttps Field Functions 
    bool hasUseHttps() const { return this->useHttps_ != nullptr;};
    void deleteUseHttps() { this->useHttps_ = nullptr;};
    inline bool useHttps() const { DARABONBA_PTR_GET_DEFAULT(useHttps_, false) };
    inline DescribeClientsResponseBodyClientsClient& setUseHttps(bool useHttps) { DARABONBA_PTR_SET_VALUE(useHttps_, useHttps) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeClientsResponseBodyClientsClient& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The alert settings. Valid value: INHERITED, which indicates that the Cloud Backup client sends alert notifications by using the same method configured for the backup vault.
    std::shared_ptr<string> alertSetting_ = nullptr;
    // The ID of the Cloud Backup client.
    std::shared_ptr<string> clientId_ = nullptr;
    // The client name.
    std::shared_ptr<string> clientName_ = nullptr;
    // The type of the Cloud Backup client. Valid value: **ECS_AGENT**, which indicates an SAP HANA backup client.
    std::shared_ptr<string> clientType_ = nullptr;
    // The version number of the Cloud Backup client.
    std::shared_ptr<string> clientVersion_ = nullptr;
    // The ID of the SAP HANA instance.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The time when the Cloud Backup client was created.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The latest heartbeat time of the Cloud Backup client. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> heartBeatTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the ECS instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The maximum version number of the Cloud Backup client.
    std::shared_ptr<string> maxVersion_ = nullptr;
    // The network type. Valid values:
    // 
    // *   **CLASSIC**: the classic network
    // *   **VPC**: the virtual private cloud (VPC)
    std::shared_ptr<string> networkType_ = nullptr;
    // The status of the Cloud Backup client. Valid values:
    // 
    // *   **REGISTERED**: The backup client is registered.
    // *   **ACTIVATED**: The backup client is activated.
    // *   **DEACTIVATED**: The backup client fails to be activated.
    // *   **INSTALLING**: The backup client is being installed.
    // *   **INSTALL_FAILED**: The backup client fails to be installed.
    // *   **NOT_INSTALLED**: The backup client is not installed.
    // *   **UPGRADING**: The backup client is being upgraded.
    // *   **UPGRADE_FAILED**: The backup client fails to be upgraded.
    // *   **UNINSTALLING**: The backup client is being uninstalled.
    // *   **UNINSTALL_FAILED**: The backup client fails to be uninstalled.
    // *   **STOPPED**: The backup client is out of service.
    // *   **UNKNOWN**: The backup client is disconnected.
    std::shared_ptr<string> status_ = nullptr;
    // The status information.
    std::shared_ptr<string> statusMessage_ = nullptr;
    // The time when the Cloud Backup client was updated. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    // Indicates whether data is transmitted over HTTPS. Valid values:
    // 
    // *   true: Data is transmitted over HTTPS.
    // *   false: Data is transmitted over HTTP.
    std::shared_ptr<bool> useHttps_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
