// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupClientsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupClientsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clients, clients_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupClientsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clients, clients_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBackupClientsResponseBody() = default ;
    DescribeBackupClientsResponseBody(const DescribeBackupClientsResponseBody &) = default ;
    DescribeBackupClientsResponseBody(DescribeBackupClientsResponseBody &&) = default ;
    DescribeBackupClientsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupClientsResponseBody() = default ;
    DescribeBackupClientsResponseBody& operator=(const DescribeBackupClientsResponseBody &) = default ;
    DescribeBackupClientsResponseBody& operator=(DescribeBackupClientsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Clients : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Clients& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Clients& obj) { 
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
      Clients() = default ;
      Clients(const Clients &) = default ;
      Clients(Clients &&) = default ;
      Clients(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Clients() = default ;
      Clients& operator=(const Clients &) = default ;
      Clients& operator=(Clients &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key of the backup vault. Valid values of N: 1 to 20
        // 
        // *   The tag key cannot start with `aliyun` or `acs:`.
        // *   The tag key cannot contain `http://` or `https://`.
        // *   The tag key cannot be an empty string.
        shared_ptr<string> key_ {};
        // The tag value of the backup vault. Valid values of N: 1 to 20
        // 
        // *   The tag value cannot start with `aliyun` or `acs:`.
        // *   The tag value cannot contain `http://` or `https://`.
        // *   The tag value cannot be an empty string.
        shared_ptr<string> value_ {};
      };

      class Settings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Settings& obj) { 
          DARABONBA_PTR_TO_JSON(AlertOnPartialComplete, alertOnPartialComplete_);
          DARABONBA_PTR_TO_JSON(DataNetworkType, dataNetworkType_);
          DARABONBA_PTR_TO_JSON(DataProxySetting, dataProxySetting_);
          DARABONBA_PTR_TO_JSON(MaxCpuCore, maxCpuCore_);
          DARABONBA_PTR_TO_JSON(MaxMemory, maxMemory_);
          DARABONBA_PTR_TO_JSON(MaxWorker, maxWorker_);
          DARABONBA_PTR_TO_JSON(ProxyHost, proxyHost_);
          DARABONBA_PTR_TO_JSON(ProxyPassword, proxyPassword_);
          DARABONBA_PTR_TO_JSON(ProxyPort, proxyPort_);
          DARABONBA_PTR_TO_JSON(ProxyUser, proxyUser_);
          DARABONBA_PTR_TO_JSON(UseHttps, useHttps_);
        };
        friend void from_json(const Darabonba::Json& j, Settings& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertOnPartialComplete, alertOnPartialComplete_);
          DARABONBA_PTR_FROM_JSON(DataNetworkType, dataNetworkType_);
          DARABONBA_PTR_FROM_JSON(DataProxySetting, dataProxySetting_);
          DARABONBA_PTR_FROM_JSON(MaxCpuCore, maxCpuCore_);
          DARABONBA_PTR_FROM_JSON(MaxMemory, maxMemory_);
          DARABONBA_PTR_FROM_JSON(MaxWorker, maxWorker_);
          DARABONBA_PTR_FROM_JSON(ProxyHost, proxyHost_);
          DARABONBA_PTR_FROM_JSON(ProxyPassword, proxyPassword_);
          DARABONBA_PTR_FROM_JSON(ProxyPort, proxyPort_);
          DARABONBA_PTR_FROM_JSON(ProxyUser, proxyUser_);
          DARABONBA_PTR_FROM_JSON(UseHttps, useHttps_);
        };
        Settings() = default ;
        Settings(const Settings &) = default ;
        Settings(Settings &&) = default ;
        Settings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Settings() = default ;
        Settings& operator=(const Settings &) = default ;
        Settings& operator=(Settings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alertOnPartialComplete_ == nullptr
        && this->dataNetworkType_ == nullptr && this->dataProxySetting_ == nullptr && this->maxCpuCore_ == nullptr && this->maxMemory_ == nullptr && this->maxWorker_ == nullptr
        && this->proxyHost_ == nullptr && this->proxyPassword_ == nullptr && this->proxyPort_ == nullptr && this->proxyUser_ == nullptr && this->useHttps_ == nullptr; };
        // alertOnPartialComplete Field Functions 
        bool hasAlertOnPartialComplete() const { return this->alertOnPartialComplete_ != nullptr;};
        void deleteAlertOnPartialComplete() { this->alertOnPartialComplete_ = nullptr;};
        inline bool getAlertOnPartialComplete() const { DARABONBA_PTR_GET_DEFAULT(alertOnPartialComplete_, false) };
        inline Settings& setAlertOnPartialComplete(bool alertOnPartialComplete) { DARABONBA_PTR_SET_VALUE(alertOnPartialComplete_, alertOnPartialComplete) };


        // dataNetworkType Field Functions 
        bool hasDataNetworkType() const { return this->dataNetworkType_ != nullptr;};
        void deleteDataNetworkType() { this->dataNetworkType_ = nullptr;};
        inline string getDataNetworkType() const { DARABONBA_PTR_GET_DEFAULT(dataNetworkType_, "") };
        inline Settings& setDataNetworkType(string dataNetworkType) { DARABONBA_PTR_SET_VALUE(dataNetworkType_, dataNetworkType) };


        // dataProxySetting Field Functions 
        bool hasDataProxySetting() const { return this->dataProxySetting_ != nullptr;};
        void deleteDataProxySetting() { this->dataProxySetting_ = nullptr;};
        inline string getDataProxySetting() const { DARABONBA_PTR_GET_DEFAULT(dataProxySetting_, "") };
        inline Settings& setDataProxySetting(string dataProxySetting) { DARABONBA_PTR_SET_VALUE(dataProxySetting_, dataProxySetting) };


        // maxCpuCore Field Functions 
        bool hasMaxCpuCore() const { return this->maxCpuCore_ != nullptr;};
        void deleteMaxCpuCore() { this->maxCpuCore_ = nullptr;};
        inline string getMaxCpuCore() const { DARABONBA_PTR_GET_DEFAULT(maxCpuCore_, "") };
        inline Settings& setMaxCpuCore(string maxCpuCore) { DARABONBA_PTR_SET_VALUE(maxCpuCore_, maxCpuCore) };


        // maxMemory Field Functions 
        bool hasMaxMemory() const { return this->maxMemory_ != nullptr;};
        void deleteMaxMemory() { this->maxMemory_ = nullptr;};
        inline int64_t getMaxMemory() const { DARABONBA_PTR_GET_DEFAULT(maxMemory_, 0L) };
        inline Settings& setMaxMemory(int64_t maxMemory) { DARABONBA_PTR_SET_VALUE(maxMemory_, maxMemory) };


        // maxWorker Field Functions 
        bool hasMaxWorker() const { return this->maxWorker_ != nullptr;};
        void deleteMaxWorker() { this->maxWorker_ = nullptr;};
        inline string getMaxWorker() const { DARABONBA_PTR_GET_DEFAULT(maxWorker_, "") };
        inline Settings& setMaxWorker(string maxWorker) { DARABONBA_PTR_SET_VALUE(maxWorker_, maxWorker) };


        // proxyHost Field Functions 
        bool hasProxyHost() const { return this->proxyHost_ != nullptr;};
        void deleteProxyHost() { this->proxyHost_ = nullptr;};
        inline string getProxyHost() const { DARABONBA_PTR_GET_DEFAULT(proxyHost_, "") };
        inline Settings& setProxyHost(string proxyHost) { DARABONBA_PTR_SET_VALUE(proxyHost_, proxyHost) };


        // proxyPassword Field Functions 
        bool hasProxyPassword() const { return this->proxyPassword_ != nullptr;};
        void deleteProxyPassword() { this->proxyPassword_ = nullptr;};
        inline string getProxyPassword() const { DARABONBA_PTR_GET_DEFAULT(proxyPassword_, "") };
        inline Settings& setProxyPassword(string proxyPassword) { DARABONBA_PTR_SET_VALUE(proxyPassword_, proxyPassword) };


        // proxyPort Field Functions 
        bool hasProxyPort() const { return this->proxyPort_ != nullptr;};
        void deleteProxyPort() { this->proxyPort_ = nullptr;};
        inline int32_t getProxyPort() const { DARABONBA_PTR_GET_DEFAULT(proxyPort_, 0) };
        inline Settings& setProxyPort(int32_t proxyPort) { DARABONBA_PTR_SET_VALUE(proxyPort_, proxyPort) };


        // proxyUser Field Functions 
        bool hasProxyUser() const { return this->proxyUser_ != nullptr;};
        void deleteProxyUser() { this->proxyUser_ = nullptr;};
        inline string getProxyUser() const { DARABONBA_PTR_GET_DEFAULT(proxyUser_, "") };
        inline Settings& setProxyUser(string proxyUser) { DARABONBA_PTR_SET_VALUE(proxyUser_, proxyUser) };


        // useHttps Field Functions 
        bool hasUseHttps() const { return this->useHttps_ != nullptr;};
        void deleteUseHttps() { this->useHttps_ = nullptr;};
        inline string getUseHttps() const { DARABONBA_PTR_GET_DEFAULT(useHttps_, "") };
        inline Settings& setUseHttps(string useHttps) { DARABONBA_PTR_SET_VALUE(useHttps_, useHttps) };


      protected:
        // Indicates whether alerts are generated for partially completed jobs. This parameter is valid only for on-premises file backup and ECS file backup.
        shared_ptr<bool> alertOnPartialComplete_ {};
        // The type of the endpoint on the data plane. Valid values:
        // 
        // *   **PUBLIC**: Internet
        // *   **VPC**: virtual private cloud (VPC)
        // *   **CLASSIC**: classic network
        shared_ptr<string> dataNetworkType_ {};
        // The proxy configuration on the data plane. Valid values:
        // 
        // *   **DISABLE**: The proxy is not used.
        // *   **USE_CONTROL_PROXY** (default): The configuration is the same as that on the control plane.
        // *   **CUSTOM**: The configuration is customized (HTTP).
        shared_ptr<string> dataProxySetting_ {};
        // The number of CPU cores used by a single backup job. The value 0 indicates that the number is unlimited.
        shared_ptr<string> maxCpuCore_ {};
        // The maximum memory that can be used by the client. Unit: bytes. Only V2.13.0 and later are supported.
        shared_ptr<int64_t> maxMemory_ {};
        // The number of concurrent backup jobs. The value 0 indicates that the number is unlimited.
        shared_ptr<string> maxWorker_ {};
        // The custom host IP address of the proxy server on the data plane.
        shared_ptr<string> proxyHost_ {};
        // The custom password of the proxy server on the data plane.
        shared_ptr<string> proxyPassword_ {};
        // The custom host port of the proxy server on the data plane.
        shared_ptr<int32_t> proxyPort_ {};
        // The custom username of the proxy server on the data plane.
        shared_ptr<string> proxyUser_ {};
        // Indicates whether data on the data plane is transmitted over HTTPS. Valid values:
        // 
        // *   true: Data is transmitted over HTTPS.
        // *   false: Data is transmitted over HTTP.
        shared_ptr<string> useHttps_ {};
      };

      virtual bool empty() const override { return this->appliance_ == nullptr
        && this->archType_ == nullptr && this->backupStatus_ == nullptr && this->clientId_ == nullptr && this->clientType_ == nullptr && this->clientVersion_ == nullptr
        && this->createdTime_ == nullptr && this->hostname_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->lastHeartBeatTime_ == nullptr
        && this->maxClientVersion_ == nullptr && this->osType_ == nullptr && this->privateIpV4_ == nullptr && this->settings_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->updatedTime_ == nullptr && this->zoneId_ == nullptr; };
      // appliance Field Functions 
      bool hasAppliance() const { return this->appliance_ != nullptr;};
      void deleteAppliance() { this->appliance_ = nullptr;};
      inline bool getAppliance() const { DARABONBA_PTR_GET_DEFAULT(appliance_, false) };
      inline Clients& setAppliance(bool appliance) { DARABONBA_PTR_SET_VALUE(appliance_, appliance) };


      // archType Field Functions 
      bool hasArchType() const { return this->archType_ != nullptr;};
      void deleteArchType() { this->archType_ = nullptr;};
      inline string getArchType() const { DARABONBA_PTR_GET_DEFAULT(archType_, "") };
      inline Clients& setArchType(string archType) { DARABONBA_PTR_SET_VALUE(archType_, archType) };


      // backupStatus Field Functions 
      bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
      void deleteBackupStatus() { this->backupStatus_ = nullptr;};
      inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
      inline Clients& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline Clients& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientType Field Functions 
      bool hasClientType() const { return this->clientType_ != nullptr;};
      void deleteClientType() { this->clientType_ = nullptr;};
      inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
      inline Clients& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


      // clientVersion Field Functions 
      bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
      void deleteClientVersion() { this->clientVersion_ = nullptr;};
      inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
      inline Clients& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline Clients& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline Clients& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Clients& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Clients& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // lastHeartBeatTime Field Functions 
      bool hasLastHeartBeatTime() const { return this->lastHeartBeatTime_ != nullptr;};
      void deleteLastHeartBeatTime() { this->lastHeartBeatTime_ = nullptr;};
      inline int64_t getLastHeartBeatTime() const { DARABONBA_PTR_GET_DEFAULT(lastHeartBeatTime_, 0L) };
      inline Clients& setLastHeartBeatTime(int64_t lastHeartBeatTime) { DARABONBA_PTR_SET_VALUE(lastHeartBeatTime_, lastHeartBeatTime) };


      // maxClientVersion Field Functions 
      bool hasMaxClientVersion() const { return this->maxClientVersion_ != nullptr;};
      void deleteMaxClientVersion() { this->maxClientVersion_ = nullptr;};
      inline string getMaxClientVersion() const { DARABONBA_PTR_GET_DEFAULT(maxClientVersion_, "") };
      inline Clients& setMaxClientVersion(string maxClientVersion) { DARABONBA_PTR_SET_VALUE(maxClientVersion_, maxClientVersion) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Clients& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // privateIpV4 Field Functions 
      bool hasPrivateIpV4() const { return this->privateIpV4_ != nullptr;};
      void deletePrivateIpV4() { this->privateIpV4_ = nullptr;};
      inline string getPrivateIpV4() const { DARABONBA_PTR_GET_DEFAULT(privateIpV4_, "") };
      inline Clients& setPrivateIpV4(string privateIpV4) { DARABONBA_PTR_SET_VALUE(privateIpV4_, privateIpV4) };


      // settings Field Functions 
      bool hasSettings() const { return this->settings_ != nullptr;};
      void deleteSettings() { this->settings_ = nullptr;};
      inline const Clients::Settings & getSettings() const { DARABONBA_PTR_GET_CONST(settings_, Clients::Settings) };
      inline Clients::Settings getSettings() { DARABONBA_PTR_GET(settings_, Clients::Settings) };
      inline Clients& setSettings(const Clients::Settings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
      inline Clients& setSettings(Clients::Settings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Clients& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Clients::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Clients::Tags>) };
      inline vector<Clients::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Clients::Tags>) };
      inline Clients& setTags(const vector<Clients::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Clients& setTags(vector<Clients::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline Clients& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Clients& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // Indicates whether the client is installed on an all-in-one PC that integrates hardware and monitoring program. Valid values:
      // 
      // *   true: The client is installed on an all-in-one PC that integrates hardware and monitoring program.
      // *   false: The client is not installed on an all-in-one PC that integrates hardware and monitoring program.
      shared_ptr<bool> appliance_ {};
      // This parameter is valid only if the **ClientType** parameter is set to **ECS_CLIENT**. This parameter indicates the system architecture where the backup client resides. Valid values:
      // 
      // *   **amd64**
      // *   **386**
      shared_ptr<string> archType_ {};
      // The protection status of the backup client. Valid values:
      // 
      // *   **UNPROTECTED**: The backup client is not protected.
      // *   **PROTECTED**: The backup client is protected.
      shared_ptr<string> backupStatus_ {};
      // The ID of the backup client.
      shared_ptr<string> clientId_ {};
      // The type of the backup client. Valid value: **ECS_CLIENT**, which indicates a client for ECS file backup.
      shared_ptr<string> clientType_ {};
      // The version number of the backup client.
      shared_ptr<string> clientVersion_ {};
      // The time when the backup client was created. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> createdTime_ {};
      // The hostname of the backup client.
      shared_ptr<string> hostname_ {};
      // The instance ID.
      // 
      // *   If the client is used to back up ECS files, this parameter indicates the ID of an ECS instance.
      // *   If the client is used to back up on-premises files, this parameter indicates the hardware fingerprint that is generated based on the system information.
      shared_ptr<string> instanceId_ {};
      // This parameter is valid only if the **ClientType** parameter is set to **ECS_CLIENT**. This parameter indicates the name of the ECS instance.
      shared_ptr<string> instanceName_ {};
      // The last heartbeat time of the backup client. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> lastHeartBeatTime_ {};
      // The latest version number of the backup client.
      shared_ptr<string> maxClientVersion_ {};
      // This parameter is valid only if the **ClientType** parameter is set to **ECS_CLIENT**. This parameter indicates the operating system type of the backup client. Valid values:
      // 
      // *   **windows**
      // *   **linux**
      shared_ptr<string> osType_ {};
      // This parameter is valid only if the **ClientType** parameter is set to **ECS_CLIENT**. This parameter indicates the internal IP address of the ECS instance.
      shared_ptr<string> privateIpV4_ {};
      // The configuration information of the backup client.
      shared_ptr<Clients::Settings> settings_ {};
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
      shared_ptr<string> status_ {};
      // The tag information.
      shared_ptr<vector<Clients::Tags>> tags_ {};
      // The time when the backup client was updated. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> updatedTime_ {};
      // This parameter is valid only if the **ClientType** parameter is set to **ECS_CLIENT**. This parameter indicates the zone of the backup client.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->clients_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // clients Field Functions 
    bool hasClients() const { return this->clients_ != nullptr;};
    void deleteClients() { this->clients_ = nullptr;};
    inline const vector<DescribeBackupClientsResponseBody::Clients> & getClients() const { DARABONBA_PTR_GET_CONST(clients_, vector<DescribeBackupClientsResponseBody::Clients>) };
    inline vector<DescribeBackupClientsResponseBody::Clients> getClients() { DARABONBA_PTR_GET(clients_, vector<DescribeBackupClientsResponseBody::Clients>) };
    inline DescribeBackupClientsResponseBody& setClients(const vector<DescribeBackupClientsResponseBody::Clients> & clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };
    inline DescribeBackupClientsResponseBody& setClients(vector<DescribeBackupClientsResponseBody::Clients> && clients) { DARABONBA_PTR_SET_RVALUE(clients_, clients) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeBackupClientsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeBackupClientsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupClientsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupClientsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupClientsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeBackupClientsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried backup clients.
    shared_ptr<vector<DescribeBackupClientsResponseBody::Clients>> clients_ {};
    // The HTTP status code. The status code 200 indicates that the call is successful.
    shared_ptr<string> code_ {};
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number of the returned page. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page. Valid values: 1 to 99. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    shared_ptr<bool> success_ {};
    // The total number of returned HBR clients that meet the specified conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
