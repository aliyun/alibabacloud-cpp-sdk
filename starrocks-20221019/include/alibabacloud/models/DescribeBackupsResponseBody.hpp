// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeBackupsResponseBody() = default ;
    DescribeBackupsResponseBody(const DescribeBackupsResponseBody &) = default ;
    DescribeBackupsResponseBody(DescribeBackupsResponseBody &&) = default ;
    DescribeBackupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupsResponseBody() = default ;
    DescribeBackupsResponseBody& operator=(const DescribeBackupsResponseBody &) = default ;
    DescribeBackupsResponseBody& operator=(DescribeBackupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BackupFinishedTime, backupFinishedTime_);
        DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
        DARABONBA_PTR_TO_JSON(BackupTaskId, backupTaskId_);
        DARABONBA_PTR_TO_JSON(BackupType, backupType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceSnapshot, instanceSnapshot_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubTasks, subTasks_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupFinishedTime, backupFinishedTime_);
        DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
        DARABONBA_PTR_FROM_JSON(BackupTaskId, backupTaskId_);
        DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceSnapshot, instanceSnapshot_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubTasks, subTasks_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubTasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubTasks& obj) { 
          DARABONBA_PTR_TO_JSON(DataBase, dataBase_);
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Table, table_);
        };
        friend void from_json(const Darabonba::Json& j, SubTasks& obj) { 
          DARABONBA_PTR_FROM_JSON(DataBase, dataBase_);
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Table, table_);
        };
        SubTasks() = default ;
        SubTasks(const SubTasks &) = default ;
        SubTasks(SubTasks &&) = default ;
        SubTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubTasks() = default ;
        SubTasks& operator=(const SubTasks &) = default ;
        SubTasks& operator=(SubTasks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataBase_ == nullptr
        && this->detail_ == nullptr && this->finishedTime_ == nullptr && this->size_ == nullptr && this->snapshotName_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->table_ == nullptr; };
        // dataBase Field Functions 
        bool hasDataBase() const { return this->dataBase_ != nullptr;};
        void deleteDataBase() { this->dataBase_ = nullptr;};
        inline string getDataBase() const { DARABONBA_PTR_GET_DEFAULT(dataBase_, "") };
        inline SubTasks& setDataBase(string dataBase) { DARABONBA_PTR_SET_VALUE(dataBase_, dataBase) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline SubTasks& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // finishedTime Field Functions 
        bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
        void deleteFinishedTime() { this->finishedTime_ = nullptr;};
        inline int64_t getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, 0L) };
        inline SubTasks& setFinishedTime(int64_t finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline SubTasks& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // snapshotName Field Functions 
        bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
        void deleteSnapshotName() { this->snapshotName_ = nullptr;};
        inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
        inline SubTasks& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline SubTasks& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SubTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // table Field Functions 
        bool hasTable() const { return this->table_ != nullptr;};
        void deleteTable() { this->table_ = nullptr;};
        inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
        inline SubTasks& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


      protected:
        shared_ptr<string> dataBase_ {};
        shared_ptr<string> detail_ {};
        shared_ptr<int64_t> finishedTime_ {};
        shared_ptr<int64_t> size_ {};
        shared_ptr<string> snapshotName_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> table_ {};
      };

      class InstanceSnapshot : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceSnapshot& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
          DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroups_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RunMode, runMode_);
          DARABONBA_PTR_TO_JSON(SpecType, specType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceSnapshot& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
          DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroups_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
          DARABONBA_PTR_FROM_JSON(SpecType, specType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        InstanceSnapshot() = default ;
        InstanceSnapshot(const InstanceSnapshot &) = default ;
        InstanceSnapshot(InstanceSnapshot &&) = default ;
        InstanceSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceSnapshot() = default ;
        InstanceSnapshot& operator=(const InstanceSnapshot &) = default ;
        InstanceSnapshot& operator=(InstanceSnapshot &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> key_ {};
          shared_ptr<string> value_ {};
        };

        class NodeGroups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NodeGroups& obj) { 
            DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
            DARABONBA_PTR_TO_JSON(Cu, cu_);
            DARABONBA_PTR_TO_JSON(DiskNumber, diskNumber_);
            DARABONBA_PTR_TO_JSON(LocalStorageInstanceType, localStorageInstanceType_);
            DARABONBA_PTR_TO_JSON(ResidentNodeNumber, residentNodeNumber_);
            DARABONBA_PTR_TO_JSON(SpecType, specType_);
            DARABONBA_PTR_TO_JSON(StoragePerformanceLevel, storagePerformanceLevel_);
            DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
          };
          friend void from_json(const Darabonba::Json& j, NodeGroups& obj) { 
            DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
            DARABONBA_PTR_FROM_JSON(Cu, cu_);
            DARABONBA_PTR_FROM_JSON(DiskNumber, diskNumber_);
            DARABONBA_PTR_FROM_JSON(LocalStorageInstanceType, localStorageInstanceType_);
            DARABONBA_PTR_FROM_JSON(ResidentNodeNumber, residentNodeNumber_);
            DARABONBA_PTR_FROM_JSON(SpecType, specType_);
            DARABONBA_PTR_FROM_JSON(StoragePerformanceLevel, storagePerformanceLevel_);
            DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
          };
          NodeGroups() = default ;
          NodeGroups(const NodeGroups &) = default ;
          NodeGroups(NodeGroups &&) = default ;
          NodeGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NodeGroups() = default ;
          NodeGroups& operator=(const NodeGroups &) = default ;
          NodeGroups& operator=(NodeGroups &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->componentType_ == nullptr
        && this->cu_ == nullptr && this->diskNumber_ == nullptr && this->localStorageInstanceType_ == nullptr && this->residentNodeNumber_ == nullptr && this->specType_ == nullptr
        && this->storagePerformanceLevel_ == nullptr && this->storageSize_ == nullptr; };
          // componentType Field Functions 
          bool hasComponentType() const { return this->componentType_ != nullptr;};
          void deleteComponentType() { this->componentType_ = nullptr;};
          inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
          inline NodeGroups& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


          // cu Field Functions 
          bool hasCu() const { return this->cu_ != nullptr;};
          void deleteCu() { this->cu_ = nullptr;};
          inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
          inline NodeGroups& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


          // diskNumber Field Functions 
          bool hasDiskNumber() const { return this->diskNumber_ != nullptr;};
          void deleteDiskNumber() { this->diskNumber_ = nullptr;};
          inline string getDiskNumber() const { DARABONBA_PTR_GET_DEFAULT(diskNumber_, "") };
          inline NodeGroups& setDiskNumber(string diskNumber) { DARABONBA_PTR_SET_VALUE(diskNumber_, diskNumber) };


          // localStorageInstanceType Field Functions 
          bool hasLocalStorageInstanceType() const { return this->localStorageInstanceType_ != nullptr;};
          void deleteLocalStorageInstanceType() { this->localStorageInstanceType_ = nullptr;};
          inline string getLocalStorageInstanceType() const { DARABONBA_PTR_GET_DEFAULT(localStorageInstanceType_, "") };
          inline NodeGroups& setLocalStorageInstanceType(string localStorageInstanceType) { DARABONBA_PTR_SET_VALUE(localStorageInstanceType_, localStorageInstanceType) };


          // residentNodeNumber Field Functions 
          bool hasResidentNodeNumber() const { return this->residentNodeNumber_ != nullptr;};
          void deleteResidentNodeNumber() { this->residentNodeNumber_ = nullptr;};
          inline string getResidentNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(residentNodeNumber_, "") };
          inline NodeGroups& setResidentNodeNumber(string residentNodeNumber) { DARABONBA_PTR_SET_VALUE(residentNodeNumber_, residentNodeNumber) };


          // specType Field Functions 
          bool hasSpecType() const { return this->specType_ != nullptr;};
          void deleteSpecType() { this->specType_ = nullptr;};
          inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
          inline NodeGroups& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


          // storagePerformanceLevel Field Functions 
          bool hasStoragePerformanceLevel() const { return this->storagePerformanceLevel_ != nullptr;};
          void deleteStoragePerformanceLevel() { this->storagePerformanceLevel_ = nullptr;};
          inline string getStoragePerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(storagePerformanceLevel_, "") };
          inline NodeGroups& setStoragePerformanceLevel(string storagePerformanceLevel) { DARABONBA_PTR_SET_VALUE(storagePerformanceLevel_, storagePerformanceLevel) };


          // storageSize Field Functions 
          bool hasStorageSize() const { return this->storageSize_ != nullptr;};
          void deleteStorageSize() { this->storageSize_ = nullptr;};
          inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
          inline NodeGroups& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


        protected:
          shared_ptr<string> componentType_ {};
          shared_ptr<int32_t> cu_ {};
          shared_ptr<string> diskNumber_ {};
          shared_ptr<string> localStorageInstanceType_ {};
          shared_ptr<string> residentNodeNumber_ {};
          shared_ptr<string> specType_ {};
          shared_ptr<string> storagePerformanceLevel_ {};
          shared_ptr<int32_t> storageSize_ {};
        };

        virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->minorVersion_ == nullptr && this->nodeGroups_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->runMode_ == nullptr
        && this->specType_ == nullptr && this->tags_ == nullptr && this->version_ == nullptr && this->vpcId_ == nullptr; };
        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline InstanceSnapshot& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // minorVersion Field Functions 
        bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
        void deleteMinorVersion() { this->minorVersion_ = nullptr;};
        inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
        inline InstanceSnapshot& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


        // nodeGroups Field Functions 
        bool hasNodeGroups() const { return this->nodeGroups_ != nullptr;};
        void deleteNodeGroups() { this->nodeGroups_ = nullptr;};
        inline const vector<InstanceSnapshot::NodeGroups> & getNodeGroups() const { DARABONBA_PTR_GET_CONST(nodeGroups_, vector<InstanceSnapshot::NodeGroups>) };
        inline vector<InstanceSnapshot::NodeGroups> getNodeGroups() { DARABONBA_PTR_GET(nodeGroups_, vector<InstanceSnapshot::NodeGroups>) };
        inline InstanceSnapshot& setNodeGroups(const vector<InstanceSnapshot::NodeGroups> & nodeGroups) { DARABONBA_PTR_SET_VALUE(nodeGroups_, nodeGroups) };
        inline InstanceSnapshot& setNodeGroups(vector<InstanceSnapshot::NodeGroups> && nodeGroups) { DARABONBA_PTR_SET_RVALUE(nodeGroups_, nodeGroups) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline InstanceSnapshot& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline InstanceSnapshot& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // runMode Field Functions 
        bool hasRunMode() const { return this->runMode_ != nullptr;};
        void deleteRunMode() { this->runMode_ = nullptr;};
        inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
        inline InstanceSnapshot& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


        // specType Field Functions 
        bool hasSpecType() const { return this->specType_ != nullptr;};
        void deleteSpecType() { this->specType_ = nullptr;};
        inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
        inline InstanceSnapshot& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<InstanceSnapshot::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<InstanceSnapshot::Tags>) };
        inline vector<InstanceSnapshot::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<InstanceSnapshot::Tags>) };
        inline InstanceSnapshot& setTags(const vector<InstanceSnapshot::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline InstanceSnapshot& setTags(vector<InstanceSnapshot::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline InstanceSnapshot& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline InstanceSnapshot& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<string> instanceName_ {};
        shared_ptr<string> minorVersion_ {};
        shared_ptr<vector<InstanceSnapshot::NodeGroups>> nodeGroups_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> runMode_ {};
        shared_ptr<string> specType_ {};
        shared_ptr<vector<InstanceSnapshot::Tags>> tags_ {};
        shared_ptr<string> version_ {};
        // VPC ID。
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->backupFinishedTime_ == nullptr
        && this->backupStartTime_ == nullptr && this->backupTaskId_ == nullptr && this->backupType_ == nullptr && this->description_ == nullptr && this->expireTime_ == nullptr
        && this->instanceId_ == nullptr && this->instanceSnapshot_ == nullptr && this->regionId_ == nullptr && this->size_ == nullptr && this->status_ == nullptr
        && this->subTasks_ == nullptr; };
      // backupFinishedTime Field Functions 
      bool hasBackupFinishedTime() const { return this->backupFinishedTime_ != nullptr;};
      void deleteBackupFinishedTime() { this->backupFinishedTime_ = nullptr;};
      inline int64_t getBackupFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(backupFinishedTime_, 0L) };
      inline Data& setBackupFinishedTime(int64_t backupFinishedTime) { DARABONBA_PTR_SET_VALUE(backupFinishedTime_, backupFinishedTime) };


      // backupStartTime Field Functions 
      bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
      void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
      inline int64_t getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, 0L) };
      inline Data& setBackupStartTime(int64_t backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


      // backupTaskId Field Functions 
      bool hasBackupTaskId() const { return this->backupTaskId_ != nullptr;};
      void deleteBackupTaskId() { this->backupTaskId_ = nullptr;};
      inline string getBackupTaskId() const { DARABONBA_PTR_GET_DEFAULT(backupTaskId_, "") };
      inline Data& setBackupTaskId(string backupTaskId) { DARABONBA_PTR_SET_VALUE(backupTaskId_, backupTaskId) };


      // backupType Field Functions 
      bool hasBackupType() const { return this->backupType_ != nullptr;};
      void deleteBackupType() { this->backupType_ = nullptr;};
      inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
      inline Data& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Data& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceSnapshot Field Functions 
      bool hasInstanceSnapshot() const { return this->instanceSnapshot_ != nullptr;};
      void deleteInstanceSnapshot() { this->instanceSnapshot_ = nullptr;};
      inline const Data::InstanceSnapshot & getInstanceSnapshot() const { DARABONBA_PTR_GET_CONST(instanceSnapshot_, Data::InstanceSnapshot) };
      inline Data::InstanceSnapshot getInstanceSnapshot() { DARABONBA_PTR_GET(instanceSnapshot_, Data::InstanceSnapshot) };
      inline Data& setInstanceSnapshot(const Data::InstanceSnapshot & instanceSnapshot) { DARABONBA_PTR_SET_VALUE(instanceSnapshot_, instanceSnapshot) };
      inline Data& setInstanceSnapshot(Data::InstanceSnapshot && instanceSnapshot) { DARABONBA_PTR_SET_RVALUE(instanceSnapshot_, instanceSnapshot) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Data& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subTasks Field Functions 
      bool hasSubTasks() const { return this->subTasks_ != nullptr;};
      void deleteSubTasks() { this->subTasks_ = nullptr;};
      inline const vector<Data::SubTasks> & getSubTasks() const { DARABONBA_PTR_GET_CONST(subTasks_, vector<Data::SubTasks>) };
      inline vector<Data::SubTasks> getSubTasks() { DARABONBA_PTR_GET(subTasks_, vector<Data::SubTasks>) };
      inline Data& setSubTasks(const vector<Data::SubTasks> & subTasks) { DARABONBA_PTR_SET_VALUE(subTasks_, subTasks) };
      inline Data& setSubTasks(vector<Data::SubTasks> && subTasks) { DARABONBA_PTR_SET_RVALUE(subTasks_, subTasks) };


    protected:
      shared_ptr<int64_t> backupFinishedTime_ {};
      shared_ptr<int64_t> backupStartTime_ {};
      shared_ptr<string> backupTaskId_ {};
      shared_ptr<string> backupType_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<Data::InstanceSnapshot> instanceSnapshot_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<int64_t> size_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<Data::SubTasks>> subTasks_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeBackupsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeBackupsResponseBody::Data>) };
    inline vector<DescribeBackupsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeBackupsResponseBody::Data>) };
    inline DescribeBackupsResponseBody& setData(const vector<DescribeBackupsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeBackupsResponseBody& setData(vector<DescribeBackupsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeBackupsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeBackupsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeBackupsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeBackupsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<DescribeBackupsResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
