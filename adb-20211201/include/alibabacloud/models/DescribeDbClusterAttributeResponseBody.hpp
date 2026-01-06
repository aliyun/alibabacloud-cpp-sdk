// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterAttributeResponseBody() = default ;
    DescribeDBClusterAttributeResponseBody(const DescribeDBClusterAttributeResponseBody &) = default ;
    DescribeDBClusterAttributeResponseBody(DescribeDBClusterAttributeResponseBody &&) = default ;
    DescribeDBClusterAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAttributeResponseBody() = default ;
    DescribeDBClusterAttributeResponseBody& operator=(const DescribeDBClusterAttributeResponseBody &) = default ;
    DescribeDBClusterAttributeResponseBody& operator=(DescribeDBClusterAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DBCluster, DBCluster_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DBCluster, DBCluster_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBCluster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBCluster& obj) { 
          DARABONBA_PTR_TO_JSON(AINodeNumber, AINodeNumber_);
          DARABONBA_PTR_TO_JSON(AINodeSpec, AINodeSpec_);
          DARABONBA_PTR_TO_JSON(ClickhouseEngineCacheSize, clickhouseEngineCacheSize_);
          DARABONBA_PTR_TO_JSON(ClickhouseEngineEnabled, clickhouseEngineEnabled_);
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
          DARABONBA_PTR_TO_JSON(ComputeResourceTotal, computeResourceTotal_);
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
          DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
          DARABONBA_PTR_TO_JSON(DBClusterType, DBClusterType_);
          DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
          DARABONBA_PTR_TO_JSON(DiskEncryption, diskEncryption_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(Expired, expired_);
          DARABONBA_PTR_TO_JSON(KmsId, kmsId_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
          DARABONBA_PTR_TO_JSON(MaintainTime, maintainTime_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(ProductForm, productForm_);
          DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReservedACU, reservedACU_);
          DARABONBA_PTR_TO_JSON(ReservedNodeCount, reservedNodeCount_);
          DARABONBA_PTR_TO_JSON(ReservedNodeSize, reservedNodeSize_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SecondaryVSwitchId, secondaryVSwitchId_);
          DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
          DARABONBA_PTR_TO_JSON(StorageResource, storageResource_);
          DARABONBA_PTR_TO_JSON(StorageResourceTotal, storageResourceTotal_);
          DARABONBA_PTR_TO_JSON(SupportedFeatures, supportedFeatures_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
          DARABONBA_PTR_TO_JSON(UserENIStatus, userENIStatus_);
          DARABONBA_PTR_TO_JSON(UserENIVSwitchOptions, userENIVSwitchOptions_);
          DARABONBA_PTR_TO_JSON(UserENIVpcId, userENIVpcId_);
          DARABONBA_PTR_TO_JSON(UserENIZoneOptions, userENIZoneOptions_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBCluster& obj) { 
          DARABONBA_PTR_FROM_JSON(AINodeNumber, AINodeNumber_);
          DARABONBA_PTR_FROM_JSON(AINodeSpec, AINodeSpec_);
          DARABONBA_PTR_FROM_JSON(ClickhouseEngineCacheSize, clickhouseEngineCacheSize_);
          DARABONBA_PTR_FROM_JSON(ClickhouseEngineEnabled, clickhouseEngineEnabled_);
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
          DARABONBA_PTR_FROM_JSON(ComputeResourceTotal, computeResourceTotal_);
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
          DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
          DARABONBA_PTR_FROM_JSON(DBClusterType, DBClusterType_);
          DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
          DARABONBA_PTR_FROM_JSON(DiskEncryption, diskEncryption_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(Expired, expired_);
          DARABONBA_PTR_FROM_JSON(KmsId, kmsId_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
          DARABONBA_PTR_FROM_JSON(MaintainTime, maintainTime_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(ProductForm, productForm_);
          DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReservedACU, reservedACU_);
          DARABONBA_PTR_FROM_JSON(ReservedNodeCount, reservedNodeCount_);
          DARABONBA_PTR_FROM_JSON(ReservedNodeSize, reservedNodeSize_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SecondaryVSwitchId, secondaryVSwitchId_);
          DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
          DARABONBA_PTR_FROM_JSON(StorageResource, storageResource_);
          DARABONBA_PTR_FROM_JSON(StorageResourceTotal, storageResourceTotal_);
          DARABONBA_PTR_FROM_JSON(SupportedFeatures, supportedFeatures_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
          DARABONBA_PTR_FROM_JSON(UserENIStatus, userENIStatus_);
          DARABONBA_PTR_FROM_JSON(UserENIVSwitchOptions, userENIVSwitchOptions_);
          DARABONBA_PTR_FROM_JSON(UserENIVpcId, userENIVpcId_);
          DARABONBA_PTR_FROM_JSON(UserENIZoneOptions, userENIZoneOptions_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        DBCluster() = default ;
        DBCluster(const DBCluster &) = default ;
        DBCluster(DBCluster &&) = default ;
        DBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBCluster() = default ;
        DBCluster& operator=(const DBCluster &) = default ;
        DBCluster& operator=(DBCluster &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TaskInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TaskInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(StepList, stepList_);
          };
          friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(StepList, stepList_);
          };
          TaskInfo() = default ;
          TaskInfo(const TaskInfo &) = default ;
          TaskInfo(TaskInfo &&) = default ;
          TaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TaskInfo() = default ;
          TaskInfo& operator=(const TaskInfo &) = default ;
          TaskInfo& operator=(TaskInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class StepList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StepList& obj) { 
              DARABONBA_PTR_TO_JSON(StepList, stepList_);
            };
            friend void from_json(const Darabonba::Json& j, StepList& obj) { 
              DARABONBA_PTR_FROM_JSON(StepList, stepList_);
            };
            StepList() = default ;
            StepList(const StepList &) = default ;
            StepList(StepList &&) = default ;
            StepList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~StepList() = default ;
            StepList& operator=(const StepList &) = default ;
            StepList& operator=(StepList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class StepListItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const StepListItem& obj) { 
                DARABONBA_PTR_TO_JSON(EndTime, endTime_);
                DARABONBA_PTR_TO_JSON(StartTime, startTime_);
                DARABONBA_PTR_TO_JSON(StepDesc, stepDesc_);
                DARABONBA_PTR_TO_JSON(StepName, stepName_);
                DARABONBA_PTR_TO_JSON(StepProgress, stepProgress_);
                DARABONBA_PTR_TO_JSON(StepStatus, stepStatus_);
              };
              friend void from_json(const Darabonba::Json& j, StepListItem& obj) { 
                DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
                DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
                DARABONBA_PTR_FROM_JSON(StepDesc, stepDesc_);
                DARABONBA_PTR_FROM_JSON(StepName, stepName_);
                DARABONBA_PTR_FROM_JSON(StepProgress, stepProgress_);
                DARABONBA_PTR_FROM_JSON(StepStatus, stepStatus_);
              };
              StepListItem() = default ;
              StepListItem(const StepListItem &) = default ;
              StepListItem(StepListItem &&) = default ;
              StepListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~StepListItem() = default ;
              StepListItem& operator=(const StepListItem &) = default ;
              StepListItem& operator=(StepListItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr && this->stepDesc_ == nullptr && this->stepName_ == nullptr && this->stepProgress_ == nullptr && this->stepStatus_ == nullptr; };
              // endTime Field Functions 
              bool hasEndTime() const { return this->endTime_ != nullptr;};
              void deleteEndTime() { this->endTime_ = nullptr;};
              inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
              inline StepListItem& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


              // startTime Field Functions 
              bool hasStartTime() const { return this->startTime_ != nullptr;};
              void deleteStartTime() { this->startTime_ = nullptr;};
              inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
              inline StepListItem& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


              // stepDesc Field Functions 
              bool hasStepDesc() const { return this->stepDesc_ != nullptr;};
              void deleteStepDesc() { this->stepDesc_ = nullptr;};
              inline string getStepDesc() const { DARABONBA_PTR_GET_DEFAULT(stepDesc_, "") };
              inline StepListItem& setStepDesc(string stepDesc) { DARABONBA_PTR_SET_VALUE(stepDesc_, stepDesc) };


              // stepName Field Functions 
              bool hasStepName() const { return this->stepName_ != nullptr;};
              void deleteStepName() { this->stepName_ = nullptr;};
              inline string getStepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
              inline StepListItem& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


              // stepProgress Field Functions 
              bool hasStepProgress() const { return this->stepProgress_ != nullptr;};
              void deleteStepProgress() { this->stepProgress_ = nullptr;};
              inline string getStepProgress() const { DARABONBA_PTR_GET_DEFAULT(stepProgress_, "") };
              inline StepListItem& setStepProgress(string stepProgress) { DARABONBA_PTR_SET_VALUE(stepProgress_, stepProgress) };


              // stepStatus Field Functions 
              bool hasStepStatus() const { return this->stepStatus_ != nullptr;};
              void deleteStepStatus() { this->stepStatus_ = nullptr;};
              inline string getStepStatus() const { DARABONBA_PTR_GET_DEFAULT(stepStatus_, "") };
              inline StepListItem& setStepStatus(string stepStatus) { DARABONBA_PTR_SET_VALUE(stepStatus_, stepStatus) };


            protected:
              // The end time of the job step. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
              shared_ptr<string> endTime_ {};
              // The start time of the job step. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
              shared_ptr<string> startTime_ {};
              // The description of the job step.
              shared_ptr<string> stepDesc_ {};
              // The name of the job step.
              shared_ptr<string> stepName_ {};
              // The progress of the job step. Unit: %.
              shared_ptr<string> stepProgress_ {};
              // The status of the job step. Valid values:
              // 
              // *   NOT_RUN
              // *   RUNNING
              // *   SUCCEED
              shared_ptr<string> stepStatus_ {};
            };

            virtual bool empty() const override { return this->stepList_ == nullptr; };
            // stepList Field Functions 
            bool hasStepList() const { return this->stepList_ != nullptr;};
            void deleteStepList() { this->stepList_ = nullptr;};
            inline const vector<StepList::StepListItem> & getStepList() const { DARABONBA_PTR_GET_CONST(stepList_, vector<StepList::StepListItem>) };
            inline vector<StepList::StepListItem> getStepList() { DARABONBA_PTR_GET(stepList_, vector<StepList::StepListItem>) };
            inline StepList& setStepList(const vector<StepList::StepListItem> & stepList) { DARABONBA_PTR_SET_VALUE(stepList_, stepList) };
            inline StepList& setStepList(vector<StepList::StepListItem> && stepList) { DARABONBA_PTR_SET_RVALUE(stepList_, stepList) };


          protected:
            shared_ptr<vector<StepList::StepListItem>> stepList_ {};
          };

          virtual bool empty() const override { return this->name_ == nullptr
        && this->progress_ == nullptr && this->status_ == nullptr && this->stepList_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TaskInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline TaskInfo& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline TaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // stepList Field Functions 
          bool hasStepList() const { return this->stepList_ != nullptr;};
          void deleteStepList() { this->stepList_ = nullptr;};
          inline const TaskInfo::StepList & getStepList() const { DARABONBA_PTR_GET_CONST(stepList_, TaskInfo::StepList) };
          inline TaskInfo::StepList getStepList() { DARABONBA_PTR_GET(stepList_, TaskInfo::StepList) };
          inline TaskInfo& setStepList(const TaskInfo::StepList & stepList) { DARABONBA_PTR_SET_VALUE(stepList_, stepList) };
          inline TaskInfo& setStepList(TaskInfo::StepList && stepList) { DARABONBA_PTR_SET_RVALUE(stepList_, stepList) };


        protected:
          // The name of the job.
          shared_ptr<string> name_ {};
          // The progress of the job. Unit: %.
          shared_ptr<string> progress_ {};
          // The status of the job. Valid values:
          // 
          // *   NOT_RUN
          // *   RUNNING
          // *   SUCCEED
          shared_ptr<string> status_ {};
          // The job steps.
          shared_ptr<TaskInfo::StepList> stepList_ {};
        };

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
            // The tag key.
            // 
            // >  You can call the [TagResources](https://help.aliyun.com/document_detail/179253.html) operation to add tags to a cluster.
            shared_ptr<string> key_ {};
            // The tag value.
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

        virtual bool empty() const override { return this->AINodeNumber_ == nullptr
        && this->AINodeSpec_ == nullptr && this->clickhouseEngineCacheSize_ == nullptr && this->clickhouseEngineEnabled_ == nullptr && this->commodityCode_ == nullptr && this->computeResource_ == nullptr
        && this->computeResourceTotal_ == nullptr && this->connectionString_ == nullptr && this->creationTime_ == nullptr && this->DBClusterDescription_ == nullptr && this->DBClusterId_ == nullptr
        && this->DBClusterNetworkType_ == nullptr && this->DBClusterStatus_ == nullptr && this->DBClusterType_ == nullptr && this->DBVersion_ == nullptr && this->diskEncryption_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->expireTime_ == nullptr && this->expired_ == nullptr && this->kmsId_ == nullptr
        && this->lockMode_ == nullptr && this->lockReason_ == nullptr && this->maintainTime_ == nullptr && this->mode_ == nullptr && this->payType_ == nullptr
        && this->port_ == nullptr && this->productForm_ == nullptr && this->productVersion_ == nullptr && this->regionId_ == nullptr && this->reservedACU_ == nullptr
        && this->reservedNodeCount_ == nullptr && this->reservedNodeSize_ == nullptr && this->resourceGroupId_ == nullptr && this->secondaryVSwitchId_ == nullptr && this->secondaryZoneId_ == nullptr
        && this->storageResource_ == nullptr && this->storageResourceTotal_ == nullptr && this->supportedFeatures_ == nullptr && this->tags_ == nullptr && this->taskInfo_ == nullptr
        && this->userENIStatus_ == nullptr && this->userENIVSwitchOptions_ == nullptr && this->userENIVpcId_ == nullptr && this->userENIZoneOptions_ == nullptr && this->VPCId_ == nullptr
        && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
        // AINodeNumber Field Functions 
        bool hasAINodeNumber() const { return this->AINodeNumber_ != nullptr;};
        void deleteAINodeNumber() { this->AINodeNumber_ = nullptr;};
        inline int32_t getAINodeNumber() const { DARABONBA_PTR_GET_DEFAULT(AINodeNumber_, 0) };
        inline DBCluster& setAINodeNumber(int32_t AINodeNumber) { DARABONBA_PTR_SET_VALUE(AINodeNumber_, AINodeNumber) };


        // AINodeSpec Field Functions 
        bool hasAINodeSpec() const { return this->AINodeSpec_ != nullptr;};
        void deleteAINodeSpec() { this->AINodeSpec_ = nullptr;};
        inline string getAINodeSpec() const { DARABONBA_PTR_GET_DEFAULT(AINodeSpec_, "") };
        inline DBCluster& setAINodeSpec(string AINodeSpec) { DARABONBA_PTR_SET_VALUE(AINodeSpec_, AINodeSpec) };


        // clickhouseEngineCacheSize Field Functions 
        bool hasClickhouseEngineCacheSize() const { return this->clickhouseEngineCacheSize_ != nullptr;};
        void deleteClickhouseEngineCacheSize() { this->clickhouseEngineCacheSize_ = nullptr;};
        inline int32_t getClickhouseEngineCacheSize() const { DARABONBA_PTR_GET_DEFAULT(clickhouseEngineCacheSize_, 0) };
        inline DBCluster& setClickhouseEngineCacheSize(int32_t clickhouseEngineCacheSize) { DARABONBA_PTR_SET_VALUE(clickhouseEngineCacheSize_, clickhouseEngineCacheSize) };


        // clickhouseEngineEnabled Field Functions 
        bool hasClickhouseEngineEnabled() const { return this->clickhouseEngineEnabled_ != nullptr;};
        void deleteClickhouseEngineEnabled() { this->clickhouseEngineEnabled_ = nullptr;};
        inline bool getClickhouseEngineEnabled() const { DARABONBA_PTR_GET_DEFAULT(clickhouseEngineEnabled_, false) };
        inline DBCluster& setClickhouseEngineEnabled(bool clickhouseEngineEnabled) { DARABONBA_PTR_SET_VALUE(clickhouseEngineEnabled_, clickhouseEngineEnabled) };


        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline DBCluster& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // computeResource Field Functions 
        bool hasComputeResource() const { return this->computeResource_ != nullptr;};
        void deleteComputeResource() { this->computeResource_ = nullptr;};
        inline string getComputeResource() const { DARABONBA_PTR_GET_DEFAULT(computeResource_, "") };
        inline DBCluster& setComputeResource(string computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };


        // computeResourceTotal Field Functions 
        bool hasComputeResourceTotal() const { return this->computeResourceTotal_ != nullptr;};
        void deleteComputeResourceTotal() { this->computeResourceTotal_ = nullptr;};
        inline string getComputeResourceTotal() const { DARABONBA_PTR_GET_DEFAULT(computeResourceTotal_, "") };
        inline DBCluster& setComputeResourceTotal(string computeResourceTotal) { DARABONBA_PTR_SET_VALUE(computeResourceTotal_, computeResourceTotal) };


        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline DBCluster& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline DBCluster& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // DBClusterDescription Field Functions 
        bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
        void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
        inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
        inline DBCluster& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline DBCluster& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // DBClusterNetworkType Field Functions 
        bool hasDBClusterNetworkType() const { return this->DBClusterNetworkType_ != nullptr;};
        void deleteDBClusterNetworkType() { this->DBClusterNetworkType_ = nullptr;};
        inline string getDBClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterNetworkType_, "") };
        inline DBCluster& setDBClusterNetworkType(string DBClusterNetworkType) { DARABONBA_PTR_SET_VALUE(DBClusterNetworkType_, DBClusterNetworkType) };


        // DBClusterStatus Field Functions 
        bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
        void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
        inline string getDBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
        inline DBCluster& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


        // DBClusterType Field Functions 
        bool hasDBClusterType() const { return this->DBClusterType_ != nullptr;};
        void deleteDBClusterType() { this->DBClusterType_ = nullptr;};
        inline string getDBClusterType() const { DARABONBA_PTR_GET_DEFAULT(DBClusterType_, "") };
        inline DBCluster& setDBClusterType(string DBClusterType) { DARABONBA_PTR_SET_VALUE(DBClusterType_, DBClusterType) };


        // DBVersion Field Functions 
        bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
        void deleteDBVersion() { this->DBVersion_ = nullptr;};
        inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
        inline DBCluster& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


        // diskEncryption Field Functions 
        bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
        void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
        inline bool getDiskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
        inline DBCluster& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline DBCluster& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline DBCluster& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline DBCluster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // expired Field Functions 
        bool hasExpired() const { return this->expired_ != nullptr;};
        void deleteExpired() { this->expired_ = nullptr;};
        inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
        inline DBCluster& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


        // kmsId Field Functions 
        bool hasKmsId() const { return this->kmsId_ != nullptr;};
        void deleteKmsId() { this->kmsId_ = nullptr;};
        inline string getKmsId() const { DARABONBA_PTR_GET_DEFAULT(kmsId_, "") };
        inline DBCluster& setKmsId(string kmsId) { DARABONBA_PTR_SET_VALUE(kmsId_, kmsId) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline DBCluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // lockReason Field Functions 
        bool hasLockReason() const { return this->lockReason_ != nullptr;};
        void deleteLockReason() { this->lockReason_ = nullptr;};
        inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
        inline DBCluster& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


        // maintainTime Field Functions 
        bool hasMaintainTime() const { return this->maintainTime_ != nullptr;};
        void deleteMaintainTime() { this->maintainTime_ = nullptr;};
        inline string getMaintainTime() const { DARABONBA_PTR_GET_DEFAULT(maintainTime_, "") };
        inline DBCluster& setMaintainTime(string maintainTime) { DARABONBA_PTR_SET_VALUE(maintainTime_, maintainTime) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline DBCluster& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline DBCluster& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline DBCluster& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // productForm Field Functions 
        bool hasProductForm() const { return this->productForm_ != nullptr;};
        void deleteProductForm() { this->productForm_ = nullptr;};
        inline string getProductForm() const { DARABONBA_PTR_GET_DEFAULT(productForm_, "") };
        inline DBCluster& setProductForm(string productForm) { DARABONBA_PTR_SET_VALUE(productForm_, productForm) };


        // productVersion Field Functions 
        bool hasProductVersion() const { return this->productVersion_ != nullptr;};
        void deleteProductVersion() { this->productVersion_ = nullptr;};
        inline string getProductVersion() const { DARABONBA_PTR_GET_DEFAULT(productVersion_, "") };
        inline DBCluster& setProductVersion(string productVersion) { DARABONBA_PTR_SET_VALUE(productVersion_, productVersion) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // reservedACU Field Functions 
        bool hasReservedACU() const { return this->reservedACU_ != nullptr;};
        void deleteReservedACU() { this->reservedACU_ = nullptr;};
        inline string getReservedACU() const { DARABONBA_PTR_GET_DEFAULT(reservedACU_, "") };
        inline DBCluster& setReservedACU(string reservedACU) { DARABONBA_PTR_SET_VALUE(reservedACU_, reservedACU) };


        // reservedNodeCount Field Functions 
        bool hasReservedNodeCount() const { return this->reservedNodeCount_ != nullptr;};
        void deleteReservedNodeCount() { this->reservedNodeCount_ = nullptr;};
        inline int32_t getReservedNodeCount() const { DARABONBA_PTR_GET_DEFAULT(reservedNodeCount_, 0) };
        inline DBCluster& setReservedNodeCount(int32_t reservedNodeCount) { DARABONBA_PTR_SET_VALUE(reservedNodeCount_, reservedNodeCount) };


        // reservedNodeSize Field Functions 
        bool hasReservedNodeSize() const { return this->reservedNodeSize_ != nullptr;};
        void deleteReservedNodeSize() { this->reservedNodeSize_ = nullptr;};
        inline string getReservedNodeSize() const { DARABONBA_PTR_GET_DEFAULT(reservedNodeSize_, "") };
        inline DBCluster& setReservedNodeSize(string reservedNodeSize) { DARABONBA_PTR_SET_VALUE(reservedNodeSize_, reservedNodeSize) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline DBCluster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // secondaryVSwitchId Field Functions 
        bool hasSecondaryVSwitchId() const { return this->secondaryVSwitchId_ != nullptr;};
        void deleteSecondaryVSwitchId() { this->secondaryVSwitchId_ = nullptr;};
        inline string getSecondaryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(secondaryVSwitchId_, "") };
        inline DBCluster& setSecondaryVSwitchId(string secondaryVSwitchId) { DARABONBA_PTR_SET_VALUE(secondaryVSwitchId_, secondaryVSwitchId) };


        // secondaryZoneId Field Functions 
        bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
        void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
        inline string getSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
        inline DBCluster& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


        // storageResource Field Functions 
        bool hasStorageResource() const { return this->storageResource_ != nullptr;};
        void deleteStorageResource() { this->storageResource_ = nullptr;};
        inline string getStorageResource() const { DARABONBA_PTR_GET_DEFAULT(storageResource_, "") };
        inline DBCluster& setStorageResource(string storageResource) { DARABONBA_PTR_SET_VALUE(storageResource_, storageResource) };


        // storageResourceTotal Field Functions 
        bool hasStorageResourceTotal() const { return this->storageResourceTotal_ != nullptr;};
        void deleteStorageResourceTotal() { this->storageResourceTotal_ = nullptr;};
        inline string getStorageResourceTotal() const { DARABONBA_PTR_GET_DEFAULT(storageResourceTotal_, "") };
        inline DBCluster& setStorageResourceTotal(string storageResourceTotal) { DARABONBA_PTR_SET_VALUE(storageResourceTotal_, storageResourceTotal) };


        // supportedFeatures Field Functions 
        bool hasSupportedFeatures() const { return this->supportedFeatures_ != nullptr;};
        void deleteSupportedFeatures() { this->supportedFeatures_ = nullptr;};
        inline const map<string, string> & getSupportedFeatures() const { DARABONBA_PTR_GET_CONST(supportedFeatures_, map<string, string>) };
        inline map<string, string> getSupportedFeatures() { DARABONBA_PTR_GET(supportedFeatures_, map<string, string>) };
        inline DBCluster& setSupportedFeatures(const map<string, string> & supportedFeatures) { DARABONBA_PTR_SET_VALUE(supportedFeatures_, supportedFeatures) };
        inline DBCluster& setSupportedFeatures(map<string, string> && supportedFeatures) { DARABONBA_PTR_SET_RVALUE(supportedFeatures_, supportedFeatures) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const DBCluster::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DBCluster::Tags) };
        inline DBCluster::Tags getTags() { DARABONBA_PTR_GET(tags_, DBCluster::Tags) };
        inline DBCluster& setTags(const DBCluster::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DBCluster& setTags(DBCluster::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // taskInfo Field Functions 
        bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
        void deleteTaskInfo() { this->taskInfo_ = nullptr;};
        inline const DBCluster::TaskInfo & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, DBCluster::TaskInfo) };
        inline DBCluster::TaskInfo getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, DBCluster::TaskInfo) };
        inline DBCluster& setTaskInfo(const DBCluster::TaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
        inline DBCluster& setTaskInfo(DBCluster::TaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


        // userENIStatus Field Functions 
        bool hasUserENIStatus() const { return this->userENIStatus_ != nullptr;};
        void deleteUserENIStatus() { this->userENIStatus_ = nullptr;};
        inline bool getUserENIStatus() const { DARABONBA_PTR_GET_DEFAULT(userENIStatus_, false) };
        inline DBCluster& setUserENIStatus(bool userENIStatus) { DARABONBA_PTR_SET_VALUE(userENIStatus_, userENIStatus) };


        // userENIVSwitchOptions Field Functions 
        bool hasUserENIVSwitchOptions() const { return this->userENIVSwitchOptions_ != nullptr;};
        void deleteUserENIVSwitchOptions() { this->userENIVSwitchOptions_ = nullptr;};
        inline string getUserENIVSwitchOptions() const { DARABONBA_PTR_GET_DEFAULT(userENIVSwitchOptions_, "") };
        inline DBCluster& setUserENIVSwitchOptions(string userENIVSwitchOptions) { DARABONBA_PTR_SET_VALUE(userENIVSwitchOptions_, userENIVSwitchOptions) };


        // userENIVpcId Field Functions 
        bool hasUserENIVpcId() const { return this->userENIVpcId_ != nullptr;};
        void deleteUserENIVpcId() { this->userENIVpcId_ = nullptr;};
        inline string getUserENIVpcId() const { DARABONBA_PTR_GET_DEFAULT(userENIVpcId_, "") };
        inline DBCluster& setUserENIVpcId(string userENIVpcId) { DARABONBA_PTR_SET_VALUE(userENIVpcId_, userENIVpcId) };


        // userENIZoneOptions Field Functions 
        bool hasUserENIZoneOptions() const { return this->userENIZoneOptions_ != nullptr;};
        void deleteUserENIZoneOptions() { this->userENIZoneOptions_ = nullptr;};
        inline string getUserENIZoneOptions() const { DARABONBA_PTR_GET_DEFAULT(userENIZoneOptions_, "") };
        inline DBCluster& setUserENIZoneOptions(string userENIZoneOptions) { DARABONBA_PTR_SET_VALUE(userENIZoneOptions_, userENIZoneOptions) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline DBCluster& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline DBCluster& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<int32_t> AINodeNumber_ {};
        shared_ptr<string> AINodeSpec_ {};
        // The cache size of the ClickHouse wide table engine. Unit: GB. If a value of -1 is returned, the ClickHouse wide table engine is disabled. If a value other than -1 is returned, this parameter indicates the disk cache size.
        shared_ptr<int32_t> clickhouseEngineCacheSize_ {};
        // Indicates whether the ClickHouse wide table engine is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> clickhouseEngineEnabled_ {};
        // The billing method of the cluster. Valid values:
        // 
        // *   **ads**: pay-as-you-go.
        // *   **ads_pre**: subscription.
        shared_ptr<string> commodityCode_ {};
        // The specifications of reserved computing resources. Each ACU is approximately equal to 1 core and 4 GB memory. Computing resources are used to compute data. The increase in the computing resources can accelerate queries. You can scale computing resources based on your business requirements.
        shared_ptr<string> computeResource_ {};
        // The total amount of computing resources in the cluster. Each ACU is approximately equal to 1 core and 4 GB memory.
        shared_ptr<string> computeResourceTotal_ {};
        // The public endpoint that is used to connect to the cluster.
        shared_ptr<string> connectionString_ {};
        // The time when the cluster was created. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the cluster.
        shared_ptr<string> DBClusterDescription_ {};
        // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
        shared_ptr<string> DBClusterId_ {};
        // The network type of the cluster. **VPC** is returned.
        shared_ptr<string> DBClusterNetworkType_ {};
        // The status of the cluster. Valid values:
        // 
        // *   **Preparing**
        // *   **Creating**
        // *   **Running**
        // *   **Deleting**
        // *   **Restoring**
        // *   **ClassChanging**
        // *   **NetAddressCreating**
        // *   **NetAddressDeleting**
        // *   **NetAddressModifying**
        shared_ptr<string> DBClusterStatus_ {};
        // The type of the cluster. By default, **Common** is returned, which indicates a common cluster.
        shared_ptr<string> DBClusterType_ {};
        // The engine version of the AnalyticDB for MySQL Data Lakehouse Edition cluster. **5.0** is returned.
        shared_ptr<string> DBVersion_ {};
        shared_ptr<bool> diskEncryption_ {};
        // The engine of the cluster. **AnalyticDB** is returned.
        shared_ptr<string> engine_ {};
        // The minor version of the cluster.
        shared_ptr<string> engineVersion_ {};
        // The time when the cluster expires.
        // 
        // *   If the billing method of the cluster is subscription, the actual expiration time is returned.
        // *   If the billing method of the cluster is pay-as-you-go, null is returned.
        shared_ptr<string> expireTime_ {};
        // Indicates whether the subscription cluster has expired. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // > 
        // 
        // *   If the cluster has expired, the system locks or releases the cluster within a period of time. We recommend that you renew the expired cluster. For more information, see [Renewal policy](https://help.aliyun.com/document_detail/135248.html).
        // 
        // *   This parameter is not returned for pay-as-you-go clusters.
        shared_ptr<string> expired_ {};
        // The ID of the key that is used to encrypt disk data.
        // 
        // >  This parameter is returned only when disk encryption is enabled.
        shared_ptr<string> kmsId_ {};
        // The lock mode of the cluster. Valid values:
        // 
        // *   **Unlock**: The cluster is not locked.
        // *   **ManualLock**: The cluster is manually locked.
        // *   **LockByExpiration**: The cluster is automatically locked due to cluster expiration.
        shared_ptr<string> lockMode_ {};
        // The reason why the cluster is locked.
        // 
        // >  This parameter is returned only when the cluster was locked. **instance_expire** is returned.
        shared_ptr<string> lockReason_ {};
        // The maintenance window of the cluster. The time is displayed in the `HH:mmZ-HH:mmZ` format in UTC.
        // 
        // >  For more information about maintenance windows, see [Configure a maintenance window](https://help.aliyun.com/document_detail/122569.html).
        shared_ptr<string> maintainTime_ {};
        // The mode of the cluster. By default, **flexible** is returned, which indicates that the cluster is in elastic mode.
        shared_ptr<string> mode_ {};
        // The billing method of the cluster. Valid values:
        // 
        // *   **Postpaid**: pay-as-you-go.
        // *   **Prepaid**: subscription.
        shared_ptr<string> payType_ {};
        // The port number that is used to connect to the cluster.
        shared_ptr<int32_t> port_ {};
        // A reserved parameter.
        shared_ptr<string> productForm_ {};
        // The edition of the cluster. Valid values:
        // 
        // *   **BasicVersion**: Basic Edition.
        // *   **EnterpriseVersion**: Enterprise Edition.
        shared_ptr<string> productVersion_ {};
        // The region ID of the cluster.
        shared_ptr<string> regionId_ {};
        // The amount of remaining reserved computing resources that are available in the cluster. Each ACU is approximately equal to 1 core and 4 GB memory.
        shared_ptr<string> reservedACU_ {};
        // A reserved parameter.
        shared_ptr<int32_t> reservedNodeCount_ {};
        // A reserved parameter.
        shared_ptr<string> reservedNodeSize_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> secondaryVSwitchId_ {};
        shared_ptr<string> secondaryZoneId_ {};
        // The specifications of reserved storage resources. Each AnalyticDB compute unit (ACU) is approximately equal to 1 core and 4 GB memory. Storage resources are used to read and write data. The increase in the storage resources can improve the read and write performance of the cluster.
        shared_ptr<string> storageResource_ {};
        // The total amount of storage resources in the cluster. Each ACU is approximately equal to 1 core and 4 GB memory.
        shared_ptr<string> storageResourceTotal_ {};
        // Reserved parameters.
        shared_ptr<map<string, string>> supportedFeatures_ {};
        // The tags that are added to the cluster.
        shared_ptr<DBCluster::Tags> tags_ {};
        // The job information.
        shared_ptr<DBCluster::TaskInfo> taskInfo_ {};
        // Indicates whether Elastic Network Interface (ENI) is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> userENIStatus_ {};
        // The vSwitch connected to the ENI. Separate multiple vSwitches with commas (,).
        shared_ptr<string> userENIVSwitchOptions_ {};
        // The VPC information of the ENI.
        shared_ptr<string> userENIVpcId_ {};
        // The zone associated with the ENI. Separate multiple zones with commas (,).
        shared_ptr<string> userENIZoneOptions_ {};
        // The virtual private cloud (VPC) ID of the cluster.
        shared_ptr<string> VPCId_ {};
        // The vSwitch ID of the cluster.
        shared_ptr<string> vSwitchId_ {};
        // The zone ID of the cluster.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->DBCluster_ == nullptr; };
      // DBCluster Field Functions 
      bool hasDBCluster() const { return this->DBCluster_ != nullptr;};
      void deleteDBCluster() { this->DBCluster_ = nullptr;};
      inline const vector<Items::DBCluster> & getDBCluster() const { DARABONBA_PTR_GET_CONST(DBCluster_, vector<Items::DBCluster>) };
      inline vector<Items::DBCluster> getDBCluster() { DARABONBA_PTR_GET(DBCluster_, vector<Items::DBCluster>) };
      inline Items& setDBCluster(const vector<Items::DBCluster> & dBCluster) { DARABONBA_PTR_SET_VALUE(DBCluster_, dBCluster) };
      inline Items& setDBCluster(vector<Items::DBCluster> && dBCluster) { DARABONBA_PTR_SET_RVALUE(DBCluster_, dBCluster) };


    protected:
      shared_ptr<vector<Items::DBCluster>> DBCluster_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBClusterAttributeResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBClusterAttributeResponseBody::Items) };
    inline DescribeDBClusterAttributeResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBClusterAttributeResponseBody::Items) };
    inline DescribeDBClusterAttributeResponseBody& setItems(const DescribeDBClusterAttributeResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBClusterAttributeResponseBody& setItems(DescribeDBClusterAttributeResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried cluster.
    shared_ptr<DescribeDBClusterAttributeResponseBody::Items> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
