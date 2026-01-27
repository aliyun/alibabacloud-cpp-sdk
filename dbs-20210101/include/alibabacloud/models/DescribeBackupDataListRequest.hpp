// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPDATALISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPDATALISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class DescribeBackupDataListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupDataListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(BackupScale, backupScale_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceIsDeleted, instanceIsDeleted_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceRegion, instanceRegion_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(SceneType, sceneType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupDataListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(BackupScale, backupScale_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceIsDeleted, instanceIsDeleted_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceRegion, instanceRegion_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(SceneType, sceneType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeBackupDataListRequest() = default ;
    DescribeBackupDataListRequest(const DescribeBackupDataListRequest &) = default ;
    DescribeBackupDataListRequest(DescribeBackupDataListRequest &&) = default ;
    DescribeBackupDataListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupDataListRequest() = default ;
    DescribeBackupDataListRequest& operator=(const DescribeBackupDataListRequest &) = default ;
    DescribeBackupDataListRequest& operator=(DescribeBackupDataListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && this->backupMethod_ == nullptr && this->backupMode_ == nullptr && this->backupScale_ == nullptr && this->backupStatus_ == nullptr && this->backupType_ == nullptr
        && this->dataSourceId_ == nullptr && this->endTime_ == nullptr && this->instanceIsDeleted_ == nullptr && this->instanceName_ == nullptr && this->instanceRegion_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionCode_ == nullptr && this->sceneType_ == nullptr && this->startTime_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline DescribeBackupDataListRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline DescribeBackupDataListRequest& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline DescribeBackupDataListRequest& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // backupScale Field Functions 
    bool hasBackupScale() const { return this->backupScale_ != nullptr;};
    void deleteBackupScale() { this->backupScale_ = nullptr;};
    inline string getBackupScale() const { DARABONBA_PTR_GET_DEFAULT(backupScale_, "") };
    inline DescribeBackupDataListRequest& setBackupScale(string backupScale) { DARABONBA_PTR_SET_VALUE(backupScale_, backupScale) };


    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline DescribeBackupDataListRequest& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeBackupDataListRequest& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline DescribeBackupDataListRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeBackupDataListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceIsDeleted Field Functions 
    bool hasInstanceIsDeleted() const { return this->instanceIsDeleted_ != nullptr;};
    void deleteInstanceIsDeleted() { this->instanceIsDeleted_ = nullptr;};
    inline bool getInstanceIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(instanceIsDeleted_, false) };
    inline DescribeBackupDataListRequest& setInstanceIsDeleted(bool instanceIsDeleted) { DARABONBA_PTR_SET_VALUE(instanceIsDeleted_, instanceIsDeleted) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeBackupDataListRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceRegion Field Functions 
    bool hasInstanceRegion() const { return this->instanceRegion_ != nullptr;};
    void deleteInstanceRegion() { this->instanceRegion_ = nullptr;};
    inline string getInstanceRegion() const { DARABONBA_PTR_GET_DEFAULT(instanceRegion_, "") };
    inline DescribeBackupDataListRequest& setInstanceRegion(string instanceRegion) { DARABONBA_PTR_SET_VALUE(instanceRegion_, instanceRegion) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupDataListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupDataListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline DescribeBackupDataListRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // sceneType Field Functions 
    bool hasSceneType() const { return this->sceneType_ != nullptr;};
    void deleteSceneType() { this->sceneType_ = nullptr;};
    inline string getSceneType() const { DARABONBA_PTR_GET_DEFAULT(sceneType_, "") };
    inline DescribeBackupDataListRequest& setSceneType(string sceneType) { DARABONBA_PTR_SET_VALUE(sceneType_, sceneType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeBackupDataListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the backup set.
    shared_ptr<string> backupId_ {};
    // The backup method. Valid values:
    // 
    // *   **Physical**
    // *   **Logical**
    // *   **Snapshot**
    shared_ptr<string> backupMethod_ {};
    // The backup mode. Valid values:
    // 
    // *   **Automated**
    // *   **Manual**
    shared_ptr<string> backupMode_ {};
    // The backup scale. Valid values:
    // 
    // *   **DBInstance**
    // *   **DBTable**
    shared_ptr<string> backupScale_ {};
    // The status of the backup set. Valid values:
    // 
    // *   **OK**: The backup succeeded.
    // *   **ERROR**: The backup failed.
    shared_ptr<string> backupStatus_ {};
    // The backup type. Valid values:
    // 
    // *   **FullBackup**
    // *   **IncrementBackup**
    shared_ptr<string> backupType_ {};
    // This is a reserved parameter.
    shared_ptr<string> dataSourceId_ {};
    // The end of the time range to query. The end time must be later than the start time. The time follows the yyyy-MM-ddTHH:mm:ssZ format and is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // Specifies whether the cluster is deleted. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> instanceIsDeleted_ {};
    // The ID of the PolarDB for MySQL cluster.
    shared_ptr<string> instanceName_ {};
    // The region in which the original cluster resides.
    shared_ptr<string> instanceRegion_ {};
    // The page number. The value must be a positive integer that does not exceed the maximum value of the INTEGER data type. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The region in which the backup set resides.
    shared_ptr<string> regionCode_ {};
    // The type of the backup scenario. Set the value to **LEVEL_1**, which indicates the level-1 backup of the region in which the PolarDB for MySQL cluster resides.
    shared_ptr<string> sceneType_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
