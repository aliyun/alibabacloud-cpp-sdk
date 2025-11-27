// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONBACKUPSRESPONSEBODYITEMSITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONBACKUPSRESPONSEBODYITEMSITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCrossRegionBackupsResponseBodyItemsItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossRegionBackupsResponseBodyItemsItem& obj) { 
      DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupSetScale, backupSetScale_);
      DARABONBA_PTR_TO_JSON(BackupSetStatus, backupSetStatus_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ConsistentTime, consistentTime_);
      DARABONBA_PTR_TO_JSON(CrossBackupDownloadLink, crossBackupDownloadLink_);
      DARABONBA_PTR_TO_JSON(CrossBackupId, crossBackupId_);
      DARABONBA_PTR_TO_JSON(CrossBackupRegion, crossBackupRegion_);
      DARABONBA_PTR_TO_JSON(CrossBackupSetFile, crossBackupSetFile_);
      DARABONBA_PTR_TO_JSON(CrossBackupSetLocation, crossBackupSetLocation_);
      DARABONBA_PTR_TO_JSON(CrossBackupSetSize, crossBackupSetSize_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RestoreRegions, restoreRegions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossRegionBackupsResponseBodyItemsItem& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupSetScale, backupSetScale_);
      DARABONBA_PTR_FROM_JSON(BackupSetStatus, backupSetStatus_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ConsistentTime, consistentTime_);
      DARABONBA_PTR_FROM_JSON(CrossBackupDownloadLink, crossBackupDownloadLink_);
      DARABONBA_PTR_FROM_JSON(CrossBackupId, crossBackupId_);
      DARABONBA_PTR_FROM_JSON(CrossBackupRegion, crossBackupRegion_);
      DARABONBA_PTR_FROM_JSON(CrossBackupSetFile, crossBackupSetFile_);
      DARABONBA_PTR_FROM_JSON(CrossBackupSetLocation, crossBackupSetLocation_);
      DARABONBA_PTR_FROM_JSON(CrossBackupSetSize, crossBackupSetSize_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RestoreRegions, restoreRegions_);
    };
    DescribeCrossRegionBackupsResponseBodyItemsItem() = default ;
    DescribeCrossRegionBackupsResponseBodyItemsItem(const DescribeCrossRegionBackupsResponseBodyItemsItem &) = default ;
    DescribeCrossRegionBackupsResponseBodyItemsItem(DescribeCrossRegionBackupsResponseBodyItemsItem &&) = default ;
    DescribeCrossRegionBackupsResponseBodyItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossRegionBackupsResponseBodyItemsItem() = default ;
    DescribeCrossRegionBackupsResponseBodyItemsItem& operator=(const DescribeCrossRegionBackupsResponseBodyItemsItem &) = default ;
    DescribeCrossRegionBackupsResponseBodyItemsItem& operator=(DescribeCrossRegionBackupsResponseBodyItemsItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupEndTime_ == nullptr
        && return this->backupMethod_ == nullptr && return this->backupSetScale_ == nullptr && return this->backupSetStatus_ == nullptr && return this->backupStartTime_ == nullptr && return this->backupType_ == nullptr
        && return this->category_ == nullptr && return this->consistentTime_ == nullptr && return this->crossBackupDownloadLink_ == nullptr && return this->crossBackupId_ == nullptr && return this->crossBackupRegion_ == nullptr
        && return this->crossBackupSetFile_ == nullptr && return this->crossBackupSetLocation_ == nullptr && return this->crossBackupSetSize_ == nullptr && return this->DBInstanceStorageType_ == nullptr && return this->engine_ == nullptr
        && return this->engineVersion_ == nullptr && return this->instanceId_ == nullptr && return this->restoreRegions_ == nullptr; };
    // backupEndTime Field Functions 
    bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
    void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
    inline string backupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string backupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupSetScale Field Functions 
    bool hasBackupSetScale() const { return this->backupSetScale_ != nullptr;};
    void deleteBackupSetScale() { this->backupSetScale_ = nullptr;};
    inline int32_t backupSetScale() const { DARABONBA_PTR_GET_DEFAULT(backupSetScale_, 0) };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setBackupSetScale(int32_t backupSetScale) { DARABONBA_PTR_SET_VALUE(backupSetScale_, backupSetScale) };


    // backupSetStatus Field Functions 
    bool hasBackupSetStatus() const { return this->backupSetStatus_ != nullptr;};
    void deleteBackupSetStatus() { this->backupSetStatus_ = nullptr;};
    inline int32_t backupSetStatus() const { DARABONBA_PTR_GET_DEFAULT(backupSetStatus_, 0) };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setBackupSetStatus(int32_t backupSetStatus) { DARABONBA_PTR_SET_VALUE(backupSetStatus_, backupSetStatus) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline string backupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // consistentTime Field Functions 
    bool hasConsistentTime() const { return this->consistentTime_ != nullptr;};
    void deleteConsistentTime() { this->consistentTime_ = nullptr;};
    inline string consistentTime() const { DARABONBA_PTR_GET_DEFAULT(consistentTime_, "") };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setConsistentTime(string consistentTime) { DARABONBA_PTR_SET_VALUE(consistentTime_, consistentTime) };


    // crossBackupDownloadLink Field Functions 
    bool hasCrossBackupDownloadLink() const { return this->crossBackupDownloadLink_ != nullptr;};
    void deleteCrossBackupDownloadLink() { this->crossBackupDownloadLink_ = nullptr;};
    inline string crossBackupDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(crossBackupDownloadLink_, "") };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setCrossBackupDownloadLink(string crossBackupDownloadLink) { DARABONBA_PTR_SET_VALUE(crossBackupDownloadLink_, crossBackupDownloadLink) };


    // crossBackupId Field Functions 
    bool hasCrossBackupId() const { return this->crossBackupId_ != nullptr;};
    void deleteCrossBackupId() { this->crossBackupId_ = nullptr;};
    inline int32_t crossBackupId() const { DARABONBA_PTR_GET_DEFAULT(crossBackupId_, 0) };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setCrossBackupId(int32_t crossBackupId) { DARABONBA_PTR_SET_VALUE(crossBackupId_, crossBackupId) };


    // crossBackupRegion Field Functions 
    bool hasCrossBackupRegion() const { return this->crossBackupRegion_ != nullptr;};
    void deleteCrossBackupRegion() { this->crossBackupRegion_ = nullptr;};
    inline string crossBackupRegion() const { DARABONBA_PTR_GET_DEFAULT(crossBackupRegion_, "") };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setCrossBackupRegion(string crossBackupRegion) { DARABONBA_PTR_SET_VALUE(crossBackupRegion_, crossBackupRegion) };


    // crossBackupSetFile Field Functions 
    bool hasCrossBackupSetFile() const { return this->crossBackupSetFile_ != nullptr;};
    void deleteCrossBackupSetFile() { this->crossBackupSetFile_ = nullptr;};
    inline string crossBackupSetFile() const { DARABONBA_PTR_GET_DEFAULT(crossBackupSetFile_, "") };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setCrossBackupSetFile(string crossBackupSetFile) { DARABONBA_PTR_SET_VALUE(crossBackupSetFile_, crossBackupSetFile) };


    // crossBackupSetLocation Field Functions 
    bool hasCrossBackupSetLocation() const { return this->crossBackupSetLocation_ != nullptr;};
    void deleteCrossBackupSetLocation() { this->crossBackupSetLocation_ = nullptr;};
    inline string crossBackupSetLocation() const { DARABONBA_PTR_GET_DEFAULT(crossBackupSetLocation_, "") };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setCrossBackupSetLocation(string crossBackupSetLocation) { DARABONBA_PTR_SET_VALUE(crossBackupSetLocation_, crossBackupSetLocation) };


    // crossBackupSetSize Field Functions 
    bool hasCrossBackupSetSize() const { return this->crossBackupSetSize_ != nullptr;};
    void deleteCrossBackupSetSize() { this->crossBackupSetSize_ = nullptr;};
    inline int64_t crossBackupSetSize() const { DARABONBA_PTR_GET_DEFAULT(crossBackupSetSize_, 0L) };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setCrossBackupSetSize(int64_t crossBackupSetSize) { DARABONBA_PTR_SET_VALUE(crossBackupSetSize_, crossBackupSetSize) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string DBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int32_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0) };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setInstanceId(int32_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // restoreRegions Field Functions 
    bool hasRestoreRegions() const { return this->restoreRegions_ != nullptr;};
    void deleteRestoreRegions() { this->restoreRegions_ = nullptr;};
    inline const Models::DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions & restoreRegions() const { DARABONBA_PTR_GET_CONST(restoreRegions_, Models::DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions) };
    inline Models::DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions restoreRegions() { DARABONBA_PTR_GET(restoreRegions_, Models::DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions) };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setRestoreRegions(const Models::DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions & restoreRegions) { DARABONBA_PTR_SET_VALUE(restoreRegions_, restoreRegions) };
    inline DescribeCrossRegionBackupsResponseBodyItemsItem& setRestoreRegions(Models::DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions && restoreRegions) { DARABONBA_PTR_SET_RVALUE(restoreRegions_, restoreRegions) };


  protected:
    // The time when the cross-region data backup file was generated.
    std::shared_ptr<string> backupEndTime_ = nullptr;
    // The method that is used to generate the cross-region data backup file. Valid values:
    // 
    // *   **L**: logical backup
    // *   **P**: physical backup
    std::shared_ptr<string> backupMethod_ = nullptr;
    // The level at which the cross-region data backup file is generated.
    // 
    // *   **0**: instance-level backup
    // *   **1**: database-level backup
    std::shared_ptr<int32_t> backupSetScale_ = nullptr;
    // The status of the cross-region data backup. Valid values:
    // 
    // *   **0**: The cross-region data backup is successful.
    // *   **1**: The cross-region data backup failed.
    std::shared_ptr<int32_t> backupSetStatus_ = nullptr;
    // The time when the cross-region data backup started.
    std::shared_ptr<string> backupStartTime_ = nullptr;
    // The type of the cross-region data backup. Valid values:
    // 
    // *   **F**: full data backup
    // *   **I**: incremental data backup
    std::shared_ptr<string> backupType_ = nullptr;
    // The RDS edition of the instance. Valid values:
    // 
    // *   **Basic**: RDS Basic Edition.
    // *   **HighAvailability**: RDS High-availability Edition.
    // *   **Finance**: RDS Enterprise Edition. This edition is available only for the China site (aliyun.com).
    std::shared_ptr<string> category_ = nullptr;
    // The point in time that is indicated by the data in the cross-region data backup file.
    std::shared_ptr<string> consistentTime_ = nullptr;
    // The external URL from which you can download the cross-region data backup file.
    std::shared_ptr<string> crossBackupDownloadLink_ = nullptr;
    // The ID of the cross-region data backup file.
    std::shared_ptr<int32_t> crossBackupId_ = nullptr;
    // The ID of the region in which the cross-region backup files of the instance are stored.
    std::shared_ptr<string> crossBackupRegion_ = nullptr;
    // The name of the compressed package that contains the cross-region data backup file.
    std::shared_ptr<string> crossBackupSetFile_ = nullptr;
    // The location where the cross-region data backup file is stored.
    std::shared_ptr<string> crossBackupSetLocation_ = nullptr;
    // The size of the cross-region data backup file. Unit: bytes.
    std::shared_ptr<int64_t> crossBackupSetSize_ = nullptr;
    // The storage type. Valid values:
    // 
    // *   **local_ssd**: local SSDs. This is the recommended storage type.
    // *   **cloud_ssd**: standard SSD.
    // *   **cloud_essd**: enhanced SSD (ESSD).
    std::shared_ptr<string> DBInstanceStorageType_ = nullptr;
    // The database engine of the instance.
    std::shared_ptr<string> engine_ = nullptr;
    // The database engine version.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The instance ID. This parameter is used to determine whether the instance that generates the cross-region data backup file is a primary or secondary instance.
    std::shared_ptr<int32_t> instanceId_ = nullptr;
    // The regions to which the cross-region data backup file can be restored.
    std::shared_ptr<Models::DescribeCrossRegionBackupsResponseBodyItemsItemRestoreRegions> restoreRegions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
