// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTORCLIENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTORCLIENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetConnectorClientResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectorClientResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorClient, connectorClient_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectorClientResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorClient, connectorClient_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConnectorClientResponseBody() = default ;
    GetConnectorClientResponseBody(const GetConnectorClientResponseBody &) = default ;
    GetConnectorClientResponseBody(GetConnectorClientResponseBody &&) = default ;
    GetConnectorClientResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectorClientResponseBody() = default ;
    GetConnectorClientResponseBody& operator=(const GetConnectorClientResponseBody &) = default ;
    GetConnectorClientResponseBody& operator=(GetConnectorClientResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConnectorClient : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConnectorClient& obj) { 
        DARABONBA_PTR_TO_JSON(CPUSize, CPUSize_);
        DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
        DARABONBA_PTR_TO_JSON(ConnectorVersion, connectorVersion_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DevTag, devTag_);
        DARABONBA_PTR_TO_JSON(Hosname, hosname_);
        DARABONBA_PTR_TO_JSON(KernelVersion, kernelVersion_);
        DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
        DARABONBA_PTR_TO_JSON(OperationStatus, operationStatus_);
        DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
        DARABONBA_PTR_TO_JSON(ProcessRunTime, processRunTime_);
        DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
        DARABONBA_PTR_TO_JSON(ReleaseNotes, releaseNotes_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpgradeStatus, upgradeStatus_);
        DARABONBA_PTR_TO_JSON(VersionToRollback, versionToRollback_);
      };
      friend void from_json(const Darabonba::Json& j, ConnectorClient& obj) { 
        DARABONBA_PTR_FROM_JSON(CPUSize, CPUSize_);
        DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
        DARABONBA_PTR_FROM_JSON(ConnectorVersion, connectorVersion_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
        DARABONBA_PTR_FROM_JSON(Hosname, hosname_);
        DARABONBA_PTR_FROM_JSON(KernelVersion, kernelVersion_);
        DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
        DARABONBA_PTR_FROM_JSON(OperationStatus, operationStatus_);
        DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
        DARABONBA_PTR_FROM_JSON(ProcessRunTime, processRunTime_);
        DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
        DARABONBA_PTR_FROM_JSON(ReleaseNotes, releaseNotes_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpgradeStatus, upgradeStatus_);
        DARABONBA_PTR_FROM_JSON(VersionToRollback, versionToRollback_);
      };
      ConnectorClient() = default ;
      ConnectorClient(const ConnectorClient &) = default ;
      ConnectorClient(ConnectorClient &&) = default ;
      ConnectorClient(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConnectorClient() = default ;
      ConnectorClient& operator=(const ConnectorClient &) = default ;
      ConnectorClient& operator=(ConnectorClient &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->CPUSize_ == nullptr
        && this->connectionStatus_ == nullptr && this->connectorId_ == nullptr && this->connectorVersion_ == nullptr && this->createTime_ == nullptr && this->devTag_ == nullptr
        && this->hosname_ == nullptr && this->kernelVersion_ == nullptr && this->memorySize_ == nullptr && this->operationStatus_ == nullptr && this->privateIp_ == nullptr
        && this->processRunTime_ == nullptr && this->publicIp_ == nullptr && this->releaseNotes_ == nullptr && this->status_ == nullptr && this->upgradeStatus_ == nullptr
        && this->versionToRollback_ == nullptr; };
      // CPUSize Field Functions 
      bool hasCPUSize() const { return this->CPUSize_ != nullptr;};
      void deleteCPUSize() { this->CPUSize_ = nullptr;};
      inline string getCPUSize() const { DARABONBA_PTR_GET_DEFAULT(CPUSize_, "") };
      inline ConnectorClient& setCPUSize(string CPUSize) { DARABONBA_PTR_SET_VALUE(CPUSize_, CPUSize) };


      // connectionStatus Field Functions 
      bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
      void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
      inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
      inline ConnectorClient& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


      // connectorId Field Functions 
      bool hasConnectorId() const { return this->connectorId_ != nullptr;};
      void deleteConnectorId() { this->connectorId_ = nullptr;};
      inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
      inline ConnectorClient& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


      // connectorVersion Field Functions 
      bool hasConnectorVersion() const { return this->connectorVersion_ != nullptr;};
      void deleteConnectorVersion() { this->connectorVersion_ = nullptr;};
      inline string getConnectorVersion() const { DARABONBA_PTR_GET_DEFAULT(connectorVersion_, "") };
      inline ConnectorClient& setConnectorVersion(string connectorVersion) { DARABONBA_PTR_SET_VALUE(connectorVersion_, connectorVersion) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ConnectorClient& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // devTag Field Functions 
      bool hasDevTag() const { return this->devTag_ != nullptr;};
      void deleteDevTag() { this->devTag_ = nullptr;};
      inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
      inline ConnectorClient& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


      // hosname Field Functions 
      bool hasHosname() const { return this->hosname_ != nullptr;};
      void deleteHosname() { this->hosname_ = nullptr;};
      inline string getHosname() const { DARABONBA_PTR_GET_DEFAULT(hosname_, "") };
      inline ConnectorClient& setHosname(string hosname) { DARABONBA_PTR_SET_VALUE(hosname_, hosname) };


      // kernelVersion Field Functions 
      bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
      void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
      inline string getKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
      inline ConnectorClient& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


      // memorySize Field Functions 
      bool hasMemorySize() const { return this->memorySize_ != nullptr;};
      void deleteMemorySize() { this->memorySize_ = nullptr;};
      inline string getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, "") };
      inline ConnectorClient& setMemorySize(string memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


      // operationStatus Field Functions 
      bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
      void deleteOperationStatus() { this->operationStatus_ = nullptr;};
      inline string getOperationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
      inline ConnectorClient& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


      // privateIp Field Functions 
      bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
      void deletePrivateIp() { this->privateIp_ = nullptr;};
      inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
      inline ConnectorClient& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


      // processRunTime Field Functions 
      bool hasProcessRunTime() const { return this->processRunTime_ != nullptr;};
      void deleteProcessRunTime() { this->processRunTime_ = nullptr;};
      inline int32_t getProcessRunTime() const { DARABONBA_PTR_GET_DEFAULT(processRunTime_, 0) };
      inline ConnectorClient& setProcessRunTime(int32_t processRunTime) { DARABONBA_PTR_SET_VALUE(processRunTime_, processRunTime) };


      // publicIp Field Functions 
      bool hasPublicIp() const { return this->publicIp_ != nullptr;};
      void deletePublicIp() { this->publicIp_ = nullptr;};
      inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
      inline ConnectorClient& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


      // releaseNotes Field Functions 
      bool hasReleaseNotes() const { return this->releaseNotes_ != nullptr;};
      void deleteReleaseNotes() { this->releaseNotes_ = nullptr;};
      inline const vector<string> & getReleaseNotes() const { DARABONBA_PTR_GET_CONST(releaseNotes_, vector<string>) };
      inline vector<string> getReleaseNotes() { DARABONBA_PTR_GET(releaseNotes_, vector<string>) };
      inline ConnectorClient& setReleaseNotes(const vector<string> & releaseNotes) { DARABONBA_PTR_SET_VALUE(releaseNotes_, releaseNotes) };
      inline ConnectorClient& setReleaseNotes(vector<string> && releaseNotes) { DARABONBA_PTR_SET_RVALUE(releaseNotes_, releaseNotes) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ConnectorClient& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // upgradeStatus Field Functions 
      bool hasUpgradeStatus() const { return this->upgradeStatus_ != nullptr;};
      void deleteUpgradeStatus() { this->upgradeStatus_ = nullptr;};
      inline string getUpgradeStatus() const { DARABONBA_PTR_GET_DEFAULT(upgradeStatus_, "") };
      inline ConnectorClient& setUpgradeStatus(string upgradeStatus) { DARABONBA_PTR_SET_VALUE(upgradeStatus_, upgradeStatus) };


      // versionToRollback Field Functions 
      bool hasVersionToRollback() const { return this->versionToRollback_ != nullptr;};
      void deleteVersionToRollback() { this->versionToRollback_ = nullptr;};
      inline string getVersionToRollback() const { DARABONBA_PTR_GET_DEFAULT(versionToRollback_, "") };
      inline ConnectorClient& setVersionToRollback(string versionToRollback) { DARABONBA_PTR_SET_VALUE(versionToRollback_, versionToRollback) };


    protected:
      // The number of CPUs of the ConnectorClient.
      shared_ptr<string> CPUSize_ {};
      // The connection status of the ConnectorClient. Valid values:
      // - **Connected**: Connected.
      // - **Disconnected**: Disconnected.
      shared_ptr<string> connectionStatus_ {};
      // ConnectorID。
      shared_ptr<string> connectorId_ {};
      // The connector client version.
      shared_ptr<string> connectorVersion_ {};
      // The creation time of the ConnectorClient.
      shared_ptr<string> createTime_ {};
      // The unique device identifier of the ConnectorClient.
      shared_ptr<string> devTag_ {};
      // The hostname.
      shared_ptr<string> hosname_ {};
      // The kernel version of the ConnectorClient.
      shared_ptr<string> kernelVersion_ {};
      // The memory size of the ConnectorClient. Unit: MB.
      shared_ptr<string> memorySize_ {};
      // The O&M status. Valid values:
      // - **Running**: O&M in progress.
      // - **Failed**: O&M failed.
      // - (Empty string): Not in O&M status.
      shared_ptr<string> operationStatus_ {};
      // The private IP address of the ConnectorClient.
      shared_ptr<string> privateIp_ {};
      // The program runtime. Unit: seconds.
      shared_ptr<int32_t> processRunTime_ {};
      // The public IP address of the ConnectorClient.
      shared_ptr<string> publicIp_ {};
      // The release notes.
      shared_ptr<vector<string>> releaseNotes_ {};
      // The enabled status of the ConnectorClient, which can be used to force the client offline. Valid values:
      // - **Enabled**: Enabled.
      // - **Disabled**: Disabled.
      shared_ptr<string> status_ {};
      // The new version status of the connector. Valid values:
      // - **Latest**: The current version is the latest.
      // - **NewVersionAvailable**: A newer version is available for upgrade.
      shared_ptr<string> upgradeStatus_ {};
      // The version to roll back to.
      shared_ptr<string> versionToRollback_ {};
    };

    virtual bool empty() const override { return this->connectorClient_ == nullptr
        && this->requestId_ == nullptr; };
    // connectorClient Field Functions 
    bool hasConnectorClient() const { return this->connectorClient_ != nullptr;};
    void deleteConnectorClient() { this->connectorClient_ = nullptr;};
    inline const GetConnectorClientResponseBody::ConnectorClient & getConnectorClient() const { DARABONBA_PTR_GET_CONST(connectorClient_, GetConnectorClientResponseBody::ConnectorClient) };
    inline GetConnectorClientResponseBody::ConnectorClient getConnectorClient() { DARABONBA_PTR_GET(connectorClient_, GetConnectorClientResponseBody::ConnectorClient) };
    inline GetConnectorClientResponseBody& setConnectorClient(const GetConnectorClientResponseBody::ConnectorClient & connectorClient) { DARABONBA_PTR_SET_VALUE(connectorClient_, connectorClient) };
    inline GetConnectorClientResponseBody& setConnectorClient(GetConnectorClientResponseBody::ConnectorClient && connectorClient) { DARABONBA_PTR_SET_RVALUE(connectorClient_, connectorClient) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConnectorClientResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // ConnectorClient。
    shared_ptr<GetConnectorClientResponseBody::ConnectorClient> connectorClient_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
