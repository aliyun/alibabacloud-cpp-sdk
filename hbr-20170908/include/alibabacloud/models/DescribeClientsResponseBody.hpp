// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTSRESPONSEBODY_HPP_
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
  class DescribeClientsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Clients, clients_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Clients, clients_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeClientsResponseBody() = default ;
    DescribeClientsResponseBody(const DescribeClientsResponseBody &) = default ;
    DescribeClientsResponseBody(DescribeClientsResponseBody &&) = default ;
    DescribeClientsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientsResponseBody() = default ;
    DescribeClientsResponseBody& operator=(const DescribeClientsResponseBody &) = default ;
    DescribeClientsResponseBody& operator=(DescribeClientsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Clients : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Clients& obj) { 
        DARABONBA_PTR_TO_JSON(Client, client_);
      };
      friend void from_json(const Darabonba::Json& j, Clients& obj) { 
        DARABONBA_PTR_FROM_JSON(Client, client_);
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
      class Client : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Client& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Client& obj) { 
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
        Client() = default ;
        Client(const Client &) = default ;
        Client(Client &&) = default ;
        Client(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Client() = default ;
        Client& operator=(const Client &) = default ;
        Client& operator=(Client &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alertSetting_ == nullptr
        && this->clientId_ == nullptr && this->clientName_ == nullptr && this->clientType_ == nullptr && this->clientVersion_ == nullptr && this->clusterId_ == nullptr
        && this->createdTime_ == nullptr && this->heartBeatTime_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->maxVersion_ == nullptr
        && this->networkType_ == nullptr && this->status_ == nullptr && this->statusMessage_ == nullptr && this->updatedTime_ == nullptr && this->useHttps_ == nullptr
        && this->vaultId_ == nullptr; };
        // alertSetting Field Functions 
        bool hasAlertSetting() const { return this->alertSetting_ != nullptr;};
        void deleteAlertSetting() { this->alertSetting_ = nullptr;};
        inline string getAlertSetting() const { DARABONBA_PTR_GET_DEFAULT(alertSetting_, "") };
        inline Client& setAlertSetting(string alertSetting) { DARABONBA_PTR_SET_VALUE(alertSetting_, alertSetting) };


        // clientId Field Functions 
        bool hasClientId() const { return this->clientId_ != nullptr;};
        void deleteClientId() { this->clientId_ = nullptr;};
        inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
        inline Client& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


        // clientName Field Functions 
        bool hasClientName() const { return this->clientName_ != nullptr;};
        void deleteClientName() { this->clientName_ = nullptr;};
        inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
        inline Client& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


        // clientType Field Functions 
        bool hasClientType() const { return this->clientType_ != nullptr;};
        void deleteClientType() { this->clientType_ = nullptr;};
        inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
        inline Client& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


        // clientVersion Field Functions 
        bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
        void deleteClientVersion() { this->clientVersion_ = nullptr;};
        inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
        inline Client& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Client& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline Client& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // heartBeatTime Field Functions 
        bool hasHeartBeatTime() const { return this->heartBeatTime_ != nullptr;};
        void deleteHeartBeatTime() { this->heartBeatTime_ = nullptr;};
        inline int64_t getHeartBeatTime() const { DARABONBA_PTR_GET_DEFAULT(heartBeatTime_, 0L) };
        inline Client& setHeartBeatTime(int64_t heartBeatTime) { DARABONBA_PTR_SET_VALUE(heartBeatTime_, heartBeatTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Client& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Client& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // maxVersion Field Functions 
        bool hasMaxVersion() const { return this->maxVersion_ != nullptr;};
        void deleteMaxVersion() { this->maxVersion_ = nullptr;};
        inline string getMaxVersion() const { DARABONBA_PTR_GET_DEFAULT(maxVersion_, "") };
        inline Client& setMaxVersion(string maxVersion) { DARABONBA_PTR_SET_VALUE(maxVersion_, maxVersion) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline Client& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Client& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusMessage Field Functions 
        bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
        void deleteStatusMessage() { this->statusMessage_ = nullptr;};
        inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
        inline Client& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
        inline Client& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


        // useHttps Field Functions 
        bool hasUseHttps() const { return this->useHttps_ != nullptr;};
        void deleteUseHttps() { this->useHttps_ = nullptr;};
        inline bool getUseHttps() const { DARABONBA_PTR_GET_DEFAULT(useHttps_, false) };
        inline Client& setUseHttps(bool useHttps) { DARABONBA_PTR_SET_VALUE(useHttps_, useHttps) };


        // vaultId Field Functions 
        bool hasVaultId() const { return this->vaultId_ != nullptr;};
        void deleteVaultId() { this->vaultId_ = nullptr;};
        inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
        inline Client& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


      protected:
        // The alert settings. Valid value: INHERITED, which indicates that the Cloud Backup client sends alert notifications by using the same method configured for the backup vault.
        shared_ptr<string> alertSetting_ {};
        // The ID of the Cloud Backup client.
        shared_ptr<string> clientId_ {};
        // The client name.
        shared_ptr<string> clientName_ {};
        // The type of the Cloud Backup client. Valid value: **ECS_AGENT**, which indicates an SAP HANA backup client.
        shared_ptr<string> clientType_ {};
        // The version number of the Cloud Backup client.
        shared_ptr<string> clientVersion_ {};
        // The ID of the SAP HANA instance.
        shared_ptr<string> clusterId_ {};
        // The time when the Cloud Backup client was created.
        shared_ptr<int64_t> createdTime_ {};
        // The latest heartbeat time of the Cloud Backup client. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> heartBeatTime_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The name of the ECS instance.
        shared_ptr<string> instanceName_ {};
        // The maximum version number of the Cloud Backup client.
        shared_ptr<string> maxVersion_ {};
        // The network type. Valid values:
        // 
        // *   **CLASSIC**: the classic network
        // *   **VPC**: the virtual private cloud (VPC)
        shared_ptr<string> networkType_ {};
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
        shared_ptr<string> status_ {};
        // The status information.
        shared_ptr<string> statusMessage_ {};
        // The time when the Cloud Backup client was updated. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> updatedTime_ {};
        // Indicates whether data is transmitted over HTTPS. Valid values:
        // 
        // *   true: Data is transmitted over HTTPS.
        // *   false: Data is transmitted over HTTP.
        shared_ptr<bool> useHttps_ {};
        // The ID of the backup vault.
        shared_ptr<string> vaultId_ {};
      };

      virtual bool empty() const override { return this->client_ == nullptr; };
      // client Field Functions 
      bool hasClient() const { return this->client_ != nullptr;};
      void deleteClient() { this->client_ = nullptr;};
      inline const vector<Clients::Client> & getClient() const { DARABONBA_PTR_GET_CONST(client_, vector<Clients::Client>) };
      inline vector<Clients::Client> getClient() { DARABONBA_PTR_GET(client_, vector<Clients::Client>) };
      inline Clients& setClient(const vector<Clients::Client> & client) { DARABONBA_PTR_SET_VALUE(client_, client) };
      inline Clients& setClient(vector<Clients::Client> && client) { DARABONBA_PTR_SET_RVALUE(client_, client) };


    protected:
      shared_ptr<vector<Clients::Client>> client_ {};
    };

    virtual bool empty() const override { return this->clients_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // clients Field Functions 
    bool hasClients() const { return this->clients_ != nullptr;};
    void deleteClients() { this->clients_ = nullptr;};
    inline const DescribeClientsResponseBody::Clients & getClients() const { DARABONBA_PTR_GET_CONST(clients_, DescribeClientsResponseBody::Clients) };
    inline DescribeClientsResponseBody::Clients getClients() { DARABONBA_PTR_GET(clients_, DescribeClientsResponseBody::Clients) };
    inline DescribeClientsResponseBody& setClients(const DescribeClientsResponseBody::Clients & clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };
    inline DescribeClientsResponseBody& setClients(DescribeClientsResponseBody::Clients && clients) { DARABONBA_PTR_SET_RVALUE(clients_, clients) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeClientsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeClientsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeClientsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeClientsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeClientsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeClientsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The Cloud Backup clients.
    shared_ptr<DescribeClientsResponseBody::Clients> clients_ {};
    // The response code. The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The returned message. If the request was successful, "successful" is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
