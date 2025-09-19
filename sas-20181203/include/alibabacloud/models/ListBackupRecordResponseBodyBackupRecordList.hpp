// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPRECORDRESPONSEBODYBACKUPRECORDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPRECORDRESPONSEBODYBACKUPRECORDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListBackupRecordResponseBodyBackupRecordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupRecordResponseBodyBackupRecordList& obj) { 
      DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_TO_JSON(BackupJobId, backupJobId_);
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupRecordResponseBodyBackupRecordList& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_FROM_JSON(BackupJobId, backupJobId_);
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListBackupRecordResponseBodyBackupRecordList() = default ;
    ListBackupRecordResponseBodyBackupRecordList(const ListBackupRecordResponseBodyBackupRecordList &) = default ;
    ListBackupRecordResponseBodyBackupRecordList(ListBackupRecordResponseBodyBackupRecordList &&) = default ;
    ListBackupRecordResponseBodyBackupRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupRecordResponseBodyBackupRecordList() = default ;
    ListBackupRecordResponseBodyBackupRecordList& operator=(const ListBackupRecordResponseBodyBackupRecordList &) = default ;
    ListBackupRecordResponseBodyBackupRecordList& operator=(ListBackupRecordResponseBodyBackupRecordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupEndTime_ != nullptr
        && this->backupJobId_ != nullptr && this->backupPlanId_ != nullptr && this->backupStartTime_ != nullptr && this->backupStatus_ != nullptr && this->clientId_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr
        && this->intranetIp_ != nullptr && this->ip_ != nullptr && this->regionId_ != nullptr && this->uuid_ != nullptr; };
    // backupEndTime Field Functions 
    bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
    void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
    inline int64_t backupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, 0L) };
    inline ListBackupRecordResponseBodyBackupRecordList& setBackupEndTime(int64_t backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


    // backupJobId Field Functions 
    bool hasBackupJobId() const { return this->backupJobId_ != nullptr;};
    void deleteBackupJobId() { this->backupJobId_ = nullptr;};
    inline string backupJobId() const { DARABONBA_PTR_GET_DEFAULT(backupJobId_, "") };
    inline ListBackupRecordResponseBodyBackupRecordList& setBackupJobId(string backupJobId) { DARABONBA_PTR_SET_VALUE(backupJobId_, backupJobId) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline ListBackupRecordResponseBodyBackupRecordList& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline int64_t backupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, 0L) };
    inline ListBackupRecordResponseBodyBackupRecordList& setBackupStartTime(int64_t backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string backupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline ListBackupRecordResponseBodyBackupRecordList& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline ListBackupRecordResponseBodyBackupRecordList& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListBackupRecordResponseBodyBackupRecordList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListBackupRecordResponseBodyBackupRecordList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListBackupRecordResponseBodyBackupRecordList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListBackupRecordResponseBodyBackupRecordList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListBackupRecordResponseBodyBackupRecordList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListBackupRecordResponseBodyBackupRecordList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ListBackupRecordResponseBodyBackupRecordList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListBackupRecordResponseBodyBackupRecordList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListBackupRecordResponseBodyBackupRecordList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The timestamp when the backup task ended. Unit: milliseconds.
    std::shared_ptr<int64_t> backupEndTime_ = nullptr;
    // The backup task ID.
    std::shared_ptr<string> backupJobId_ = nullptr;
    // The backup plan ID.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // The timestamp when the backup task started. Unit: milliseconds.
    std::shared_ptr<int64_t> backupStartTime_ = nullptr;
    // The backup task status. Valid value:
    // 
    // *   **BACKUP_COMPLETE**: The backup task is successful.
    // *   **BACKUP_FAILED**: The backup task failed.
    // *   **PARTIAL_COMPLETE**: The backup task is partially successful.
    std::shared_ptr<string> backupStatus_ = nullptr;
    // The ID of the anti-ransomware agent.
    std::shared_ptr<string> clientId_ = nullptr;
    // The error code of the backup task.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message of the backup task.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The instance ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The IP address of the server.
    std::shared_ptr<string> ip_ = nullptr;
    // The ID of the region in which the backup is stored.
    std::shared_ptr<string> regionId_ = nullptr;
    // The UUID of the server whose data is backed up based on the anti-ransomware policy.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
