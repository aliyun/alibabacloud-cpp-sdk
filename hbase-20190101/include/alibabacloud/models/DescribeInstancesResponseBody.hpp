// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody(DescribeInstancesResponseBody &&) = default ;
    DescribeInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody& operator=(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody& operator=(DescribeInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(Instance, instance_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
          DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
          DARABONBA_PTR_TO_JSON(ColdStorageStatus, coldStorageStatus_);
          DARABONBA_PTR_TO_JSON(CoreDiskCount, coreDiskCount_);
          DARABONBA_PTR_TO_JSON(CoreDiskSize, coreDiskSize_);
          DARABONBA_PTR_TO_JSON(CoreDiskType, coreDiskType_);
          DARABONBA_PTR_TO_JSON(CoreInstanceType, coreInstanceType_);
          DARABONBA_PTR_TO_JSON(CoreNodeCount, coreNodeCount_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(CreatedTimeUTC, createdTimeUTC_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(ExpireTimeUTC, expireTimeUTC_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(IsDeletionProtection, isDeletionProtection_);
          DARABONBA_PTR_TO_JSON(IsHa, isHa_);
          DARABONBA_PTR_TO_JSON(MajorVersion, majorVersion_);
          DARABONBA_PTR_TO_JSON(MasterDiskSize, masterDiskSize_);
          DARABONBA_PTR_TO_JSON(MasterDiskType, masterDiskType_);
          DARABONBA_PTR_TO_JSON(MasterInstanceType, masterInstanceType_);
          DARABONBA_PTR_TO_JSON(MasterNodeCount, masterNodeCount_);
          DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
          DARABONBA_PTR_TO_JSON(ModuleStackVersion, moduleStackVersion_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
          DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
          DARABONBA_PTR_FROM_JSON(ColdStorageStatus, coldStorageStatus_);
          DARABONBA_PTR_FROM_JSON(CoreDiskCount, coreDiskCount_);
          DARABONBA_PTR_FROM_JSON(CoreDiskSize, coreDiskSize_);
          DARABONBA_PTR_FROM_JSON(CoreDiskType, coreDiskType_);
          DARABONBA_PTR_FROM_JSON(CoreInstanceType, coreInstanceType_);
          DARABONBA_PTR_FROM_JSON(CoreNodeCount, coreNodeCount_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(CreatedTimeUTC, createdTimeUTC_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(ExpireTimeUTC, expireTimeUTC_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(IsDeletionProtection, isDeletionProtection_);
          DARABONBA_PTR_FROM_JSON(IsHa, isHa_);
          DARABONBA_PTR_FROM_JSON(MajorVersion, majorVersion_);
          DARABONBA_PTR_FROM_JSON(MasterDiskSize, masterDiskSize_);
          DARABONBA_PTR_FROM_JSON(MasterDiskType, masterDiskType_);
          DARABONBA_PTR_FROM_JSON(MasterInstanceType, masterInstanceType_);
          DARABONBA_PTR_FROM_JSON(MasterNodeCount, masterNodeCount_);
          DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
          DARABONBA_PTR_FROM_JSON(ModuleStackVersion, moduleStackVersion_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        Instance() = default ;
        Instance(const Instance &) = default ;
        Instance(Instance &&) = default ;
        Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instance() = default ;
        Instance& operator=(const Instance &) = default ;
        Instance& operator=(Instance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
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
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        virtual bool empty() const override { return this->autoRenewal_ == nullptr
        && this->backupStatus_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->clusterType_ == nullptr && this->coldStorageStatus_ == nullptr
        && this->coreDiskCount_ == nullptr && this->coreDiskSize_ == nullptr && this->coreDiskType_ == nullptr && this->coreInstanceType_ == nullptr && this->coreNodeCount_ == nullptr
        && this->createdTime_ == nullptr && this->createdTimeUTC_ == nullptr && this->duration_ == nullptr && this->engine_ == nullptr && this->expireTime_ == nullptr
        && this->expireTimeUTC_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->isDeletionProtection_ == nullptr && this->isHa_ == nullptr
        && this->majorVersion_ == nullptr && this->masterDiskSize_ == nullptr && this->masterDiskType_ == nullptr && this->masterInstanceType_ == nullptr && this->masterNodeCount_ == nullptr
        && this->moduleId_ == nullptr && this->moduleStackVersion_ == nullptr && this->networkType_ == nullptr && this->parentId_ == nullptr && this->payType_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr
        && this->vswitchId_ == nullptr && this->zoneId_ == nullptr; };
        // autoRenewal Field Functions 
        bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
        void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
        inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
        inline Instance& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


        // backupStatus Field Functions 
        bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
        void deleteBackupStatus() { this->backupStatus_ = nullptr;};
        inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
        inline Instance& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Instance& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // clusterName Field Functions 
        bool hasClusterName() const { return this->clusterName_ != nullptr;};
        void deleteClusterName() { this->clusterName_ = nullptr;};
        inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
        inline Instance& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


        // clusterType Field Functions 
        bool hasClusterType() const { return this->clusterType_ != nullptr;};
        void deleteClusterType() { this->clusterType_ = nullptr;};
        inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
        inline Instance& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


        // coldStorageStatus Field Functions 
        bool hasColdStorageStatus() const { return this->coldStorageStatus_ != nullptr;};
        void deleteColdStorageStatus() { this->coldStorageStatus_ = nullptr;};
        inline string getColdStorageStatus() const { DARABONBA_PTR_GET_DEFAULT(coldStorageStatus_, "") };
        inline Instance& setColdStorageStatus(string coldStorageStatus) { DARABONBA_PTR_SET_VALUE(coldStorageStatus_, coldStorageStatus) };


        // coreDiskCount Field Functions 
        bool hasCoreDiskCount() const { return this->coreDiskCount_ != nullptr;};
        void deleteCoreDiskCount() { this->coreDiskCount_ = nullptr;};
        inline string getCoreDiskCount() const { DARABONBA_PTR_GET_DEFAULT(coreDiskCount_, "") };
        inline Instance& setCoreDiskCount(string coreDiskCount) { DARABONBA_PTR_SET_VALUE(coreDiskCount_, coreDiskCount) };


        // coreDiskSize Field Functions 
        bool hasCoreDiskSize() const { return this->coreDiskSize_ != nullptr;};
        void deleteCoreDiskSize() { this->coreDiskSize_ = nullptr;};
        inline int32_t getCoreDiskSize() const { DARABONBA_PTR_GET_DEFAULT(coreDiskSize_, 0) };
        inline Instance& setCoreDiskSize(int32_t coreDiskSize) { DARABONBA_PTR_SET_VALUE(coreDiskSize_, coreDiskSize) };


        // coreDiskType Field Functions 
        bool hasCoreDiskType() const { return this->coreDiskType_ != nullptr;};
        void deleteCoreDiskType() { this->coreDiskType_ = nullptr;};
        inline string getCoreDiskType() const { DARABONBA_PTR_GET_DEFAULT(coreDiskType_, "") };
        inline Instance& setCoreDiskType(string coreDiskType) { DARABONBA_PTR_SET_VALUE(coreDiskType_, coreDiskType) };


        // coreInstanceType Field Functions 
        bool hasCoreInstanceType() const { return this->coreInstanceType_ != nullptr;};
        void deleteCoreInstanceType() { this->coreInstanceType_ = nullptr;};
        inline string getCoreInstanceType() const { DARABONBA_PTR_GET_DEFAULT(coreInstanceType_, "") };
        inline Instance& setCoreInstanceType(string coreInstanceType) { DARABONBA_PTR_SET_VALUE(coreInstanceType_, coreInstanceType) };


        // coreNodeCount Field Functions 
        bool hasCoreNodeCount() const { return this->coreNodeCount_ != nullptr;};
        void deleteCoreNodeCount() { this->coreNodeCount_ = nullptr;};
        inline int32_t getCoreNodeCount() const { DARABONBA_PTR_GET_DEFAULT(coreNodeCount_, 0) };
        inline Instance& setCoreNodeCount(int32_t coreNodeCount) { DARABONBA_PTR_SET_VALUE(coreNodeCount_, coreNodeCount) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline Instance& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // createdTimeUTC Field Functions 
        bool hasCreatedTimeUTC() const { return this->createdTimeUTC_ != nullptr;};
        void deleteCreatedTimeUTC() { this->createdTimeUTC_ = nullptr;};
        inline string getCreatedTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(createdTimeUTC_, "") };
        inline Instance& setCreatedTimeUTC(string createdTimeUTC) { DARABONBA_PTR_SET_VALUE(createdTimeUTC_, createdTimeUTC) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline Instance& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline Instance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline Instance& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // expireTimeUTC Field Functions 
        bool hasExpireTimeUTC() const { return this->expireTimeUTC_ != nullptr;};
        void deleteExpireTimeUTC() { this->expireTimeUTC_ = nullptr;};
        inline string getExpireTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(expireTimeUTC_, "") };
        inline Instance& setExpireTimeUTC(string expireTimeUTC) { DARABONBA_PTR_SET_VALUE(expireTimeUTC_, expireTimeUTC) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Instance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // isDeletionProtection Field Functions 
        bool hasIsDeletionProtection() const { return this->isDeletionProtection_ != nullptr;};
        void deleteIsDeletionProtection() { this->isDeletionProtection_ = nullptr;};
        inline bool getIsDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(isDeletionProtection_, false) };
        inline Instance& setIsDeletionProtection(bool isDeletionProtection) { DARABONBA_PTR_SET_VALUE(isDeletionProtection_, isDeletionProtection) };


        // isHa Field Functions 
        bool hasIsHa() const { return this->isHa_ != nullptr;};
        void deleteIsHa() { this->isHa_ = nullptr;};
        inline bool getIsHa() const { DARABONBA_PTR_GET_DEFAULT(isHa_, false) };
        inline Instance& setIsHa(bool isHa) { DARABONBA_PTR_SET_VALUE(isHa_, isHa) };


        // majorVersion Field Functions 
        bool hasMajorVersion() const { return this->majorVersion_ != nullptr;};
        void deleteMajorVersion() { this->majorVersion_ = nullptr;};
        inline string getMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(majorVersion_, "") };
        inline Instance& setMajorVersion(string majorVersion) { DARABONBA_PTR_SET_VALUE(majorVersion_, majorVersion) };


        // masterDiskSize Field Functions 
        bool hasMasterDiskSize() const { return this->masterDiskSize_ != nullptr;};
        void deleteMasterDiskSize() { this->masterDiskSize_ = nullptr;};
        inline int32_t getMasterDiskSize() const { DARABONBA_PTR_GET_DEFAULT(masterDiskSize_, 0) };
        inline Instance& setMasterDiskSize(int32_t masterDiskSize) { DARABONBA_PTR_SET_VALUE(masterDiskSize_, masterDiskSize) };


        // masterDiskType Field Functions 
        bool hasMasterDiskType() const { return this->masterDiskType_ != nullptr;};
        void deleteMasterDiskType() { this->masterDiskType_ = nullptr;};
        inline string getMasterDiskType() const { DARABONBA_PTR_GET_DEFAULT(masterDiskType_, "") };
        inline Instance& setMasterDiskType(string masterDiskType) { DARABONBA_PTR_SET_VALUE(masterDiskType_, masterDiskType) };


        // masterInstanceType Field Functions 
        bool hasMasterInstanceType() const { return this->masterInstanceType_ != nullptr;};
        void deleteMasterInstanceType() { this->masterInstanceType_ = nullptr;};
        inline string getMasterInstanceType() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceType_, "") };
        inline Instance& setMasterInstanceType(string masterInstanceType) { DARABONBA_PTR_SET_VALUE(masterInstanceType_, masterInstanceType) };


        // masterNodeCount Field Functions 
        bool hasMasterNodeCount() const { return this->masterNodeCount_ != nullptr;};
        void deleteMasterNodeCount() { this->masterNodeCount_ = nullptr;};
        inline int32_t getMasterNodeCount() const { DARABONBA_PTR_GET_DEFAULT(masterNodeCount_, 0) };
        inline Instance& setMasterNodeCount(int32_t masterNodeCount) { DARABONBA_PTR_SET_VALUE(masterNodeCount_, masterNodeCount) };


        // moduleId Field Functions 
        bool hasModuleId() const { return this->moduleId_ != nullptr;};
        void deleteModuleId() { this->moduleId_ = nullptr;};
        inline int32_t getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0) };
        inline Instance& setModuleId(int32_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


        // moduleStackVersion Field Functions 
        bool hasModuleStackVersion() const { return this->moduleStackVersion_ != nullptr;};
        void deleteModuleStackVersion() { this->moduleStackVersion_ = nullptr;};
        inline string getModuleStackVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleStackVersion_, "") };
        inline Instance& setModuleStackVersion(string moduleStackVersion) { DARABONBA_PTR_SET_VALUE(moduleStackVersion_, moduleStackVersion) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline Instance& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
        inline Instance& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline Instance& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Instance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Instance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Instance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Instance::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Instance::Tags) };
        inline Instance::Tags getTags() { DARABONBA_PTR_GET(tags_, Instance::Tags) };
        inline Instance& setTags(const Instance::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Instance& setTags(Instance::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Instance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vswitchId Field Functions 
        bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
        void deleteVswitchId() { this->vswitchId_ = nullptr;};
        inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
        inline Instance& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Instance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<bool> autoRenewal_ {};
        shared_ptr<string> backupStatus_ {};
        shared_ptr<string> clusterId_ {};
        shared_ptr<string> clusterName_ {};
        shared_ptr<string> clusterType_ {};
        shared_ptr<string> coldStorageStatus_ {};
        shared_ptr<string> coreDiskCount_ {};
        shared_ptr<int32_t> coreDiskSize_ {};
        shared_ptr<string> coreDiskType_ {};
        shared_ptr<string> coreInstanceType_ {};
        shared_ptr<int32_t> coreNodeCount_ {};
        shared_ptr<string> createdTime_ {};
        shared_ptr<string> createdTimeUTC_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<string> engine_ {};
        shared_ptr<string> expireTime_ {};
        shared_ptr<string> expireTimeUTC_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<bool> isDeletionProtection_ {};
        shared_ptr<bool> isHa_ {};
        shared_ptr<string> majorVersion_ {};
        shared_ptr<int32_t> masterDiskSize_ {};
        shared_ptr<string> masterDiskType_ {};
        shared_ptr<string> masterInstanceType_ {};
        shared_ptr<int32_t> masterNodeCount_ {};
        shared_ptr<int32_t> moduleId_ {};
        shared_ptr<string> moduleStackVersion_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> parentId_ {};
        shared_ptr<string> payType_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<Instance::Tags> tags_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> vswitchId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->instance_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const vector<Instances::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Instances::Instance>) };
      inline vector<Instances::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<Instances::Instance>) };
      inline Instances& setInstance(const vector<Instances::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline Instances& setInstance(vector<Instances::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    protected:
      shared_ptr<vector<Instances::Instance>> instance_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeInstancesResponseBody::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeInstancesResponseBody::Instances) };
    inline DescribeInstancesResponseBody::Instances getInstances() { DARABONBA_PTR_GET(instances_, DescribeInstancesResponseBody::Instances) };
    inline DescribeInstancesResponseBody& setInstances(const DescribeInstancesResponseBody::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeInstancesResponseBody& setInstances(DescribeInstancesResponseBody::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeInstancesResponseBody::Instances> instances_ {};
    // The page number of the instance list.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of rows displayed per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of instances.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
