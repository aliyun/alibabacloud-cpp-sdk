// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERBACKUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERBACKUPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeClusterBackupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterBackupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterBackups, clusterBackups_);
      DARABONBA_PTR_TO_JSON(FreeSize, freeSize_);
      DARABONBA_PTR_TO_JSON(FullStorageSize, fullStorageSize_);
      DARABONBA_PTR_TO_JSON(LogStorageSize, logStorageSize_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterBackupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterBackups, clusterBackups_);
      DARABONBA_PTR_FROM_JSON(FreeSize, freeSize_);
      DARABONBA_PTR_FROM_JSON(FullStorageSize, fullStorageSize_);
      DARABONBA_PTR_FROM_JSON(LogStorageSize, logStorageSize_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterBackupListResponseBody() = default ;
    DescribeClusterBackupListResponseBody(const DescribeClusterBackupListResponseBody &) = default ;
    DescribeClusterBackupListResponseBody(DescribeClusterBackupListResponseBody &&) = default ;
    DescribeClusterBackupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterBackupListResponseBody() = default ;
    DescribeClusterBackupListResponseBody& operator=(const DescribeClusterBackupListResponseBody &) = default ;
    DescribeClusterBackupListResponseBody& operator=(DescribeClusterBackupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterBackups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterBackups& obj) { 
        DARABONBA_PTR_TO_JSON(Backups, backups_);
        DARABONBA_PTR_TO_JSON(ClusterBackupEndTime, clusterBackupEndTime_);
        DARABONBA_PTR_TO_JSON(ClusterBackupId, clusterBackupId_);
        DARABONBA_PTR_TO_JSON(ClusterBackupMode, clusterBackupMode_);
        DARABONBA_PTR_TO_JSON(ClusterBackupSize, clusterBackupSize_);
        DARABONBA_PTR_TO_JSON(ClusterBackupStartTime, clusterBackupStartTime_);
        DARABONBA_PTR_TO_JSON(ClusterBackupStatus, clusterBackupStatus_);
        DARABONBA_PTR_TO_JSON(ExpectExpireTime, expectExpireTime_);
        DARABONBA_PTR_TO_JSON(IsAvail, isAvail_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(ShardClassMemory, shardClassMemory_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterBackups& obj) { 
        DARABONBA_PTR_FROM_JSON(Backups, backups_);
        DARABONBA_PTR_FROM_JSON(ClusterBackupEndTime, clusterBackupEndTime_);
        DARABONBA_PTR_FROM_JSON(ClusterBackupId, clusterBackupId_);
        DARABONBA_PTR_FROM_JSON(ClusterBackupMode, clusterBackupMode_);
        DARABONBA_PTR_FROM_JSON(ClusterBackupSize, clusterBackupSize_);
        DARABONBA_PTR_FROM_JSON(ClusterBackupStartTime, clusterBackupStartTime_);
        DARABONBA_PTR_FROM_JSON(ClusterBackupStatus, clusterBackupStatus_);
        DARABONBA_PTR_FROM_JSON(ExpectExpireTime, expectExpireTime_);
        DARABONBA_PTR_FROM_JSON(IsAvail, isAvail_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(ShardClassMemory, shardClassMemory_);
      };
      ClusterBackups() = default ;
      ClusterBackups(const ClusterBackups &) = default ;
      ClusterBackups(ClusterBackups &&) = default ;
      ClusterBackups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterBackups() = default ;
      ClusterBackups& operator=(const ClusterBackups &) = default ;
      ClusterBackups& operator=(ClusterBackups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Backups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Backups& obj) { 
          DARABONBA_PTR_TO_JSON(BackupDownloadURL, backupDownloadURL_);
          DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_TO_JSON(BackupId, backupId_);
          DARABONBA_PTR_TO_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
          DARABONBA_PTR_TO_JSON(BackupName, backupName_);
          DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(IsAvail, isAvail_);
          DARABONBA_PTR_TO_JSON(RecoverConfigMode, recoverConfigMode_);
        };
        friend void from_json(const Darabonba::Json& j, Backups& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupDownloadURL, backupDownloadURL_);
          DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
          DARABONBA_PTR_FROM_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
          DARABONBA_PTR_FROM_JSON(BackupName, backupName_);
          DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(IsAvail, isAvail_);
          DARABONBA_PTR_FROM_JSON(RecoverConfigMode, recoverConfigMode_);
        };
        Backups() = default ;
        Backups(const Backups &) = default ;
        Backups(Backups &&) = default ;
        Backups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Backups() = default ;
        Backups& operator=(const Backups &) = default ;
        Backups& operator=(Backups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ExtraInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExtraInfo& obj) { 
            DARABONBA_PTR_TO_JSON(CustinsDbVersion, custinsDbVersion_);
          };
          friend void from_json(const Darabonba::Json& j, ExtraInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(CustinsDbVersion, custinsDbVersion_);
          };
          ExtraInfo() = default ;
          ExtraInfo(const ExtraInfo &) = default ;
          ExtraInfo(ExtraInfo &&) = default ;
          ExtraInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExtraInfo() = default ;
          ExtraInfo& operator=(const ExtraInfo &) = default ;
          ExtraInfo& operator=(ExtraInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->custinsDbVersion_ == nullptr; };
          // custinsDbVersion Field Functions 
          bool hasCustinsDbVersion() const { return this->custinsDbVersion_ != nullptr;};
          void deleteCustinsDbVersion() { this->custinsDbVersion_ = nullptr;};
          inline string getCustinsDbVersion() const { DARABONBA_PTR_GET_DEFAULT(custinsDbVersion_, "") };
          inline ExtraInfo& setCustinsDbVersion(string custinsDbVersion) { DARABONBA_PTR_SET_VALUE(custinsDbVersion_, custinsDbVersion) };


        protected:
          // The engine version.
          shared_ptr<string> custinsDbVersion_ {};
        };

        virtual bool empty() const override { return this->backupDownloadURL_ == nullptr
        && this->backupEndTime_ == nullptr && this->backupId_ == nullptr && this->backupIntranetDownloadURL_ == nullptr && this->backupName_ == nullptr && this->backupSize_ == nullptr
        && this->backupStartTime_ == nullptr && this->backupStatus_ == nullptr && this->engine_ == nullptr && this->extraInfo_ == nullptr && this->instanceName_ == nullptr
        && this->isAvail_ == nullptr && this->recoverConfigMode_ == nullptr; };
        // backupDownloadURL Field Functions 
        bool hasBackupDownloadURL() const { return this->backupDownloadURL_ != nullptr;};
        void deleteBackupDownloadURL() { this->backupDownloadURL_ = nullptr;};
        inline string getBackupDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(backupDownloadURL_, "") };
        inline Backups& setBackupDownloadURL(string backupDownloadURL) { DARABONBA_PTR_SET_VALUE(backupDownloadURL_, backupDownloadURL) };


        // backupEndTime Field Functions 
        bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
        void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
        inline string getBackupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
        inline Backups& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


        // backupId Field Functions 
        bool hasBackupId() const { return this->backupId_ != nullptr;};
        void deleteBackupId() { this->backupId_ = nullptr;};
        inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
        inline Backups& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


        // backupIntranetDownloadURL Field Functions 
        bool hasBackupIntranetDownloadURL() const { return this->backupIntranetDownloadURL_ != nullptr;};
        void deleteBackupIntranetDownloadURL() { this->backupIntranetDownloadURL_ = nullptr;};
        inline string getBackupIntranetDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(backupIntranetDownloadURL_, "") };
        inline Backups& setBackupIntranetDownloadURL(string backupIntranetDownloadURL) { DARABONBA_PTR_SET_VALUE(backupIntranetDownloadURL_, backupIntranetDownloadURL) };


        // backupName Field Functions 
        bool hasBackupName() const { return this->backupName_ != nullptr;};
        void deleteBackupName() { this->backupName_ = nullptr;};
        inline string getBackupName() const { DARABONBA_PTR_GET_DEFAULT(backupName_, "") };
        inline Backups& setBackupName(string backupName) { DARABONBA_PTR_SET_VALUE(backupName_, backupName) };


        // backupSize Field Functions 
        bool hasBackupSize() const { return this->backupSize_ != nullptr;};
        void deleteBackupSize() { this->backupSize_ = nullptr;};
        inline string getBackupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, "") };
        inline Backups& setBackupSize(string backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


        // backupStartTime Field Functions 
        bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
        void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
        inline string getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
        inline Backups& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


        // backupStatus Field Functions 
        bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
        void deleteBackupStatus() { this->backupStatus_ = nullptr;};
        inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
        inline Backups& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline Backups& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // extraInfo Field Functions 
        bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
        void deleteExtraInfo() { this->extraInfo_ = nullptr;};
        inline const Backups::ExtraInfo & getExtraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, Backups::ExtraInfo) };
        inline Backups::ExtraInfo getExtraInfo() { DARABONBA_PTR_GET(extraInfo_, Backups::ExtraInfo) };
        inline Backups& setExtraInfo(const Backups::ExtraInfo & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
        inline Backups& setExtraInfo(Backups::ExtraInfo && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Backups& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // isAvail Field Functions 
        bool hasIsAvail() const { return this->isAvail_ != nullptr;};
        void deleteIsAvail() { this->isAvail_ = nullptr;};
        inline string getIsAvail() const { DARABONBA_PTR_GET_DEFAULT(isAvail_, "") };
        inline Backups& setIsAvail(string isAvail) { DARABONBA_PTR_SET_VALUE(isAvail_, isAvail) };


        // recoverConfigMode Field Functions 
        bool hasRecoverConfigMode() const { return this->recoverConfigMode_ != nullptr;};
        void deleteRecoverConfigMode() { this->recoverConfigMode_ = nullptr;};
        inline string getRecoverConfigMode() const { DARABONBA_PTR_GET_DEFAULT(recoverConfigMode_, "") };
        inline Backups& setRecoverConfigMode(string recoverConfigMode) { DARABONBA_PTR_SET_VALUE(recoverConfigMode_, recoverConfigMode) };


      protected:
        // The public download URL of the backup file.
        shared_ptr<string> backupDownloadURL_ {};
        // The end time of the backup. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> backupEndTime_ {};
        // The ID of the backup file.
        shared_ptr<string> backupId_ {};
        // The internal download URL of the backup file.
        // 
        // >  You can use this URL to download the backup file from an Elastic Compute Service (ECS) instance that is connected to the Tair (Redis OSS-compatible) instance. The ECS instance must reside in the same virtual private cloud (VPC) as the Tair (Redis OSS-compatible) instance.
        shared_ptr<string> backupIntranetDownloadURL_ {};
        // The name of the backup.
        shared_ptr<string> backupName_ {};
        // The size of the backup file. Unit: bytes.
        shared_ptr<string> backupSize_ {};
        // The start time of the backup. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> backupStartTime_ {};
        // The status of the backup. Valid values:
        // 
        // *   **OK**
        // *   **ERROR**
        shared_ptr<string> backupStatus_ {};
        // The database engine. The return value is **redis**.
        shared_ptr<string> engine_ {};
        // The additional information.
        shared_ptr<Backups::ExtraInfo> extraInfo_ {};
        // The instance name.
        shared_ptr<string> instanceName_ {};
        // Indicates whether the backup set is available. Valid values:
        // 
        // *   **0**: unavailable
        // *   **1**: available
        shared_ptr<string> isAvail_ {};
        // This parameter does not take effect. Ignore this parameter.
        shared_ptr<string> recoverConfigMode_ {};
      };

      virtual bool empty() const override { return this->backups_ == nullptr
        && this->clusterBackupEndTime_ == nullptr && this->clusterBackupId_ == nullptr && this->clusterBackupMode_ == nullptr && this->clusterBackupSize_ == nullptr && this->clusterBackupStartTime_ == nullptr
        && this->clusterBackupStatus_ == nullptr && this->expectExpireTime_ == nullptr && this->isAvail_ == nullptr && this->progress_ == nullptr && this->shardClassMemory_ == nullptr; };
      // backups Field Functions 
      bool hasBackups() const { return this->backups_ != nullptr;};
      void deleteBackups() { this->backups_ = nullptr;};
      inline const vector<ClusterBackups::Backups> & getBackups() const { DARABONBA_PTR_GET_CONST(backups_, vector<ClusterBackups::Backups>) };
      inline vector<ClusterBackups::Backups> getBackups() { DARABONBA_PTR_GET(backups_, vector<ClusterBackups::Backups>) };
      inline ClusterBackups& setBackups(const vector<ClusterBackups::Backups> & backups) { DARABONBA_PTR_SET_VALUE(backups_, backups) };
      inline ClusterBackups& setBackups(vector<ClusterBackups::Backups> && backups) { DARABONBA_PTR_SET_RVALUE(backups_, backups) };


      // clusterBackupEndTime Field Functions 
      bool hasClusterBackupEndTime() const { return this->clusterBackupEndTime_ != nullptr;};
      void deleteClusterBackupEndTime() { this->clusterBackupEndTime_ = nullptr;};
      inline string getClusterBackupEndTime() const { DARABONBA_PTR_GET_DEFAULT(clusterBackupEndTime_, "") };
      inline ClusterBackups& setClusterBackupEndTime(string clusterBackupEndTime) { DARABONBA_PTR_SET_VALUE(clusterBackupEndTime_, clusterBackupEndTime) };


      // clusterBackupId Field Functions 
      bool hasClusterBackupId() const { return this->clusterBackupId_ != nullptr;};
      void deleteClusterBackupId() { this->clusterBackupId_ = nullptr;};
      inline string getClusterBackupId() const { DARABONBA_PTR_GET_DEFAULT(clusterBackupId_, "") };
      inline ClusterBackups& setClusterBackupId(string clusterBackupId) { DARABONBA_PTR_SET_VALUE(clusterBackupId_, clusterBackupId) };


      // clusterBackupMode Field Functions 
      bool hasClusterBackupMode() const { return this->clusterBackupMode_ != nullptr;};
      void deleteClusterBackupMode() { this->clusterBackupMode_ = nullptr;};
      inline string getClusterBackupMode() const { DARABONBA_PTR_GET_DEFAULT(clusterBackupMode_, "") };
      inline ClusterBackups& setClusterBackupMode(string clusterBackupMode) { DARABONBA_PTR_SET_VALUE(clusterBackupMode_, clusterBackupMode) };


      // clusterBackupSize Field Functions 
      bool hasClusterBackupSize() const { return this->clusterBackupSize_ != nullptr;};
      void deleteClusterBackupSize() { this->clusterBackupSize_ = nullptr;};
      inline string getClusterBackupSize() const { DARABONBA_PTR_GET_DEFAULT(clusterBackupSize_, "") };
      inline ClusterBackups& setClusterBackupSize(string clusterBackupSize) { DARABONBA_PTR_SET_VALUE(clusterBackupSize_, clusterBackupSize) };


      // clusterBackupStartTime Field Functions 
      bool hasClusterBackupStartTime() const { return this->clusterBackupStartTime_ != nullptr;};
      void deleteClusterBackupStartTime() { this->clusterBackupStartTime_ = nullptr;};
      inline string getClusterBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(clusterBackupStartTime_, "") };
      inline ClusterBackups& setClusterBackupStartTime(string clusterBackupStartTime) { DARABONBA_PTR_SET_VALUE(clusterBackupStartTime_, clusterBackupStartTime) };


      // clusterBackupStatus Field Functions 
      bool hasClusterBackupStatus() const { return this->clusterBackupStatus_ != nullptr;};
      void deleteClusterBackupStatus() { this->clusterBackupStatus_ = nullptr;};
      inline string getClusterBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterBackupStatus_, "") };
      inline ClusterBackups& setClusterBackupStatus(string clusterBackupStatus) { DARABONBA_PTR_SET_VALUE(clusterBackupStatus_, clusterBackupStatus) };


      // expectExpireTime Field Functions 
      bool hasExpectExpireTime() const { return this->expectExpireTime_ != nullptr;};
      void deleteExpectExpireTime() { this->expectExpireTime_ = nullptr;};
      inline string getExpectExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expectExpireTime_, "") };
      inline ClusterBackups& setExpectExpireTime(string expectExpireTime) { DARABONBA_PTR_SET_VALUE(expectExpireTime_, expectExpireTime) };


      // isAvail Field Functions 
      bool hasIsAvail() const { return this->isAvail_ != nullptr;};
      void deleteIsAvail() { this->isAvail_ = nullptr;};
      inline int32_t getIsAvail() const { DARABONBA_PTR_GET_DEFAULT(isAvail_, 0) };
      inline ClusterBackups& setIsAvail(int32_t isAvail) { DARABONBA_PTR_SET_VALUE(isAvail_, isAvail) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline ClusterBackups& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // shardClassMemory Field Functions 
      bool hasShardClassMemory() const { return this->shardClassMemory_ != nullptr;};
      void deleteShardClassMemory() { this->shardClassMemory_ = nullptr;};
      inline int32_t getShardClassMemory() const { DARABONBA_PTR_GET_DEFAULT(shardClassMemory_, 0) };
      inline ClusterBackups& setShardClassMemory(int32_t shardClassMemory) { DARABONBA_PTR_SET_VALUE(shardClassMemory_, shardClassMemory) };


    protected:
      // The backup sets of all shards in the instance.
      shared_ptr<vector<ClusterBackups::Backups>> backups_ {};
      // The end time of the backup.
      shared_ptr<string> clusterBackupEndTime_ {};
      // The ID of the backup set.
      shared_ptr<string> clusterBackupId_ {};
      // The backup mode.
      shared_ptr<string> clusterBackupMode_ {};
      // The size of the backup set.
      shared_ptr<string> clusterBackupSize_ {};
      // The start time of the backup.
      shared_ptr<string> clusterBackupStartTime_ {};
      // The status of the backup set.
      // 
      // *   OK
      // *   RUNNING
      // *   Failed
      shared_ptr<string> clusterBackupStatus_ {};
      shared_ptr<string> expectExpireTime_ {};
      // Indicates whether the backup set is valid. A value of 0 indicates that shard-level backups failed or have not been completed.
      shared_ptr<int32_t> isAvail_ {};
      // The backup progress. The system displays only the progress of running backup tasks.
      shared_ptr<string> progress_ {};
      // The memory size of a single shard during a full backup. Unit: MB.
      shared_ptr<int32_t> shardClassMemory_ {};
    };

    virtual bool empty() const override { return this->clusterBackups_ == nullptr
        && this->freeSize_ == nullptr && this->fullStorageSize_ == nullptr && this->logStorageSize_ == nullptr && this->maxResults_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr; };
    // clusterBackups Field Functions 
    bool hasClusterBackups() const { return this->clusterBackups_ != nullptr;};
    void deleteClusterBackups() { this->clusterBackups_ = nullptr;};
    inline const vector<DescribeClusterBackupListResponseBody::ClusterBackups> & getClusterBackups() const { DARABONBA_PTR_GET_CONST(clusterBackups_, vector<DescribeClusterBackupListResponseBody::ClusterBackups>) };
    inline vector<DescribeClusterBackupListResponseBody::ClusterBackups> getClusterBackups() { DARABONBA_PTR_GET(clusterBackups_, vector<DescribeClusterBackupListResponseBody::ClusterBackups>) };
    inline DescribeClusterBackupListResponseBody& setClusterBackups(const vector<DescribeClusterBackupListResponseBody::ClusterBackups> & clusterBackups) { DARABONBA_PTR_SET_VALUE(clusterBackups_, clusterBackups) };
    inline DescribeClusterBackupListResponseBody& setClusterBackups(vector<DescribeClusterBackupListResponseBody::ClusterBackups> && clusterBackups) { DARABONBA_PTR_SET_RVALUE(clusterBackups_, clusterBackups) };


    // freeSize Field Functions 
    bool hasFreeSize() const { return this->freeSize_ != nullptr;};
    void deleteFreeSize() { this->freeSize_ = nullptr;};
    inline int64_t getFreeSize() const { DARABONBA_PTR_GET_DEFAULT(freeSize_, 0L) };
    inline DescribeClusterBackupListResponseBody& setFreeSize(int64_t freeSize) { DARABONBA_PTR_SET_VALUE(freeSize_, freeSize) };


    // fullStorageSize Field Functions 
    bool hasFullStorageSize() const { return this->fullStorageSize_ != nullptr;};
    void deleteFullStorageSize() { this->fullStorageSize_ = nullptr;};
    inline int64_t getFullStorageSize() const { DARABONBA_PTR_GET_DEFAULT(fullStorageSize_, 0L) };
    inline DescribeClusterBackupListResponseBody& setFullStorageSize(int64_t fullStorageSize) { DARABONBA_PTR_SET_VALUE(fullStorageSize_, fullStorageSize) };


    // logStorageSize Field Functions 
    bool hasLogStorageSize() const { return this->logStorageSize_ != nullptr;};
    void deleteLogStorageSize() { this->logStorageSize_ = nullptr;};
    inline int64_t getLogStorageSize() const { DARABONBA_PTR_GET_DEFAULT(logStorageSize_, 0L) };
    inline DescribeClusterBackupListResponseBody& setLogStorageSize(int64_t logStorageSize) { DARABONBA_PTR_SET_VALUE(logStorageSize_, logStorageSize) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeClusterBackupListResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeClusterBackupListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeClusterBackupListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterBackupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The backup sets of the instance. A backup contains the backup sets of all shards in the instance.
    shared_ptr<vector<DescribeClusterBackupListResponseBody::ClusterBackups>> clusterBackups_ {};
    // This parameter does not take effect. Ignore this parameter.
    shared_ptr<int64_t> freeSize_ {};
    // The size of the full backup file of the instance. Unit: bytes. Full backups originate from scheduled backups, manual backups, and backups generated during cache analysis.
    // 
    // >  The value of this parameter is independent of the number and size of returned backup sets. Instead, it represents the size of all valid full backups of the instance.
    shared_ptr<int64_t> fullStorageSize_ {};
    // The size of the log backup file of the instance. Unit: bytes. This parameter is valid only when flashback is enabled.
    // 
    // >  The value of this parameter is independent of the number and size of returned backup sets. Instead, it represents the size of all valid log backups of the instance.
    shared_ptr<int64_t> logStorageSize_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
