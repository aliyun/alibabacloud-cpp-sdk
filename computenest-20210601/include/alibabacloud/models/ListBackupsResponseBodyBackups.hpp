// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPSRESPONSEBODYBACKUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPSRESPONSEBODYBACKUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListBackupsResponseBodyBackups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupsResponseBodyBackups& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDetail, statusDetail_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupsResponseBodyBackups& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDetail, statusDetail_);
    };
    ListBackupsResponseBodyBackups() = default ;
    ListBackupsResponseBodyBackups(const ListBackupsResponseBodyBackups &) = default ;
    ListBackupsResponseBodyBackups(ListBackupsResponseBodyBackups &&) = default ;
    ListBackupsResponseBodyBackups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupsResponseBodyBackups() = default ;
    ListBackupsResponseBodyBackups& operator=(const ListBackupsResponseBodyBackups &) = default ;
    ListBackupsResponseBodyBackups& operator=(ListBackupsResponseBodyBackups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupId_ != nullptr
        && this->backupMode_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->endTime_ != nullptr && this->modifiedTime_ != nullptr
        && this->retentionDays_ != nullptr && this->serviceInstanceId_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->statusDetail_ != nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline ListBackupsResponseBodyBackups& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline ListBackupsResponseBodyBackups& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListBackupsResponseBodyBackups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListBackupsResponseBodyBackups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListBackupsResponseBodyBackups& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListBackupsResponseBodyBackups& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t retentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline ListBackupsResponseBodyBackups& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline ListBackupsResponseBodyBackups& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListBackupsResponseBodyBackups& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListBackupsResponseBodyBackups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDetail Field Functions 
    bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
    void deleteStatusDetail() { this->statusDetail_ = nullptr;};
    inline string statusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
    inline ListBackupsResponseBodyBackups& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


  protected:
    // The backup ID.
    std::shared_ptr<string> backupId_ = nullptr;
    // The backup mode. Valid values:
    // 
    // *   **Manual**: manual backup
    std::shared_ptr<string> backupMode_ = nullptr;
    // The creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the backup task.
    std::shared_ptr<string> description_ = nullptr;
    // The end time of the backup task.
    std::shared_ptr<string> endTime_ = nullptr;
    // The update time.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // Retention Days. Resources will be cleared upon expiration. Defaults to no expiration if left blank.
    std::shared_ptr<int32_t> retentionDays_ = nullptr;
    // The ID of the service instance.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The start time of the backup task.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the backup task. Valid values:
    // 
    // *   Creating
    // *   Created
    // *   CreateFailed
    // *   Deleting
    // *   Deleted
    // *   DeleteFailed
    std::shared_ptr<string> status_ = nullptr;
    // The description of the service instance deployment information.
    std::shared_ptr<string> statusDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
