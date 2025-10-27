// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPMACHINESTATUSRESPONSEBODYBACKUPMACHINESTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPMACHINESTATUSRESPONSEBODYBACKUPMACHINESTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupMachineStatusResponseBodyBackupMachineStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupMachineStatusResponseBodyBackupMachineStatus& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeBackupMachineStatusResponseBodyBackupMachineStatus& obj) { 
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
    DescribeBackupMachineStatusResponseBodyBackupMachineStatus() = default ;
    DescribeBackupMachineStatusResponseBodyBackupMachineStatus(const DescribeBackupMachineStatusResponseBodyBackupMachineStatus &) = default ;
    DescribeBackupMachineStatusResponseBodyBackupMachineStatus(DescribeBackupMachineStatusResponseBodyBackupMachineStatus &&) = default ;
    DescribeBackupMachineStatusResponseBodyBackupMachineStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupMachineStatusResponseBodyBackupMachineStatus() = default ;
    DescribeBackupMachineStatusResponseBodyBackupMachineStatus& operator=(const DescribeBackupMachineStatusResponseBodyBackupMachineStatus &) = default ;
    DescribeBackupMachineStatusResponseBodyBackupMachineStatus& operator=(DescribeBackupMachineStatusResponseBodyBackupMachineStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && return this->clientStatus_ == nullptr && return this->clientVersion_ == nullptr && return this->errorCode_ == nullptr && return this->errorList_ == nullptr && return this->instanceId_ == nullptr
        && return this->regionId_ == nullptr && return this->savedBackupCount_ == nullptr && return this->serviceStatus_ == nullptr && return this->status_ == nullptr && return this->uuid_ == nullptr
        && return this->vaultId_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatus& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientStatus Field Functions 
    bool hasClientStatus() const { return this->clientStatus_ != nullptr;};
    void deleteClientStatus() { this->clientStatus_ = nullptr;};
    inline string clientStatus() const { DARABONBA_PTR_GET_DEFAULT(clientStatus_, "") };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatus& setClientStatus(string clientStatus) { DARABONBA_PTR_SET_VALUE(clientStatus_, clientStatus) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatus& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatus& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorList Field Functions 
    bool hasErrorList() const { return this->errorList_ != nullptr;};
    void deleteErrorList() { this->errorList_ = nullptr;};
    inline const vector<Models::DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList> & errorList() const { DARABONBA_PTR_GET_CONST(errorList_, vector<Models::DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList>) };
    inline vector<Models::DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList> errorList() { DARABONBA_PTR_GET(errorList_, vector<Models::DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList>) };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatus& setErrorList(const vector<Models::DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList> & errorList) { DARABONBA_PTR_SET_VALUE(errorList_, errorList) };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatus& setErrorList(vector<Models::DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList> && errorList) { DARABONBA_PTR_SET_RVALUE(errorList_, errorList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatus& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // savedBackupCount Field Functions 
    bool hasSavedBackupCount() const { return this->savedBackupCount_ != nullptr;};
    void deleteSavedBackupCount() { this->savedBackupCount_ = nullptr;};
    inline int32_t savedBackupCount() const { DARABONBA_PTR_GET_DEFAULT(savedBackupCount_, 0) };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatus& setSavedBackupCount(int32_t savedBackupCount) { DARABONBA_PTR_SET_VALUE(savedBackupCount_, savedBackupCount) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatus& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatus& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatus& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The ID of the anti-ransomware agent.
    std::shared_ptr<string> clientId_ = nullptr;
    // The status of the anti-ransomware agent. Valid values:
    // 
    // *   **ONLINE**: normal
    // *   **CLIENT_CONNECTION_ERROR**: abnormal
    // *   **UNINSTALLING**: being uninstalled
    // *   **UNINSTALL_FAILED**: failed to be uninstalled
    // *   **UPGRADING**: being upgraded
    // *   **UPGRADE_FAILED**: failed to be upgraded
    std::shared_ptr<string> clientStatus_ = nullptr;
    // The version of the anti-ransomware agent.
    std::shared_ptr<string> clientVersion_ = nullptr;
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // An array that consists of the error information reported by the backup server.
    std::shared_ptr<vector<Models::DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList>> errorList_ = nullptr;
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the region in which the server resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of backup versions.
    std::shared_ptr<int32_t> savedBackupCount_ = nullptr;
    // The status of the anti-ransomware service. Valid values:
    // *   **SERVICE_EXCEPTION**: Service exception
    // *   **RESTORING**: Restoring
    // *   **BACKING_UP**: Backup in process
    std::shared_ptr<string> serviceStatus_ = nullptr;
    // The status of the anti-ransomware agent. Valid values:
    // 
    // *   **NOT_INSTALLED**: not installed
    // *   **CLIENT_CONNECTION_ERROR**: abnormal
    // *   **ACTIVATED**: normal
    std::shared_ptr<string> status_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
    // The ID of the backup vault in which the backup data is stored.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
