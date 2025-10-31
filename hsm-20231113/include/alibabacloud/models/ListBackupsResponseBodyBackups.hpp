// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPSRESPONSEBODYBACKUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPSRESPONSEBODYBACKUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ListBackupsResponseBodyBackups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupsResponseBodyBackups& obj) { 
      DARABONBA_PTR_TO_JSON(AutoImageCount, autoImageCount_);
      DARABONBA_PTR_TO_JSON(BackupHourInDay, backupHourInDay_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupPeriod, backupPeriod_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxImageCount, maxImageCount_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextImageCreateTime, nextImageCreateTime_);
      DARABONBA_PTR_TO_JSON(OwnerInstanceId, ownerInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SpInstanceId, spInstanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupsResponseBodyBackups& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoImageCount, autoImageCount_);
      DARABONBA_PTR_FROM_JSON(BackupHourInDay, backupHourInDay_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupPeriod, backupPeriod_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxImageCount, maxImageCount_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextImageCreateTime, nextImageCreateTime_);
      DARABONBA_PTR_FROM_JSON(OwnerInstanceId, ownerInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SpInstanceId, spInstanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
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
    virtual bool empty() const override { return this->autoImageCount_ == nullptr
        && return this->backupHourInDay_ == nullptr && return this->backupId_ == nullptr && return this->backupPeriod_ == nullptr && return this->createTime_ == nullptr && return this->expireTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->maxImageCount_ == nullptr && return this->name_ == nullptr && return this->nextImageCreateTime_ == nullptr && return this->ownerInstanceId_ == nullptr
        && return this->regionId_ == nullptr && return this->releaseTime_ == nullptr && return this->remark_ == nullptr && return this->spInstanceId_ == nullptr && return this->status_ == nullptr
        && return this->type_ == nullptr; };
    // autoImageCount Field Functions 
    bool hasAutoImageCount() const { return this->autoImageCount_ != nullptr;};
    void deleteAutoImageCount() { this->autoImageCount_ = nullptr;};
    inline int64_t autoImageCount() const { DARABONBA_PTR_GET_DEFAULT(autoImageCount_, 0L) };
    inline ListBackupsResponseBodyBackups& setAutoImageCount(int64_t autoImageCount) { DARABONBA_PTR_SET_VALUE(autoImageCount_, autoImageCount) };


    // backupHourInDay Field Functions 
    bool hasBackupHourInDay() const { return this->backupHourInDay_ != nullptr;};
    void deleteBackupHourInDay() { this->backupHourInDay_ = nullptr;};
    inline string backupHourInDay() const { DARABONBA_PTR_GET_DEFAULT(backupHourInDay_, "") };
    inline ListBackupsResponseBodyBackups& setBackupHourInDay(string backupHourInDay) { DARABONBA_PTR_SET_VALUE(backupHourInDay_, backupHourInDay) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline ListBackupsResponseBodyBackups& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupPeriod Field Functions 
    bool hasBackupPeriod() const { return this->backupPeriod_ != nullptr;};
    void deleteBackupPeriod() { this->backupPeriod_ = nullptr;};
    inline int64_t backupPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupPeriod_, 0L) };
    inline ListBackupsResponseBodyBackups& setBackupPeriod(int64_t backupPeriod) { DARABONBA_PTR_SET_VALUE(backupPeriod_, backupPeriod) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListBackupsResponseBodyBackups& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline ListBackupsResponseBodyBackups& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListBackupsResponseBodyBackups& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxImageCount Field Functions 
    bool hasMaxImageCount() const { return this->maxImageCount_ != nullptr;};
    void deleteMaxImageCount() { this->maxImageCount_ = nullptr;};
    inline string maxImageCount() const { DARABONBA_PTR_GET_DEFAULT(maxImageCount_, "") };
    inline ListBackupsResponseBodyBackups& setMaxImageCount(string maxImageCount) { DARABONBA_PTR_SET_VALUE(maxImageCount_, maxImageCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListBackupsResponseBodyBackups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextImageCreateTime Field Functions 
    bool hasNextImageCreateTime() const { return this->nextImageCreateTime_ != nullptr;};
    void deleteNextImageCreateTime() { this->nextImageCreateTime_ = nullptr;};
    inline int64_t nextImageCreateTime() const { DARABONBA_PTR_GET_DEFAULT(nextImageCreateTime_, 0L) };
    inline ListBackupsResponseBodyBackups& setNextImageCreateTime(int64_t nextImageCreateTime) { DARABONBA_PTR_SET_VALUE(nextImageCreateTime_, nextImageCreateTime) };


    // ownerInstanceId Field Functions 
    bool hasOwnerInstanceId() const { return this->ownerInstanceId_ != nullptr;};
    void deleteOwnerInstanceId() { this->ownerInstanceId_ = nullptr;};
    inline string ownerInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ownerInstanceId_, "") };
    inline ListBackupsResponseBodyBackups& setOwnerInstanceId(string ownerInstanceId) { DARABONBA_PTR_SET_VALUE(ownerInstanceId_, ownerInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListBackupsResponseBodyBackups& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline int64_t releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
    inline ListBackupsResponseBodyBackups& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListBackupsResponseBodyBackups& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // spInstanceId Field Functions 
    bool hasSpInstanceId() const { return this->spInstanceId_ != nullptr;};
    void deleteSpInstanceId() { this->spInstanceId_ = nullptr;};
    inline string spInstanceId() const { DARABONBA_PTR_GET_DEFAULT(spInstanceId_, "") };
    inline ListBackupsResponseBodyBackups& setSpInstanceId(string spInstanceId) { DARABONBA_PTR_SET_VALUE(spInstanceId_, spInstanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListBackupsResponseBodyBackups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListBackupsResponseBodyBackups& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of images that are automatically backed up.
    std::shared_ptr<int64_t> autoImageCount_ = nullptr;
    // The backup time on the hour that is in the 24-hour clock.
    std::shared_ptr<string> backupHourInDay_ = nullptr;
    // The ID of the backup.
    std::shared_ptr<string> backupId_ = nullptr;
    // The automatic backup cycle. Unit: days.
    std::shared_ptr<int64_t> backupPeriod_ = nullptr;
    // The time when the backup is created. The value is accurate to the millisecond. The value is a UNIX timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The expiration time of the backup. The value is accurate to the millisecond. The value is a UNIX timestamp.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The ID of the HSM that is associated with the backup.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The number of images.
    std::shared_ptr<string> maxImageCount_ = nullptr;
    // The name of the backup.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the image is created next time. The value is accurate to the millisecond. The value is a UNIX timestamp.
    std::shared_ptr<int64_t> nextImageCreateTime_ = nullptr;
    // The ID of the HSM to which the backup belongs. This parameter is available only for HSM backups outside the Chinese mainland and the value of this parameter is consistent with the value of InstanceId.
    std::shared_ptr<string> ownerInstanceId_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The time when the backup is released. The value is accurate to the millisecond. The value is a UNIX timestamp.
    std::shared_ptr<int64_t> releaseTime_ = nullptr;
    // The description of the backup.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the backup. This parameter is available only for HSM backups in the Chinese mainland.
    std::shared_ptr<string> spInstanceId_ = nullptr;
    // The status of the backup. Valid values:
    // 
    // *   NEW: The backup is disabled.
    // *   EXPIRED: The backup expired.
    // *   ENABLED: The backup is enabled.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the backup. Valid values:
    // 
    // *   DEFAULT
    // *   NORMAL
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
