// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODY_HPP_
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
  class DescribePolicyBindingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyBindingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyBindings, policyBindings_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyBindingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyBindings, policyBindings_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePolicyBindingsResponseBody() = default ;
    DescribePolicyBindingsResponseBody(const DescribePolicyBindingsResponseBody &) = default ;
    DescribePolicyBindingsResponseBody(DescribePolicyBindingsResponseBody &&) = default ;
    DescribePolicyBindingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyBindingsResponseBody() = default ;
    DescribePolicyBindingsResponseBody& operator=(const DescribePolicyBindingsResponseBody &) = default ;
    DescribePolicyBindingsResponseBody& operator=(DescribePolicyBindingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyBindings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyBindings& obj) { 
        DARABONBA_PTR_TO_JSON(AdvancedOptions, advancedOptions_);
        DARABONBA_PTR_TO_JSON(CreatedByTag, createdByTag_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
        DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
        DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(Disabled, disabled_);
        DARABONBA_PTR_TO_JSON(Exclude, exclude_);
        DARABONBA_PTR_TO_JSON(HitTags, hitTags_);
        DARABONBA_PTR_TO_JSON(Include, include_);
        DARABONBA_PTR_TO_JSON(PolicyBindingDescription, policyBindingDescription_);
        DARABONBA_PTR_TO_JSON(PolicyBindingId, policyBindingId_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(SpeedLimit, speedLimit_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyBindings& obj) { 
        DARABONBA_PTR_FROM_JSON(AdvancedOptions, advancedOptions_);
        DARABONBA_PTR_FROM_JSON(CreatedByTag, createdByTag_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
        DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
        DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
        DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
        DARABONBA_PTR_FROM_JSON(HitTags, hitTags_);
        DARABONBA_PTR_FROM_JSON(Include, include_);
        DARABONBA_PTR_FROM_JSON(PolicyBindingDescription, policyBindingDescription_);
        DARABONBA_PTR_FROM_JSON(PolicyBindingId, policyBindingId_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(SpeedLimit, speedLimit_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      };
      PolicyBindings() = default ;
      PolicyBindings(const PolicyBindings &) = default ;
      PolicyBindings(PolicyBindings &&) = default ;
      PolicyBindings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyBindings() = default ;
      PolicyBindings& operator=(const PolicyBindings &) = default ;
      PolicyBindings& operator=(PolicyBindings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HitTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HitTags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Operator, operator_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, HitTags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Operator, operator_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        HitTags() = default ;
        HitTags(const HitTags &) = default ;
        HitTags(HitTags &&) = default ;
        HitTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HitTags() = default ;
        HitTags& operator=(const HitTags &) = default ;
        HitTags& operator=(HitTags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline HitTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline HitTags& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline HitTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // Tag key.
        shared_ptr<string> key_ {};
        // Tag matching rule.
        // - **EQUAL**: Matches both the tag key and tag value.
        // - **NOT**: Matches the tag key but not the tag value.
        shared_ptr<string> operator_ {};
        // Tag value.
        shared_ptr<string> value_ {};
      };

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
            DARABONBA_PTR_TO_JSON(DestinationKmsKeyId, destinationKmsKeyId_);
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
            DARABONBA_PTR_FROM_JSON(DestinationKmsKeyId, destinationKmsKeyId_);
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
        && this->destinationKmsKeyId_ == nullptr && this->diskIdList_ == nullptr && this->enableFsFreeze_ == nullptr && this->enableWriters_ == nullptr && this->excludeDiskIdList_ == nullptr
        && this->postScriptPath_ == nullptr && this->preScriptPath_ == nullptr && this->ramRoleName_ == nullptr && this->snapshotGroup_ == nullptr && this->timeoutInSeconds_ == nullptr; };
          // appConsistent Field Functions 
          bool hasAppConsistent() const { return this->appConsistent_ != nullptr;};
          void deleteAppConsistent() { this->appConsistent_ = nullptr;};
          inline bool getAppConsistent() const { DARABONBA_PTR_GET_DEFAULT(appConsistent_, false) };
          inline UdmDetail& setAppConsistent(bool appConsistent) { DARABONBA_PTR_SET_VALUE(appConsistent_, appConsistent) };


          // destinationKmsKeyId Field Functions 
          bool hasDestinationKmsKeyId() const { return this->destinationKmsKeyId_ != nullptr;};
          void deleteDestinationKmsKeyId() { this->destinationKmsKeyId_ = nullptr;};
          inline string getDestinationKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(destinationKmsKeyId_, "") };
          inline UdmDetail& setDestinationKmsKeyId(string destinationKmsKeyId) { DARABONBA_PTR_SET_VALUE(destinationKmsKeyId_, destinationKmsKeyId) };


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
          // 是否创建应用一致性。仅云盘类型全部为ESSD时，支持创建快照应用一致性。
          shared_ptr<bool> appConsistent_ {};
          // The custom KMS key ID in the destination region. When this field is not empty and cross-region replication is enabled, the specified key will be used for encrypting the cross-region replication.
          shared_ptr<string> destinationKmsKeyId_ {};
          // List of disk IDs that need protection. This value is empty when protecting all disks.
          shared_ptr<vector<string>> diskIdList_ {};
          // This parameter is required when **AppConsistent** is **true**. It indicates whether to use the Linux FsFreeze mechanism to ensure the file system is in a read-only consistent state before creating an application-consistent snapshot. The default value is true.
          shared_ptr<bool> enableFsFreeze_ {};
          // This parameter is required when **AppConsistent** is **true**. It determines whether to set an application-consistent snapshot:
          // - **true**: Create an application-consistent snapshot
          // - **false**: Create a file system-consistent snapshot
          // 
          // The default value is true.
          shared_ptr<bool> enableWriters_ {};
          // List of disk IDs that do not need protection. This parameter is ignored if DiskIdList is not empty.
          shared_ptr<vector<string>> excludeDiskIdList_ {};
          // This parameter is required when **AppConsistent** is **true**. It specifies the path of the unfreeze script to be executed after creating an application-consistent snapshot.
          shared_ptr<string> postScriptPath_ {};
          // This parameter is required when **AppConsistent** is **true**. It specifies the path of the freeze script to be executed before creating an application-consistent snapshot.
          shared_ptr<string> preScriptPath_ {};
          // This parameter is required when **AppConsistent** is **true**. It specifies the RAM role name needed for creating an application-consistent snapshot.
          shared_ptr<string> ramRoleName_ {};
          // Indicates whether to create a snapshot consistency group. Only supported when all disk types are ESSD.
          shared_ptr<bool> snapshotGroup_ {};
          // This parameter is required when **AppConsistent** is **true**. It specifies the IO freeze timeout duration. The default value is 30 seconds.
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
          // Do not prompt for archive-type objects in the task statistics and failed file list.
          shared_ptr<bool> ignoreArchiveObject_ {};
          // Whether to delete the inventory file after the backup. This is only effective when using an OSS inventory. Supported values:
          // - **NO_CLEANUP**: Do not delete.
          // - **DELETE_CURRENT**: Delete the current file.
          // - **DELETE_CURRENT_AND_PREVIOUS**: Delete all files.
          shared_ptr<string> inventoryCleanupPolicy_ {};
          // The name of the OSS inventory. If this value is not empty, the OSS inventory will be used for performance optimization.
          // - It is recommended to use an inventory for backing up more than 100 million OSS objects to improve incremental performance. Storage costs for the inventory files are charged separately by the OSS service.
          // - The generation of the OSS inventory file takes time, and the backup may fail before the inventory file is generated. You can wait for the next cycle to execute.
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
          // Whether to use advanced policies. Values:
          // - **true**: Use.
          // - **false**: Do not use.
          shared_ptr<bool> advPolicy_ {};
          // Whether to enable VSS (Windows) functionality. Values:
          // - **true**: Enable.
          // - **false**: Disable.
          shared_ptr<bool> useVSS_ {};
        };

        class CommonNasDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CommonNasDetail& obj) { 
            DARABONBA_PTR_TO_JSON(ClientId, clientId_);
            DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
            DARABONBA_PTR_TO_JSON(FetchSliceSize, fetchSliceSize_);
            DARABONBA_PTR_TO_JSON(FullOnIncrementFail, fullOnIncrementFail_);
          };
          friend void from_json(const Darabonba::Json& j, CommonNasDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
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
          virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clusterId_ == nullptr && this->fetchSliceSize_ == nullptr && this->fullOnIncrementFail_ == nullptr; };
          // clientId Field Functions 
          bool hasClientId() const { return this->clientId_ != nullptr;};
          void deleteClientId() { this->clientId_ = nullptr;};
          inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
          inline CommonNasDetail& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


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
          // Backup client ID.
          shared_ptr<string> clientId_ {};
          // Client group ID.
          shared_ptr<string> clusterId_ {};
          // Backup slice size (number of files).
          shared_ptr<int64_t> fetchSliceSize_ {};
          // Whether to switch to a full backup when an incremental backup fails. Values:
          // - **true**: Switch to full backup on failure.
          // - **false**: Do not switch to full backup on failure.
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
          // Backup shard size (number of files).
          shared_ptr<int64_t> fetchSliceSize_ {};
          // Whether to switch to a full backup when an incremental backup fails. Values:
          // - **true**: Switch to full backup on failure.
          // - **false**: Do not switch to full backup on failure.
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
        // Advanced options for large-scale file system backup.
        shared_ptr<AdvancedOptions::CommonFileSystemDetail> commonFileSystemDetail_ {};
        // Advanced options for local NAS.
        shared_ptr<AdvancedOptions::CommonNasDetail> commonNasDetail_ {};
        // Advanced options for file backup.
        shared_ptr<AdvancedOptions::FileDetail> fileDetail_ {};
        // Advanced options for OSS backup.
        shared_ptr<AdvancedOptions::OssDetail> ossDetail_ {};
        // Advanced options for full machine backup.
        shared_ptr<AdvancedOptions::UdmDetail> udmDetail_ {};
      };

      virtual bool empty() const override { return this->advancedOptions_ == nullptr
        && this->createdByTag_ == nullptr && this->createdTime_ == nullptr && this->crossAccountRoleName_ == nullptr && this->crossAccountType_ == nullptr && this->crossAccountUserId_ == nullptr
        && this->dataSourceId_ == nullptr && this->disabled_ == nullptr && this->exclude_ == nullptr && this->hitTags_ == nullptr && this->include_ == nullptr
        && this->policyBindingDescription_ == nullptr && this->policyBindingId_ == nullptr && this->policyId_ == nullptr && this->source_ == nullptr && this->sourceType_ == nullptr
        && this->speedLimit_ == nullptr && this->updatedTime_ == nullptr; };
      // advancedOptions Field Functions 
      bool hasAdvancedOptions() const { return this->advancedOptions_ != nullptr;};
      void deleteAdvancedOptions() { this->advancedOptions_ = nullptr;};
      inline const PolicyBindings::AdvancedOptions & getAdvancedOptions() const { DARABONBA_PTR_GET_CONST(advancedOptions_, PolicyBindings::AdvancedOptions) };
      inline PolicyBindings::AdvancedOptions getAdvancedOptions() { DARABONBA_PTR_GET(advancedOptions_, PolicyBindings::AdvancedOptions) };
      inline PolicyBindings& setAdvancedOptions(const PolicyBindings::AdvancedOptions & advancedOptions) { DARABONBA_PTR_SET_VALUE(advancedOptions_, advancedOptions) };
      inline PolicyBindings& setAdvancedOptions(PolicyBindings::AdvancedOptions && advancedOptions) { DARABONBA_PTR_SET_RVALUE(advancedOptions_, advancedOptions) };


      // createdByTag Field Functions 
      bool hasCreatedByTag() const { return this->createdByTag_ != nullptr;};
      void deleteCreatedByTag() { this->createdByTag_ = nullptr;};
      inline bool getCreatedByTag() const { DARABONBA_PTR_GET_DEFAULT(createdByTag_, false) };
      inline PolicyBindings& setCreatedByTag(bool createdByTag) { DARABONBA_PTR_SET_VALUE(createdByTag_, createdByTag) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline PolicyBindings& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // crossAccountRoleName Field Functions 
      bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
      void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
      inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
      inline PolicyBindings& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


      // crossAccountType Field Functions 
      bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
      void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
      inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
      inline PolicyBindings& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


      // crossAccountUserId Field Functions 
      bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
      void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
      inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
      inline PolicyBindings& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline PolicyBindings& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // disabled Field Functions 
      bool hasDisabled() const { return this->disabled_ != nullptr;};
      void deleteDisabled() { this->disabled_ = nullptr;};
      inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
      inline PolicyBindings& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


      // exclude Field Functions 
      bool hasExclude() const { return this->exclude_ != nullptr;};
      void deleteExclude() { this->exclude_ = nullptr;};
      inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
      inline PolicyBindings& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


      // hitTags Field Functions 
      bool hasHitTags() const { return this->hitTags_ != nullptr;};
      void deleteHitTags() { this->hitTags_ = nullptr;};
      inline const vector<PolicyBindings::HitTags> & getHitTags() const { DARABONBA_PTR_GET_CONST(hitTags_, vector<PolicyBindings::HitTags>) };
      inline vector<PolicyBindings::HitTags> getHitTags() { DARABONBA_PTR_GET(hitTags_, vector<PolicyBindings::HitTags>) };
      inline PolicyBindings& setHitTags(const vector<PolicyBindings::HitTags> & hitTags) { DARABONBA_PTR_SET_VALUE(hitTags_, hitTags) };
      inline PolicyBindings& setHitTags(vector<PolicyBindings::HitTags> && hitTags) { DARABONBA_PTR_SET_RVALUE(hitTags_, hitTags) };


      // include Field Functions 
      bool hasInclude() const { return this->include_ != nullptr;};
      void deleteInclude() { this->include_ = nullptr;};
      inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
      inline PolicyBindings& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


      // policyBindingDescription Field Functions 
      bool hasPolicyBindingDescription() const { return this->policyBindingDescription_ != nullptr;};
      void deletePolicyBindingDescription() { this->policyBindingDescription_ = nullptr;};
      inline string getPolicyBindingDescription() const { DARABONBA_PTR_GET_DEFAULT(policyBindingDescription_, "") };
      inline PolicyBindings& setPolicyBindingDescription(string policyBindingDescription) { DARABONBA_PTR_SET_VALUE(policyBindingDescription_, policyBindingDescription) };


      // policyBindingId Field Functions 
      bool hasPolicyBindingId() const { return this->policyBindingId_ != nullptr;};
      void deletePolicyBindingId() { this->policyBindingId_ = nullptr;};
      inline string getPolicyBindingId() const { DARABONBA_PTR_GET_DEFAULT(policyBindingId_, "") };
      inline PolicyBindings& setPolicyBindingId(string policyBindingId) { DARABONBA_PTR_SET_VALUE(policyBindingId_, policyBindingId) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline PolicyBindings& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline PolicyBindings& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline PolicyBindings& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // speedLimit Field Functions 
      bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
      void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
      inline string getSpeedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
      inline PolicyBindings& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline PolicyBindings& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    protected:
      // Advanced options.
      shared_ptr<PolicyBindings::AdvancedOptions> advancedOptions_ {};
      // Whether the resource is automatically associated through the backup policy resource tag.
      shared_ptr<bool> createdByTag_ {};
      // Creation time. UNIX timestamp, in seconds.
      shared_ptr<int64_t> createdTime_ {};
      // The name of the role created in the RAM of the original account for cross-account backup.
      shared_ptr<string> crossAccountRoleName_ {};
      // Cross-account backup type. Supported values: 
      // - SELF_ACCOUNT: Backup within the same account
      // - CROSS_ACCOUNT: Cross-account backup
      shared_ptr<string> crossAccountType_ {};
      // The ID of the original account for cross-account backup.
      shared_ptr<int64_t> crossAccountUserId_ {};
      // Data source ID.
      shared_ptr<string> dataSourceId_ {};
      // Whether the policy is disbaled for this data source.
      // - true: disabled
      // - false: Not disabled
      shared_ptr<bool> disabled_ {};
      // This parameter is required only when **SourceType** is **ECS_FILE** or **File**. It specifies the file types that should not be backed up, and all files of these types will be excluded. Supports up to 255 characters.
      shared_ptr<string> exclude_ {};
      // Hit tag rules.
      shared_ptr<vector<PolicyBindings::HitTags>> hitTags_ {};
      // This parameter is required only when **SourceType** is **ECS_FILE** or **File**. It specifies the file types to be backed up, and all files of these types will be backed up. Supports up to 255 characters.
      shared_ptr<string> include_ {};
      // Bound policy description.
      shared_ptr<string> policyBindingDescription_ {};
      // Bound policy ID.
      shared_ptr<string> policyBindingId_ {};
      // Policy ID.
      shared_ptr<string> policyId_ {};
      // - When **SourceType** is **OSS**, it indicates the prefix to be backed up. If not specified, it means backing up the entire root directory of the Bucket.
      // - When **SourceType** is **ECS_FILE** or **File**, it indicates the file directory to be backed up. If not specified, it means backing up all directories.
      shared_ptr<string> source_ {};
      // Data source type, with the value range:
      // - **UDM_ECS**: indicates ECS full machine backup
      shared_ptr<string> sourceType_ {};
      // This parameter is required only when **SourceType** is **ECS_FILE** or **File**. It specifies the backup traffic control. The format is `{start}{end}{bandwidth}`. Multiple traffic control configurations are separated by commas, and the configured times must not overlap.
      // 
      // - **start**: Start hour.
      // - **end**: End hour.
      // - **bandwidth**: Limit rate, in KB/s.
      shared_ptr<string> speedLimit_ {};
      // Update time. UNIX timestamp, in seconds.
      shared_ptr<int64_t> updatedTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->policyBindings_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePolicyBindingsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePolicyBindingsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePolicyBindingsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePolicyBindingsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyBindings Field Functions 
    bool hasPolicyBindings() const { return this->policyBindings_ != nullptr;};
    void deletePolicyBindings() { this->policyBindings_ = nullptr;};
    inline const vector<DescribePolicyBindingsResponseBody::PolicyBindings> & getPolicyBindings() const { DARABONBA_PTR_GET_CONST(policyBindings_, vector<DescribePolicyBindingsResponseBody::PolicyBindings>) };
    inline vector<DescribePolicyBindingsResponseBody::PolicyBindings> getPolicyBindings() { DARABONBA_PTR_GET(policyBindings_, vector<DescribePolicyBindingsResponseBody::PolicyBindings>) };
    inline DescribePolicyBindingsResponseBody& setPolicyBindings(const vector<DescribePolicyBindingsResponseBody::PolicyBindings> & policyBindings) { DARABONBA_PTR_SET_VALUE(policyBindings_, policyBindings) };
    inline DescribePolicyBindingsResponseBody& setPolicyBindings(vector<DescribePolicyBindingsResponseBody::PolicyBindings> && policyBindings) { DARABONBA_PTR_SET_RVALUE(policyBindings_, policyBindings) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolicyBindingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribePolicyBindingsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePolicyBindingsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Return code, 200 indicates success.
    shared_ptr<string> code_ {};
    // The number of results per query.
    // 
    // Range: 10~100. Default: 10.
    shared_ptr<int32_t> maxResults_ {};
    // Description of the return message. A successful response usually returns \\"successful\\", while an error will return a corresponding error message.
    shared_ptr<string> message_ {};
    // The token required to fetch the next page of policy and data source bindings.
    shared_ptr<string> nextToken_ {};
    // List of bound policies.
    shared_ptr<vector<DescribePolicyBindingsResponseBody::PolicyBindings>> policyBindings_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    // 
    // - true: Success
    // - false: Failure
    shared_ptr<bool> success_ {};
    // Total number of records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
