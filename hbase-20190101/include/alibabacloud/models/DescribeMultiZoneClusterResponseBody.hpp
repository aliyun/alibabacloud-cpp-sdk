// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIZONECLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIZONECLUSTERRESPONSEBODY_HPP_
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
  class DescribeMultiZoneClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiZoneClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ArbiterVSwitchIds, arbiterVSwitchIds_);
      DARABONBA_PTR_TO_JSON(ArbiterZoneId, arbiterZoneId_);
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ColdStorageSize, coldStorageSize_);
      DARABONBA_PTR_TO_JSON(CoreDiskCount, coreDiskCount_);
      DARABONBA_PTR_TO_JSON(CoreDiskSize, coreDiskSize_);
      DARABONBA_PTR_TO_JSON(CoreDiskType, coreDiskType_);
      DARABONBA_PTR_TO_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_TO_JSON(CoreNodeCount, coreNodeCount_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CreatedTimeUTC, createdTimeUTC_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpireTimeUTC, expireTimeUTC_);
      DARABONBA_PTR_TO_JSON(InitialRootPassword, initialRootPassword_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IsDeletionProtection, isDeletionProtection_);
      DARABONBA_PTR_TO_JSON(LogDiskCount, logDiskCount_);
      DARABONBA_PTR_TO_JSON(LogDiskSize, logDiskSize_);
      DARABONBA_PTR_TO_JSON(LogDiskType, logDiskType_);
      DARABONBA_PTR_TO_JSON(LogInstanceType, logInstanceType_);
      DARABONBA_PTR_TO_JSON(LogNodeCount, logNodeCount_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(MajorVersion, majorVersion_);
      DARABONBA_PTR_TO_JSON(MasterDiskSize, masterDiskSize_);
      DARABONBA_PTR_TO_JSON(MasterDiskType, masterDiskType_);
      DARABONBA_PTR_TO_JSON(MasterInstanceType, masterInstanceType_);
      DARABONBA_PTR_TO_JSON(MasterNodeCount, masterNodeCount_);
      DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
      DARABONBA_PTR_TO_JSON(ModuleStackVersion, moduleStackVersion_);
      DARABONBA_PTR_TO_JSON(MultiZoneCombination, multiZoneCombination_);
      DARABONBA_PTR_TO_JSON(MultiZoneInstanceModels, multiZoneInstanceModels_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PrimaryVSwitchIds, primaryVSwitchIds_);
      DARABONBA_PTR_TO_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchIds, standbyVSwitchIds_);
      DARABONBA_PTR_TO_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskProgress, taskProgress_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiZoneClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ArbiterVSwitchIds, arbiterVSwitchIds_);
      DARABONBA_PTR_FROM_JSON(ArbiterZoneId, arbiterZoneId_);
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ColdStorageSize, coldStorageSize_);
      DARABONBA_PTR_FROM_JSON(CoreDiskCount, coreDiskCount_);
      DARABONBA_PTR_FROM_JSON(CoreDiskSize, coreDiskSize_);
      DARABONBA_PTR_FROM_JSON(CoreDiskType, coreDiskType_);
      DARABONBA_PTR_FROM_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_FROM_JSON(CoreNodeCount, coreNodeCount_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CreatedTimeUTC, createdTimeUTC_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(EncryptionType, encryptionType_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTimeUTC, expireTimeUTC_);
      DARABONBA_PTR_FROM_JSON(InitialRootPassword, initialRootPassword_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IsDeletionProtection, isDeletionProtection_);
      DARABONBA_PTR_FROM_JSON(LogDiskCount, logDiskCount_);
      DARABONBA_PTR_FROM_JSON(LogDiskSize, logDiskSize_);
      DARABONBA_PTR_FROM_JSON(LogDiskType, logDiskType_);
      DARABONBA_PTR_FROM_JSON(LogInstanceType, logInstanceType_);
      DARABONBA_PTR_FROM_JSON(LogNodeCount, logNodeCount_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(MajorVersion, majorVersion_);
      DARABONBA_PTR_FROM_JSON(MasterDiskSize, masterDiskSize_);
      DARABONBA_PTR_FROM_JSON(MasterDiskType, masterDiskType_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceType, masterInstanceType_);
      DARABONBA_PTR_FROM_JSON(MasterNodeCount, masterNodeCount_);
      DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
      DARABONBA_PTR_FROM_JSON(ModuleStackVersion, moduleStackVersion_);
      DARABONBA_PTR_FROM_JSON(MultiZoneCombination, multiZoneCombination_);
      DARABONBA_PTR_FROM_JSON(MultiZoneInstanceModels, multiZoneInstanceModels_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PrimaryVSwitchIds, primaryVSwitchIds_);
      DARABONBA_PTR_FROM_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchIds, standbyVSwitchIds_);
      DARABONBA_PTR_FROM_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskProgress, taskProgress_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeMultiZoneClusterResponseBody() = default ;
    DescribeMultiZoneClusterResponseBody(const DescribeMultiZoneClusterResponseBody &) = default ;
    DescribeMultiZoneClusterResponseBody(DescribeMultiZoneClusterResponseBody &&) = default ;
    DescribeMultiZoneClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiZoneClusterResponseBody() = default ;
    DescribeMultiZoneClusterResponseBody& operator=(const DescribeMultiZoneClusterResponseBody &) = default ;
    DescribeMultiZoneClusterResponseBody& operator=(DescribeMultiZoneClusterResponseBody &&) = default ;
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

    class MultiZoneInstanceModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MultiZoneInstanceModels& obj) { 
        DARABONBA_PTR_TO_JSON(MultiZoneInstanceModel, multiZoneInstanceModel_);
      };
      friend void from_json(const Darabonba::Json& j, MultiZoneInstanceModels& obj) { 
        DARABONBA_PTR_FROM_JSON(MultiZoneInstanceModel, multiZoneInstanceModel_);
      };
      MultiZoneInstanceModels() = default ;
      MultiZoneInstanceModels(const MultiZoneInstanceModels &) = default ;
      MultiZoneInstanceModels(MultiZoneInstanceModels &&) = default ;
      MultiZoneInstanceModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MultiZoneInstanceModels() = default ;
      MultiZoneInstanceModels& operator=(const MultiZoneInstanceModels &) = default ;
      MultiZoneInstanceModels& operator=(MultiZoneInstanceModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MultiZoneInstanceModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MultiZoneInstanceModel& obj) { 
          DARABONBA_PTR_TO_JSON(HdfsMinorVersion, hdfsMinorVersion_);
          DARABONBA_PTR_TO_JSON(InsName, insName_);
          DARABONBA_PTR_TO_JSON(IsHdfsLatestVersion, isHdfsLatestVersion_);
          DARABONBA_PTR_TO_JSON(IsLatestVersion, isLatestVersion_);
          DARABONBA_PTR_TO_JSON(LatestHdfsMinorVersion, latestHdfsMinorVersion_);
          DARABONBA_PTR_TO_JSON(LatestMinorVersion, latestMinorVersion_);
          DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, MultiZoneInstanceModel& obj) { 
          DARABONBA_PTR_FROM_JSON(HdfsMinorVersion, hdfsMinorVersion_);
          DARABONBA_PTR_FROM_JSON(InsName, insName_);
          DARABONBA_PTR_FROM_JSON(IsHdfsLatestVersion, isHdfsLatestVersion_);
          DARABONBA_PTR_FROM_JSON(IsLatestVersion, isLatestVersion_);
          DARABONBA_PTR_FROM_JSON(LatestHdfsMinorVersion, latestHdfsMinorVersion_);
          DARABONBA_PTR_FROM_JSON(LatestMinorVersion, latestMinorVersion_);
          DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        MultiZoneInstanceModel() = default ;
        MultiZoneInstanceModel(const MultiZoneInstanceModel &) = default ;
        MultiZoneInstanceModel(MultiZoneInstanceModel &&) = default ;
        MultiZoneInstanceModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MultiZoneInstanceModel() = default ;
        MultiZoneInstanceModel& operator=(const MultiZoneInstanceModel &) = default ;
        MultiZoneInstanceModel& operator=(MultiZoneInstanceModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hdfsMinorVersion_ == nullptr
        && this->insName_ == nullptr && this->isHdfsLatestVersion_ == nullptr && this->isLatestVersion_ == nullptr && this->latestHdfsMinorVersion_ == nullptr && this->latestMinorVersion_ == nullptr
        && this->minorVersion_ == nullptr && this->role_ == nullptr && this->status_ == nullptr; };
        // hdfsMinorVersion Field Functions 
        bool hasHdfsMinorVersion() const { return this->hdfsMinorVersion_ != nullptr;};
        void deleteHdfsMinorVersion() { this->hdfsMinorVersion_ = nullptr;};
        inline string getHdfsMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(hdfsMinorVersion_, "") };
        inline MultiZoneInstanceModel& setHdfsMinorVersion(string hdfsMinorVersion) { DARABONBA_PTR_SET_VALUE(hdfsMinorVersion_, hdfsMinorVersion) };


        // insName Field Functions 
        bool hasInsName() const { return this->insName_ != nullptr;};
        void deleteInsName() { this->insName_ = nullptr;};
        inline string getInsName() const { DARABONBA_PTR_GET_DEFAULT(insName_, "") };
        inline MultiZoneInstanceModel& setInsName(string insName) { DARABONBA_PTR_SET_VALUE(insName_, insName) };


        // isHdfsLatestVersion Field Functions 
        bool hasIsHdfsLatestVersion() const { return this->isHdfsLatestVersion_ != nullptr;};
        void deleteIsHdfsLatestVersion() { this->isHdfsLatestVersion_ = nullptr;};
        inline string getIsHdfsLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isHdfsLatestVersion_, "") };
        inline MultiZoneInstanceModel& setIsHdfsLatestVersion(string isHdfsLatestVersion) { DARABONBA_PTR_SET_VALUE(isHdfsLatestVersion_, isHdfsLatestVersion) };


        // isLatestVersion Field Functions 
        bool hasIsLatestVersion() const { return this->isLatestVersion_ != nullptr;};
        void deleteIsLatestVersion() { this->isLatestVersion_ = nullptr;};
        inline bool getIsLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isLatestVersion_, false) };
        inline MultiZoneInstanceModel& setIsLatestVersion(bool isLatestVersion) { DARABONBA_PTR_SET_VALUE(isLatestVersion_, isLatestVersion) };


        // latestHdfsMinorVersion Field Functions 
        bool hasLatestHdfsMinorVersion() const { return this->latestHdfsMinorVersion_ != nullptr;};
        void deleteLatestHdfsMinorVersion() { this->latestHdfsMinorVersion_ = nullptr;};
        inline string getLatestHdfsMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(latestHdfsMinorVersion_, "") };
        inline MultiZoneInstanceModel& setLatestHdfsMinorVersion(string latestHdfsMinorVersion) { DARABONBA_PTR_SET_VALUE(latestHdfsMinorVersion_, latestHdfsMinorVersion) };


        // latestMinorVersion Field Functions 
        bool hasLatestMinorVersion() const { return this->latestMinorVersion_ != nullptr;};
        void deleteLatestMinorVersion() { this->latestMinorVersion_ = nullptr;};
        inline string getLatestMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(latestMinorVersion_, "") };
        inline MultiZoneInstanceModel& setLatestMinorVersion(string latestMinorVersion) { DARABONBA_PTR_SET_VALUE(latestMinorVersion_, latestMinorVersion) };


        // minorVersion Field Functions 
        bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
        void deleteMinorVersion() { this->minorVersion_ = nullptr;};
        inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
        inline MultiZoneInstanceModel& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline MultiZoneInstanceModel& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline MultiZoneInstanceModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> hdfsMinorVersion_ {};
        shared_ptr<string> insName_ {};
        shared_ptr<string> isHdfsLatestVersion_ {};
        shared_ptr<bool> isLatestVersion_ {};
        shared_ptr<string> latestHdfsMinorVersion_ {};
        shared_ptr<string> latestMinorVersion_ {};
        shared_ptr<string> minorVersion_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->multiZoneInstanceModel_ == nullptr; };
      // multiZoneInstanceModel Field Functions 
      bool hasMultiZoneInstanceModel() const { return this->multiZoneInstanceModel_ != nullptr;};
      void deleteMultiZoneInstanceModel() { this->multiZoneInstanceModel_ = nullptr;};
      inline const vector<MultiZoneInstanceModels::MultiZoneInstanceModel> & getMultiZoneInstanceModel() const { DARABONBA_PTR_GET_CONST(multiZoneInstanceModel_, vector<MultiZoneInstanceModels::MultiZoneInstanceModel>) };
      inline vector<MultiZoneInstanceModels::MultiZoneInstanceModel> getMultiZoneInstanceModel() { DARABONBA_PTR_GET(multiZoneInstanceModel_, vector<MultiZoneInstanceModels::MultiZoneInstanceModel>) };
      inline MultiZoneInstanceModels& setMultiZoneInstanceModel(const vector<MultiZoneInstanceModels::MultiZoneInstanceModel> & multiZoneInstanceModel) { DARABONBA_PTR_SET_VALUE(multiZoneInstanceModel_, multiZoneInstanceModel) };
      inline MultiZoneInstanceModels& setMultiZoneInstanceModel(vector<MultiZoneInstanceModels::MultiZoneInstanceModel> && multiZoneInstanceModel) { DARABONBA_PTR_SET_RVALUE(multiZoneInstanceModel_, multiZoneInstanceModel) };


    protected:
      shared_ptr<vector<MultiZoneInstanceModels::MultiZoneInstanceModel>> multiZoneInstanceModel_ {};
    };

    virtual bool empty() const override { return this->arbiterVSwitchIds_ == nullptr
        && this->arbiterZoneId_ == nullptr && this->autoRenewal_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->coldStorageSize_ == nullptr
        && this->coreDiskCount_ == nullptr && this->coreDiskSize_ == nullptr && this->coreDiskType_ == nullptr && this->coreInstanceType_ == nullptr && this->coreNodeCount_ == nullptr
        && this->createdTime_ == nullptr && this->createdTimeUTC_ == nullptr && this->duration_ == nullptr && this->encryptionKey_ == nullptr && this->encryptionType_ == nullptr
        && this->engine_ == nullptr && this->expireTime_ == nullptr && this->expireTimeUTC_ == nullptr && this->initialRootPassword_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->isDeletionProtection_ == nullptr && this->logDiskCount_ == nullptr && this->logDiskSize_ == nullptr && this->logDiskType_ == nullptr
        && this->logInstanceType_ == nullptr && this->logNodeCount_ == nullptr && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->majorVersion_ == nullptr
        && this->masterDiskSize_ == nullptr && this->masterDiskType_ == nullptr && this->masterInstanceType_ == nullptr && this->masterNodeCount_ == nullptr && this->moduleId_ == nullptr
        && this->moduleStackVersion_ == nullptr && this->multiZoneCombination_ == nullptr && this->multiZoneInstanceModels_ == nullptr && this->networkType_ == nullptr && this->parentId_ == nullptr
        && this->payType_ == nullptr && this->primaryVSwitchIds_ == nullptr && this->primaryZoneId_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->standbyVSwitchIds_ == nullptr && this->standbyZoneId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->taskProgress_ == nullptr && this->taskStatus_ == nullptr && this->vpcId_ == nullptr; };
    // arbiterVSwitchIds Field Functions 
    bool hasArbiterVSwitchIds() const { return this->arbiterVSwitchIds_ != nullptr;};
    void deleteArbiterVSwitchIds() { this->arbiterVSwitchIds_ = nullptr;};
    inline string getArbiterVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(arbiterVSwitchIds_, "") };
    inline DescribeMultiZoneClusterResponseBody& setArbiterVSwitchIds(string arbiterVSwitchIds) { DARABONBA_PTR_SET_VALUE(arbiterVSwitchIds_, arbiterVSwitchIds) };


    // arbiterZoneId Field Functions 
    bool hasArbiterZoneId() const { return this->arbiterZoneId_ != nullptr;};
    void deleteArbiterZoneId() { this->arbiterZoneId_ = nullptr;};
    inline string getArbiterZoneId() const { DARABONBA_PTR_GET_DEFAULT(arbiterZoneId_, "") };
    inline DescribeMultiZoneClusterResponseBody& setArbiterZoneId(string arbiterZoneId) { DARABONBA_PTR_SET_VALUE(arbiterZoneId_, arbiterZoneId) };


    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline DescribeMultiZoneClusterResponseBody& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeMultiZoneClusterResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeMultiZoneClusterResponseBody& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // coldStorageSize Field Functions 
    bool hasColdStorageSize() const { return this->coldStorageSize_ != nullptr;};
    void deleteColdStorageSize() { this->coldStorageSize_ = nullptr;};
    inline int32_t getColdStorageSize() const { DARABONBA_PTR_GET_DEFAULT(coldStorageSize_, 0) };
    inline DescribeMultiZoneClusterResponseBody& setColdStorageSize(int32_t coldStorageSize) { DARABONBA_PTR_SET_VALUE(coldStorageSize_, coldStorageSize) };


    // coreDiskCount Field Functions 
    bool hasCoreDiskCount() const { return this->coreDiskCount_ != nullptr;};
    void deleteCoreDiskCount() { this->coreDiskCount_ = nullptr;};
    inline string getCoreDiskCount() const { DARABONBA_PTR_GET_DEFAULT(coreDiskCount_, "") };
    inline DescribeMultiZoneClusterResponseBody& setCoreDiskCount(string coreDiskCount) { DARABONBA_PTR_SET_VALUE(coreDiskCount_, coreDiskCount) };


    // coreDiskSize Field Functions 
    bool hasCoreDiskSize() const { return this->coreDiskSize_ != nullptr;};
    void deleteCoreDiskSize() { this->coreDiskSize_ = nullptr;};
    inline int32_t getCoreDiskSize() const { DARABONBA_PTR_GET_DEFAULT(coreDiskSize_, 0) };
    inline DescribeMultiZoneClusterResponseBody& setCoreDiskSize(int32_t coreDiskSize) { DARABONBA_PTR_SET_VALUE(coreDiskSize_, coreDiskSize) };


    // coreDiskType Field Functions 
    bool hasCoreDiskType() const { return this->coreDiskType_ != nullptr;};
    void deleteCoreDiskType() { this->coreDiskType_ = nullptr;};
    inline string getCoreDiskType() const { DARABONBA_PTR_GET_DEFAULT(coreDiskType_, "") };
    inline DescribeMultiZoneClusterResponseBody& setCoreDiskType(string coreDiskType) { DARABONBA_PTR_SET_VALUE(coreDiskType_, coreDiskType) };


    // coreInstanceType Field Functions 
    bool hasCoreInstanceType() const { return this->coreInstanceType_ != nullptr;};
    void deleteCoreInstanceType() { this->coreInstanceType_ = nullptr;};
    inline string getCoreInstanceType() const { DARABONBA_PTR_GET_DEFAULT(coreInstanceType_, "") };
    inline DescribeMultiZoneClusterResponseBody& setCoreInstanceType(string coreInstanceType) { DARABONBA_PTR_SET_VALUE(coreInstanceType_, coreInstanceType) };


    // coreNodeCount Field Functions 
    bool hasCoreNodeCount() const { return this->coreNodeCount_ != nullptr;};
    void deleteCoreNodeCount() { this->coreNodeCount_ = nullptr;};
    inline int32_t getCoreNodeCount() const { DARABONBA_PTR_GET_DEFAULT(coreNodeCount_, 0) };
    inline DescribeMultiZoneClusterResponseBody& setCoreNodeCount(int32_t coreNodeCount) { DARABONBA_PTR_SET_VALUE(coreNodeCount_, coreNodeCount) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeMultiZoneClusterResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // createdTimeUTC Field Functions 
    bool hasCreatedTimeUTC() const { return this->createdTimeUTC_ != nullptr;};
    void deleteCreatedTimeUTC() { this->createdTimeUTC_ = nullptr;};
    inline string getCreatedTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(createdTimeUTC_, "") };
    inline DescribeMultiZoneClusterResponseBody& setCreatedTimeUTC(string createdTimeUTC) { DARABONBA_PTR_SET_VALUE(createdTimeUTC_, createdTimeUTC) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline DescribeMultiZoneClusterResponseBody& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline DescribeMultiZoneClusterResponseBody& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptionType Field Functions 
    bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
    void deleteEncryptionType() { this->encryptionType_ = nullptr;};
    inline string getEncryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, "") };
    inline DescribeMultiZoneClusterResponseBody& setEncryptionType(string encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeMultiZoneClusterResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeMultiZoneClusterResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimeUTC Field Functions 
    bool hasExpireTimeUTC() const { return this->expireTimeUTC_ != nullptr;};
    void deleteExpireTimeUTC() { this->expireTimeUTC_ = nullptr;};
    inline string getExpireTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(expireTimeUTC_, "") };
    inline DescribeMultiZoneClusterResponseBody& setExpireTimeUTC(string expireTimeUTC) { DARABONBA_PTR_SET_VALUE(expireTimeUTC_, expireTimeUTC) };


    // initialRootPassword Field Functions 
    bool hasInitialRootPassword() const { return this->initialRootPassword_ != nullptr;};
    void deleteInitialRootPassword() { this->initialRootPassword_ = nullptr;};
    inline string getInitialRootPassword() const { DARABONBA_PTR_GET_DEFAULT(initialRootPassword_, "") };
    inline DescribeMultiZoneClusterResponseBody& setInitialRootPassword(string initialRootPassword) { DARABONBA_PTR_SET_VALUE(initialRootPassword_, initialRootPassword) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMultiZoneClusterResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeMultiZoneClusterResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isDeletionProtection Field Functions 
    bool hasIsDeletionProtection() const { return this->isDeletionProtection_ != nullptr;};
    void deleteIsDeletionProtection() { this->isDeletionProtection_ = nullptr;};
    inline bool getIsDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(isDeletionProtection_, false) };
    inline DescribeMultiZoneClusterResponseBody& setIsDeletionProtection(bool isDeletionProtection) { DARABONBA_PTR_SET_VALUE(isDeletionProtection_, isDeletionProtection) };


    // logDiskCount Field Functions 
    bool hasLogDiskCount() const { return this->logDiskCount_ != nullptr;};
    void deleteLogDiskCount() { this->logDiskCount_ = nullptr;};
    inline string getLogDiskCount() const { DARABONBA_PTR_GET_DEFAULT(logDiskCount_, "") };
    inline DescribeMultiZoneClusterResponseBody& setLogDiskCount(string logDiskCount) { DARABONBA_PTR_SET_VALUE(logDiskCount_, logDiskCount) };


    // logDiskSize Field Functions 
    bool hasLogDiskSize() const { return this->logDiskSize_ != nullptr;};
    void deleteLogDiskSize() { this->logDiskSize_ = nullptr;};
    inline int32_t getLogDiskSize() const { DARABONBA_PTR_GET_DEFAULT(logDiskSize_, 0) };
    inline DescribeMultiZoneClusterResponseBody& setLogDiskSize(int32_t logDiskSize) { DARABONBA_PTR_SET_VALUE(logDiskSize_, logDiskSize) };


    // logDiskType Field Functions 
    bool hasLogDiskType() const { return this->logDiskType_ != nullptr;};
    void deleteLogDiskType() { this->logDiskType_ = nullptr;};
    inline string getLogDiskType() const { DARABONBA_PTR_GET_DEFAULT(logDiskType_, "") };
    inline DescribeMultiZoneClusterResponseBody& setLogDiskType(string logDiskType) { DARABONBA_PTR_SET_VALUE(logDiskType_, logDiskType) };


    // logInstanceType Field Functions 
    bool hasLogInstanceType() const { return this->logInstanceType_ != nullptr;};
    void deleteLogInstanceType() { this->logInstanceType_ = nullptr;};
    inline string getLogInstanceType() const { DARABONBA_PTR_GET_DEFAULT(logInstanceType_, "") };
    inline DescribeMultiZoneClusterResponseBody& setLogInstanceType(string logInstanceType) { DARABONBA_PTR_SET_VALUE(logInstanceType_, logInstanceType) };


    // logNodeCount Field Functions 
    bool hasLogNodeCount() const { return this->logNodeCount_ != nullptr;};
    void deleteLogNodeCount() { this->logNodeCount_ = nullptr;};
    inline int32_t getLogNodeCount() const { DARABONBA_PTR_GET_DEFAULT(logNodeCount_, 0) };
    inline DescribeMultiZoneClusterResponseBody& setLogNodeCount(int32_t logNodeCount) { DARABONBA_PTR_SET_VALUE(logNodeCount_, logNodeCount) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline DescribeMultiZoneClusterResponseBody& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline DescribeMultiZoneClusterResponseBody& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // majorVersion Field Functions 
    bool hasMajorVersion() const { return this->majorVersion_ != nullptr;};
    void deleteMajorVersion() { this->majorVersion_ = nullptr;};
    inline string getMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(majorVersion_, "") };
    inline DescribeMultiZoneClusterResponseBody& setMajorVersion(string majorVersion) { DARABONBA_PTR_SET_VALUE(majorVersion_, majorVersion) };


    // masterDiskSize Field Functions 
    bool hasMasterDiskSize() const { return this->masterDiskSize_ != nullptr;};
    void deleteMasterDiskSize() { this->masterDiskSize_ = nullptr;};
    inline int32_t getMasterDiskSize() const { DARABONBA_PTR_GET_DEFAULT(masterDiskSize_, 0) };
    inline DescribeMultiZoneClusterResponseBody& setMasterDiskSize(int32_t masterDiskSize) { DARABONBA_PTR_SET_VALUE(masterDiskSize_, masterDiskSize) };


    // masterDiskType Field Functions 
    bool hasMasterDiskType() const { return this->masterDiskType_ != nullptr;};
    void deleteMasterDiskType() { this->masterDiskType_ = nullptr;};
    inline string getMasterDiskType() const { DARABONBA_PTR_GET_DEFAULT(masterDiskType_, "") };
    inline DescribeMultiZoneClusterResponseBody& setMasterDiskType(string masterDiskType) { DARABONBA_PTR_SET_VALUE(masterDiskType_, masterDiskType) };


    // masterInstanceType Field Functions 
    bool hasMasterInstanceType() const { return this->masterInstanceType_ != nullptr;};
    void deleteMasterInstanceType() { this->masterInstanceType_ = nullptr;};
    inline string getMasterInstanceType() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceType_, "") };
    inline DescribeMultiZoneClusterResponseBody& setMasterInstanceType(string masterInstanceType) { DARABONBA_PTR_SET_VALUE(masterInstanceType_, masterInstanceType) };


    // masterNodeCount Field Functions 
    bool hasMasterNodeCount() const { return this->masterNodeCount_ != nullptr;};
    void deleteMasterNodeCount() { this->masterNodeCount_ = nullptr;};
    inline int32_t getMasterNodeCount() const { DARABONBA_PTR_GET_DEFAULT(masterNodeCount_, 0) };
    inline DescribeMultiZoneClusterResponseBody& setMasterNodeCount(int32_t masterNodeCount) { DARABONBA_PTR_SET_VALUE(masterNodeCount_, masterNodeCount) };


    // moduleId Field Functions 
    bool hasModuleId() const { return this->moduleId_ != nullptr;};
    void deleteModuleId() { this->moduleId_ = nullptr;};
    inline int32_t getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0) };
    inline DescribeMultiZoneClusterResponseBody& setModuleId(int32_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


    // moduleStackVersion Field Functions 
    bool hasModuleStackVersion() const { return this->moduleStackVersion_ != nullptr;};
    void deleteModuleStackVersion() { this->moduleStackVersion_ = nullptr;};
    inline string getModuleStackVersion() const { DARABONBA_PTR_GET_DEFAULT(moduleStackVersion_, "") };
    inline DescribeMultiZoneClusterResponseBody& setModuleStackVersion(string moduleStackVersion) { DARABONBA_PTR_SET_VALUE(moduleStackVersion_, moduleStackVersion) };


    // multiZoneCombination Field Functions 
    bool hasMultiZoneCombination() const { return this->multiZoneCombination_ != nullptr;};
    void deleteMultiZoneCombination() { this->multiZoneCombination_ = nullptr;};
    inline string getMultiZoneCombination() const { DARABONBA_PTR_GET_DEFAULT(multiZoneCombination_, "") };
    inline DescribeMultiZoneClusterResponseBody& setMultiZoneCombination(string multiZoneCombination) { DARABONBA_PTR_SET_VALUE(multiZoneCombination_, multiZoneCombination) };


    // multiZoneInstanceModels Field Functions 
    bool hasMultiZoneInstanceModels() const { return this->multiZoneInstanceModels_ != nullptr;};
    void deleteMultiZoneInstanceModels() { this->multiZoneInstanceModels_ = nullptr;};
    inline const DescribeMultiZoneClusterResponseBody::MultiZoneInstanceModels & getMultiZoneInstanceModels() const { DARABONBA_PTR_GET_CONST(multiZoneInstanceModels_, DescribeMultiZoneClusterResponseBody::MultiZoneInstanceModels) };
    inline DescribeMultiZoneClusterResponseBody::MultiZoneInstanceModels getMultiZoneInstanceModels() { DARABONBA_PTR_GET(multiZoneInstanceModels_, DescribeMultiZoneClusterResponseBody::MultiZoneInstanceModels) };
    inline DescribeMultiZoneClusterResponseBody& setMultiZoneInstanceModels(const DescribeMultiZoneClusterResponseBody::MultiZoneInstanceModels & multiZoneInstanceModels) { DARABONBA_PTR_SET_VALUE(multiZoneInstanceModels_, multiZoneInstanceModels) };
    inline DescribeMultiZoneClusterResponseBody& setMultiZoneInstanceModels(DescribeMultiZoneClusterResponseBody::MultiZoneInstanceModels && multiZoneInstanceModels) { DARABONBA_PTR_SET_RVALUE(multiZoneInstanceModels_, multiZoneInstanceModels) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeMultiZoneClusterResponseBody& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline DescribeMultiZoneClusterResponseBody& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeMultiZoneClusterResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // primaryVSwitchIds Field Functions 
    bool hasPrimaryVSwitchIds() const { return this->primaryVSwitchIds_ != nullptr;};
    void deletePrimaryVSwitchIds() { this->primaryVSwitchIds_ = nullptr;};
    inline string getPrimaryVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(primaryVSwitchIds_, "") };
    inline DescribeMultiZoneClusterResponseBody& setPrimaryVSwitchIds(string primaryVSwitchIds) { DARABONBA_PTR_SET_VALUE(primaryVSwitchIds_, primaryVSwitchIds) };


    // primaryZoneId Field Functions 
    bool hasPrimaryZoneId() const { return this->primaryZoneId_ != nullptr;};
    void deletePrimaryZoneId() { this->primaryZoneId_ = nullptr;};
    inline string getPrimaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryZoneId_, "") };
    inline DescribeMultiZoneClusterResponseBody& setPrimaryZoneId(string primaryZoneId) { DARABONBA_PTR_SET_VALUE(primaryZoneId_, primaryZoneId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMultiZoneClusterResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMultiZoneClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeMultiZoneClusterResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // standbyVSwitchIds Field Functions 
    bool hasStandbyVSwitchIds() const { return this->standbyVSwitchIds_ != nullptr;};
    void deleteStandbyVSwitchIds() { this->standbyVSwitchIds_ = nullptr;};
    inline string getStandbyVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchIds_, "") };
    inline DescribeMultiZoneClusterResponseBody& setStandbyVSwitchIds(string standbyVSwitchIds) { DARABONBA_PTR_SET_VALUE(standbyVSwitchIds_, standbyVSwitchIds) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string getStandbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline DescribeMultiZoneClusterResponseBody& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMultiZoneClusterResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeMultiZoneClusterResponseBody::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeMultiZoneClusterResponseBody::Tags) };
    inline DescribeMultiZoneClusterResponseBody::Tags getTags() { DARABONBA_PTR_GET(tags_, DescribeMultiZoneClusterResponseBody::Tags) };
    inline DescribeMultiZoneClusterResponseBody& setTags(const DescribeMultiZoneClusterResponseBody::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeMultiZoneClusterResponseBody& setTags(DescribeMultiZoneClusterResponseBody::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskProgress Field Functions 
    bool hasTaskProgress() const { return this->taskProgress_ != nullptr;};
    void deleteTaskProgress() { this->taskProgress_ = nullptr;};
    inline string getTaskProgress() const { DARABONBA_PTR_GET_DEFAULT(taskProgress_, "") };
    inline DescribeMultiZoneClusterResponseBody& setTaskProgress(string taskProgress) { DARABONBA_PTR_SET_VALUE(taskProgress_, taskProgress) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeMultiZoneClusterResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeMultiZoneClusterResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The vSwitch ID of the arbiter zone.
    shared_ptr<string> arbiterVSwitchIds_ {};
    // The zone ID of the arbiter zone.
    shared_ptr<string> arbiterZoneId_ {};
    // Indicates whether auto-renewal is enabled for the multi-zone instance when PayType is set to Prepaid. Valid values:
    // - True: Auto-renewal is enabled.
    // - False: Auto-renewal is disabled.
    shared_ptr<bool> autoRenewal_ {};
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The cluster name.
    shared_ptr<string> clusterName_ {};
    // The cold storage size. Unit: GB.
    shared_ptr<int32_t> coldStorageSize_ {};
    // The number of core node disks.
    shared_ptr<string> coreDiskCount_ {};
    // The disk size of a core node. Unit: GB.
    shared_ptr<int32_t> coreDiskSize_ {};
    // The disk type of core nodes. Valid values:
    // - cloud_efficiency: ultra cloud disk.
    // - cloud_ssd: standard SSD.
    // - local_hdd_pro: throughput-intensive local disk.
    // - local_ssd_pro: I/O-intensive local disk.
    shared_ptr<string> coreDiskType_ {};
    // The node specifications of core nodes.
    shared_ptr<string> coreInstanceType_ {};
    // The number of core nodes. The minimum value is 4, and the increment is a multiple of 2.
    shared_ptr<int32_t> coreNodeCount_ {};
    // The creation time in the current time zone.
    shared_ptr<string> createdTime_ {};
    // The creation time in UTC.
    shared_ptr<string> createdTimeUTC_ {};
    // The Unified Auto Renewal Cycle. This parameter is not returned for pay-as-you-go instances.
    // - Monthly subscription: The auto-renewal epoch is 1 month.
    // - Yearly subscription: The auto-renewal epoch is 1 year (12 months).
    shared_ptr<int32_t> duration_ {};
    // The ID of the encryption key. This parameter is empty if encryption is not enabled.
    // 
    // > Cloud disk encryption cannot be disabled after it is enabled.
    shared_ptr<string> encryptionKey_ {};
    // The encryption type. Valid values:
    // 
    // - NULL: Encryption is not enabled. This is the default value.
    // 
    // - CloudDisk: Cloud disk encryption. The encryption key is specified by the **EncryptionKey** parameter.
    shared_ptr<string> encryptionType_ {};
    // The service type. Currently, only hbaseue is supported.
    shared_ptr<string> engine_ {};
    // The expiration time in the current time zone. This parameter is returned only when PayType is set to Prepaid.
    shared_ptr<string> expireTime_ {};
    // The expiration time in UTC. This parameter is returned only when PayType is set to Prepaid.
    shared_ptr<string> expireTimeUTC_ {};
    // The initial default password.
    shared_ptr<string> initialRootPassword_ {};
    // The cluster ID.
    shared_ptr<string> instanceId_ {};
    // The cluster name.
    shared_ptr<string> instanceName_ {};
    // Indicates whether deletion protection is enabled. Valid values:
    // - True: Deletion protection is enabled. The instance cannot be deleted. An error message is returned if you attempt to delete the instance.
    // - False: Deletion protection is disabled. The instance can be deleted.
    shared_ptr<bool> isDeletionProtection_ {};
    // The number of disks per log node.
    shared_ptr<string> logDiskCount_ {};
    // The size of a single disk on a log node. Unit: GB.
    shared_ptr<int32_t> logDiskSize_ {};
    // The disk type of log nodes. Valid values:
    // - cloud_efficiency: ultra cloud disk.
    // - cloud_ssd: standard SSD.
    // - local_hdd_pro: throughput-intensive local disk.
    // - local_ssd_pro: I/O-intensive local disk.
    shared_ptr<string> logDiskType_ {};
    // The node specifications of log nodes. You can call [DescribeInstanceType](https://help.aliyun.com/document_detail/145796.html) to query the exact information.
    shared_ptr<string> logInstanceType_ {};
    // The number of log nodes. The minimum value is 4, and the value must be a multiple of 4.
    shared_ptr<int32_t> logNodeCount_ {};
    // The end time of the O&M window. The format is HH:MMZ, such as 20:00Z.
    shared_ptr<string> maintainEndTime_ {};
    // The start time of the O&M window. The format is HH:MMZ, such as 20:00Z.
    shared_ptr<string> maintainStartTime_ {};
    // The major version based on the engine type. Currently, only version 2.0 of hbaseue is supported.
    shared_ptr<string> majorVersion_ {};
    // The disk size of master nodes.
    shared_ptr<int32_t> masterDiskSize_ {};
    // The disk type of master nodes.
    shared_ptr<string> masterDiskType_ {};
    // The node specifications of master nodes.
    shared_ptr<string> masterInstanceType_ {};
    // The number of master nodes.
    shared_ptr<int32_t> masterNodeCount_ {};
    // The module ID.
    shared_ptr<int32_t> moduleId_ {};
    // The module software stack version.
    shared_ptr<string> moduleStackVersion_ {};
    // The zone combination of the multi-zone instance.
    shared_ptr<string> multiZoneCombination_ {};
    shared_ptr<DescribeMultiZoneClusterResponseBody::MultiZoneInstanceModels> multiZoneInstanceModels_ {};
    // The network type. Currently, only VPC is supported.
    shared_ptr<string> networkType_ {};
    // The instance ID of the primary instance. This parameter is returned only when the instance is a component instance.
    shared_ptr<string> parentId_ {};
    // The billing method. Valid values:
    // - Prepaid: subscription.
    // - Postpaid: pay-as-you-go.
    shared_ptr<string> payType_ {};
    // The vSwitch ID of the primary zone instance.
    shared_ptr<string> primaryVSwitchIds_ {};
    // The zone ID of the primary zone instance.
    shared_ptr<string> primaryZoneId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the resource belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The vSwitch ID of the secondary zone instance.
    shared_ptr<string> standbyVSwitchIds_ {};
    // The zone ID of the secondary zone instance.
    shared_ptr<string> standbyZoneId_ {};
    // The cluster status. Valid values:
    // - CREATING: The cluster is being created.
    // - ACTIVATION: The cluster is running.
    // - DELETING: The cluster is being deleted.
    // - RESTARTING: The cluster is being restarted.
    shared_ptr<string> status_ {};
    shared_ptr<DescribeMultiZoneClusterResponseBody::Tags> tags_ {};
    // The progress of the task running on the instance, in percentage (%). Tasks initiated from the ApsaraDB for HBase console include specification changes, node scale-out, node scale-in, instance restart, and minor engine version update.
    shared_ptr<string> taskProgress_ {};
    // The task status. Valid values:
    // - running: The task is running.
    // - pause: The task is paused.
    // - fail: The task is interrupted.
    // - finish: The task is completed.
    shared_ptr<string> taskStatus_ {};
    // The VPC ID.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
