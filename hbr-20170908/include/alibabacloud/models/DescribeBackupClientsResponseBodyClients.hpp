// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSRESPONSEBODYCLIENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSRESPONSEBODYCLIENTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupClientsResponseBodyClientsSettings.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupClientsResponseBodyClientsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupClientsResponseBodyClients : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupClientsResponseBodyClients& obj) { 
      DARABONBA_PTR_TO_JSON(Appliance, appliance_);
      DARABONBA_PTR_TO_JSON(ArchType, archType_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(LastHeartBeatTime, lastHeartBeatTime_);
      DARABONBA_PTR_TO_JSON(MaxClientVersion, maxClientVersion_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(PrivateIpV4, privateIpV4_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupClientsResponseBodyClients& obj) { 
      DARABONBA_PTR_FROM_JSON(Appliance, appliance_);
      DARABONBA_PTR_FROM_JSON(ArchType, archType_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(LastHeartBeatTime, lastHeartBeatTime_);
      DARABONBA_PTR_FROM_JSON(MaxClientVersion, maxClientVersion_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(PrivateIpV4, privateIpV4_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeBackupClientsResponseBodyClients() = default ;
    DescribeBackupClientsResponseBodyClients(const DescribeBackupClientsResponseBodyClients &) = default ;
    DescribeBackupClientsResponseBodyClients(DescribeBackupClientsResponseBodyClients &&) = default ;
    DescribeBackupClientsResponseBodyClients(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupClientsResponseBodyClients() = default ;
    DescribeBackupClientsResponseBodyClients& operator=(const DescribeBackupClientsResponseBodyClients &) = default ;
    DescribeBackupClientsResponseBodyClients& operator=(DescribeBackupClientsResponseBodyClients &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appliance_ != nullptr
        && this->archType_ != nullptr && this->backupStatus_ != nullptr && this->clientId_ != nullptr && this->clientType_ != nullptr && this->clientVersion_ != nullptr
        && this->createdTime_ != nullptr && this->hostname_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->lastHeartBeatTime_ != nullptr
        && this->maxClientVersion_ != nullptr && this->osType_ != nullptr && this->privateIpV4_ != nullptr && this->settings_ != nullptr && this->status_ != nullptr
        && this->tags_ != nullptr && this->updatedTime_ != nullptr && this->zoneId_ != nullptr; };
    // appliance Field Functions 
    bool hasAppliance() const { return this->appliance_ != nullptr;};
    void deleteAppliance() { this->appliance_ = nullptr;};
    inline bool appliance() const { DARABONBA_PTR_GET_DEFAULT(appliance_, false) };
    inline DescribeBackupClientsResponseBodyClients& setAppliance(bool appliance) { DARABONBA_PTR_SET_VALUE(appliance_, appliance) };


    // archType Field Functions 
    bool hasArchType() const { return this->archType_ != nullptr;};
    void deleteArchType() { this->archType_ = nullptr;};
    inline string archType() const { DARABONBA_PTR_GET_DEFAULT(archType_, "") };
    inline DescribeBackupClientsResponseBodyClients& setArchType(string archType) { DARABONBA_PTR_SET_VALUE(archType_, archType) };


    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string backupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline DescribeBackupClientsResponseBodyClients& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeBackupClientsResponseBodyClients& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline DescribeBackupClientsResponseBodyClients& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline DescribeBackupClientsResponseBodyClients& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribeBackupClientsResponseBodyClients& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline DescribeBackupClientsResponseBodyClients& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeBackupClientsResponseBodyClients& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeBackupClientsResponseBodyClients& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // lastHeartBeatTime Field Functions 
    bool hasLastHeartBeatTime() const { return this->lastHeartBeatTime_ != nullptr;};
    void deleteLastHeartBeatTime() { this->lastHeartBeatTime_ = nullptr;};
    inline int64_t lastHeartBeatTime() const { DARABONBA_PTR_GET_DEFAULT(lastHeartBeatTime_, 0L) };
    inline DescribeBackupClientsResponseBodyClients& setLastHeartBeatTime(int64_t lastHeartBeatTime) { DARABONBA_PTR_SET_VALUE(lastHeartBeatTime_, lastHeartBeatTime) };


    // maxClientVersion Field Functions 
    bool hasMaxClientVersion() const { return this->maxClientVersion_ != nullptr;};
    void deleteMaxClientVersion() { this->maxClientVersion_ = nullptr;};
    inline string maxClientVersion() const { DARABONBA_PTR_GET_DEFAULT(maxClientVersion_, "") };
    inline DescribeBackupClientsResponseBodyClients& setMaxClientVersion(string maxClientVersion) { DARABONBA_PTR_SET_VALUE(maxClientVersion_, maxClientVersion) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeBackupClientsResponseBodyClients& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // privateIpV4 Field Functions 
    bool hasPrivateIpV4() const { return this->privateIpV4_ != nullptr;};
    void deletePrivateIpV4() { this->privateIpV4_ = nullptr;};
    inline string privateIpV4() const { DARABONBA_PTR_GET_DEFAULT(privateIpV4_, "") };
    inline DescribeBackupClientsResponseBodyClients& setPrivateIpV4(string privateIpV4) { DARABONBA_PTR_SET_VALUE(privateIpV4_, privateIpV4) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const Models::DescribeBackupClientsResponseBodyClientsSettings & settings() const { DARABONBA_PTR_GET_CONST(settings_, Models::DescribeBackupClientsResponseBodyClientsSettings) };
    inline Models::DescribeBackupClientsResponseBodyClientsSettings settings() { DARABONBA_PTR_GET(settings_, Models::DescribeBackupClientsResponseBodyClientsSettings) };
    inline DescribeBackupClientsResponseBodyClients& setSettings(const Models::DescribeBackupClientsResponseBodyClientsSettings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline DescribeBackupClientsResponseBodyClients& setSettings(Models::DescribeBackupClientsResponseBodyClientsSettings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBackupClientsResponseBodyClients& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeBackupClientsResponseBodyClientsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeBackupClientsResponseBodyClientsTags>) };
    inline vector<Models::DescribeBackupClientsResponseBodyClientsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeBackupClientsResponseBodyClientsTags>) };
    inline DescribeBackupClientsResponseBodyClients& setTags(const vector<Models::DescribeBackupClientsResponseBodyClientsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeBackupClientsResponseBodyClients& setTags(vector<Models::DescribeBackupClientsResponseBodyClientsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DescribeBackupClientsResponseBodyClients& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeBackupClientsResponseBodyClients& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Indicates whether the client is installed on an all-in-one PC that integrates hardware and monitoring program. Valid values:
    // 
    // *   true: The client is installed on an all-in-one PC that integrates hardware and monitoring program.
    // *   false: The client is not installed on an all-in-one PC that integrates hardware and monitoring program.
    std::shared_ptr<bool> appliance_ = nullptr;
    // This parameter is valid only if the **ClientType** parameter is set to **ECS_CLIENT**. This parameter indicates the system architecture where the backup client resides. Valid values:
    // 
    // *   **amd64**
    // *   **386**
    std::shared_ptr<string> archType_ = nullptr;
    // The protection status of the backup client. Valid values:
    // 
    // *   **UNPROTECTED**: The backup client is not protected.
    // *   **PROTECTED**: The backup client is protected.
    std::shared_ptr<string> backupStatus_ = nullptr;
    // The ID of the backup client.
    std::shared_ptr<string> clientId_ = nullptr;
    // The type of the backup client. Valid value: **ECS_CLIENT**, which indicates a client for ECS file backup.
    std::shared_ptr<string> clientType_ = nullptr;
    // The version number of the backup client.
    std::shared_ptr<string> clientVersion_ = nullptr;
    // The time when the backup client was created. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The hostname of the backup client.
    std::shared_ptr<string> hostname_ = nullptr;
    // The instance ID.
    // 
    // *   If the client is used to back up ECS files, this parameter indicates the ID of an ECS instance.
    // *   If the client is used to back up on-premises files, this parameter indicates the hardware fingerprint that is generated based on the system information.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is valid only if the **ClientType** parameter is set to **ECS_CLIENT**. This parameter indicates the name of the ECS instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The last heartbeat time of the backup client. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> lastHeartBeatTime_ = nullptr;
    // The latest version number of the backup client.
    std::shared_ptr<string> maxClientVersion_ = nullptr;
    // This parameter is valid only if the **ClientType** parameter is set to **ECS_CLIENT**. This parameter indicates the operating system type of the backup client. Valid values:
    // 
    // *   **windows**
    // *   **linux**
    std::shared_ptr<string> osType_ = nullptr;
    // This parameter is valid only if the **ClientType** parameter is set to **ECS_CLIENT**. This parameter indicates the internal IP address of the ECS instance.
    std::shared_ptr<string> privateIpV4_ = nullptr;
    // The configuration information of the backup client.
    std::shared_ptr<Models::DescribeBackupClientsResponseBodyClientsSettings> settings_ = nullptr;
    // The status of the backup client. Valid values:
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
    // The tag information.
    std::shared_ptr<vector<Models::DescribeBackupClientsResponseBodyClientsTags>> tags_ = nullptr;
    // The time when the backup client was updated. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    // This parameter is valid only if the **ClientType** parameter is set to **ECS_CLIENT**. This parameter indicates the zone of the backup client.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
