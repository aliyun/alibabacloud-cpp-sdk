// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPDATARESPONSEBODYBACKUPDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPDATARESPONSEBODYBACKUPDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListBackupDataResponseBodyBackupDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupDataResponseBodyBackupDataList& obj) { 
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(ColdDataSize, coldDataSize_);
      DARABONBA_PTR_TO_JSON(DataDesc, dataDesc_);
      DARABONBA_PTR_TO_JSON(DataGran, dataGran_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceRegion, instanceRegion_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceZoneId, instanceZoneId_);
      DARABONBA_PTR_TO_JSON(SnapshotRegion, snapshotRegion_);
      DARABONBA_PTR_TO_JSON(SnapshotZoneId, snapshotZoneId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupDataResponseBodyBackupDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(ColdDataSize, coldDataSize_);
      DARABONBA_PTR_FROM_JSON(DataDesc, dataDesc_);
      DARABONBA_PTR_FROM_JSON(DataGran, dataGran_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceRegion, instanceRegion_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceZoneId, instanceZoneId_);
      DARABONBA_PTR_FROM_JSON(SnapshotRegion, snapshotRegion_);
      DARABONBA_PTR_FROM_JSON(SnapshotZoneId, snapshotZoneId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
    };
    ListBackupDataResponseBodyBackupDataList() = default ;
    ListBackupDataResponseBodyBackupDataList(const ListBackupDataResponseBodyBackupDataList &) = default ;
    ListBackupDataResponseBodyBackupDataList(ListBackupDataResponseBodyBackupDataList &&) = default ;
    ListBackupDataResponseBodyBackupDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupDataResponseBodyBackupDataList() = default ;
    ListBackupDataResponseBodyBackupDataList& operator=(const ListBackupDataResponseBodyBackupDataList &) = default ;
    ListBackupDataResponseBodyBackupDataList& operator=(ListBackupDataResponseBodyBackupDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupType_ != nullptr
        && this->coldDataSize_ != nullptr && this->dataDesc_ != nullptr && this->dataGran_ != nullptr && this->dataSize_ != nullptr && this->dataTime_ != nullptr
        && this->endTime_ != nullptr && this->id_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->instanceRegion_ != nullptr
        && this->instanceType_ != nullptr && this->instanceZoneId_ != nullptr && this->snapshotRegion_ != nullptr && this->snapshotZoneId_ != nullptr && this->startTime_ != nullptr
        && this->status_ != nullptr && this->triggerType_ != nullptr; };
    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // coldDataSize Field Functions 
    bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
    void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
    inline int64_t coldDataSize() const { DARABONBA_PTR_GET_DEFAULT(coldDataSize_, 0L) };
    inline ListBackupDataResponseBodyBackupDataList& setColdDataSize(int64_t coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };


    // dataDesc Field Functions 
    bool hasDataDesc() const { return this->dataDesc_ != nullptr;};
    void deleteDataDesc() { this->dataDesc_ = nullptr;};
    inline string dataDesc() const { DARABONBA_PTR_GET_DEFAULT(dataDesc_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setDataDesc(string dataDesc) { DARABONBA_PTR_SET_VALUE(dataDesc_, dataDesc) };


    // dataGran Field Functions 
    bool hasDataGran() const { return this->dataGran_ != nullptr;};
    void deleteDataGran() { this->dataGran_ = nullptr;};
    inline string dataGran() const { DARABONBA_PTR_GET_DEFAULT(dataGran_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setDataGran(string dataGran) { DARABONBA_PTR_SET_VALUE(dataGran_, dataGran) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline ListBackupDataResponseBodyBackupDataList& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // dataTime Field Functions 
    bool hasDataTime() const { return this->dataTime_ != nullptr;};
    void deleteDataTime() { this->dataTime_ = nullptr;};
    inline string dataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListBackupDataResponseBodyBackupDataList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceRegion Field Functions 
    bool hasInstanceRegion() const { return this->instanceRegion_ != nullptr;};
    void deleteInstanceRegion() { this->instanceRegion_ = nullptr;};
    inline string instanceRegion() const { DARABONBA_PTR_GET_DEFAULT(instanceRegion_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setInstanceRegion(string instanceRegion) { DARABONBA_PTR_SET_VALUE(instanceRegion_, instanceRegion) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceZoneId Field Functions 
    bool hasInstanceZoneId() const { return this->instanceZoneId_ != nullptr;};
    void deleteInstanceZoneId() { this->instanceZoneId_ = nullptr;};
    inline string instanceZoneId() const { DARABONBA_PTR_GET_DEFAULT(instanceZoneId_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setInstanceZoneId(string instanceZoneId) { DARABONBA_PTR_SET_VALUE(instanceZoneId_, instanceZoneId) };


    // snapshotRegion Field Functions 
    bool hasSnapshotRegion() const { return this->snapshotRegion_ != nullptr;};
    void deleteSnapshotRegion() { this->snapshotRegion_ = nullptr;};
    inline string snapshotRegion() const { DARABONBA_PTR_GET_DEFAULT(snapshotRegion_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setSnapshotRegion(string snapshotRegion) { DARABONBA_PTR_SET_VALUE(snapshotRegion_, snapshotRegion) };


    // snapshotZoneId Field Functions 
    bool hasSnapshotZoneId() const { return this->snapshotZoneId_ != nullptr;};
    void deleteSnapshotZoneId() { this->snapshotZoneId_ = nullptr;};
    inline string snapshotZoneId() const { DARABONBA_PTR_GET_DEFAULT(snapshotZoneId_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setSnapshotZoneId(string snapshotZoneId) { DARABONBA_PTR_SET_VALUE(snapshotZoneId_, snapshotZoneId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline ListBackupDataResponseBodyBackupDataList& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // The backup type. In general, the following two types are supported: local backup and remote backup. In the local backup type, snapshots reside in the same region as your instance. The following two sub-types are available: full (single backup, single replica) and redundant (zone-redundant storage, multiple replicas). In the remote backup type, snapshots and your instance reside in different regions. Remote backups are the replicas of the backups of the full or redundant type in another region. The values local and remote do not represent specific types, but are used only for data filtering. The value local indicates all local backups, and the value remote indicates all remote backups.
    std::shared_ptr<string> backupType_ = nullptr;
    // The size of cold data. Unit: bytes.
    std::shared_ptr<int64_t> coldDataSize_ = nullptr;
    // The description of the backup data.
    std::shared_ptr<string> dataDesc_ = nullptr;
    // The backup granularity.
    // 
    // Valid values:
    // 
    // *   instance
    std::shared_ptr<string> dataGran_ = nullptr;
    // The size of the backup data. Unit: bytes.
    std::shared_ptr<int64_t> dataSize_ = nullptr;
    // The snapshot time. The value format of this parameter follows the same standard as that of the StartTime parameter.
    std::shared_ptr<string> dataTime_ = nullptr;
    // The end time of the backup task. The value format of this parameter follows the same standard as that of the StartTime parameter.
    std::shared_ptr<string> endTime_ = nullptr;
    // The unique ID of the backup.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The region in which the instance resides.
    std::shared_ptr<string> instanceRegion_ = nullptr;
    // The type of the instance.
    // 
    // Valid values:
    // 
    // *   Warehouse: virtual warehouse instance
    // *   Standard: general-purpose instance
    std::shared_ptr<string> instanceType_ = nullptr;
    // The zone in which the instance resides.
    std::shared_ptr<string> instanceZoneId_ = nullptr;
    // The region in which the backup data resides.
    std::shared_ptr<string> snapshotRegion_ = nullptr;
    // The zone in which the backup data resides. In zone-redundant storage mode, backup data is stored in different zones, including the current zone.
    std::shared_ptr<string> snapshotZoneId_ = nullptr;
    // The start time of the backup task. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ss.SSSTZ format. The time is displayed in UTC (the same below).
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the backup task.
    // 
    // Valid values:
    // 
    // *   processing
    // *   completed
    // *   failed
    std::shared_ptr<string> status_ = nullptr;
    // The mode in which the backup task is triggered.
    // 
    // Valid values:
    // 
    // *   scheduled: periodic backup
    // *   manual: manual backup
    std::shared_ptr<string> triggerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
