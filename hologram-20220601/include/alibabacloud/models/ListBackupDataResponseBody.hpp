// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListBackupDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupDataList, backupDataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupDataList, backupDataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBackupDataResponseBody() = default ;
    ListBackupDataResponseBody(const ListBackupDataResponseBody &) = default ;
    ListBackupDataResponseBody(ListBackupDataResponseBody &&) = default ;
    ListBackupDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupDataResponseBody() = default ;
    ListBackupDataResponseBody& operator=(const ListBackupDataResponseBody &) = default ;
    ListBackupDataResponseBody& operator=(ListBackupDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackupDataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupDataList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, BackupDataList& obj) { 
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
      BackupDataList() = default ;
      BackupDataList(const BackupDataList &) = default ;
      BackupDataList(BackupDataList &&) = default ;
      BackupDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupDataList() = default ;
      BackupDataList& operator=(const BackupDataList &) = default ;
      BackupDataList& operator=(BackupDataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupType_ == nullptr
        && this->coldDataSize_ == nullptr && this->dataDesc_ == nullptr && this->dataGran_ == nullptr && this->dataSize_ == nullptr && this->dataTime_ == nullptr
        && this->endTime_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceRegion_ == nullptr
        && this->instanceType_ == nullptr && this->instanceZoneId_ == nullptr && this->snapshotRegion_ == nullptr && this->snapshotZoneId_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->triggerType_ == nullptr; };
      // backupType Field Functions 
      bool hasBackupType() const { return this->backupType_ != nullptr;};
      void deleteBackupType() { this->backupType_ = nullptr;};
      inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
      inline BackupDataList& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


      // coldDataSize Field Functions 
      bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
      void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
      inline int64_t getColdDataSize() const { DARABONBA_PTR_GET_DEFAULT(coldDataSize_, 0L) };
      inline BackupDataList& setColdDataSize(int64_t coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };


      // dataDesc Field Functions 
      bool hasDataDesc() const { return this->dataDesc_ != nullptr;};
      void deleteDataDesc() { this->dataDesc_ = nullptr;};
      inline string getDataDesc() const { DARABONBA_PTR_GET_DEFAULT(dataDesc_, "") };
      inline BackupDataList& setDataDesc(string dataDesc) { DARABONBA_PTR_SET_VALUE(dataDesc_, dataDesc) };


      // dataGran Field Functions 
      bool hasDataGran() const { return this->dataGran_ != nullptr;};
      void deleteDataGran() { this->dataGran_ = nullptr;};
      inline string getDataGran() const { DARABONBA_PTR_GET_DEFAULT(dataGran_, "") };
      inline BackupDataList& setDataGran(string dataGran) { DARABONBA_PTR_SET_VALUE(dataGran_, dataGran) };


      // dataSize Field Functions 
      bool hasDataSize() const { return this->dataSize_ != nullptr;};
      void deleteDataSize() { this->dataSize_ = nullptr;};
      inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
      inline BackupDataList& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


      // dataTime Field Functions 
      bool hasDataTime() const { return this->dataTime_ != nullptr;};
      void deleteDataTime() { this->dataTime_ = nullptr;};
      inline string getDataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, "") };
      inline BackupDataList& setDataTime(string dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline BackupDataList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline BackupDataList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline BackupDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline BackupDataList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceRegion Field Functions 
      bool hasInstanceRegion() const { return this->instanceRegion_ != nullptr;};
      void deleteInstanceRegion() { this->instanceRegion_ = nullptr;};
      inline string getInstanceRegion() const { DARABONBA_PTR_GET_DEFAULT(instanceRegion_, "") };
      inline BackupDataList& setInstanceRegion(string instanceRegion) { DARABONBA_PTR_SET_VALUE(instanceRegion_, instanceRegion) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline BackupDataList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // instanceZoneId Field Functions 
      bool hasInstanceZoneId() const { return this->instanceZoneId_ != nullptr;};
      void deleteInstanceZoneId() { this->instanceZoneId_ = nullptr;};
      inline string getInstanceZoneId() const { DARABONBA_PTR_GET_DEFAULT(instanceZoneId_, "") };
      inline BackupDataList& setInstanceZoneId(string instanceZoneId) { DARABONBA_PTR_SET_VALUE(instanceZoneId_, instanceZoneId) };


      // snapshotRegion Field Functions 
      bool hasSnapshotRegion() const { return this->snapshotRegion_ != nullptr;};
      void deleteSnapshotRegion() { this->snapshotRegion_ = nullptr;};
      inline string getSnapshotRegion() const { DARABONBA_PTR_GET_DEFAULT(snapshotRegion_, "") };
      inline BackupDataList& setSnapshotRegion(string snapshotRegion) { DARABONBA_PTR_SET_VALUE(snapshotRegion_, snapshotRegion) };


      // snapshotZoneId Field Functions 
      bool hasSnapshotZoneId() const { return this->snapshotZoneId_ != nullptr;};
      void deleteSnapshotZoneId() { this->snapshotZoneId_ = nullptr;};
      inline string getSnapshotZoneId() const { DARABONBA_PTR_GET_DEFAULT(snapshotZoneId_, "") };
      inline BackupDataList& setSnapshotZoneId(string snapshotZoneId) { DARABONBA_PTR_SET_VALUE(snapshotZoneId_, snapshotZoneId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline BackupDataList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline BackupDataList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline BackupDataList& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    protected:
      // The backup type. In general, the following two types are supported: local backup and remote backup. In the local backup type, snapshots reside in the same region as your instance. The following two sub-types are available: full (single backup, single replica) and redundant (zone-redundant storage, multiple replicas). In the remote backup type, snapshots and your instance reside in different regions. Remote backups are the replicas of the backups of the full or redundant type in another region. The values local and remote do not represent specific types, but are used only for data filtering. The value local indicates all local backups, and the value remote indicates all remote backups.
      shared_ptr<string> backupType_ {};
      // The size of cold data. Unit: bytes.
      shared_ptr<int64_t> coldDataSize_ {};
      // The description of the backup data.
      shared_ptr<string> dataDesc_ {};
      // The backup granularity.
      // 
      // Valid values:
      // 
      // *   instance
      shared_ptr<string> dataGran_ {};
      // The size of the backup data. Unit: bytes.
      shared_ptr<int64_t> dataSize_ {};
      // The snapshot time. The value format of this parameter follows the same standard as that of the StartTime parameter.
      shared_ptr<string> dataTime_ {};
      // The end time of the backup task. The value format of this parameter follows the same standard as that of the StartTime parameter.
      shared_ptr<string> endTime_ {};
      // The unique ID of the backup.
      shared_ptr<int64_t> id_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The region in which the instance resides.
      shared_ptr<string> instanceRegion_ {};
      // The type of the instance.
      // 
      // Valid values:
      // 
      // *   Warehouse: virtual warehouse instance
      // *   Standard: general-purpose instance
      shared_ptr<string> instanceType_ {};
      // The zone in which the instance resides.
      shared_ptr<string> instanceZoneId_ {};
      // The region in which the backup data resides.
      shared_ptr<string> snapshotRegion_ {};
      // The zone in which the backup data resides. In zone-redundant storage mode, backup data is stored in different zones, including the current zone.
      shared_ptr<string> snapshotZoneId_ {};
      // The start time of the backup task. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ss.SSSTZ format. The time is displayed in UTC (the same below).
      shared_ptr<string> startTime_ {};
      // The status of the backup task.
      // 
      // Valid values:
      // 
      // *   processing
      // *   completed
      // *   failed
      shared_ptr<string> status_ {};
      // The mode in which the backup task is triggered.
      // 
      // Valid values:
      // 
      // *   scheduled: periodic backup
      // *   manual: manual backup
      shared_ptr<string> triggerType_ {};
    };

    virtual bool empty() const override { return this->backupDataList_ == nullptr
        && this->requestId_ == nullptr; };
    // backupDataList Field Functions 
    bool hasBackupDataList() const { return this->backupDataList_ != nullptr;};
    void deleteBackupDataList() { this->backupDataList_ = nullptr;};
    inline const vector<ListBackupDataResponseBody::BackupDataList> & getBackupDataList() const { DARABONBA_PTR_GET_CONST(backupDataList_, vector<ListBackupDataResponseBody::BackupDataList>) };
    inline vector<ListBackupDataResponseBody::BackupDataList> getBackupDataList() { DARABONBA_PTR_GET(backupDataList_, vector<ListBackupDataResponseBody::BackupDataList>) };
    inline ListBackupDataResponseBody& setBackupDataList(const vector<ListBackupDataResponseBody::BackupDataList> & backupDataList) { DARABONBA_PTR_SET_VALUE(backupDataList_, backupDataList) };
    inline ListBackupDataResponseBody& setBackupDataList(vector<ListBackupDataResponseBody::BackupDataList> && backupDataList) { DARABONBA_PTR_SET_RVALUE(backupDataList_, backupDataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBackupDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The backups.
    shared_ptr<vector<ListBackupDataResponseBody::BackupDataList>> backupDataList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
