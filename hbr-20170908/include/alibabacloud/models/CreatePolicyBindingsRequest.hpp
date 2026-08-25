// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreatePolicyBindingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyBindingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyBindingList, policyBindingList_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyBindingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyBindingList, policyBindingList_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    CreatePolicyBindingsRequest() = default ;
    CreatePolicyBindingsRequest(const CreatePolicyBindingsRequest &) = default ;
    CreatePolicyBindingsRequest(CreatePolicyBindingsRequest &&) = default ;
    CreatePolicyBindingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyBindingsRequest() = default ;
    CreatePolicyBindingsRequest& operator=(const CreatePolicyBindingsRequest &) = default ;
    CreatePolicyBindingsRequest& operator=(CreatePolicyBindingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyBindingList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyBindingList& obj) { 
        DARABONBA_PTR_TO_JSON(AdvancedOptions, advancedOptions_);
        DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
        DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
        DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(Disabled, disabled_);
        DARABONBA_PTR_TO_JSON(Exclude, exclude_);
        DARABONBA_PTR_TO_JSON(Include, include_);
        DARABONBA_PTR_TO_JSON(PolicyBindingDescription, policyBindingDescription_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(SpeedLimit, speedLimit_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyBindingList& obj) { 
        DARABONBA_PTR_FROM_JSON(AdvancedOptions, advancedOptions_);
        DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
        DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
        DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
        DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
        DARABONBA_PTR_FROM_JSON(Include, include_);
        DARABONBA_PTR_FROM_JSON(PolicyBindingDescription, policyBindingDescription_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(SpeedLimit, speedLimit_);
      };
      PolicyBindingList() = default ;
      PolicyBindingList(const PolicyBindingList &) = default ;
      PolicyBindingList(PolicyBindingList &&) = default ;
      PolicyBindingList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyBindingList() = default ;
      PolicyBindingList& operator=(const PolicyBindingList &) = default ;
      PolicyBindingList& operator=(PolicyBindingList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AdvancedOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdvancedOptions& obj) { 
          DARABONBA_PTR_TO_JSON(CommonFileSystemDetail, commonFileSystemDetail_);
          DARABONBA_PTR_TO_JSON(CommonNasDetail, commonNasDetail_);
          DARABONBA_PTR_TO_JSON(FileDetail, fileDetail_);
          DARABONBA_PTR_TO_JSON(OssDetail, ossDetail_);
          DARABONBA_PTR_TO_JSON(UdmDetail, udmDetail_);
        };
        friend void from_json(const Darabonba::Json& j, AdvancedOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(CommonFileSystemDetail, commonFileSystemDetail_);
          DARABONBA_PTR_FROM_JSON(CommonNasDetail, commonNasDetail_);
          DARABONBA_PTR_FROM_JSON(FileDetail, fileDetail_);
          DARABONBA_PTR_FROM_JSON(OssDetail, ossDetail_);
          DARABONBA_PTR_FROM_JSON(UdmDetail, udmDetail_);
        };
        AdvancedOptions() = default ;
        AdvancedOptions(const AdvancedOptions &) = default ;
        AdvancedOptions(AdvancedOptions &&) = default ;
        AdvancedOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdvancedOptions() = default ;
        AdvancedOptions& operator=(const AdvancedOptions &) = default ;
        AdvancedOptions& operator=(AdvancedOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UdmDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UdmDetail& obj) { 
            DARABONBA_PTR_TO_JSON(AppConsistent, appConsistent_);
            DARABONBA_PTR_TO_JSON(DiskIdList, diskIdList_);
            DARABONBA_PTR_TO_JSON(EnableFsFreeze, enableFsFreeze_);
            DARABONBA_PTR_TO_JSON(EnableWriters, enableWriters_);
            DARABONBA_PTR_TO_JSON(ExcludeDiskIdList, excludeDiskIdList_);
            DARABONBA_PTR_TO_JSON(PostScriptPath, postScriptPath_);
            DARABONBA_PTR_TO_JSON(PreScriptPath, preScriptPath_);
            DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
            DARABONBA_PTR_TO_JSON(SnapshotGroup, snapshotGroup_);
            DARABONBA_PTR_TO_JSON(TimeoutInSeconds, timeoutInSeconds_);
          };
          friend void from_json(const Darabonba::Json& j, UdmDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(AppConsistent, appConsistent_);
            DARABONBA_PTR_FROM_JSON(DiskIdList, diskIdList_);
            DARABONBA_PTR_FROM_JSON(EnableFsFreeze, enableFsFreeze_);
            DARABONBA_PTR_FROM_JSON(EnableWriters, enableWriters_);
            DARABONBA_PTR_FROM_JSON(ExcludeDiskIdList, excludeDiskIdList_);
            DARABONBA_PTR_FROM_JSON(PostScriptPath, postScriptPath_);
            DARABONBA_PTR_FROM_JSON(PreScriptPath, preScriptPath_);
            DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
            DARABONBA_PTR_FROM_JSON(SnapshotGroup, snapshotGroup_);
            DARABONBA_PTR_FROM_JSON(TimeoutInSeconds, timeoutInSeconds_);
          };
          UdmDetail() = default ;
          UdmDetail(const UdmDetail &) = default ;
          UdmDetail(UdmDetail &&) = default ;
          UdmDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UdmDetail() = default ;
          UdmDetail& operator=(const UdmDetail &) = default ;
          UdmDetail& operator=(UdmDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appConsistent_ == nullptr
        && this->diskIdList_ == nullptr && this->enableFsFreeze_ == nullptr && this->enableWriters_ == nullptr && this->excludeDiskIdList_ == nullptr && this->postScriptPath_ == nullptr
        && this->preScriptPath_ == nullptr && this->ramRoleName_ == nullptr && this->snapshotGroup_ == nullptr && this->timeoutInSeconds_ == nullptr; };
          // appConsistent Field Functions 
          bool hasAppConsistent() const { return this->appConsistent_ != nullptr;};
          void deleteAppConsistent() { this->appConsistent_ = nullptr;};
          inline bool getAppConsistent() const { DARABONBA_PTR_GET_DEFAULT(appConsistent_, false) };
          inline UdmDetail& setAppConsistent(bool appConsistent) { DARABONBA_PTR_SET_VALUE(appConsistent_, appConsistent) };


          // diskIdList Field Functions 
          bool hasDiskIdList() const { return this->diskIdList_ != nullptr;};
          void deleteDiskIdList() { this->diskIdList_ = nullptr;};
          inline const vector<string> & getDiskIdList() const { DARABONBA_PTR_GET_CONST(diskIdList_, vector<string>) };
          inline vector<string> getDiskIdList() { DARABONBA_PTR_GET(diskIdList_, vector<string>) };
          inline UdmDetail& setDiskIdList(const vector<string> & diskIdList) { DARABONBA_PTR_SET_VALUE(diskIdList_, diskIdList) };
          inline UdmDetail& setDiskIdList(vector<string> && diskIdList) { DARABONBA_PTR_SET_RVALUE(diskIdList_, diskIdList) };


          // enableFsFreeze Field Functions 
          bool hasEnableFsFreeze() const { return this->enableFsFreeze_ != nullptr;};
          void deleteEnableFsFreeze() { this->enableFsFreeze_ = nullptr;};
          inline bool getEnableFsFreeze() const { DARABONBA_PTR_GET_DEFAULT(enableFsFreeze_, false) };
          inline UdmDetail& setEnableFsFreeze(bool enableFsFreeze) { DARABONBA_PTR_SET_VALUE(enableFsFreeze_, enableFsFreeze) };


          // enableWriters Field Functions 
          bool hasEnableWriters() const { return this->enableWriters_ != nullptr;};
          void deleteEnableWriters() { this->enableWriters_ = nullptr;};
          inline bool getEnableWriters() const { DARABONBA_PTR_GET_DEFAULT(enableWriters_, false) };
          inline UdmDetail& setEnableWriters(bool enableWriters) { DARABONBA_PTR_SET_VALUE(enableWriters_, enableWriters) };


          // excludeDiskIdList Field Functions 
          bool hasExcludeDiskIdList() const { return this->excludeDiskIdList_ != nullptr;};
          void deleteExcludeDiskIdList() { this->excludeDiskIdList_ = nullptr;};
          inline const vector<string> & getExcludeDiskIdList() const { DARABONBA_PTR_GET_CONST(excludeDiskIdList_, vector<string>) };
          inline vector<string> getExcludeDiskIdList() { DARABONBA_PTR_GET(excludeDiskIdList_, vector<string>) };
          inline UdmDetail& setExcludeDiskIdList(const vector<string> & excludeDiskIdList) { DARABONBA_PTR_SET_VALUE(excludeDiskIdList_, excludeDiskIdList) };
          inline UdmDetail& setExcludeDiskIdList(vector<string> && excludeDiskIdList) { DARABONBA_PTR_SET_RVALUE(excludeDiskIdList_, excludeDiskIdList) };


          // postScriptPath Field Functions 
          bool hasPostScriptPath() const { return this->postScriptPath_ != nullptr;};
          void deletePostScriptPath() { this->postScriptPath_ = nullptr;};
          inline string getPostScriptPath() const { DARABONBA_PTR_GET_DEFAULT(postScriptPath_, "") };
          inline UdmDetail& setPostScriptPath(string postScriptPath) { DARABONBA_PTR_SET_VALUE(postScriptPath_, postScriptPath) };


          // preScriptPath Field Functions 
          bool hasPreScriptPath() const { return this->preScriptPath_ != nullptr;};
          void deletePreScriptPath() { this->preScriptPath_ = nullptr;};
          inline string getPreScriptPath() const { DARABONBA_PTR_GET_DEFAULT(preScriptPath_, "") };
          inline UdmDetail& setPreScriptPath(string preScriptPath) { DARABONBA_PTR_SET_VALUE(preScriptPath_, preScriptPath) };


          // ramRoleName Field Functions 
          bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
          void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
          inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
          inline UdmDetail& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


          // snapshotGroup Field Functions 
          bool hasSnapshotGroup() const { return this->snapshotGroup_ != nullptr;};
          void deleteSnapshotGroup() { this->snapshotGroup_ = nullptr;};
          inline bool getSnapshotGroup() const { DARABONBA_PTR_GET_DEFAULT(snapshotGroup_, false) };
          inline UdmDetail& setSnapshotGroup(bool snapshotGroup) { DARABONBA_PTR_SET_VALUE(snapshotGroup_, snapshotGroup) };


          // timeoutInSeconds Field Functions 
          bool hasTimeoutInSeconds() const { return this->timeoutInSeconds_ != nullptr;};
          void deleteTimeoutInSeconds() { this->timeoutInSeconds_ = nullptr;};
          inline int64_t getTimeoutInSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutInSeconds_, 0L) };
          inline UdmDetail& setTimeoutInSeconds(int64_t timeoutInSeconds) { DARABONBA_PTR_SET_VALUE(timeoutInSeconds_, timeoutInSeconds) };


        protected:
          // Specifies whether to create an application-consistent snapshot. Application-consistent snapshots are supported only when all cloud disk types are ESSD.
          shared_ptr<bool> appConsistent_ {};
          // The list of cloud disk IDs that need to be protected. Leave this value empty to protect all cloud disks.
          shared_ptr<vector<string>> diskIdList_ {};
          // This parameter is required only when **AppConsistent** is set to **true**. Specifies whether to use the Linux FsFreeze mechanism to ensure the file system is in read consistency before creating an application-consistent snapshot. Default value: true.
          shared_ptr<bool> enableFsFreeze_ {};
          // This parameter is required only when **AppConsistent** is set to **true**. Specifies whether to create an application-consistent snapshot:
          // - true: Creates an application-consistent snapshot.
          // - false: Creates a file system-consistent snapshot.
          // 
          // Default value: true.
          shared_ptr<bool> enableWriters_ {};
          // The list of cloud disk IDs that do not need to be protected. This parameter is ignored when DiskIdList is not empty.
          shared_ptr<vector<string>> excludeDiskIdList_ {};
          // This parameter is required only when **AppConsistent** is set to **true**. The path of the post-thaw script to run after creating an application-consistent snapshot.
          shared_ptr<string> postScriptPath_ {};
          // This parameter is required only when **AppConsistent** is set to **true**. The path of the pre-freeze script to run before creating an application-consistent snapshot.
          shared_ptr<string> preScriptPath_ {};
          // This parameter is required only when **AppConsistent** is set to **true**. The RAM role name required for creating application-consistent snapshots.
          shared_ptr<string> ramRoleName_ {};
          // Specifies whether to create a snapshot-consistent group. Snapshot-consistent groups are supported only when all cloud disk types are ESSD.
          shared_ptr<bool> snapshotGroup_ {};
          // This parameter is required only when **AppConsistent** is set to **true**. The I/O freeze timeout period, in seconds. Default value: 30.
          shared_ptr<int64_t> timeoutInSeconds_ {};
        };

        class OssDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OssDetail& obj) { 
            DARABONBA_PTR_TO_JSON(IgnoreArchiveObject, ignoreArchiveObject_);
            DARABONBA_PTR_TO_JSON(InventoryCleanupPolicy, inventoryCleanupPolicy_);
            DARABONBA_PTR_TO_JSON(InventoryId, inventoryId_);
          };
          friend void from_json(const Darabonba::Json& j, OssDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(IgnoreArchiveObject, ignoreArchiveObject_);
            DARABONBA_PTR_FROM_JSON(InventoryCleanupPolicy, inventoryCleanupPolicy_);
            DARABONBA_PTR_FROM_JSON(InventoryId, inventoryId_);
          };
          OssDetail() = default ;
          OssDetail(const OssDetail &) = default ;
          OssDetail(OssDetail &&) = default ;
          OssDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OssDetail() = default ;
          OssDetail& operator=(const OssDetail &) = default ;
          OssDetail& operator=(OssDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ignoreArchiveObject_ == nullptr
        && this->inventoryCleanupPolicy_ == nullptr && this->inventoryId_ == nullptr; };
          // ignoreArchiveObject Field Functions 
          bool hasIgnoreArchiveObject() const { return this->ignoreArchiveObject_ != nullptr;};
          void deleteIgnoreArchiveObject() { this->ignoreArchiveObject_ = nullptr;};
          inline bool getIgnoreArchiveObject() const { DARABONBA_PTR_GET_DEFAULT(ignoreArchiveObject_, false) };
          inline OssDetail& setIgnoreArchiveObject(bool ignoreArchiveObject) { DARABONBA_PTR_SET_VALUE(ignoreArchiveObject_, ignoreArchiveObject) };


          // inventoryCleanupPolicy Field Functions 
          bool hasInventoryCleanupPolicy() const { return this->inventoryCleanupPolicy_ != nullptr;};
          void deleteInventoryCleanupPolicy() { this->inventoryCleanupPolicy_ = nullptr;};
          inline string getInventoryCleanupPolicy() const { DARABONBA_PTR_GET_DEFAULT(inventoryCleanupPolicy_, "") };
          inline OssDetail& setInventoryCleanupPolicy(string inventoryCleanupPolicy) { DARABONBA_PTR_SET_VALUE(inventoryCleanupPolicy_, inventoryCleanupPolicy) };


          // inventoryId Field Functions 
          bool hasInventoryId() const { return this->inventoryId_ != nullptr;};
          void deleteInventoryId() { this->inventoryId_ = nullptr;};
          inline string getInventoryId() const { DARABONBA_PTR_GET_DEFAULT(inventoryId_, "") };
          inline OssDetail& setInventoryId(string inventoryId) { DARABONBA_PTR_SET_VALUE(inventoryId_, inventoryId) };


        protected:
          // Specifies whether to exclude archive objects from job statistics and failed file lists.
          shared_ptr<bool> ignoreArchiveObject_ {};
          // Specifies whether to delete inventory files after backup. This parameter takes effect only when OSS inventory is used. Valid values:
          // - **NO_CLEANUP**: Do not delete.
          // - **DELETE_CURRENT**: Delete the current file.
          // - **DELETE_CURRENT_AND_PREVIOUS**: Delete all files.
          shared_ptr<string> inventoryCleanupPolicy_ {};
          // The OSS inventory name. When this value is not empty, the OSS inventory is used for performance optimization.
          // - Using an inventory is recommended for backing up more than 100 million OSS objects to improve incremental performance. Storage fees generated by inventory files are charged separately by OSS.
          // - OSS inventory files take time to generate. Backup jobs may fail before the inventory files are generated. Wait for the next backup cycle.
          shared_ptr<string> inventoryId_ {};
        };

        class FileDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FileDetail& obj) { 
            DARABONBA_PTR_TO_JSON(AdvPolicy, advPolicy_);
            DARABONBA_PTR_TO_JSON(UseVSS, useVSS_);
          };
          friend void from_json(const Darabonba::Json& j, FileDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(AdvPolicy, advPolicy_);
            DARABONBA_PTR_FROM_JSON(UseVSS, useVSS_);
          };
          FileDetail() = default ;
          FileDetail(const FileDetail &) = default ;
          FileDetail(FileDetail &&) = default ;
          FileDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FileDetail() = default ;
          FileDetail& operator=(const FileDetail &) = default ;
          FileDetail& operator=(FileDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->advPolicy_ == nullptr
        && this->useVSS_ == nullptr; };
          // advPolicy Field Functions 
          bool hasAdvPolicy() const { return this->advPolicy_ != nullptr;};
          void deleteAdvPolicy() { this->advPolicy_ = nullptr;};
          inline bool getAdvPolicy() const { DARABONBA_PTR_GET_DEFAULT(advPolicy_, false) };
          inline FileDetail& setAdvPolicy(bool advPolicy) { DARABONBA_PTR_SET_VALUE(advPolicy_, advPolicy) };


          // useVSS Field Functions 
          bool hasUseVSS() const { return this->useVSS_ != nullptr;};
          void deleteUseVSS() { this->useVSS_ = nullptr;};
          inline bool getUseVSS() const { DARABONBA_PTR_GET_DEFAULT(useVSS_, false) };
          inline FileDetail& setUseVSS(bool useVSS) { DARABONBA_PTR_SET_VALUE(useVSS_, useVSS) };


        protected:
          // Specifies whether to use an advanced policy. Valid values:
          // - **true**: Use.
          // - **false**: Do not use.
          shared_ptr<bool> advPolicy_ {};
          // Specifies whether to enable the Volume Shadow Copy Service (VSS) feature (Windows). Valid values:
          // - **true**: Enabled.
          // - **false**: Disabled.
          shared_ptr<bool> useVSS_ {};
        };

        class CommonNasDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CommonNasDetail& obj) { 
            DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_TO_JSON(FetchSliceSize, fetchSliceSize_);
            DARABONBA_PTR_TO_JSON(FullOnIncrementFail, fullOnIncrementFail_);
          };
          friend void from_json(const Darabonba::Json& j, CommonNasDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_FROM_JSON(FetchSliceSize, fetchSliceSize_);
            DARABONBA_PTR_FROM_JSON(FullOnIncrementFail, fullOnIncrementFail_);
          };
          CommonNasDetail() = default ;
          CommonNasDetail(const CommonNasDetail &) = default ;
          CommonNasDetail(CommonNasDetail &&) = default ;
          CommonNasDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CommonNasDetail() = default ;
          CommonNasDetail& operator=(const CommonNasDetail &) = default ;
          CommonNasDetail& operator=(CommonNasDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->fetchSliceSize_ == nullptr && this->fullOnIncrementFail_ == nullptr; };
          // clusterId Field Functions 
          bool hasClusterId() const { return this->clusterId_ != nullptr;};
          void deleteClusterId() { this->clusterId_ = nullptr;};
          inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
          inline CommonNasDetail& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


          // fetchSliceSize Field Functions 
          bool hasFetchSliceSize() const { return this->fetchSliceSize_ != nullptr;};
          void deleteFetchSliceSize() { this->fetchSliceSize_ = nullptr;};
          inline int64_t getFetchSliceSize() const { DARABONBA_PTR_GET_DEFAULT(fetchSliceSize_, 0L) };
          inline CommonNasDetail& setFetchSliceSize(int64_t fetchSliceSize) { DARABONBA_PTR_SET_VALUE(fetchSliceSize_, fetchSliceSize) };


          // fullOnIncrementFail Field Functions 
          bool hasFullOnIncrementFail() const { return this->fullOnIncrementFail_ != nullptr;};
          void deleteFullOnIncrementFail() { this->fullOnIncrementFail_ = nullptr;};
          inline bool getFullOnIncrementFail() const { DARABONBA_PTR_GET_DEFAULT(fullOnIncrementFail_, false) };
          inline CommonNasDetail& setFullOnIncrementFail(bool fullOnIncrementFail) { DARABONBA_PTR_SET_VALUE(fullOnIncrementFail_, fullOnIncrementFail) };


        protected:
          // The backup client group ID. On-premises NAS backup selects a client from the backup client group to perform the backup.
          shared_ptr<string> clusterId_ {};
          // The sub-task slice size (number of files).
          shared_ptr<int64_t> fetchSliceSize_ {};
          // Specifies whether to switch to a full backup when an incremental backup fails. Valid values:
          // - **true**: Switch to a full backup on failure.
          // - **false**: Do not switch to a full backup on failure.
          shared_ptr<bool> fullOnIncrementFail_ {};
        };

        class CommonFileSystemDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CommonFileSystemDetail& obj) { 
            DARABONBA_PTR_TO_JSON(FetchSliceSize, fetchSliceSize_);
            DARABONBA_PTR_TO_JSON(FullOnIncrementFail, fullOnIncrementFail_);
          };
          friend void from_json(const Darabonba::Json& j, CommonFileSystemDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(FetchSliceSize, fetchSliceSize_);
            DARABONBA_PTR_FROM_JSON(FullOnIncrementFail, fullOnIncrementFail_);
          };
          CommonFileSystemDetail() = default ;
          CommonFileSystemDetail(const CommonFileSystemDetail &) = default ;
          CommonFileSystemDetail(CommonFileSystemDetail &&) = default ;
          CommonFileSystemDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CommonFileSystemDetail() = default ;
          CommonFileSystemDetail& operator=(const CommonFileSystemDetail &) = default ;
          CommonFileSystemDetail& operator=(CommonFileSystemDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fetchSliceSize_ == nullptr
        && this->fullOnIncrementFail_ == nullptr; };
          // fetchSliceSize Field Functions 
          bool hasFetchSliceSize() const { return this->fetchSliceSize_ != nullptr;};
          void deleteFetchSliceSize() { this->fetchSliceSize_ = nullptr;};
          inline int64_t getFetchSliceSize() const { DARABONBA_PTR_GET_DEFAULT(fetchSliceSize_, 0L) };
          inline CommonFileSystemDetail& setFetchSliceSize(int64_t fetchSliceSize) { DARABONBA_PTR_SET_VALUE(fetchSliceSize_, fetchSliceSize) };


          // fullOnIncrementFail Field Functions 
          bool hasFullOnIncrementFail() const { return this->fullOnIncrementFail_ != nullptr;};
          void deleteFullOnIncrementFail() { this->fullOnIncrementFail_ = nullptr;};
          inline bool getFullOnIncrementFail() const { DARABONBA_PTR_GET_DEFAULT(fullOnIncrementFail_, false) };
          inline CommonFileSystemDetail& setFullOnIncrementFail(bool fullOnIncrementFail) { DARABONBA_PTR_SET_VALUE(fullOnIncrementFail_, fullOnIncrementFail) };


        protected:
          // The sub-task slice size (number of files).
          shared_ptr<int64_t> fetchSliceSize_ {};
          // Specifies whether to switch to a full backup when an incremental backup fails. Valid values:
          // - **true**: Switch to a full backup on failure.
          // - **false**: Do not switch to a full backup on failure.
          shared_ptr<bool> fullOnIncrementFail_ {};
        };

        virtual bool empty() const override { return this->commonFileSystemDetail_ == nullptr
        && this->commonNasDetail_ == nullptr && this->fileDetail_ == nullptr && this->ossDetail_ == nullptr && this->udmDetail_ == nullptr; };
        // commonFileSystemDetail Field Functions 
        bool hasCommonFileSystemDetail() const { return this->commonFileSystemDetail_ != nullptr;};
        void deleteCommonFileSystemDetail() { this->commonFileSystemDetail_ = nullptr;};
        inline const AdvancedOptions::CommonFileSystemDetail & getCommonFileSystemDetail() const { DARABONBA_PTR_GET_CONST(commonFileSystemDetail_, AdvancedOptions::CommonFileSystemDetail) };
        inline AdvancedOptions::CommonFileSystemDetail getCommonFileSystemDetail() { DARABONBA_PTR_GET(commonFileSystemDetail_, AdvancedOptions::CommonFileSystemDetail) };
        inline AdvancedOptions& setCommonFileSystemDetail(const AdvancedOptions::CommonFileSystemDetail & commonFileSystemDetail) { DARABONBA_PTR_SET_VALUE(commonFileSystemDetail_, commonFileSystemDetail) };
        inline AdvancedOptions& setCommonFileSystemDetail(AdvancedOptions::CommonFileSystemDetail && commonFileSystemDetail) { DARABONBA_PTR_SET_RVALUE(commonFileSystemDetail_, commonFileSystemDetail) };


        // commonNasDetail Field Functions 
        bool hasCommonNasDetail() const { return this->commonNasDetail_ != nullptr;};
        void deleteCommonNasDetail() { this->commonNasDetail_ = nullptr;};
        inline const AdvancedOptions::CommonNasDetail & getCommonNasDetail() const { DARABONBA_PTR_GET_CONST(commonNasDetail_, AdvancedOptions::CommonNasDetail) };
        inline AdvancedOptions::CommonNasDetail getCommonNasDetail() { DARABONBA_PTR_GET(commonNasDetail_, AdvancedOptions::CommonNasDetail) };
        inline AdvancedOptions& setCommonNasDetail(const AdvancedOptions::CommonNasDetail & commonNasDetail) { DARABONBA_PTR_SET_VALUE(commonNasDetail_, commonNasDetail) };
        inline AdvancedOptions& setCommonNasDetail(AdvancedOptions::CommonNasDetail && commonNasDetail) { DARABONBA_PTR_SET_RVALUE(commonNasDetail_, commonNasDetail) };


        // fileDetail Field Functions 
        bool hasFileDetail() const { return this->fileDetail_ != nullptr;};
        void deleteFileDetail() { this->fileDetail_ = nullptr;};
        inline const AdvancedOptions::FileDetail & getFileDetail() const { DARABONBA_PTR_GET_CONST(fileDetail_, AdvancedOptions::FileDetail) };
        inline AdvancedOptions::FileDetail getFileDetail() { DARABONBA_PTR_GET(fileDetail_, AdvancedOptions::FileDetail) };
        inline AdvancedOptions& setFileDetail(const AdvancedOptions::FileDetail & fileDetail) { DARABONBA_PTR_SET_VALUE(fileDetail_, fileDetail) };
        inline AdvancedOptions& setFileDetail(AdvancedOptions::FileDetail && fileDetail) { DARABONBA_PTR_SET_RVALUE(fileDetail_, fileDetail) };


        // ossDetail Field Functions 
        bool hasOssDetail() const { return this->ossDetail_ != nullptr;};
        void deleteOssDetail() { this->ossDetail_ = nullptr;};
        inline const AdvancedOptions::OssDetail & getOssDetail() const { DARABONBA_PTR_GET_CONST(ossDetail_, AdvancedOptions::OssDetail) };
        inline AdvancedOptions::OssDetail getOssDetail() { DARABONBA_PTR_GET(ossDetail_, AdvancedOptions::OssDetail) };
        inline AdvancedOptions& setOssDetail(const AdvancedOptions::OssDetail & ossDetail) { DARABONBA_PTR_SET_VALUE(ossDetail_, ossDetail) };
        inline AdvancedOptions& setOssDetail(AdvancedOptions::OssDetail && ossDetail) { DARABONBA_PTR_SET_RVALUE(ossDetail_, ossDetail) };


        // udmDetail Field Functions 
        bool hasUdmDetail() const { return this->udmDetail_ != nullptr;};
        void deleteUdmDetail() { this->udmDetail_ = nullptr;};
        inline const AdvancedOptions::UdmDetail & getUdmDetail() const { DARABONBA_PTR_GET_CONST(udmDetail_, AdvancedOptions::UdmDetail) };
        inline AdvancedOptions::UdmDetail getUdmDetail() { DARABONBA_PTR_GET(udmDetail_, AdvancedOptions::UdmDetail) };
        inline AdvancedOptions& setUdmDetail(const AdvancedOptions::UdmDetail & udmDetail) { DARABONBA_PTR_SET_VALUE(udmDetail_, udmDetail) };
        inline AdvancedOptions& setUdmDetail(AdvancedOptions::UdmDetail && udmDetail) { DARABONBA_PTR_SET_RVALUE(udmDetail_, udmDetail) };


      protected:
        // The advanced options for CPFS backup.
        shared_ptr<AdvancedOptions::CommonFileSystemDetail> commonFileSystemDetail_ {};
        // The advanced options for on-premises NAS backup.
        shared_ptr<AdvancedOptions::CommonNasDetail> commonNasDetail_ {};
        // The advanced options for file backup.
        shared_ptr<AdvancedOptions::FileDetail> fileDetail_ {};
        // The advanced options for OSS backup.
        shared_ptr<AdvancedOptions::OssDetail> ossDetail_ {};
        // The advanced options for ECS full server backup.
        shared_ptr<AdvancedOptions::UdmDetail> udmDetail_ {};
      };

      virtual bool empty() const override { return this->advancedOptions_ == nullptr
        && this->crossAccountRoleName_ == nullptr && this->crossAccountType_ == nullptr && this->crossAccountUserId_ == nullptr && this->dataSourceId_ == nullptr && this->disabled_ == nullptr
        && this->exclude_ == nullptr && this->include_ == nullptr && this->policyBindingDescription_ == nullptr && this->source_ == nullptr && this->sourceType_ == nullptr
        && this->speedLimit_ == nullptr; };
      // advancedOptions Field Functions 
      bool hasAdvancedOptions() const { return this->advancedOptions_ != nullptr;};
      void deleteAdvancedOptions() { this->advancedOptions_ = nullptr;};
      inline const PolicyBindingList::AdvancedOptions & getAdvancedOptions() const { DARABONBA_PTR_GET_CONST(advancedOptions_, PolicyBindingList::AdvancedOptions) };
      inline PolicyBindingList::AdvancedOptions getAdvancedOptions() { DARABONBA_PTR_GET(advancedOptions_, PolicyBindingList::AdvancedOptions) };
      inline PolicyBindingList& setAdvancedOptions(const PolicyBindingList::AdvancedOptions & advancedOptions) { DARABONBA_PTR_SET_VALUE(advancedOptions_, advancedOptions) };
      inline PolicyBindingList& setAdvancedOptions(PolicyBindingList::AdvancedOptions && advancedOptions) { DARABONBA_PTR_SET_RVALUE(advancedOptions_, advancedOptions) };


      // crossAccountRoleName Field Functions 
      bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
      void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
      inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
      inline PolicyBindingList& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


      // crossAccountType Field Functions 
      bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
      void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
      inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
      inline PolicyBindingList& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


      // crossAccountUserId Field Functions 
      bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
      void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
      inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
      inline PolicyBindingList& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline PolicyBindingList& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // disabled Field Functions 
      bool hasDisabled() const { return this->disabled_ != nullptr;};
      void deleteDisabled() { this->disabled_ = nullptr;};
      inline string getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, "") };
      inline PolicyBindingList& setDisabled(string disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


      // exclude Field Functions 
      bool hasExclude() const { return this->exclude_ != nullptr;};
      void deleteExclude() { this->exclude_ = nullptr;};
      inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
      inline PolicyBindingList& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


      // include Field Functions 
      bool hasInclude() const { return this->include_ != nullptr;};
      void deleteInclude() { this->include_ = nullptr;};
      inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
      inline PolicyBindingList& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


      // policyBindingDescription Field Functions 
      bool hasPolicyBindingDescription() const { return this->policyBindingDescription_ != nullptr;};
      void deletePolicyBindingDescription() { this->policyBindingDescription_ = nullptr;};
      inline string getPolicyBindingDescription() const { DARABONBA_PTR_GET_DEFAULT(policyBindingDescription_, "") };
      inline PolicyBindingList& setPolicyBindingDescription(string policyBindingDescription) { DARABONBA_PTR_SET_VALUE(policyBindingDescription_, policyBindingDescription) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline PolicyBindingList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline PolicyBindingList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // speedLimit Field Functions 
      bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
      void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
      inline string getSpeedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
      inline PolicyBindingList& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


    protected:
      // The advanced options.
      shared_ptr<PolicyBindingList::AdvancedOptions> advancedOptions_ {};
      // The RAM role name created in the source account for cross-account backup.
      shared_ptr<string> crossAccountRoleName_ {};
      // The cross-account backup type. Default value: SELF_ACCOUNT. Valid values: 
      // - **SELF_ACCOUNT**: Backup within the same account.
      // - **CROSS_ACCOUNT**: Cross-account backup.
      shared_ptr<string> crossAccountType_ {};
      // The Alibaba Cloud UID of the source account for cross-account backup.
      shared_ptr<int64_t> crossAccountUserId_ {};
      // The data source ID. The value has different meanings depending on the **SourceType** field:
      // - **UDM_ECS**: The ECS instance ID.
      // - **OSS**: The OSS bucket name.
      // - **NAS**: The Alibaba Cloud NAS file system ID.
      // - **COMMON_NAS**: The on-premises NAS instance ID.
      // - **ECS_FILE**: The ECS instance ID.
      // - **File**: The Cloud Backup client ID.
      // - **COMMON_FILE_SYSTEM**: The CPFS backup data source ID.
      shared_ptr<string> dataSourceId_ {};
      // Specifies whether the policy is suspended for this data source.
      // - true: Suspended.
      // - false: Not suspended.
      shared_ptr<string> disabled_ {};
      // This parameter can be configured when **SourceType** is set to **ECS_FILE**, **File**, **NAS**, **COMMON_NAS**, or **COMMON_FILE_SYSTEM**. Specifies the file types to exclude from the backup. All files of these types are not backed up. The value can be up to 255 characters in length.
      shared_ptr<string> exclude_ {};
      // This parameter can be configured when **SourceType** is set to **ECS_FILE**, **File**, **NAS**, **COMMON_NAS**, or **COMMON_FILE_SYSTEM**. Specifies the file types to include in the backup. All files of these types are backed up. The value can be up to 255 characters in length.
      shared_ptr<string> include_ {};
      // The description of the policy binding.
      shared_ptr<string> policyBindingDescription_ {};
      // The value has different meanings depending on the SourceType value:
      // - **OSS**: The prefix to back up. If not specified, the entire bucket root directory is backed up. Only a single prefix is supported. To back up /backup, specify /backup.
      // - **ECS_FILE**: The file directories to back up. If not specified, all directories are backed up. Multiple directories are supported. To back up files under /a and /b, specify ["/a", "/b"].
      // - **File**: The file directories to back up. If not specified, all directories are backed up. Multiple directories are supported. To back up files under /a and /b, specify ["/a", "/b"].
      // - **COMMON_FILE_SYSTEM**: Required. The source paths to back up. Multiple paths are supported. To back up /a and /b, specify ["/a", "/b"]. To back up the root path, specify ["/"].
      // - **COMMON_NAS**: Required. The source path to back up. Only a single path is supported. To back up /a, specify ["/a"]. To back up the root path, specify ["/"].
      // - **OTS**: The list of data tables to back up. If not specified, all data tables are backed up. Multiple data tables are supported. To back up tables a and b, specify ["a", "b"].
      shared_ptr<string> source_ {};
      // The data source type. Valid values:
      // - **UDM_ECS**: ECS full server backup.
      // - **OSS**: OSS backup.
      // - **NAS**: Alibaba Cloud NAS backup.
      // - **COMMON_NAS**: On-premises NAS backup.
      // - **ECS_FILE**: ECS File Backup Essential Edition.
      // - **File**: On-premises file backup.
      // - **COMMON_FILE_SYSTEM**: CPFS backup.
      // - **OTS**: Tablestore backup.
      shared_ptr<string> sourceType_ {};
      // This parameter is required only when **SourceType** is set to **ECS_FILE** or **File**. Specifies the backup traffic control. The format is `{start}{end}{bandwidth}`. Multiple traffic control configurations are separated by delimiters, and the time ranges must not overlap.
      // 
      // - **start**: The start hour.
      // - **end**: The end hour.
      // - **bandwidth**: The rate limit, in KB/s.
      shared_ptr<string> speedLimit_ {};
    };

    virtual bool empty() const override { return this->policyBindingList_ == nullptr
        && this->policyId_ == nullptr; };
    // policyBindingList Field Functions 
    bool hasPolicyBindingList() const { return this->policyBindingList_ != nullptr;};
    void deletePolicyBindingList() { this->policyBindingList_ = nullptr;};
    inline const vector<CreatePolicyBindingsRequest::PolicyBindingList> & getPolicyBindingList() const { DARABONBA_PTR_GET_CONST(policyBindingList_, vector<CreatePolicyBindingsRequest::PolicyBindingList>) };
    inline vector<CreatePolicyBindingsRequest::PolicyBindingList> getPolicyBindingList() { DARABONBA_PTR_GET(policyBindingList_, vector<CreatePolicyBindingsRequest::PolicyBindingList>) };
    inline CreatePolicyBindingsRequest& setPolicyBindingList(const vector<CreatePolicyBindingsRequest::PolicyBindingList> & policyBindingList) { DARABONBA_PTR_SET_VALUE(policyBindingList_, policyBindingList) };
    inline CreatePolicyBindingsRequest& setPolicyBindingList(vector<CreatePolicyBindingsRequest::PolicyBindingList> && policyBindingList) { DARABONBA_PTR_SET_RVALUE(policyBindingList_, policyBindingList) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline CreatePolicyBindingsRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The list of policy bindings.
    shared_ptr<vector<CreatePolicyBindingsRequest::PolicyBindingList>> policyBindingList_ {};
    // The policy ID.
    shared_ptr<string> policyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
