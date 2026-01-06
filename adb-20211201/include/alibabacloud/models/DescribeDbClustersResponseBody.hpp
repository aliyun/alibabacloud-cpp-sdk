// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDBClustersResponseBody() = default ;
    DescribeDBClustersResponseBody(const DescribeDBClustersResponseBody &) = default ;
    DescribeDBClustersResponseBody(DescribeDBClustersResponseBody &&) = default ;
    DescribeDBClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersResponseBody() = default ;
    DescribeDBClustersResponseBody& operator=(const DescribeDBClustersResponseBody &) = default ;
    DescribeDBClustersResponseBody& operator=(DescribeDBClustersResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(DBClusterNetworkType, DBClusterNetworkType_);
          DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
          DARABONBA_PTR_TO_JSON(DBClusterType, DBClusterType_);
          DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
          DARABONBA_PTR_TO_JSON(DBNodeCount, DBNodeCount_);
          DARABONBA_PTR_TO_JSON(DBNodeStorage, DBNodeStorage_);
          DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
          DARABONBA_PTR_TO_JSON(DiskType, diskType_);
          DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
          DARABONBA_PTR_TO_JSON(ElasticIOResource, elasticIOResource_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(ExecutorCount, executorCount_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(Expired, expired_);
          DARABONBA_PTR_TO_JSON(InnerIp, innerIp_);
          DARABONBA_PTR_TO_JSON(InnerPort, innerPort_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(ProductForm, productForm_);
          DARABONBA_PTR_TO_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_TO_JSON(RdsInstanceId, rdsInstanceId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReservedACU, reservedACU_);
          DARABONBA_PTR_TO_JSON(ReservedNodeCount, reservedNodeCount_);
          DARABONBA_PTR_TO_JSON(ReservedNodeSize, reservedNodeSize_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(StorageResource, storageResource_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
          DARABONBA_PTR_TO_JSON(VPCCloudInstanceId, VPCCloudInstanceId_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBCluster& obj) { 
          DARABONBA_PTR_FROM_JSON(AINodeNumber, AINodeNumber_);
          DARABONBA_PTR_FROM_JSON(AINodeSpec, AINodeSpec_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(DBClusterNetworkType, DBClusterNetworkType_);
          DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
          DARABONBA_PTR_FROM_JSON(DBClusterType, DBClusterType_);
          DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
          DARABONBA_PTR_FROM_JSON(DBNodeCount, DBNodeCount_);
          DARABONBA_PTR_FROM_JSON(DBNodeStorage, DBNodeStorage_);
          DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
          DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
          DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
          DARABONBA_PTR_FROM_JSON(ElasticIOResource, elasticIOResource_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(ExecutorCount, executorCount_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(Expired, expired_);
          DARABONBA_PTR_FROM_JSON(InnerIp, innerIp_);
          DARABONBA_PTR_FROM_JSON(InnerPort, innerPort_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(ProductForm, productForm_);
          DARABONBA_PTR_FROM_JSON(ProductVersion, productVersion_);
          DARABONBA_PTR_FROM_JSON(RdsInstanceId, rdsInstanceId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReservedACU, reservedACU_);
          DARABONBA_PTR_FROM_JSON(ReservedNodeCount, reservedNodeCount_);
          DARABONBA_PTR_FROM_JSON(ReservedNodeSize, reservedNodeSize_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(StorageResource, storageResource_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
          DARABONBA_PTR_FROM_JSON(VPCCloudInstanceId, VPCCloudInstanceId_);
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
              // *   **NOT_RUN**
              // *   **RUNNING**
              // *   **SUCCEED**
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
          // *   **NOT_RUN**
          // *   **RUNNING**
          // *   **SUCCEED**
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
        && this->AINodeSpec_ == nullptr && this->category_ == nullptr && this->commodityCode_ == nullptr && this->computeResource_ == nullptr && this->connectionString_ == nullptr
        && this->createTime_ == nullptr && this->DBClusterDescription_ == nullptr && this->DBClusterId_ == nullptr && this->DBClusterNetworkType_ == nullptr && this->DBClusterStatus_ == nullptr
        && this->DBClusterType_ == nullptr && this->DBNodeClass_ == nullptr && this->DBNodeCount_ == nullptr && this->DBNodeStorage_ == nullptr && this->DBVersion_ == nullptr
        && this->diskType_ == nullptr && this->dtsJobId_ == nullptr && this->elasticIOResource_ == nullptr && this->engine_ == nullptr && this->executorCount_ == nullptr
        && this->expireTime_ == nullptr && this->expired_ == nullptr && this->innerIp_ == nullptr && this->innerPort_ == nullptr && this->lockMode_ == nullptr
        && this->lockReason_ == nullptr && this->mode_ == nullptr && this->payType_ == nullptr && this->port_ == nullptr && this->productForm_ == nullptr
        && this->productVersion_ == nullptr && this->rdsInstanceId_ == nullptr && this->regionId_ == nullptr && this->reservedACU_ == nullptr && this->reservedNodeCount_ == nullptr
        && this->reservedNodeSize_ == nullptr && this->resourceGroupId_ == nullptr && this->storageResource_ == nullptr && this->tags_ == nullptr && this->taskInfo_ == nullptr
        && this->VPCCloudInstanceId_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
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


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline DBCluster& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


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


        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline DBCluster& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DBCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


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


        // DBNodeClass Field Functions 
        bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
        void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
        inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
        inline DBCluster& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


        // DBNodeCount Field Functions 
        bool hasDBNodeCount() const { return this->DBNodeCount_ != nullptr;};
        void deleteDBNodeCount() { this->DBNodeCount_ = nullptr;};
        inline int64_t getDBNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeCount_, 0L) };
        inline DBCluster& setDBNodeCount(int64_t DBNodeCount) { DARABONBA_PTR_SET_VALUE(DBNodeCount_, DBNodeCount) };


        // DBNodeStorage Field Functions 
        bool hasDBNodeStorage() const { return this->DBNodeStorage_ != nullptr;};
        void deleteDBNodeStorage() { this->DBNodeStorage_ = nullptr;};
        inline int64_t getDBNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStorage_, 0L) };
        inline DBCluster& setDBNodeStorage(int64_t DBNodeStorage) { DARABONBA_PTR_SET_VALUE(DBNodeStorage_, DBNodeStorage) };


        // DBVersion Field Functions 
        bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
        void deleteDBVersion() { this->DBVersion_ = nullptr;};
        inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
        inline DBCluster& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline DBCluster& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // dtsJobId Field Functions 
        bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
        void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
        inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
        inline DBCluster& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


        // elasticIOResource Field Functions 
        bool hasElasticIOResource() const { return this->elasticIOResource_ != nullptr;};
        void deleteElasticIOResource() { this->elasticIOResource_ = nullptr;};
        inline int32_t getElasticIOResource() const { DARABONBA_PTR_GET_DEFAULT(elasticIOResource_, 0) };
        inline DBCluster& setElasticIOResource(int32_t elasticIOResource) { DARABONBA_PTR_SET_VALUE(elasticIOResource_, elasticIOResource) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline DBCluster& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // executorCount Field Functions 
        bool hasExecutorCount() const { return this->executorCount_ != nullptr;};
        void deleteExecutorCount() { this->executorCount_ = nullptr;};
        inline string getExecutorCount() const { DARABONBA_PTR_GET_DEFAULT(executorCount_, "") };
        inline DBCluster& setExecutorCount(string executorCount) { DARABONBA_PTR_SET_VALUE(executorCount_, executorCount) };


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


        // innerIp Field Functions 
        bool hasInnerIp() const { return this->innerIp_ != nullptr;};
        void deleteInnerIp() { this->innerIp_ = nullptr;};
        inline string getInnerIp() const { DARABONBA_PTR_GET_DEFAULT(innerIp_, "") };
        inline DBCluster& setInnerIp(string innerIp) { DARABONBA_PTR_SET_VALUE(innerIp_, innerIp) };


        // innerPort Field Functions 
        bool hasInnerPort() const { return this->innerPort_ != nullptr;};
        void deleteInnerPort() { this->innerPort_ = nullptr;};
        inline string getInnerPort() const { DARABONBA_PTR_GET_DEFAULT(innerPort_, "") };
        inline DBCluster& setInnerPort(string innerPort) { DARABONBA_PTR_SET_VALUE(innerPort_, innerPort) };


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
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline DBCluster& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


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


        // rdsInstanceId Field Functions 
        bool hasRdsInstanceId() const { return this->rdsInstanceId_ != nullptr;};
        void deleteRdsInstanceId() { this->rdsInstanceId_ = nullptr;};
        inline string getRdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(rdsInstanceId_, "") };
        inline DBCluster& setRdsInstanceId(string rdsInstanceId) { DARABONBA_PTR_SET_VALUE(rdsInstanceId_, rdsInstanceId) };


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


        // storageResource Field Functions 
        bool hasStorageResource() const { return this->storageResource_ != nullptr;};
        void deleteStorageResource() { this->storageResource_ = nullptr;};
        inline string getStorageResource() const { DARABONBA_PTR_GET_DEFAULT(storageResource_, "") };
        inline DBCluster& setStorageResource(string storageResource) { DARABONBA_PTR_SET_VALUE(storageResource_, storageResource) };


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


        // VPCCloudInstanceId Field Functions 
        bool hasVPCCloudInstanceId() const { return this->VPCCloudInstanceId_ != nullptr;};
        void deleteVPCCloudInstanceId() { this->VPCCloudInstanceId_ = nullptr;};
        inline string getVPCCloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(VPCCloudInstanceId_, "") };
        inline DBCluster& setVPCCloudInstanceId(string VPCCloudInstanceId) { DARABONBA_PTR_SET_VALUE(VPCCloudInstanceId_, VPCCloudInstanceId) };


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
        // The mode of the cluster. This parameter is returned only for Data Warehouse Edition clusters. Valid values:
        // 
        // *   **BASIC**: reserved mode for Basic Edition.
        // *   **CLUSTER**: reserved mode for Cluster Edition.
        // *   **MIXED_STORAGE**: elastic mode for Cluster Edition.
        // 
        // >  For more information about cluster editions, see [Editions](https://help.aliyun.com/document_detail/205001.html).
        shared_ptr<string> category_ {};
        // The billing method of the cluster. Valid values:
        // 
        // *   **ads**: pay-as-you-go.
        // *   **ads_pre**: subscription.
        shared_ptr<string> commodityCode_ {};
        // The specifications of reserved computing resources. Each ACU is approximately equal to 1 core and 4 GB memory. Computing resources are used to compute data. The increase in the computing resources can accelerate queries. You can scale computing resources based on your business requirements.
        shared_ptr<string> computeResource_ {};
        // The public endpoint that is used to connect to the cluster.
        shared_ptr<string> connectionString_ {};
        // The time when the cluster was created. The time follows the ISO 8601 standard in the *yyyy-mm-ddThh:mm:ssZ* format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The description of the cluster.
        shared_ptr<string> DBClusterDescription_ {};
        // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
        shared_ptr<string> DBClusterId_ {};
        // The network type of the cluster. Only **VPC** is supported.
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
        // The node specifications of the cluster. This parameter is returned only for Data Warehouse Edition clusters.
        shared_ptr<string> DBNodeClass_ {};
        // The number of node groups.
        shared_ptr<int64_t> DBNodeCount_ {};
        // The storage capacity of the cluster. Unit: GB.
        shared_ptr<int64_t> DBNodeStorage_ {};
        // The version number corresponding to the edition of the cluster. Only **5.0** is supported.
        shared_ptr<string> DBVersion_ {};
        // The disk type of the cluster. Valid values:
        // 
        // *   **local_ssd**: local disk.
        // *   **cloud**: basic disk.
        // *   **cloud_ssd**: standard SSD.
        // *   **cloud_efficiency**: ultra disk.
        // *   **cloud_essd**: PL1 Enterprise SSD (ESSD).
        // *   **cloud_essd2**: PL2 ESSD.
        // *   **cloud_essd3**: PL3 ESSD.
        // 
        // >  For more information about ESSDs, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
        shared_ptr<string> diskType_ {};
        // The ID of the Data Transmission Service (DTS) synchronization job This parameter is returned only for MySQL analytic instances.
        shared_ptr<string> dtsJobId_ {};
        // The number of elastic I/O units (EIUs). For more information, see the "[EIUs](https://help.aliyun.com/document_detail/189505.html)" section of the Scale out elastic I/O resources topic.
        // 
        // >  This parameter is returned only for clusters in elastic mode.
        shared_ptr<int32_t> elasticIOResource_ {};
        // The engine of the cluster. **AnalyticDB** is returned.
        shared_ptr<string> engine_ {};
        // The number of compute nodes that are used by the cluster in elastic mode.
        shared_ptr<string> executorCount_ {};
        // The time when the cluster expires. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC.
        // 
        // > 
        // 
        // *   If the billing method of the cluster is subscription, the actual expiration time is returned.
        // 
        // *   If the billing method of the cluster is pay-as-you-go, null is returned.
        shared_ptr<string> expireTime_ {};
        // Indicates whether the subscription cluster has expired. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // > 
        // 
        // *   If the cluster has expired, the system locks or releases the cluster within a period of time. We recommend that you renew the expired cluster. For more information, see [Renewal policy](https://help.aliyun.com/document_detail/135246.html).
        // 
        // *   This parameter is not returned for pay-as-you-go clusters.
        shared_ptr<string> expired_ {};
        // The internal IP address of the cluster.
        shared_ptr<string> innerIp_ {};
        // The internal port of the cluster.
        shared_ptr<string> innerPort_ {};
        // The lock status of the cluster. Valid values:
        // 
        // *   **Unlock**: The cluster is not locked.
        // *   **ManualLock**: The cluster is manually locked.
        // *   **LockByExpiration**: The cluster is automatically locked due to cluster expiration.
        shared_ptr<string> lockMode_ {};
        // The reason why the cluster is locked.
        // 
        // >  This parameter is returned only when the cluster was locked. **instance_expire** is returned.
        shared_ptr<string> lockReason_ {};
        // The mode of the cluster. By default, **flexible** is returned, which indicates that the cluster is in elastic mode.
        shared_ptr<string> mode_ {};
        // The billing method of the cluster. Valid values:
        // 
        // *   **Postpaid**: pay-as-you-go.
        // *   **Prepaid**: subscription.
        shared_ptr<string> payType_ {};
        // The port number that is used to connect to the cluster.
        shared_ptr<string> port_ {};
        // The service type of the cluster. Valid values:
        // 
        // *   **LegacyForm**
        // *   **IntegrationForm**
        shared_ptr<string> productForm_ {};
        // The edition of the cluster. Valid values:
        // 
        // *   **BasicVersion**: Basic Edition.
        // *   **EnterpriseVersion**: Enterprise Edition.
        shared_ptr<string> productVersion_ {};
        // The ID of the ApsaraDB RDS instance from which data is synchronized to the cluster. This parameter is returned only for MySQL analytic instances.
        shared_ptr<string> rdsInstanceId_ {};
        // The region ID of the cluster.
        shared_ptr<string> regionId_ {};
        // The remaining reserved computing resources that are available in the cluster. Each ACU is approximately equal to 1 core and 4 GB memory.
        shared_ptr<string> reservedACU_ {};
        // The number of reserved resource nodes.
        shared_ptr<int32_t> reservedNodeCount_ {};
        // The single-node specifications of reserved resources.
        shared_ptr<string> reservedNodeSize_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // The specifications of reserved storage resources. Each AnalyticDB compute unit (ACU) is approximately equal to 1 core and 4 GB memory. Storage resources are used to read and write data. The increase in the storage resources can improve the read and write performance of the cluster.
        shared_ptr<string> storageResource_ {};
        // The tags that are added to the cluster.
        shared_ptr<DBCluster::Tags> tags_ {};
        // The information about the job.
        shared_ptr<DBCluster::TaskInfo> taskInfo_ {};
        // The VPC endpoint.
        shared_ptr<string> VPCCloudInstanceId_ {};
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
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBClustersResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBClustersResponseBody::Items) };
    inline DescribeDBClustersResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBClustersResponseBody::Items) };
    inline DescribeDBClustersResponseBody& setItems(const DescribeDBClustersResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBClustersResponseBody& setItems(DescribeDBClustersResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBClustersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBClustersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDBClustersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried clusters.
    shared_ptr<DescribeDBClustersResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
