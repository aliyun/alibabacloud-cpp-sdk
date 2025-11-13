// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNIBACKUPRECORDRESPONSEBODYUNIBACKUPRECORDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTUNIBACKUPRECORDRESPONSEBODYUNIBACKUPRECORDLIST_HPP_
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
  class ListUniBackupRecordResponseBodyUniBackupRecordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUniBackupRecordResponseBodyUniBackupRecordList& obj) { 
      DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(ErrorMessageList, errorMessageList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceUuid, instanceUuid_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Subtype, subtype_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListUniBackupRecordResponseBodyUniBackupRecordList& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(ErrorMessageList, errorMessageList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceUuid, instanceUuid_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Subtype, subtype_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListUniBackupRecordResponseBodyUniBackupRecordList() = default ;
    ListUniBackupRecordResponseBodyUniBackupRecordList(const ListUniBackupRecordResponseBodyUniBackupRecordList &) = default ;
    ListUniBackupRecordResponseBodyUniBackupRecordList(ListUniBackupRecordResponseBodyUniBackupRecordList &&) = default ;
    ListUniBackupRecordResponseBodyUniBackupRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUniBackupRecordResponseBodyUniBackupRecordList() = default ;
    ListUniBackupRecordResponseBodyUniBackupRecordList& operator=(const ListUniBackupRecordResponseBodyUniBackupRecordList &) = default ;
    ListUniBackupRecordResponseBodyUniBackupRecordList& operator=(ListUniBackupRecordResponseBodyUniBackupRecordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupEndTime_ == nullptr
        && return this->backupStartTime_ == nullptr && return this->databaseName_ == nullptr && return this->databaseType_ == nullptr && return this->errorMessageList_ == nullptr && return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr && return this->instanceUuid_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->ip_ == nullptr
        && return this->regionId_ == nullptr && return this->state_ == nullptr && return this->subtype_ == nullptr && return this->uuid_ == nullptr; };
    // backupEndTime Field Functions 
    bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
    void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
    inline int64_t backupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, 0L) };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setBackupEndTime(int64_t backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline int64_t backupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, 0L) };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setBackupStartTime(int64_t backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string databaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // errorMessageList Field Functions 
    bool hasErrorMessageList() const { return this->errorMessageList_ != nullptr;};
    void deleteErrorMessageList() { this->errorMessageList_ = nullptr;};
    inline const vector<string> & errorMessageList() const { DARABONBA_PTR_GET_CONST(errorMessageList_, vector<string>) };
    inline vector<string> errorMessageList() { DARABONBA_PTR_GET(errorMessageList_, vector<string>) };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setErrorMessageList(const vector<string> & errorMessageList) { DARABONBA_PTR_SET_VALUE(errorMessageList_, errorMessageList) };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setErrorMessageList(vector<string> && errorMessageList) { DARABONBA_PTR_SET_RVALUE(errorMessageList_, errorMessageList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceUuid Field Functions 
    bool hasInstanceUuid() const { return this->instanceUuid_ != nullptr;};
    void deleteInstanceUuid() { this->instanceUuid_ = nullptr;};
    inline string instanceUuid() const { DARABONBA_PTR_GET_DEFAULT(instanceUuid_, "") };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setInstanceUuid(string instanceUuid) { DARABONBA_PTR_SET_VALUE(instanceUuid_, instanceUuid) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // subtype Field Functions 
    bool hasSubtype() const { return this->subtype_ != nullptr;};
    void deleteSubtype() { this->subtype_ = nullptr;};
    inline string subtype() const { DARABONBA_PTR_GET_DEFAULT(subtype_, "") };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setSubtype(string subtype) { DARABONBA_PTR_SET_VALUE(subtype_, subtype) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListUniBackupRecordResponseBodyUniBackupRecordList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The end time of the backup, in timestamp format (in milliseconds).
    std::shared_ptr<int64_t> backupEndTime_ = nullptr;
    // The start time of the backup, in timestamp format (in milliseconds).
    std::shared_ptr<int64_t> backupStartTime_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Database type. Values:
    // 
    // - **MYSQL**
    // - **ORACLE**
    // - **MSSQL**
    std::shared_ptr<string> databaseType_ = nullptr;
    // List of backup error messages.
    std::shared_ptr<vector<string>> errorMessageList_ = nullptr;
    // The instance ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Server name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The unique ID of the database instance on the server.
    std::shared_ptr<string> instanceUuid_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The IP of the server.
    // 
    // > If a public IP exists, this value is the public IP; if no public IP but a private IP exists, then it is the private IP.
    std::shared_ptr<string> ip_ = nullptr;
    // The ID of the region where the instance is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // Backup status. Values:
    // - **completed**: Success
    // - **error**: Failure
    // - **canceled**: Closed
    std::shared_ptr<string> state_ = nullptr;
    // Backup type. Values:
    // 
    // - *full*: Full backup
    // - *incremental*: Incremental backup
    std::shared_ptr<string> subtype_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
