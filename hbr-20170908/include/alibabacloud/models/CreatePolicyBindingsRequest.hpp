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
          // Specifies whether to enable application consistency. You can enable application consistency only if all disks are ESSDs.
          shared_ptr<bool> appConsistent_ {};
          // The IDs of the disks that need to be protected. If all disks need to be protected, this parameter is empty.
          shared_ptr<vector<string>> diskIdList_ {};
          // This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies whether to enable Linux fsfreeze to put file systems into the read-only state before application-consistent snapshots are created. Default value: true.
          shared_ptr<bool> enableFsFreeze_ {};
          // This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies whether to create application-consistent snapshots. Valid values:
          // 
          // *   true: creates application-consistent snapshots.
          // *   false: creates file system-consistent snapshots.
          // 
          // Default value: true.
          shared_ptr<bool> enableWriters_ {};
          // The IDs of the disks that do not need to be protected. If the DiskIdList parameter is not empty, this parameter is ignored.
          shared_ptr<vector<string>> excludeDiskIdList_ {};
          // This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies the path of the post-thaw scripts that are executed after application-consistent snapshots are created.
          shared_ptr<string> postScriptPath_ {};
          // This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies the path of the pre-freeze scripts that are executed before application-consistent snapshots are created.
          shared_ptr<string> preScriptPath_ {};
          // This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies the name of the Resource Access Management (RAM) role that is required to create application-consistent snapshots.
          shared_ptr<string> ramRoleName_ {};
          // Specifies whether to create a snapshot-consistent group. You can create a snapshot-consistent group only if all disks are Enterprise SSDs (ESSDs).
          shared_ptr<bool> snapshotGroup_ {};
          // This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies the I/O freeze timeout period. Default value: 30. Unit: seconds.
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
          // Do not prompt for archival type objects in task statistics and failed file lists.
          shared_ptr<bool> ignoreArchiveObject_ {};
          // Specifies whether the system deletes the inventory lists when a backup is completed. This parameter is valid only when OSS inventories are used. Valid values:
          // 
          // *   **NO_CLEANUP**: does not delete inventory lists.
          // *   **DELETE_CURRENT**: deletes the current inventory list.
          // *   **DELETE_CURRENT_AND_PREVIOUS**: deletes all inventory lists.
          shared_ptr<string> inventoryCleanupPolicy_ {};
          // The name of the OSS inventory. If this parameter is not empty, the OSS inventory is used for performance optimization.
          // 
          // *   If you want to back up more than 100 million OSS objects, we recommend that you use inventory lists to accelerate incremental backup. Storage fees for inventory lists are included into your OSS bills.
          // *   A certain amount of time is required for OSS to generate inventory lists. Before inventory lists are generated, OSS objects may fail to be backed up. In this case, you can back up the OSS objects in the next backup cycle.
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
          // 
          // *   **true**: uses the advanced policy.
          // *   **false**: does not use the advanced policy.
          shared_ptr<bool> advPolicy_ {};
          // Specifies whether to enable the Volume Shadow Copy Service (VSS) feature. Valid values:
          // 
          // *   **true**: enables the feature.
          // *   **false**: disables the feature.
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
          // The ID of the backup client group. When you perform on-premises NAS backup, Cloud Backup selects clients from the specified backup client group.
          shared_ptr<string> clusterId_ {};
          // The size of backup shards (the number of files).
          shared_ptr<int64_t> fetchSliceSize_ {};
          // Specifies whether the system performs full backup if incremental backup fails. Valid values:
          // 
          // *   **true**: The system performs full backup if incremental backup fails.
          // *   **false**: The system does not perform full backup if incremental backup fails.
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
          // The size of backup shards (the number of files).
          shared_ptr<int64_t> fetchSliceSize_ {};
          // Specifies whether the system performs full backup if incremental backup fails. Valid values:
          // 
          // *   **true**: The system performs full backup if incremental backup fails.
          // *   **false**: The system does not perform full backup if incremental backup fails.
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
        // The advanced options for Object Storage Service (OSS) backup.
        shared_ptr<AdvancedOptions::OssDetail> ossDetail_ {};
        // The advanced options for ECS instance backup.
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
      // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
      shared_ptr<string> crossAccountRoleName_ {};
      // Specifies whether to back up and restore data within the same Alibaba Cloud account or across Alibaba Cloud accounts. Default value: SELF_ACCOUNT. Valid values:
      // 
      // *   **SELF_ACCOUNT**: backs up data within the same Alibaba Cloud account.
      // *   **CROSS_ACCOUNT**: backs up data across Alibaba Cloud accounts.
      shared_ptr<string> crossAccountType_ {};
      // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
      shared_ptr<int64_t> crossAccountUserId_ {};
      // The ID of the data source. The meaning of this parameter depends on the **SourceType** parameter. Valid values:
      // 
      // *   **UDM_ECS**: the ID of the Elastic Compute Service (ECS) instance
      // *   **OSS**: the name of the Object Storage Service (OSS) bucket
      // *   **NAS**: the ID of the File Storage NAS (NAS) file system
      // *   **COMMON_NAS**: the ID of the on-premises NAS file system
      // *   **ECS_FILE**: the ID of the ECS instance
      // *   **File**: the ID of the Cloud Backup client
      // *   **COMMON_FILE_SYSTEM**: the ID of the Cloud Parallel File Storage (CPFS) backup data source
      shared_ptr<string> dataSourceId_ {};
      // Specifies whether to disable the backup policy for the data source. Valid values:
      // 
      // *   true: disables the backup policy for the data source
      // *   false: enables the backup policy for the data source
      shared_ptr<string> disabled_ {};
      // This parameter is required only if you set the **SourceType** parameter to **ECS_FILE**, **File**, **NAS**, **COMMON_NAS**, or **COMMON_FILE_SYSTEM**. This parameter specifies the type of files that do not need to be backed up. No files of the specified type are backed up. The value can be up to 255 characters in length.
      shared_ptr<string> exclude_ {};
      // This parameter is required only if you set the **SourceType** parameter to **ECS_FILE**, **File**, **NAS**, **COMMON_NAS**, or **COMMON_FILE_SYSTEM**. This parameter specifies the type of files to be backed up. All files of the specified type are backed up. The value can be up to 255 characters in length.
      shared_ptr<string> include_ {};
      // The description of the association.
      shared_ptr<string> policyBindingDescription_ {};
      // *   If the SourceType parameter is set to **OSS**, set the Source parameter to the prefix of the path to the folder that you want to back up. If you do not specify the Source parameter, the entire bucket (root directory) is backed up.
      // *   If the SourceType parameter is set to **ECS_FILE** or **File**, set the Source parameter to the path to the files that you want to back up. If you do not specify the Source parameter, all paths are backed up.
      // *   This parameter is required if the SourceType parameter is set to **COMMON_FILE_SYSTEM**. This parameter specifies the path to be backed up. To back up the /src path, enter ["/src"]. To back up the root path, enter ["/"].
      shared_ptr<string> source_ {};
      // The type of the data source. Valid values:
      // 
      // *   **UDM_ECS**: ECS instance
      // *   **OSS**: OSS bucket
      // *   **NAS**: NAS file system
      // *   **COMMON_NAS**: on-premises NAS file system
      // *   **ECS_FILE**: ECS file
      // *   **File**: on-premises file
      // *   **COMMON_FILE_SYSTEM**: CPFS file system
      shared_ptr<string> sourceType_ {};
      // This parameter is required only if you set the **SourceType** parameter to **ECS_FILE** or **File**. This parameter specifies the throttling rules. Format: `{start}{end}{bandwidth}`. Separate multiple throttling rules with vertical bars (|). The time ranges of the throttling rules cannot overlap.
      // 
      // *   **start**: the start hour.
      // *   **end**: the end hour.
      // *   **bandwidth**: the bandwidth. Unit: KB/s.
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
    // The data sources that you want to bind to the backup policy.
    shared_ptr<vector<CreatePolicyBindingsRequest::PolicyBindingList>> policyBindingList_ {};
    // The ID of the backup policy.
    shared_ptr<string> policyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
