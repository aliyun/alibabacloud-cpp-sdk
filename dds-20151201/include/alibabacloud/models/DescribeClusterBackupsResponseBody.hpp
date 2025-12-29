// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERBACKUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeClusterBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterBackups, clusterBackups_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterBackups, clusterBackups_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterBackupsResponseBody() = default ;
    DescribeClusterBackupsResponseBody(const DescribeClusterBackupsResponseBody &) = default ;
    DescribeClusterBackupsResponseBody(DescribeClusterBackupsResponseBody &&) = default ;
    DescribeClusterBackupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterBackupsResponseBody() = default ;
    DescribeClusterBackupsResponseBody& operator=(const DescribeClusterBackupsResponseBody &) = default ;
    DescribeClusterBackupsResponseBody& operator=(DescribeClusterBackupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterBackups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterBackups& obj) { 
        DARABONBA_PTR_TO_JSON(AttachLogStatus, attachLogStatus_);
        DARABONBA_PTR_TO_JSON(BackupExpireTime, backupExpireTime_);
        DARABONBA_PTR_TO_JSON(Backups, backups_);
        DARABONBA_PTR_TO_JSON(ClusterBackupEndTime, clusterBackupEndTime_);
        DARABONBA_PTR_TO_JSON(ClusterBackupId, clusterBackupId_);
        DARABONBA_PTR_TO_JSON(ClusterBackupMode, clusterBackupMode_);
        DARABONBA_PTR_TO_JSON(ClusterBackupSize, clusterBackupSize_);
        DARABONBA_PTR_TO_JSON(ClusterBackupStartTime, clusterBackupStartTime_);
        DARABONBA_PTR_TO_JSON(ClusterBackupStatus, clusterBackupStatus_);
        DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_TO_JSON(IsAvail, isAvail_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterBackups& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachLogStatus, attachLogStatus_);
        DARABONBA_PTR_FROM_JSON(BackupExpireTime, backupExpireTime_);
        DARABONBA_PTR_FROM_JSON(Backups, backups_);
        DARABONBA_PTR_FROM_JSON(ClusterBackupEndTime, clusterBackupEndTime_);
        DARABONBA_PTR_FROM_JSON(ClusterBackupId, clusterBackupId_);
        DARABONBA_PTR_FROM_JSON(ClusterBackupMode, clusterBackupMode_);
        DARABONBA_PTR_FROM_JSON(ClusterBackupSize, clusterBackupSize_);
        DARABONBA_PTR_FROM_JSON(ClusterBackupStartTime, clusterBackupStartTime_);
        DARABONBA_PTR_FROM_JSON(ClusterBackupStatus, clusterBackupStatus_);
        DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
        DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_FROM_JSON(IsAvail, isAvail_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
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
      class ExtraInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtraInfo& obj) { 
          DARABONBA_PTR_TO_JSON(RegistryFromHistory, registryFromHistory_);
        };
        friend void from_json(const Darabonba::Json& j, ExtraInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(RegistryFromHistory, registryFromHistory_);
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
        virtual bool empty() const override { return this->registryFromHistory_ == nullptr; };
        // registryFromHistory Field Functions 
        bool hasRegistryFromHistory() const { return this->registryFromHistory_ != nullptr;};
        void deleteRegistryFromHistory() { this->registryFromHistory_ = nullptr;};
        inline string getRegistryFromHistory() const { DARABONBA_PTR_GET_DEFAULT(registryFromHistory_, "") };
        inline ExtraInfo& setRegistryFromHistory(string registryFromHistory) { DARABONBA_PTR_SET_VALUE(registryFromHistory_, registryFromHistory) };


      protected:
        // Indicates whether the cluster backups are migrated from the historical backup sets. If the value of this parameter is **1**, the cluster backups are migrated from the historical backup sets.
        shared_ptr<string> registryFromHistory_ {};
      };

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
          DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(IsAvail, isAvail_);
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
          DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(IsAvail, isAvail_);
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
            DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
            DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
          };
          friend void from_json(const Darabonba::Json& j, ExtraInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
            DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
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
          virtual bool empty() const override { return this->instanceClass_ == nullptr
        && this->nodeId_ == nullptr && this->nodeType_ == nullptr && this->storageSize_ == nullptr; };
          // instanceClass Field Functions 
          bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
          void deleteInstanceClass() { this->instanceClass_ = nullptr;};
          inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
          inline ExtraInfo& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline ExtraInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          // nodeType Field Functions 
          bool hasNodeType() const { return this->nodeType_ != nullptr;};
          void deleteNodeType() { this->nodeType_ = nullptr;};
          inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
          inline ExtraInfo& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


          // storageSize Field Functions 
          bool hasStorageSize() const { return this->storageSize_ != nullptr;};
          void deleteStorageSize() { this->storageSize_ = nullptr;};
          inline string getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, "") };
          inline ExtraInfo& setStorageSize(string storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


        protected:
          // The instance type of the node.
          shared_ptr<string> instanceClass_ {};
          // The node ID.
          shared_ptr<string> nodeId_ {};
          // The node type.
          shared_ptr<string> nodeType_ {};
          // The storage capacity of the node. Unit: MB.
          shared_ptr<string> storageSize_ {};
        };

        virtual bool empty() const override { return this->backupDownloadURL_ == nullptr
        && this->backupEndTime_ == nullptr && this->backupId_ == nullptr && this->backupIntranetDownloadURL_ == nullptr && this->backupName_ == nullptr && this->backupSize_ == nullptr
        && this->backupStartTime_ == nullptr && this->backupStatus_ == nullptr && this->extraInfo_ == nullptr && this->instanceName_ == nullptr && this->isAvail_ == nullptr; };
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


      protected:
        // The URL that is used to download the backup set over the Internet. If the backup set cannot be downloaded, an empty string is returned.
        shared_ptr<string> backupDownloadURL_ {};
        // The end time of the backup. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> backupEndTime_ {};
        // The ID of the backup set.
        shared_ptr<string> backupId_ {};
        // The URL that is used to download the backup set over an internal network. If the backup set cannot be downloaded, null is returned.
        shared_ptr<string> backupIntranetDownloadURL_ {};
        // The backup name.
        shared_ptr<string> backupName_ {};
        // The size of the backup file. Unit: bytes.
        shared_ptr<string> backupSize_ {};
        // The start time of the backup. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> backupStartTime_ {};
        // The status of the backup task. Valid values:
        // 
        // *   **Success**: The backup task is successful.
        // *   **Failed**: The backup task failed.
        shared_ptr<string> backupStatus_ {};
        // The information of the node associated with the backup.
        shared_ptr<Backups::ExtraInfo> extraInfo_ {};
        // The shard name.
        shared_ptr<string> instanceName_ {};
        // Indicates whether the backup set is available. Valid values:
        // 
        // *   **0**: unavailable
        // *   **1**: available
        shared_ptr<string> isAvail_ {};
      };

      virtual bool empty() const override { return this->attachLogStatus_ == nullptr
        && this->backupExpireTime_ == nullptr && this->backups_ == nullptr && this->clusterBackupEndTime_ == nullptr && this->clusterBackupId_ == nullptr && this->clusterBackupMode_ == nullptr
        && this->clusterBackupSize_ == nullptr && this->clusterBackupStartTime_ == nullptr && this->clusterBackupStatus_ == nullptr && this->engineVersion_ == nullptr && this->extraInfo_ == nullptr
        && this->isAvail_ == nullptr && this->progress_ == nullptr; };
      // attachLogStatus Field Functions 
      bool hasAttachLogStatus() const { return this->attachLogStatus_ != nullptr;};
      void deleteAttachLogStatus() { this->attachLogStatus_ = nullptr;};
      inline string getAttachLogStatus() const { DARABONBA_PTR_GET_DEFAULT(attachLogStatus_, "") };
      inline ClusterBackups& setAttachLogStatus(string attachLogStatus) { DARABONBA_PTR_SET_VALUE(attachLogStatus_, attachLogStatus) };


      // backupExpireTime Field Functions 
      bool hasBackupExpireTime() const { return this->backupExpireTime_ != nullptr;};
      void deleteBackupExpireTime() { this->backupExpireTime_ = nullptr;};
      inline string getBackupExpireTime() const { DARABONBA_PTR_GET_DEFAULT(backupExpireTime_, "") };
      inline ClusterBackups& setBackupExpireTime(string backupExpireTime) { DARABONBA_PTR_SET_VALUE(backupExpireTime_, backupExpireTime) };


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


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline ClusterBackups& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline const ClusterBackups::ExtraInfo & getExtraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, ClusterBackups::ExtraInfo) };
      inline ClusterBackups::ExtraInfo getExtraInfo() { DARABONBA_PTR_GET(extraInfo_, ClusterBackups::ExtraInfo) };
      inline ClusterBackups& setExtraInfo(const ClusterBackups::ExtraInfo & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
      inline ClusterBackups& setExtraInfo(ClusterBackups::ExtraInfo && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


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


    protected:
      // The backup status. Valid values:
      // 
      // *   **init**: The backup is being initialized.
      // *   **No_Need**: Log backup is not performed.
      // *   **Running**: Log backup is being performed.
      // *   **Ready**: Log backup is complete.
      // *   **Failed**: Log backup failed.
      // 
      // >  If the **ClusterBackupStatus** parameter is set to OK, full backup is successful. If you want to perform point-in-time-restoration on an instance for which log backup is enabled or to implement consistency restoration, make sure that log backup is complete.
      shared_ptr<string> attachLogStatus_ {};
      shared_ptr<string> backupExpireTime_ {};
      // The collection of the backup sets of each child node in a cluster backup set.
      shared_ptr<vector<ClusterBackups::Backups>> backups_ {};
      // The end of the time range within which the cluster backup is performed.
      shared_ptr<string> clusterBackupEndTime_ {};
      // The backup set ID.
      shared_ptr<string> clusterBackupId_ {};
      // The cluster backup mode.
      shared_ptr<string> clusterBackupMode_ {};
      // The size of the cluster backup set. Unit: bytes.
      shared_ptr<string> clusterBackupSize_ {};
      // The beginning of the time range within which the cluster backup is performed.
      shared_ptr<string> clusterBackupStartTime_ {};
      // The status of the cluster backup set.
      shared_ptr<string> clusterBackupStatus_ {};
      // Version of the backuped instance.
      // 
      // *   **6.0**
      // *   **5.0**
      // *   **4.4**
      // *   **4.2**
      // *   **4.0**
      // *   **3.4**
      shared_ptr<string> engineVersion_ {};
      // The additional information in the JSON format.
      shared_ptr<ClusterBackups::ExtraInfo> extraInfo_ {};
      // Indicates whether the cluster backup sets take effect. Valid values:
      // 
      // *   **1**: The cluster backup sets take effect.
      // *   **0**: The backup sets of child nodes are incomplete or fail.
      shared_ptr<int32_t> isAvail_ {};
      // The progress of the backup task. Unit: %. The progress is returned only for running backup tasks.
      shared_ptr<string> progress_ {};
    };

    virtual bool empty() const override { return this->clusterBackups_ == nullptr
        && this->maxResults_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr; };
    // clusterBackups Field Functions 
    bool hasClusterBackups() const { return this->clusterBackups_ != nullptr;};
    void deleteClusterBackups() { this->clusterBackups_ = nullptr;};
    inline const vector<DescribeClusterBackupsResponseBody::ClusterBackups> & getClusterBackups() const { DARABONBA_PTR_GET_CONST(clusterBackups_, vector<DescribeClusterBackupsResponseBody::ClusterBackups>) };
    inline vector<DescribeClusterBackupsResponseBody::ClusterBackups> getClusterBackups() { DARABONBA_PTR_GET(clusterBackups_, vector<DescribeClusterBackupsResponseBody::ClusterBackups>) };
    inline DescribeClusterBackupsResponseBody& setClusterBackups(const vector<DescribeClusterBackupsResponseBody::ClusterBackups> & clusterBackups) { DARABONBA_PTR_SET_VALUE(clusterBackups_, clusterBackups) };
    inline DescribeClusterBackupsResponseBody& setClusterBackups(vector<DescribeClusterBackupsResponseBody::ClusterBackups> && clusterBackups) { DARABONBA_PTR_SET_RVALUE(clusterBackups_, clusterBackups) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeClusterBackupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeClusterBackupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeClusterBackupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cluster backup sets. A cluster backup file contains the backup sets of each node.
    shared_ptr<vector<DescribeClusterBackupsResponseBody::ClusterBackups>> clusterBackups_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // The page number of the page returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
