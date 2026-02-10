// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPMACHINESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPMACHINESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupMachineStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupMachineStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupMachineStatus, backupMachineStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupMachineStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMachineStatus, backupMachineStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupMachineStatusResponseBody() = default ;
    DescribeBackupMachineStatusResponseBody(const DescribeBackupMachineStatusResponseBody &) = default ;
    DescribeBackupMachineStatusResponseBody(DescribeBackupMachineStatusResponseBody &&) = default ;
    DescribeBackupMachineStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupMachineStatusResponseBody() = default ;
    DescribeBackupMachineStatusResponseBody& operator=(const DescribeBackupMachineStatusResponseBody &) = default ;
    DescribeBackupMachineStatusResponseBody& operator=(DescribeBackupMachineStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackupMachineStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupMachineStatus& obj) { 
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ClientStatus, clientStatus_);
        DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorList, errorList_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SavedBackupCount, savedBackupCount_);
        DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
      };
      friend void from_json(const Darabonba::Json& j, BackupMachineStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ClientStatus, clientStatus_);
        DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorList, errorList_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SavedBackupCount, savedBackupCount_);
        DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
      };
      BackupMachineStatus() = default ;
      BackupMachineStatus(const BackupMachineStatus &) = default ;
      BackupMachineStatus(BackupMachineStatus &&) = default ;
      BackupMachineStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupMachineStatus() = default ;
      BackupMachineStatus& operator=(const BackupMachineStatus &) = default ;
      BackupMachineStatus& operator=(BackupMachineStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ErrorList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorList& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorStatus, errorStatus_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorList& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorStatus, errorStatus_);
        };
        ErrorList() = default ;
        ErrorList(const ErrorList &) = default ;
        ErrorList(ErrorList &&) = default ;
        ErrorList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorList() = default ;
        ErrorList& operator=(const ErrorList &) = default ;
        ErrorList& operator=(ErrorList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorStatus_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline ErrorList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorStatus Field Functions 
        bool hasErrorStatus() const { return this->errorStatus_ != nullptr;};
        void deleteErrorStatus() { this->errorStatus_ = nullptr;};
        inline string getErrorStatus() const { DARABONBA_PTR_GET_DEFAULT(errorStatus_, "") };
        inline ErrorList& setErrorStatus(string errorStatus) { DARABONBA_PTR_SET_VALUE(errorStatus_, errorStatus) };


      protected:
        // The error code.
        shared_ptr<string> errorCode_ {};
        // The error message.
        shared_ptr<string> errorStatus_ {};
      };

      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientStatus_ == nullptr && this->clientVersion_ == nullptr && this->errorCode_ == nullptr && this->errorList_ == nullptr && this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->savedBackupCount_ == nullptr && this->serviceStatus_ == nullptr && this->status_ == nullptr && this->uuid_ == nullptr
        && this->vaultId_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline BackupMachineStatus& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientStatus Field Functions 
      bool hasClientStatus() const { return this->clientStatus_ != nullptr;};
      void deleteClientStatus() { this->clientStatus_ = nullptr;};
      inline string getClientStatus() const { DARABONBA_PTR_GET_DEFAULT(clientStatus_, "") };
      inline BackupMachineStatus& setClientStatus(string clientStatus) { DARABONBA_PTR_SET_VALUE(clientStatus_, clientStatus) };


      // clientVersion Field Functions 
      bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
      void deleteClientVersion() { this->clientVersion_ = nullptr;};
      inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
      inline BackupMachineStatus& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline BackupMachineStatus& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorList Field Functions 
      bool hasErrorList() const { return this->errorList_ != nullptr;};
      void deleteErrorList() { this->errorList_ = nullptr;};
      inline const vector<BackupMachineStatus::ErrorList> & getErrorList() const { DARABONBA_PTR_GET_CONST(errorList_, vector<BackupMachineStatus::ErrorList>) };
      inline vector<BackupMachineStatus::ErrorList> getErrorList() { DARABONBA_PTR_GET(errorList_, vector<BackupMachineStatus::ErrorList>) };
      inline BackupMachineStatus& setErrorList(const vector<BackupMachineStatus::ErrorList> & errorList) { DARABONBA_PTR_SET_VALUE(errorList_, errorList) };
      inline BackupMachineStatus& setErrorList(vector<BackupMachineStatus::ErrorList> && errorList) { DARABONBA_PTR_SET_RVALUE(errorList_, errorList) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline BackupMachineStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline BackupMachineStatus& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // savedBackupCount Field Functions 
      bool hasSavedBackupCount() const { return this->savedBackupCount_ != nullptr;};
      void deleteSavedBackupCount() { this->savedBackupCount_ = nullptr;};
      inline int32_t getSavedBackupCount() const { DARABONBA_PTR_GET_DEFAULT(savedBackupCount_, 0) };
      inline BackupMachineStatus& setSavedBackupCount(int32_t savedBackupCount) { DARABONBA_PTR_SET_VALUE(savedBackupCount_, savedBackupCount) };


      // serviceStatus Field Functions 
      bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
      void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
      inline string getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
      inline BackupMachineStatus& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline BackupMachineStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline BackupMachineStatus& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vaultId Field Functions 
      bool hasVaultId() const { return this->vaultId_ != nullptr;};
      void deleteVaultId() { this->vaultId_ = nullptr;};
      inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
      inline BackupMachineStatus& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


    protected:
      // The ID of the anti-ransomware agent.
      shared_ptr<string> clientId_ {};
      // The status of the anti-ransomware agent. Valid values:
      // 
      // *   **ONLINE**: normal
      // *   **CLIENT_CONNECTION_ERROR**: abnormal
      // *   **UNINSTALLING**: being uninstalled
      // *   **UNINSTALL_FAILED**: failed to be uninstalled
      // *   **UPGRADING**: being upgraded
      // *   **UPGRADE_FAILED**: failed to be upgraded
      shared_ptr<string> clientStatus_ {};
      // The version of the anti-ransomware agent.
      shared_ptr<string> clientVersion_ {};
      // The error code returned.
      shared_ptr<string> errorCode_ {};
      // An array that consists of the error information reported by the backup server.
      shared_ptr<vector<BackupMachineStatus::ErrorList>> errorList_ {};
      // The ID of the server.
      shared_ptr<string> instanceId_ {};
      // The ID of the region in which the server resides.
      shared_ptr<string> regionId_ {};
      // The number of backup versions.
      shared_ptr<int32_t> savedBackupCount_ {};
      // The status of the anti-ransomware service. Valid values:
      // *   **SERVICE_EXCEPTION**: Service exception
      // *   **RESTORING**: Restoring
      // *   **BACKING_UP**: Backup in process
      shared_ptr<string> serviceStatus_ {};
      // The status of the anti-ransomware agent. Valid values:
      // 
      // *   **NOT_INSTALLED**: not installed
      // *   **CLIENT_CONNECTION_ERROR**: abnormal
      // *   **ACTIVATED**: normal
      shared_ptr<string> status_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
      // The ID of the backup vault in which the backup data is stored.
      shared_ptr<string> vaultId_ {};
    };

    virtual bool empty() const override { return this->backupMachineStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // backupMachineStatus Field Functions 
    bool hasBackupMachineStatus() const { return this->backupMachineStatus_ != nullptr;};
    void deleteBackupMachineStatus() { this->backupMachineStatus_ = nullptr;};
    inline const DescribeBackupMachineStatusResponseBody::BackupMachineStatus & getBackupMachineStatus() const { DARABONBA_PTR_GET_CONST(backupMachineStatus_, DescribeBackupMachineStatusResponseBody::BackupMachineStatus) };
    inline DescribeBackupMachineStatusResponseBody::BackupMachineStatus getBackupMachineStatus() { DARABONBA_PTR_GET(backupMachineStatus_, DescribeBackupMachineStatusResponseBody::BackupMachineStatus) };
    inline DescribeBackupMachineStatusResponseBody& setBackupMachineStatus(const DescribeBackupMachineStatusResponseBody::BackupMachineStatus & backupMachineStatus) { DARABONBA_PTR_SET_VALUE(backupMachineStatus_, backupMachineStatus) };
    inline DescribeBackupMachineStatusResponseBody& setBackupMachineStatus(DescribeBackupMachineStatusResponseBody::BackupMachineStatus && backupMachineStatus) { DARABONBA_PTR_SET_RVALUE(backupMachineStatus_, backupMachineStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupMachineStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The backup status of the server.
    shared_ptr<DescribeBackupMachineStatusResponseBody::BackupMachineStatus> backupMachineStatus_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
