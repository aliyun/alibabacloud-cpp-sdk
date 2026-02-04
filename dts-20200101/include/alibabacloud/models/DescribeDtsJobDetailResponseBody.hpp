// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BeginTimestamp, beginTimestamp_);
      DARABONBA_PTR_TO_JSON(Binlog, binlog_);
      DARABONBA_PTR_TO_JSON(BinlogSite, binlogSite_);
      DARABONBA_PTR_TO_JSON(BinlogTime, binlogTime_);
      DARABONBA_PTR_TO_JSON(BootTime, bootTime_);
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
      DARABONBA_PTR_TO_JSON(ConsumptionClient, consumptionClient_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataDeliveryChannelInfo, dataDeliveryChannelInfo_);
      DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_TO_JSON(DatabaseCount, databaseCount_);
      DARABONBA_PTR_TO_JSON(DbObject, dbObject_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(DemoJob, demoJob_);
      DARABONBA_PTR_TO_JSON(DestNetType, destNetType_);
      DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_TO_JSON(DtsBisLabel, dtsBisLabel_);
      DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
      DARABONBA_PTR_TO_JSON(DtsJobClass, dtsJobClass_);
      DARABONBA_PTR_TO_JSON(DtsJobDirection, dtsJobDirection_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(EtlCalculator, etlCalculator_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InitCheckpoint, initCheckpoint_);
      DARABONBA_PTR_TO_JSON(InsightModule, insightModule_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_TO_JSON(MaxDu, maxDu_);
      DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_TO_JSON(MinDu, minDu_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Reserved, reserved_);
      DARABONBA_PTR_TO_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RetryState, retryState_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubDistributedJob, subDistributedJob_);
      DARABONBA_PTR_TO_JSON(SubSyncJob, subSyncJob_);
      DARABONBA_PTR_TO_JSON(SubscribeTopic, subscribeTopic_);
      DARABONBA_PTR_TO_JSON(SubscriptionDataType, subscriptionDataType_);
      DARABONBA_PTR_TO_JSON(SubscriptionHost, subscriptionHost_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BeginTimestamp, beginTimestamp_);
      DARABONBA_PTR_FROM_JSON(Binlog, binlog_);
      DARABONBA_PTR_FROM_JSON(BinlogSite, binlogSite_);
      DARABONBA_PTR_FROM_JSON(BinlogTime, binlogTime_);
      DARABONBA_PTR_FROM_JSON(BootTime, bootTime_);
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
      DARABONBA_PTR_FROM_JSON(ConsumptionClient, consumptionClient_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataDeliveryChannelInfo, dataDeliveryChannelInfo_);
      DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_FROM_JSON(DatabaseCount, databaseCount_);
      DARABONBA_PTR_FROM_JSON(DbObject, dbObject_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(DemoJob, demoJob_);
      DARABONBA_PTR_FROM_JSON(DestNetType, destNetType_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_FROM_JSON(DtsBisLabel, dtsBisLabel_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
      DARABONBA_PTR_FROM_JSON(DtsJobClass, dtsJobClass_);
      DARABONBA_PTR_FROM_JSON(DtsJobDirection, dtsJobDirection_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(EtlCalculator, etlCalculator_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InitCheckpoint, initCheckpoint_);
      DARABONBA_PTR_FROM_JSON(InsightModule, insightModule_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_FROM_JSON(MaxDu, maxDu_);
      DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_FROM_JSON(MinDu, minDu_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RetryState, retryState_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubDistributedJob, subDistributedJob_);
      DARABONBA_PTR_FROM_JSON(SubSyncJob, subSyncJob_);
      DARABONBA_PTR_FROM_JSON(SubscribeTopic, subscribeTopic_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDataType, subscriptionDataType_);
      DARABONBA_PTR_FROM_JSON(SubscriptionHost, subscriptionHost_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeDtsJobDetailResponseBody() = default ;
    DescribeDtsJobDetailResponseBody(const DescribeDtsJobDetailResponseBody &) = default ;
    DescribeDtsJobDetailResponseBody(DescribeDtsJobDetailResponseBody &&) = default ;
    DescribeDtsJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobDetailResponseBody() = default ;
    DescribeDtsJobDetailResponseBody& operator=(const DescribeDtsJobDetailResponseBody &) = default ;
    DescribeDtsJobDetailResponseBody& operator=(DescribeDtsJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubscriptionHost : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubscriptionHost& obj) { 
        DARABONBA_PTR_TO_JSON(PrivateHost, privateHost_);
        DARABONBA_PTR_TO_JSON(PublicHost, publicHost_);
        DARABONBA_PTR_TO_JSON(VpcHost, vpcHost_);
      };
      friend void from_json(const Darabonba::Json& j, SubscriptionHost& obj) { 
        DARABONBA_PTR_FROM_JSON(PrivateHost, privateHost_);
        DARABONBA_PTR_FROM_JSON(PublicHost, publicHost_);
        DARABONBA_PTR_FROM_JSON(VpcHost, vpcHost_);
      };
      SubscriptionHost() = default ;
      SubscriptionHost(const SubscriptionHost &) = default ;
      SubscriptionHost(SubscriptionHost &&) = default ;
      SubscriptionHost(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubscriptionHost() = default ;
      SubscriptionHost& operator=(const SubscriptionHost &) = default ;
      SubscriptionHost& operator=(SubscriptionHost &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->privateHost_ == nullptr
        && this->publicHost_ == nullptr && this->vpcHost_ == nullptr; };
      // privateHost Field Functions 
      bool hasPrivateHost() const { return this->privateHost_ != nullptr;};
      void deletePrivateHost() { this->privateHost_ = nullptr;};
      inline string getPrivateHost() const { DARABONBA_PTR_GET_DEFAULT(privateHost_, "") };
      inline SubscriptionHost& setPrivateHost(string privateHost) { DARABONBA_PTR_SET_VALUE(privateHost_, privateHost) };


      // publicHost Field Functions 
      bool hasPublicHost() const { return this->publicHost_ != nullptr;};
      void deletePublicHost() { this->publicHost_ = nullptr;};
      inline string getPublicHost() const { DARABONBA_PTR_GET_DEFAULT(publicHost_, "") };
      inline SubscriptionHost& setPublicHost(string publicHost) { DARABONBA_PTR_SET_VALUE(publicHost_, publicHost) };


      // vpcHost Field Functions 
      bool hasVpcHost() const { return this->vpcHost_ != nullptr;};
      void deleteVpcHost() { this->vpcHost_ = nullptr;};
      inline string getVpcHost() const { DARABONBA_PTR_GET_DEFAULT(vpcHost_, "") };
      inline SubscriptionHost& setVpcHost(string vpcHost) { DARABONBA_PTR_SET_VALUE(vpcHost_, vpcHost) };


    protected:
      // The private endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
      shared_ptr<string> privateHost_ {};
      // The public endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
      shared_ptr<string> publicHost_ {};
      // The VPC endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
      shared_ptr<string> vpcHost_ {};
    };

    class SubscriptionDataType : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubscriptionDataType& obj) { 
        DARABONBA_PTR_TO_JSON(Ddl, ddl_);
        DARABONBA_PTR_TO_JSON(Dml, dml_);
      };
      friend void from_json(const Darabonba::Json& j, SubscriptionDataType& obj) { 
        DARABONBA_PTR_FROM_JSON(Ddl, ddl_);
        DARABONBA_PTR_FROM_JSON(Dml, dml_);
      };
      SubscriptionDataType() = default ;
      SubscriptionDataType(const SubscriptionDataType &) = default ;
      SubscriptionDataType(SubscriptionDataType &&) = default ;
      SubscriptionDataType(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubscriptionDataType() = default ;
      SubscriptionDataType& operator=(const SubscriptionDataType &) = default ;
      SubscriptionDataType& operator=(SubscriptionDataType &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ddl_ == nullptr
        && this->dml_ == nullptr; };
      // ddl Field Functions 
      bool hasDdl() const { return this->ddl_ != nullptr;};
      void deleteDdl() { this->ddl_ = nullptr;};
      inline bool getDdl() const { DARABONBA_PTR_GET_DEFAULT(ddl_, false) };
      inline SubscriptionDataType& setDdl(bool ddl) { DARABONBA_PTR_SET_VALUE(ddl_, ddl) };


      // dml Field Functions 
      bool hasDml() const { return this->dml_ != nullptr;};
      void deleteDml() { this->dml_ = nullptr;};
      inline bool getDml() const { DARABONBA_PTR_GET_DEFAULT(dml_, false) };
      inline SubscriptionDataType& setDml(bool dml) { DARABONBA_PTR_SET_VALUE(dml_, dml) };


    protected:
      // Indicates whether DDL statements are tracked. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> ddl_ {};
      // Indicates whether DML statements are tracked. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> dml_ {};
    };

    class SubSyncJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubSyncJob& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(BeginTimestamp, beginTimestamp_);
        DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
        DARABONBA_PTR_TO_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
        DARABONBA_PTR_TO_JSON(ConsumptionClient, consumptionClient_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataEtlStatus, dataEtlStatus_);
        DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
        DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
        DARABONBA_PTR_TO_JSON(DatabaseCount, databaseCount_);
        DARABONBA_PTR_TO_JSON(DbObject, dbObject_);
        DARABONBA_PTR_TO_JSON(Delay, delay_);
        DARABONBA_PTR_TO_JSON(DestNetType, destNetType_);
        DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
        DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
        DARABONBA_PTR_TO_JSON(DtsJobClass, dtsJobClass_);
        DARABONBA_PTR_TO_JSON(DtsJobDirection, dtsJobDirection_);
        DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
        DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
        DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(EtlCalculator, etlCalculator_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(IsDemoJob, isDemoJob_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(MaxDu, maxDu_);
        DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
        DARABONBA_PTR_TO_JSON(MinDu, minDu_);
        DARABONBA_PTR_TO_JSON(OriginType, originType_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(Performance, performance_);
        DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
        DARABONBA_PTR_TO_JSON(Reserved, reserved_);
        DARABONBA_PTR_TO_JSON(RetryState, retryState_);
        DARABONBA_PTR_TO_JSON(ReverseJob, reverseJob_);
        DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
        DARABONBA_PTR_TO_JSON(SubSyncJob, subSyncJob_);
        DARABONBA_PTR_TO_JSON(SubscribeTopic, subscribeTopic_);
        DARABONBA_PTR_TO_JSON(SubscriptionDataType, subscriptionDataType_);
        DARABONBA_PTR_TO_JSON(SubscriptionHost, subscriptionHost_);
        DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
        DARABONBA_PTR_TO_JSON(TagList, tagList_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, SubSyncJob& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(BeginTimestamp, beginTimestamp_);
        DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
        DARABONBA_PTR_FROM_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
        DARABONBA_PTR_FROM_JSON(ConsumptionClient, consumptionClient_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataEtlStatus, dataEtlStatus_);
        DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
        DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
        DARABONBA_PTR_FROM_JSON(DatabaseCount, databaseCount_);
        DARABONBA_PTR_FROM_JSON(DbObject, dbObject_);
        DARABONBA_PTR_FROM_JSON(Delay, delay_);
        DARABONBA_PTR_FROM_JSON(DestNetType, destNetType_);
        DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
        DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
        DARABONBA_PTR_FROM_JSON(DtsJobClass, dtsJobClass_);
        DARABONBA_PTR_FROM_JSON(DtsJobDirection, dtsJobDirection_);
        DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
        DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
        DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(EtlCalculator, etlCalculator_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(IsDemoJob, isDemoJob_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(MaxDu, maxDu_);
        DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
        DARABONBA_PTR_FROM_JSON(MinDu, minDu_);
        DARABONBA_PTR_FROM_JSON(OriginType, originType_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(Performance, performance_);
        DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
        DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
        DARABONBA_PTR_FROM_JSON(RetryState, retryState_);
        DARABONBA_PTR_FROM_JSON(ReverseJob, reverseJob_);
        DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
        DARABONBA_PTR_FROM_JSON(SubSyncJob, subSyncJob_);
        DARABONBA_PTR_FROM_JSON(SubscribeTopic, subscribeTopic_);
        DARABONBA_PTR_FROM_JSON(SubscriptionDataType, subscriptionDataType_);
        DARABONBA_PTR_FROM_JSON(SubscriptionHost, subscriptionHost_);
        DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
        DARABONBA_PTR_FROM_JSON(TagList, tagList_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      SubSyncJob() = default ;
      SubSyncJob(const SubSyncJob &) = default ;
      SubSyncJob(SubSyncJob &&) = default ;
      SubSyncJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubSyncJob() = default ;
      SubSyncJob& operator=(const SubSyncJob &) = default ;
      SubSyncJob& operator=(SubSyncJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagList& obj) { 
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
          DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
          DARABONBA_PTR_TO_JSON(TagCategory, tagCategory_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, TagList& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(Scope, scope_);
          DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
          DARABONBA_PTR_FROM_JSON(TagCategory, tagCategory_);
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        TagList() = default ;
        TagList(const TagList &) = default ;
        TagList(TagList &&) = default ;
        TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagList() = default ;
        TagList& operator=(const TagList &) = default ;
        TagList& operator=(TagList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->creator_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->regionId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->scope_ == nullptr && this->srcRegion_ == nullptr && this->tagCategory_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
        inline TagList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline int64_t getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
        inline TagList& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline TagList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline TagList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TagList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline TagList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline TagList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline TagList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
        inline TagList& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


        // srcRegion Field Functions 
        bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
        void deleteSrcRegion() { this->srcRegion_ = nullptr;};
        inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
        inline TagList& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


        // tagCategory Field Functions 
        bool hasTagCategory() const { return this->tagCategory_ != nullptr;};
        void deleteTagCategory() { this->tagCategory_ = nullptr;};
        inline string getTagCategory() const { DARABONBA_PTR_GET_DEFAULT(tagCategory_, "") };
        inline TagList& setTagCategory(string tagCategory) { DARABONBA_PTR_SET_VALUE(tagCategory_, tagCategory) };


        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline TagList& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline TagList& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The Alibaba Cloud account ID.
        shared_ptr<int64_t> aliUid_ {};
        // The operator of the tag.
        shared_ptr<int64_t> creator_ {};
        // The time when the task was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the task was modified.
        shared_ptr<string> gmtModified_ {};
        // The primary key of the table.
        shared_ptr<int64_t> id_ {};
        // The ID of the region in which the DTS instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
        shared_ptr<string> regionId_ {};
        // The ID of the data migration, data synchronization, or change tracking instance.
        shared_ptr<string> resourceId_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
        // Indicates whether the tag is visible. Valid values:
        // 
        // *   **0**: The tag is public.
        // *   **1**: The tag is private.
        shared_ptr<string> scope_ {};
        // The ID of the region in which the DTS task resides.
        // 
        // > In most cases, the ID of the region in which the destination instance resides is returned.
        shared_ptr<string> srcRegion_ {};
        // The type of the tag. Valid values:
        // 
        // *   **System**: The tag was created by the system.
        // *   **Custom**: The tag was created by a user.
        // 
        // > By default, if the parameter is left empty, custom tags and system tags are returned.
        shared_ptr<string> tagCategory_ {};
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      class SubscriptionHost : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubscriptionHost& obj) { 
          DARABONBA_PTR_TO_JSON(PrivateHost, privateHost_);
          DARABONBA_PTR_TO_JSON(PublicHost, publicHost_);
          DARABONBA_PTR_TO_JSON(VpcHost, vpcHost_);
        };
        friend void from_json(const Darabonba::Json& j, SubscriptionHost& obj) { 
          DARABONBA_PTR_FROM_JSON(PrivateHost, privateHost_);
          DARABONBA_PTR_FROM_JSON(PublicHost, publicHost_);
          DARABONBA_PTR_FROM_JSON(VpcHost, vpcHost_);
        };
        SubscriptionHost() = default ;
        SubscriptionHost(const SubscriptionHost &) = default ;
        SubscriptionHost(SubscriptionHost &&) = default ;
        SubscriptionHost(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubscriptionHost() = default ;
        SubscriptionHost& operator=(const SubscriptionHost &) = default ;
        SubscriptionHost& operator=(SubscriptionHost &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->privateHost_ == nullptr
        && this->publicHost_ == nullptr && this->vpcHost_ == nullptr; };
        // privateHost Field Functions 
        bool hasPrivateHost() const { return this->privateHost_ != nullptr;};
        void deletePrivateHost() { this->privateHost_ = nullptr;};
        inline string getPrivateHost() const { DARABONBA_PTR_GET_DEFAULT(privateHost_, "") };
        inline SubscriptionHost& setPrivateHost(string privateHost) { DARABONBA_PTR_SET_VALUE(privateHost_, privateHost) };


        // publicHost Field Functions 
        bool hasPublicHost() const { return this->publicHost_ != nullptr;};
        void deletePublicHost() { this->publicHost_ = nullptr;};
        inline string getPublicHost() const { DARABONBA_PTR_GET_DEFAULT(publicHost_, "") };
        inline SubscriptionHost& setPublicHost(string publicHost) { DARABONBA_PTR_SET_VALUE(publicHost_, publicHost) };


        // vpcHost Field Functions 
        bool hasVpcHost() const { return this->vpcHost_ != nullptr;};
        void deleteVpcHost() { this->vpcHost_ = nullptr;};
        inline string getVpcHost() const { DARABONBA_PTR_GET_DEFAULT(vpcHost_, "") };
        inline SubscriptionHost& setVpcHost(string vpcHost) { DARABONBA_PTR_SET_VALUE(vpcHost_, vpcHost) };


      protected:
        // The private endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
        shared_ptr<string> privateHost_ {};
        // The public endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
        shared_ptr<string> publicHost_ {};
        // The VPC endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
        shared_ptr<string> vpcHost_ {};
      };

      class SubscriptionDataType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubscriptionDataType& obj) { 
          DARABONBA_PTR_TO_JSON(Ddl, ddl_);
          DARABONBA_PTR_TO_JSON(Dml, dml_);
        };
        friend void from_json(const Darabonba::Json& j, SubscriptionDataType& obj) { 
          DARABONBA_PTR_FROM_JSON(Ddl, ddl_);
          DARABONBA_PTR_FROM_JSON(Dml, dml_);
        };
        SubscriptionDataType() = default ;
        SubscriptionDataType(const SubscriptionDataType &) = default ;
        SubscriptionDataType(SubscriptionDataType &&) = default ;
        SubscriptionDataType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubscriptionDataType() = default ;
        SubscriptionDataType& operator=(const SubscriptionDataType &) = default ;
        SubscriptionDataType& operator=(SubscriptionDataType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ddl_ == nullptr
        && this->dml_ == nullptr; };
        // ddl Field Functions 
        bool hasDdl() const { return this->ddl_ != nullptr;};
        void deleteDdl() { this->ddl_ = nullptr;};
        inline bool getDdl() const { DARABONBA_PTR_GET_DEFAULT(ddl_, false) };
        inline SubscriptionDataType& setDdl(bool ddl) { DARABONBA_PTR_SET_VALUE(ddl_, ddl) };


        // dml Field Functions 
        bool hasDml() const { return this->dml_ != nullptr;};
        void deleteDml() { this->dml_ = nullptr;};
        inline bool getDml() const { DARABONBA_PTR_GET_DEFAULT(dml_, false) };
        inline SubscriptionDataType& setDml(bool dml) { DARABONBA_PTR_SET_VALUE(dml_, dml) };


      protected:
        // Indicates whether DDL statements are tracked. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> ddl_ {};
        // Indicates whether DML statements are tracked. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> dml_ {};
      };

      class StructureInitializationStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StructureInitializationStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, StructureInitializationStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        StructureInitializationStatus() = default ;
        StructureInitializationStatus(const StructureInitializationStatus &) = default ;
        StructureInitializationStatus(StructureInitializationStatus &&) = default ;
        StructureInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StructureInitializationStatus() = default ;
        StructureInitializationStatus& operator=(const StructureInitializationStatus &) = default ;
        StructureInitializationStatus& operator=(StructureInitializationStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline StructureInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // needUpgrade Field Functions 
        bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
        void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
        inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
        inline StructureInitializationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline StructureInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline StructureInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline StructureInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // Error message indicating task failure.
        shared_ptr<string> errorMessage_ {};
        // Whether to display upgrade specifications, return value:
        // - True: Yes.
        // - False: No.
        shared_ptr<bool> needUpgrade_ {};
        // Initialization progress of library table structure, measured in percentage.
        shared_ptr<string> percent_ {};
        // The number of tables that have completed library table structure initialization.
        shared_ptr<string> progress_ {};
        // The initialization status of the library table structure includes:
        // - NotStarted: Not started.
        // - Migration: In the process of initialization.
        // - Failed: Initialization failed.
        // - Finished: Initialization completed.
        shared_ptr<string> status_ {};
      };

      class SourceEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(EngineName, engineName_);
          DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
          DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
          DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
          DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        SourceEndpoint() = default ;
        SourceEndpoint(const SourceEndpoint &) = default ;
        SourceEndpoint(SourceEndpoint &&) = default ;
        SourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceEndpoint() = default ;
        SourceEndpoint& operator=(const SourceEndpoint &) = default ;
        SourceEndpoint& operator=(SourceEndpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->databaseName_ == nullptr && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr
        && this->oracleSID_ == nullptr && this->port_ == nullptr && this->region_ == nullptr && this->roleName_ == nullptr && this->sslSolutionEnum_ == nullptr
        && this->userName_ == nullptr; };
        // aliyunUid Field Functions 
        bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
        void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
        inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
        inline SourceEndpoint& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline SourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // engineName Field Functions 
        bool hasEngineName() const { return this->engineName_ != nullptr;};
        void deleteEngineName() { this->engineName_ = nullptr;};
        inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
        inline SourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


        // instanceID Field Functions 
        bool hasInstanceID() const { return this->instanceID_ != nullptr;};
        void deleteInstanceID() { this->instanceID_ = nullptr;};
        inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
        inline SourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline SourceEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // oracleSID Field Functions 
        bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
        void deleteOracleSID() { this->oracleSID_ = nullptr;};
        inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
        inline SourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline SourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline SourceEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline SourceEndpoint& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


        // sslSolutionEnum Field Functions 
        bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
        void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
        inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
        inline SourceEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline SourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The ID of the Alibaba Cloud account to which the source instance belongs.
        shared_ptr<string> aliyunUid_ {};
        // The name of the database from which the objects are migrated in the source instance.
        shared_ptr<string> databaseName_ {};
        // The database engine of the source instance.
        shared_ptr<string> engineName_ {};
        // The source instance ID.
        shared_ptr<string> instanceID_ {};
        // The type of the source instance.
        shared_ptr<string> instanceType_ {};
        // The endpoint of the source instance.
        shared_ptr<string> ip_ {};
        // The SID of the Oracle database.
        // 
        // > This parameter is returned only if the return value of **EngineName** of the destination instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
        shared_ptr<string> oracleSID_ {};
        // The database service port of the source instance.
        shared_ptr<string> port_ {};
        // The ID of the region in which the source instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
        shared_ptr<string> region_ {};
        // The name of the RAM role configured for the Alibaba Cloud account to which the source instance belongs.
        shared_ptr<string> roleName_ {};
        // Indicates whether SSL encryption is enabled. Valid values:
        // 
        // *   **DISABLE**: SSL encryption is disabled.
        // *   **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded.
        // *   **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection to an AWS MongoDB Altas database.
        // *   **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection to a Kafka cluster.
        shared_ptr<string> sslSolutionEnum_ {};
        // The database account of the source instance.
        shared_ptr<string> userName_ {};
      };

      class ReverseJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReverseJob& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(BeginTimestamp, beginTimestamp_);
          DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
          DARABONBA_PTR_TO_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
          DARABONBA_PTR_TO_JSON(ConsumptionClient, consumptionClient_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataEtlStatus, dataEtlStatus_);
          DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
          DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
          DARABONBA_PTR_TO_JSON(DatabaseCount, databaseCount_);
          DARABONBA_PTR_TO_JSON(DbObject, dbObject_);
          DARABONBA_PTR_TO_JSON(Delay, delay_);
          DARABONBA_PTR_TO_JSON(DestNetType, destNetType_);
          DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
          DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
          DARABONBA_PTR_TO_JSON(DtsJobClass, dtsJobClass_);
          DARABONBA_PTR_TO_JSON(DtsJobDirection, dtsJobDirection_);
          DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
          DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
          DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(EtlCalculator, etlCalculator_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(IsDemoJob, isDemoJob_);
          DARABONBA_PTR_TO_JSON(JobType, jobType_);
          DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
          DARABONBA_PTR_TO_JSON(OriginType, originType_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(Performance, performance_);
          DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(RetryState, retryState_);
          DARABONBA_ANY_TO_JSON(ReverseJob, reverseJob_);
          DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
          DARABONBA_PTR_TO_JSON(SubscribeTopic, subscribeTopic_);
          DARABONBA_PTR_TO_JSON(SubscriptionDataType, subscriptionDataType_);
          DARABONBA_PTR_TO_JSON(SubscriptionHost, subscriptionHost_);
          DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
          DARABONBA_PTR_TO_JSON(TagList, tagList_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        };
        friend void from_json(const Darabonba::Json& j, ReverseJob& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(BeginTimestamp, beginTimestamp_);
          DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
          DARABONBA_PTR_FROM_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
          DARABONBA_PTR_FROM_JSON(ConsumptionClient, consumptionClient_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataEtlStatus, dataEtlStatus_);
          DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
          DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
          DARABONBA_PTR_FROM_JSON(DatabaseCount, databaseCount_);
          DARABONBA_PTR_FROM_JSON(DbObject, dbObject_);
          DARABONBA_PTR_FROM_JSON(Delay, delay_);
          DARABONBA_PTR_FROM_JSON(DestNetType, destNetType_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
          DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
          DARABONBA_PTR_FROM_JSON(DtsJobClass, dtsJobClass_);
          DARABONBA_PTR_FROM_JSON(DtsJobDirection, dtsJobDirection_);
          DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
          DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
          DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(EtlCalculator, etlCalculator_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(IsDemoJob, isDemoJob_);
          DARABONBA_PTR_FROM_JSON(JobType, jobType_);
          DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
          DARABONBA_PTR_FROM_JSON(OriginType, originType_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(Performance, performance_);
          DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(RetryState, retryState_);
          DARABONBA_ANY_FROM_JSON(ReverseJob, reverseJob_);
          DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
          DARABONBA_PTR_FROM_JSON(SubscribeTopic, subscribeTopic_);
          DARABONBA_PTR_FROM_JSON(SubscriptionDataType, subscriptionDataType_);
          DARABONBA_PTR_FROM_JSON(SubscriptionHost, subscriptionHost_);
          DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
          DARABONBA_PTR_FROM_JSON(TagList, tagList_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        };
        ReverseJob() = default ;
        ReverseJob(const ReverseJob &) = default ;
        ReverseJob(ReverseJob &&) = default ;
        ReverseJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReverseJob() = default ;
        ReverseJob& operator=(const ReverseJob &) = default ;
        ReverseJob& operator=(ReverseJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TagList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TagList& obj) { 
            DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
            DARABONBA_PTR_TO_JSON(Creator, creator_);
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
            DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
            DARABONBA_PTR_TO_JSON(Scope, scope_);
            DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
            DARABONBA_PTR_TO_JSON(TagCategory, tagCategory_);
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, TagList& obj) { 
            DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
            DARABONBA_PTR_FROM_JSON(Creator, creator_);
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
            DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
            DARABONBA_PTR_FROM_JSON(Scope, scope_);
            DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
            DARABONBA_PTR_FROM_JSON(TagCategory, tagCategory_);
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
          };
          TagList() = default ;
          TagList(const TagList &) = default ;
          TagList(TagList &&) = default ;
          TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TagList() = default ;
          TagList& operator=(const TagList &) = default ;
          TagList& operator=(TagList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->creator_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->regionId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->scope_ == nullptr && this->srcRegion_ == nullptr && this->tagCategory_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
          // aliUid Field Functions 
          bool hasAliUid() const { return this->aliUid_ != nullptr;};
          void deleteAliUid() { this->aliUid_ = nullptr;};
          inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
          inline TagList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


          // creator Field Functions 
          bool hasCreator() const { return this->creator_ != nullptr;};
          void deleteCreator() { this->creator_ = nullptr;};
          inline int64_t getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
          inline TagList& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline TagList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline TagList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline TagList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline TagList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // resourceId Field Functions 
          bool hasResourceId() const { return this->resourceId_ != nullptr;};
          void deleteResourceId() { this->resourceId_ = nullptr;};
          inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
          inline TagList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


          // resourceType Field Functions 
          bool hasResourceType() const { return this->resourceType_ != nullptr;};
          void deleteResourceType() { this->resourceType_ = nullptr;};
          inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
          inline TagList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


          // scope Field Functions 
          bool hasScope() const { return this->scope_ != nullptr;};
          void deleteScope() { this->scope_ = nullptr;};
          inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
          inline TagList& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


          // srcRegion Field Functions 
          bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
          void deleteSrcRegion() { this->srcRegion_ = nullptr;};
          inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
          inline TagList& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


          // tagCategory Field Functions 
          bool hasTagCategory() const { return this->tagCategory_ != nullptr;};
          void deleteTagCategory() { this->tagCategory_ = nullptr;};
          inline string getTagCategory() const { DARABONBA_PTR_GET_DEFAULT(tagCategory_, "") };
          inline TagList& setTagCategory(string tagCategory) { DARABONBA_PTR_SET_VALUE(tagCategory_, tagCategory) };


          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline TagList& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline TagList& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          // The Alibaba Cloud account ID.
          shared_ptr<int64_t> aliUid_ {};
          // The operator of the tag.
          shared_ptr<int64_t> creator_ {};
          // The time when the task was created.
          shared_ptr<string> gmtCreate_ {};
          // The time when the task was modified.
          shared_ptr<string> gmtModified_ {};
          // The primary key of the table.
          shared_ptr<int64_t> id_ {};
          // The ID of the region in which the DTS instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
          shared_ptr<string> regionId_ {};
          // The ID of the data migration, data synchronization, or change tracking instance.
          shared_ptr<string> resourceId_ {};
          // The resource type.
          shared_ptr<string> resourceType_ {};
          // Indicates whether the tag is visible. Valid values:
          // 
          // *   **0**: The tag is public.
          // *   **1**: The tag is private.
          shared_ptr<string> scope_ {};
          // The ID of the region in which the DTS task resides.
          // 
          // > In most cases, the ID of the region in which the destination instance resides is returned.
          shared_ptr<string> srcRegion_ {};
          // The type of the tag. Valid values:
          // 
          // *   **System**: The tag was created by the system.
          // *   **Custom**: The tag was created by a user.
          // 
          // > By default, if the parameter is left empty, custom tags and system tags are returned.
          shared_ptr<string> tagCategory_ {};
          // The tag key.
          shared_ptr<string> tagKey_ {};
          // The tag value.
          shared_ptr<string> tagValue_ {};
        };

        class SubscriptionHost : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubscriptionHost& obj) { 
            DARABONBA_PTR_TO_JSON(PrivateHost, privateHost_);
            DARABONBA_PTR_TO_JSON(PublicHost, publicHost_);
            DARABONBA_PTR_TO_JSON(VpcHost, vpcHost_);
          };
          friend void from_json(const Darabonba::Json& j, SubscriptionHost& obj) { 
            DARABONBA_PTR_FROM_JSON(PrivateHost, privateHost_);
            DARABONBA_PTR_FROM_JSON(PublicHost, publicHost_);
            DARABONBA_PTR_FROM_JSON(VpcHost, vpcHost_);
          };
          SubscriptionHost() = default ;
          SubscriptionHost(const SubscriptionHost &) = default ;
          SubscriptionHost(SubscriptionHost &&) = default ;
          SubscriptionHost(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubscriptionHost() = default ;
          SubscriptionHost& operator=(const SubscriptionHost &) = default ;
          SubscriptionHost& operator=(SubscriptionHost &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->privateHost_ == nullptr
        && this->publicHost_ == nullptr && this->vpcHost_ == nullptr; };
          // privateHost Field Functions 
          bool hasPrivateHost() const { return this->privateHost_ != nullptr;};
          void deletePrivateHost() { this->privateHost_ = nullptr;};
          inline string getPrivateHost() const { DARABONBA_PTR_GET_DEFAULT(privateHost_, "") };
          inline SubscriptionHost& setPrivateHost(string privateHost) { DARABONBA_PTR_SET_VALUE(privateHost_, privateHost) };


          // publicHost Field Functions 
          bool hasPublicHost() const { return this->publicHost_ != nullptr;};
          void deletePublicHost() { this->publicHost_ = nullptr;};
          inline string getPublicHost() const { DARABONBA_PTR_GET_DEFAULT(publicHost_, "") };
          inline SubscriptionHost& setPublicHost(string publicHost) { DARABONBA_PTR_SET_VALUE(publicHost_, publicHost) };


          // vpcHost Field Functions 
          bool hasVpcHost() const { return this->vpcHost_ != nullptr;};
          void deleteVpcHost() { this->vpcHost_ = nullptr;};
          inline string getVpcHost() const { DARABONBA_PTR_GET_DEFAULT(vpcHost_, "") };
          inline SubscriptionHost& setVpcHost(string vpcHost) { DARABONBA_PTR_SET_VALUE(vpcHost_, vpcHost) };


        protected:
          // The private endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
          shared_ptr<string> privateHost_ {};
          // The public endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
          shared_ptr<string> publicHost_ {};
          // The VPC endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
          shared_ptr<string> vpcHost_ {};
        };

        class SubscriptionDataType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubscriptionDataType& obj) { 
            DARABONBA_PTR_TO_JSON(Ddl, ddl_);
            DARABONBA_PTR_TO_JSON(Dml, dml_);
          };
          friend void from_json(const Darabonba::Json& j, SubscriptionDataType& obj) { 
            DARABONBA_PTR_FROM_JSON(Ddl, ddl_);
            DARABONBA_PTR_FROM_JSON(Dml, dml_);
          };
          SubscriptionDataType() = default ;
          SubscriptionDataType(const SubscriptionDataType &) = default ;
          SubscriptionDataType(SubscriptionDataType &&) = default ;
          SubscriptionDataType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubscriptionDataType() = default ;
          SubscriptionDataType& operator=(const SubscriptionDataType &) = default ;
          SubscriptionDataType& operator=(SubscriptionDataType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ddl_ == nullptr
        && this->dml_ == nullptr; };
          // ddl Field Functions 
          bool hasDdl() const { return this->ddl_ != nullptr;};
          void deleteDdl() { this->ddl_ = nullptr;};
          inline bool getDdl() const { DARABONBA_PTR_GET_DEFAULT(ddl_, false) };
          inline SubscriptionDataType& setDdl(bool ddl) { DARABONBA_PTR_SET_VALUE(ddl_, ddl) };


          // dml Field Functions 
          bool hasDml() const { return this->dml_ != nullptr;};
          void deleteDml() { this->dml_ = nullptr;};
          inline bool getDml() const { DARABONBA_PTR_GET_DEFAULT(dml_, false) };
          inline SubscriptionDataType& setDml(bool dml) { DARABONBA_PTR_SET_VALUE(dml_, dml) };


        protected:
          // Indicates whether DDL statements are tracked. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> ddl_ {};
          // Indicates whether DML statements are tracked. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> dml_ {};
        };

        class StructureInitializationStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StructureInitializationStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, StructureInitializationStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          StructureInitializationStatus() = default ;
          StructureInitializationStatus(const StructureInitializationStatus &) = default ;
          StructureInitializationStatus(StructureInitializationStatus &&) = default ;
          StructureInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StructureInitializationStatus() = default ;
          StructureInitializationStatus& operator=(const StructureInitializationStatus &) = default ;
          StructureInitializationStatus& operator=(StructureInitializationStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline StructureInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // needUpgrade Field Functions 
          bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
          void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
          inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
          inline StructureInitializationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline StructureInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline StructureInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline StructureInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // Error message indicating task failure.
          shared_ptr<string> errorMessage_ {};
          // Whether to display upgrade specifications, return value:
          // 
          // - True: Yes.
          // - False: No.
          shared_ptr<bool> needUpgrade_ {};
          // Initialization progress of library table structure, measured in percentage.
          shared_ptr<string> percent_ {};
          // The number of tables that have completed library table structure initialization.
          shared_ptr<string> progress_ {};
          // The initialization status of the library table structure includes:
          // 
          // - NotStarted: Not started.
          // - Migration: In the process of initialization.
          // - Failed: Initialization failed.
          // - Finished: Initialization completed.
          shared_ptr<string> status_ {};
        };

        class SourceEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
            DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_TO_JSON(EngineName, engineName_);
            DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(Ip, ip_);
            DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(RoleName, roleName_);
            DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
            DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
            DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(Ip, ip_);
            DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
            DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_FROM_JSON(UserName, userName_);
          };
          SourceEndpoint() = default ;
          SourceEndpoint(const SourceEndpoint &) = default ;
          SourceEndpoint(SourceEndpoint &&) = default ;
          SourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceEndpoint() = default ;
          SourceEndpoint& operator=(const SourceEndpoint &) = default ;
          SourceEndpoint& operator=(SourceEndpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->databaseName_ == nullptr && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr
        && this->oracleSID_ == nullptr && this->port_ == nullptr && this->region_ == nullptr && this->roleName_ == nullptr && this->sslSolutionEnum_ == nullptr
        && this->userName_ == nullptr; };
          // aliyunUid Field Functions 
          bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
          void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
          inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
          inline SourceEndpoint& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


          // databaseName Field Functions 
          bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
          void deleteDatabaseName() { this->databaseName_ = nullptr;};
          inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
          inline SourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


          // engineName Field Functions 
          bool hasEngineName() const { return this->engineName_ != nullptr;};
          void deleteEngineName() { this->engineName_ = nullptr;};
          inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
          inline SourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


          // instanceID Field Functions 
          bool hasInstanceID() const { return this->instanceID_ != nullptr;};
          void deleteInstanceID() { this->instanceID_ = nullptr;};
          inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
          inline SourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
          inline SourceEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


          // oracleSID Field Functions 
          bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
          void deleteOracleSID() { this->oracleSID_ = nullptr;};
          inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
          inline SourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
          inline SourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline SourceEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // roleName Field Functions 
          bool hasRoleName() const { return this->roleName_ != nullptr;};
          void deleteRoleName() { this->roleName_ = nullptr;};
          inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
          inline SourceEndpoint& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


          // sslSolutionEnum Field Functions 
          bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
          void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
          inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
          inline SourceEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline SourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // The ID of the Alibaba Cloud account to which the source instance belongs.
          shared_ptr<string> aliyunUid_ {};
          // The name of the database from which the objects are migrated in the source instance.
          shared_ptr<string> databaseName_ {};
          // The database engine of the source instance.
          shared_ptr<string> engineName_ {};
          // The DTS instance ID.
          shared_ptr<string> instanceID_ {};
          // The type of the source instance.
          shared_ptr<string> instanceType_ {};
          // The endpoint of the source instance.
          shared_ptr<string> ip_ {};
          // The SID of the Oracle database.
          // 
          // > This parameter is returned only if the return value of **EngineName** of the destination instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
          shared_ptr<string> oracleSID_ {};
          // The database service port of the source instance.
          shared_ptr<string> port_ {};
          // The ID of the region in which the source instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
          shared_ptr<string> region_ {};
          // The name of the RAM role configured for the Alibaba Cloud account to which the source instance belongs.
          shared_ptr<string> roleName_ {};
          // Indicates whether SSL encryption is enabled. Valid values:
          // 
          // *   **DISABLE**: SSL encryption is disabled.
          // *   **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded.
          // *   **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection to an AWS MongoDB Altas database.
          // *   **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection to a Kafka cluster.
          shared_ptr<string> sslSolutionEnum_ {};
          // The database account of the source instance.
          shared_ptr<string> userName_ {};
        };

        class RetryState : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RetryState& obj) { 
            DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
            DARABONBA_PTR_TO_JSON(JobId, jobId_);
            DARABONBA_PTR_TO_JSON(MaxRetryTime, maxRetryTime_);
            DARABONBA_PTR_TO_JSON(Module, module_);
            DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
            DARABONBA_PTR_TO_JSON(RetryTarget, retryTarget_);
            DARABONBA_PTR_TO_JSON(RetryTime, retryTime_);
            DARABONBA_PTR_TO_JSON(Retrying, retrying_);
          };
          friend void from_json(const Darabonba::Json& j, RetryState& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
            DARABONBA_PTR_FROM_JSON(JobId, jobId_);
            DARABONBA_PTR_FROM_JSON(MaxRetryTime, maxRetryTime_);
            DARABONBA_PTR_FROM_JSON(Module, module_);
            DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
            DARABONBA_PTR_FROM_JSON(RetryTarget, retryTarget_);
            DARABONBA_PTR_FROM_JSON(RetryTime, retryTime_);
            DARABONBA_PTR_FROM_JSON(Retrying, retrying_);
          };
          RetryState() = default ;
          RetryState(const RetryState &) = default ;
          RetryState(RetryState &&) = default ;
          RetryState(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RetryState() = default ;
          RetryState& operator=(const RetryState &) = default ;
          RetryState& operator=(RetryState &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errMsg_ == nullptr
        && this->jobId_ == nullptr && this->maxRetryTime_ == nullptr && this->module_ == nullptr && this->retryCount_ == nullptr && this->retryTarget_ == nullptr
        && this->retryTime_ == nullptr && this->retrying_ == nullptr; };
          // errMsg Field Functions 
          bool hasErrMsg() const { return this->errMsg_ != nullptr;};
          void deleteErrMsg() { this->errMsg_ = nullptr;};
          inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
          inline RetryState& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


          // jobId Field Functions 
          bool hasJobId() const { return this->jobId_ != nullptr;};
          void deleteJobId() { this->jobId_ = nullptr;};
          inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
          inline RetryState& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


          // maxRetryTime Field Functions 
          bool hasMaxRetryTime() const { return this->maxRetryTime_ != nullptr;};
          void deleteMaxRetryTime() { this->maxRetryTime_ = nullptr;};
          inline int32_t getMaxRetryTime() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTime_, 0) };
          inline RetryState& setMaxRetryTime(int32_t maxRetryTime) { DARABONBA_PTR_SET_VALUE(maxRetryTime_, maxRetryTime) };


          // module Field Functions 
          bool hasModule() const { return this->module_ != nullptr;};
          void deleteModule() { this->module_ = nullptr;};
          inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
          inline RetryState& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


          // retryCount Field Functions 
          bool hasRetryCount() const { return this->retryCount_ != nullptr;};
          void deleteRetryCount() { this->retryCount_ = nullptr;};
          inline int32_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
          inline RetryState& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


          // retryTarget Field Functions 
          bool hasRetryTarget() const { return this->retryTarget_ != nullptr;};
          void deleteRetryTarget() { this->retryTarget_ = nullptr;};
          inline string getRetryTarget() const { DARABONBA_PTR_GET_DEFAULT(retryTarget_, "") };
          inline RetryState& setRetryTarget(string retryTarget) { DARABONBA_PTR_SET_VALUE(retryTarget_, retryTarget) };


          // retryTime Field Functions 
          bool hasRetryTime() const { return this->retryTime_ != nullptr;};
          void deleteRetryTime() { this->retryTime_ = nullptr;};
          inline int32_t getRetryTime() const { DARABONBA_PTR_GET_DEFAULT(retryTime_, 0) };
          inline RetryState& setRetryTime(int32_t retryTime) { DARABONBA_PTR_SET_VALUE(retryTime_, retryTime) };


          // retrying Field Functions 
          bool hasRetrying() const { return this->retrying_ != nullptr;};
          void deleteRetrying() { this->retrying_ = nullptr;};
          inline bool getRetrying() const { DARABONBA_PTR_GET_DEFAULT(retrying_, false) };
          inline RetryState& setRetrying(bool retrying) { DARABONBA_PTR_SET_VALUE(retrying_, retrying) };


        protected:
          // The error message returned.
          shared_ptr<string> errMsg_ {};
          // The task ID.
          shared_ptr<string> jobId_ {};
          // The maximum duration of a retry. Unit: seconds.
          shared_ptr<int32_t> maxRetryTime_ {};
          // The progress of the instance when DTS performs retries.
          shared_ptr<string> module_ {};
          // The number of retries.
          shared_ptr<int32_t> retryCount_ {};
          // The object on which the retries are performed. Valid values:
          // 
          // *   **srcDB**: the source database.
          // *   **destDB**: the destination database.
          // *   **inner_module**: an internal module of DTS.
          shared_ptr<string> retryTarget_ {};
          // The time that has elapsed from the point in time when the first retry starts. Unit: seconds.
          shared_ptr<int32_t> retryTime_ {};
          // Indicates whether the task is being retried. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> retrying_ {};
        };

        class PrecheckStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrecheckStatus& obj) { 
            DARABONBA_PTR_TO_JSON(Detail, detail_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, PrecheckStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(Detail, detail_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          PrecheckStatus() = default ;
          PrecheckStatus(const PrecheckStatus &) = default ;
          PrecheckStatus(PrecheckStatus &&) = default ;
          PrecheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrecheckStatus() = default ;
          PrecheckStatus& operator=(const PrecheckStatus &) = default ;
          PrecheckStatus& operator=(PrecheckStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Detail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Detail& obj) { 
              DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
              DARABONBA_PTR_TO_JSON(CheckItemDescription, checkItemDescription_);
              DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
              DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
              DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
            };
            friend void from_json(const Darabonba::Json& j, Detail& obj) { 
              DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
              DARABONBA_PTR_FROM_JSON(CheckItemDescription, checkItemDescription_);
              DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
              DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
              DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
            };
            Detail() = default ;
            Detail(const Detail &) = default ;
            Detail(Detail &&) = default ;
            Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Detail() = default ;
            Detail& operator=(const Detail &) = default ;
            Detail& operator=(Detail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->checkItem_ == nullptr
        && this->checkItemDescription_ == nullptr && this->checkResult_ == nullptr && this->failedReason_ == nullptr && this->repairMethod_ == nullptr; };
            // checkItem Field Functions 
            bool hasCheckItem() const { return this->checkItem_ != nullptr;};
            void deleteCheckItem() { this->checkItem_ = nullptr;};
            inline string getCheckItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
            inline Detail& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


            // checkItemDescription Field Functions 
            bool hasCheckItemDescription() const { return this->checkItemDescription_ != nullptr;};
            void deleteCheckItemDescription() { this->checkItemDescription_ = nullptr;};
            inline string getCheckItemDescription() const { DARABONBA_PTR_GET_DEFAULT(checkItemDescription_, "") };
            inline Detail& setCheckItemDescription(string checkItemDescription) { DARABONBA_PTR_SET_VALUE(checkItemDescription_, checkItemDescription) };


            // checkResult Field Functions 
            bool hasCheckResult() const { return this->checkResult_ != nullptr;};
            void deleteCheckResult() { this->checkResult_ = nullptr;};
            inline string getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
            inline Detail& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


            // failedReason Field Functions 
            bool hasFailedReason() const { return this->failedReason_ != nullptr;};
            void deleteFailedReason() { this->failedReason_ = nullptr;};
            inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
            inline Detail& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


            // repairMethod Field Functions 
            bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
            void deleteRepairMethod() { this->repairMethod_ = nullptr;};
            inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
            inline Detail& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


          protected:
            // The name of the precheck item.
            shared_ptr<string> checkItem_ {};
            // The description of the precheck item.
            shared_ptr<string> checkItemDescription_ {};
            // The precheck result. Valid values:
            // 
            // *   **Success**
            // *   **Failed**
            shared_ptr<string> checkResult_ {};
            // The error message returned if the task failed to pass the precheck.
            // 
            // > This parameter is returned only if the return value of **CheckResult** is **Failed**.
            shared_ptr<string> failedReason_ {};
            // The method used to fix the precheck failure.
            // 
            // > This parameter is returned only if the return value of **CheckResult** is **Failed**.
            shared_ptr<string> repairMethod_ {};
          };

          virtual bool empty() const override { return this->detail_ == nullptr
        && this->errorMessage_ == nullptr && this->percent_ == nullptr && this->status_ == nullptr; };
          // detail Field Functions 
          bool hasDetail() const { return this->detail_ != nullptr;};
          void deleteDetail() { this->detail_ = nullptr;};
          inline const vector<PrecheckStatus::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<PrecheckStatus::Detail>) };
          inline vector<PrecheckStatus::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<PrecheckStatus::Detail>) };
          inline PrecheckStatus& setDetail(const vector<PrecheckStatus::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
          inline PrecheckStatus& setDetail(vector<PrecheckStatus::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline PrecheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline PrecheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline PrecheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The result of each precheck item.
          shared_ptr<vector<PrecheckStatus::Detail>> detail_ {};
          // The error message returned if the task failed.
          shared_ptr<string> errorMessage_ {};
          // The precheck progress. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The precheck state. Valid values:
          // 
          // *   **NotStarted**: The task is not started.
          // *   **Prechecking**: The task is in precheck.
          // *   **PrecheckFailed**: The task failed to pass the precheck.
          // *   **Finished**: The task is complete.
          shared_ptr<string> status_ {};
        };

        class Performance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Performance& obj) { 
            DARABONBA_PTR_TO_JSON(Flow, flow_);
            DARABONBA_PTR_TO_JSON(Rps, rps_);
          };
          friend void from_json(const Darabonba::Json& j, Performance& obj) { 
            DARABONBA_PTR_FROM_JSON(Flow, flow_);
            DARABONBA_PTR_FROM_JSON(Rps, rps_);
          };
          Performance() = default ;
          Performance(const Performance &) = default ;
          Performance(Performance &&) = default ;
          Performance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Performance() = default ;
          Performance& operator=(const Performance &) = default ;
          Performance& operator=(Performance &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->flow_ == nullptr
        && this->rps_ == nullptr; };
          // flow Field Functions 
          bool hasFlow() const { return this->flow_ != nullptr;};
          void deleteFlow() { this->flow_ = nullptr;};
          inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
          inline Performance& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


          // rps Field Functions 
          bool hasRps() const { return this->rps_ != nullptr;};
          void deleteRps() { this->rps_ = nullptr;};
          inline string getRps() const { DARABONBA_PTR_GET_DEFAULT(rps_, "") };
          inline Performance& setRps(string rps) { DARABONBA_PTR_SET_VALUE(rps_, rps) };


        protected:
          // The size of data that is migrated or synchronized per second. Unit: Mbit/s.
          shared_ptr<string> flow_ {};
          // The number of times that SQL statements are migrated or synchronized per second, including BEGIN, COMMIT, DML, and DDL statements. DML statements include INSERT, DELETE, and UPDATE.
          shared_ptr<string> rps_ {};
        };

        class MigrationMode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MigrationMode& obj) { 
            DARABONBA_PTR_TO_JSON(DataExtractTransformLoad, dataExtractTransformLoad_);
            DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
            DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
            DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
          };
          friend void from_json(const Darabonba::Json& j, MigrationMode& obj) { 
            DARABONBA_PTR_FROM_JSON(DataExtractTransformLoad, dataExtractTransformLoad_);
            DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
            DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
            DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
          };
          MigrationMode() = default ;
          MigrationMode(const MigrationMode &) = default ;
          MigrationMode(MigrationMode &&) = default ;
          MigrationMode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MigrationMode() = default ;
          MigrationMode& operator=(const MigrationMode &) = default ;
          MigrationMode& operator=(MigrationMode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dataExtractTransformLoad_ == nullptr
        && this->dataInitialization_ == nullptr && this->dataSynchronization_ == nullptr && this->structureInitialization_ == nullptr; };
          // dataExtractTransformLoad Field Functions 
          bool hasDataExtractTransformLoad() const { return this->dataExtractTransformLoad_ != nullptr;};
          void deleteDataExtractTransformLoad() { this->dataExtractTransformLoad_ = nullptr;};
          inline bool getDataExtractTransformLoad() const { DARABONBA_PTR_GET_DEFAULT(dataExtractTransformLoad_, false) };
          inline MigrationMode& setDataExtractTransformLoad(bool dataExtractTransformLoad) { DARABONBA_PTR_SET_VALUE(dataExtractTransformLoad_, dataExtractTransformLoad) };


          // dataInitialization Field Functions 
          bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
          void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
          inline bool getDataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
          inline MigrationMode& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


          // dataSynchronization Field Functions 
          bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
          void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
          inline bool getDataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
          inline MigrationMode& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


          // structureInitialization Field Functions 
          bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
          void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
          inline bool getStructureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
          inline MigrationMode& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


        protected:
          // Indicates whether data transformation is performed. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> dataExtractTransformLoad_ {};
          // Indicates whether full data migration or initial full data synchronization is performed. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> dataInitialization_ {};
          // Indicates whether incremental data migration or synchronization is performed. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> dataSynchronization_ {};
          // Indicates whether schema migration or initial schema synchronization is performed. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> structureInitialization_ {};
        };

        class DestinationEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DestinationEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
            DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_TO_JSON(EngineName, engineName_);
            DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(Ip, ip_);
            DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(RoleName, roleName_);
            DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
            DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
            DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(Ip, ip_);
            DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
            DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_FROM_JSON(UserName, userName_);
          };
          DestinationEndpoint() = default ;
          DestinationEndpoint(const DestinationEndpoint &) = default ;
          DestinationEndpoint(DestinationEndpoint &&) = default ;
          DestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DestinationEndpoint() = default ;
          DestinationEndpoint& operator=(const DestinationEndpoint &) = default ;
          DestinationEndpoint& operator=(DestinationEndpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->databaseName_ == nullptr && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr
        && this->oracleSID_ == nullptr && this->port_ == nullptr && this->region_ == nullptr && this->roleName_ == nullptr && this->sslSolutionEnum_ == nullptr
        && this->userName_ == nullptr; };
          // aliyunUid Field Functions 
          bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
          void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
          inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
          inline DestinationEndpoint& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


          // databaseName Field Functions 
          bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
          void deleteDatabaseName() { this->databaseName_ = nullptr;};
          inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
          inline DestinationEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


          // engineName Field Functions 
          bool hasEngineName() const { return this->engineName_ != nullptr;};
          void deleteEngineName() { this->engineName_ = nullptr;};
          inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
          inline DestinationEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


          // instanceID Field Functions 
          bool hasInstanceID() const { return this->instanceID_ != nullptr;};
          void deleteInstanceID() { this->instanceID_ = nullptr;};
          inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
          inline DestinationEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline DestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
          inline DestinationEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


          // oracleSID Field Functions 
          bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
          void deleteOracleSID() { this->oracleSID_ = nullptr;};
          inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
          inline DestinationEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
          inline DestinationEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline DestinationEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // roleName Field Functions 
          bool hasRoleName() const { return this->roleName_ != nullptr;};
          void deleteRoleName() { this->roleName_ = nullptr;};
          inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
          inline DestinationEndpoint& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


          // sslSolutionEnum Field Functions 
          bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
          void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
          inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
          inline DestinationEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline DestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // The ID of the Alibaba Cloud account to which the destination instance belongs.
          shared_ptr<string> aliyunUid_ {};
          // The name of the database to which the objects are migrated in the destination instance.
          shared_ptr<string> databaseName_ {};
          // The database engine of the destination instance.
          shared_ptr<string> engineName_ {};
          // The destination instance ID.
          shared_ptr<string> instanceID_ {};
          // The type of the destination instance.
          shared_ptr<string> instanceType_ {};
          // The endpoint of the destination instance.
          shared_ptr<string> ip_ {};
          // The SID of the Oracle database.
          // 
          // > This parameter is returned only if the return value of **EngineName** of the destination instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
          shared_ptr<string> oracleSID_ {};
          // The database service port of the destination instance.
          shared_ptr<string> port_ {};
          // The ID of the region in which the destination instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
          shared_ptr<string> region_ {};
          // The name of the RAM role configured for the Alibaba Cloud account to which the destination instance belongs.
          shared_ptr<string> roleName_ {};
          // Indicates whether SSL encryption is enabled. Valid values:
          // 
          // *   **DISABLE**: SSL encryption is disabled.
          // *   **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded.
          // *   **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection to an AWS MongoDB Altas database.
          // *   **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection to a Kafka cluster.
          shared_ptr<string> sslSolutionEnum_ {};
          // The database account of the destination instance.
          shared_ptr<string> userName_ {};
        };

        class DataSynchronizationStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSynchronizationStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, DataSynchronizationStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          DataSynchronizationStatus() = default ;
          DataSynchronizationStatus(const DataSynchronizationStatus &) = default ;
          DataSynchronizationStatus(DataSynchronizationStatus &&) = default ;
          DataSynchronizationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataSynchronizationStatus() = default ;
          DataSynchronizationStatus& operator=(const DataSynchronizationStatus &) = default ;
          DataSynchronizationStatus& operator=(DataSynchronizationStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline DataSynchronizationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // needUpgrade Field Functions 
          bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
          void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
          inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
          inline DataSynchronizationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline DataSynchronizationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline DataSynchronizationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DataSynchronizationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if the task failed.
          shared_ptr<string> errorMessage_ {};
          // Indicates whether the instance class needs to be upgraded. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> needUpgrade_ {};
          // The progress of incremental data migration or synchronization.
          shared_ptr<string> percent_ {};
          // The number of rows and size of data that is synchronized or migrated to the destination table per second during incremental data synchronization or migration.
          shared_ptr<string> progress_ {};
          // The state of incremental data migration or synchronization. Valid values:
          // 
          // *   **NotStarted**: The task is not started.
          // *   **Migrating**: The task is in progress.
          // *   **Suspending**: The task is paused.
          // *   **Checking**: The task is in precheck.
          // *   **Failed**: The task failed.
          // *   **Finished**: The task is complete.
          // *   **Catched**: The task has no latency.
          shared_ptr<string> status_ {};
        };

        class DataInitializationStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataInitializationStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, DataInitializationStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          DataInitializationStatus() = default ;
          DataInitializationStatus(const DataInitializationStatus &) = default ;
          DataInitializationStatus(DataInitializationStatus &&) = default ;
          DataInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataInitializationStatus() = default ;
          DataInitializationStatus& operator=(const DataInitializationStatus &) = default ;
          DataInitializationStatus& operator=(DataInitializationStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline DataInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // needUpgrade Field Functions 
          bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
          void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
          inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
          inline DataInitializationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline DataInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline DataInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DataInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if full data migration or initial full data synchronization failed.
          shared_ptr<string> errorMessage_ {};
          // Indicates whether the instance class needs to be upgraded. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> needUpgrade_ {};
          // The progress of full data migration or initial full data synchronization. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The number of entries that are migrated or synchronized during full data migration or initial full data synchronization.
          shared_ptr<string> progress_ {};
          // The state of full data migration or initial full data synchronization. Valid values:
          // 
          // *   **NotStarted**: The task is not started.
          // *   **Migrating**: The task is in progress.
          // *   **Failed**: The task failed.
          // *   **Finished**: The task is complete.
          shared_ptr<string> status_ {};
        };

        class DataEtlStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataEtlStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, DataEtlStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          DataEtlStatus() = default ;
          DataEtlStatus(const DataEtlStatus &) = default ;
          DataEtlStatus(DataEtlStatus &&) = default ;
          DataEtlStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataEtlStatus() = default ;
          DataEtlStatus& operator=(const DataEtlStatus &) = default ;
          DataEtlStatus& operator=(DataEtlStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline DataEtlStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // needUpgrade Field Functions 
          bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
          void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
          inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
          inline DataEtlStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline DataEtlStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline DataEtlStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DataEtlStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if the task failed.
          shared_ptr<string> errorMessage_ {};
          // Indicates whether the instance class needs to be upgraded. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> needUpgrade_ {};
          // The progress of full data migration or initial full data synchronization. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The number of entries that are migrated or synchronized during full data migration or initial full data synchronization.
          shared_ptr<string> progress_ {};
          // The state of the ETL task. Valid values:
          // 
          // *   **NotStarted**: The task is not started.
          // *   **Migrating**: The task is in progress.
          // *   **Failed**: The task failed.
          // *   **Finished**: The task is complete.
          // *   **Catched**: The task has no latency.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->appName_ == nullptr
        && this->beginTimestamp_ == nullptr && this->checkpoint_ == nullptr && this->consumptionCheckpoint_ == nullptr && this->consumptionClient_ == nullptr && this->createTime_ == nullptr
        && this->dataEtlStatus_ == nullptr && this->dataInitializationStatus_ == nullptr && this->dataSynchronizationStatus_ == nullptr && this->databaseCount_ == nullptr && this->dbObject_ == nullptr
        && this->delay_ == nullptr && this->destNetType_ == nullptr && this->destinationEndpoint_ == nullptr && this->dtsInstanceID_ == nullptr && this->dtsJobClass_ == nullptr
        && this->dtsJobDirection_ == nullptr && this->dtsJobId_ == nullptr && this->dtsJobName_ == nullptr && this->endTimestamp_ == nullptr && this->errorMessage_ == nullptr
        && this->etlCalculator_ == nullptr && this->expireTime_ == nullptr && this->finishTime_ == nullptr && this->groupId_ == nullptr && this->isDemoJob_ == nullptr
        && this->jobType_ == nullptr && this->migrationMode_ == nullptr && this->originType_ == nullptr && this->payType_ == nullptr && this->performance_ == nullptr
        && this->precheckStatus_ == nullptr && this->reserved_ == nullptr && this->retryState_ == nullptr && this->reverseJob_ == nullptr && this->sourceEndpoint_ == nullptr
        && this->status_ == nullptr && this->structureInitializationStatus_ == nullptr && this->subscribeTopic_ == nullptr && this->subscriptionDataType_ == nullptr && this->subscriptionHost_ == nullptr
        && this->synchronizationDirection_ == nullptr && this->tagList_ == nullptr && this->taskType_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline ReverseJob& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // beginTimestamp Field Functions 
        bool hasBeginTimestamp() const { return this->beginTimestamp_ != nullptr;};
        void deleteBeginTimestamp() { this->beginTimestamp_ = nullptr;};
        inline string getBeginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(beginTimestamp_, "") };
        inline ReverseJob& setBeginTimestamp(string beginTimestamp) { DARABONBA_PTR_SET_VALUE(beginTimestamp_, beginTimestamp) };


        // checkpoint Field Functions 
        bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
        void deleteCheckpoint() { this->checkpoint_ = nullptr;};
        inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
        inline ReverseJob& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


        // consumptionCheckpoint Field Functions 
        bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
        void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
        inline string getConsumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
        inline ReverseJob& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


        // consumptionClient Field Functions 
        bool hasConsumptionClient() const { return this->consumptionClient_ != nullptr;};
        void deleteConsumptionClient() { this->consumptionClient_ = nullptr;};
        inline string getConsumptionClient() const { DARABONBA_PTR_GET_DEFAULT(consumptionClient_, "") };
        inline ReverseJob& setConsumptionClient(string consumptionClient) { DARABONBA_PTR_SET_VALUE(consumptionClient_, consumptionClient) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ReverseJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataEtlStatus Field Functions 
        bool hasDataEtlStatus() const { return this->dataEtlStatus_ != nullptr;};
        void deleteDataEtlStatus() { this->dataEtlStatus_ = nullptr;};
        inline const ReverseJob::DataEtlStatus & getDataEtlStatus() const { DARABONBA_PTR_GET_CONST(dataEtlStatus_, ReverseJob::DataEtlStatus) };
        inline ReverseJob::DataEtlStatus getDataEtlStatus() { DARABONBA_PTR_GET(dataEtlStatus_, ReverseJob::DataEtlStatus) };
        inline ReverseJob& setDataEtlStatus(const ReverseJob::DataEtlStatus & dataEtlStatus) { DARABONBA_PTR_SET_VALUE(dataEtlStatus_, dataEtlStatus) };
        inline ReverseJob& setDataEtlStatus(ReverseJob::DataEtlStatus && dataEtlStatus) { DARABONBA_PTR_SET_RVALUE(dataEtlStatus_, dataEtlStatus) };


        // dataInitializationStatus Field Functions 
        bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
        void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
        inline const ReverseJob::DataInitializationStatus & getDataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, ReverseJob::DataInitializationStatus) };
        inline ReverseJob::DataInitializationStatus getDataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, ReverseJob::DataInitializationStatus) };
        inline ReverseJob& setDataInitializationStatus(const ReverseJob::DataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
        inline ReverseJob& setDataInitializationStatus(ReverseJob::DataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


        // dataSynchronizationStatus Field Functions 
        bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
        void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
        inline const ReverseJob::DataSynchronizationStatus & getDataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, ReverseJob::DataSynchronizationStatus) };
        inline ReverseJob::DataSynchronizationStatus getDataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, ReverseJob::DataSynchronizationStatus) };
        inline ReverseJob& setDataSynchronizationStatus(const ReverseJob::DataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
        inline ReverseJob& setDataSynchronizationStatus(ReverseJob::DataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


        // databaseCount Field Functions 
        bool hasDatabaseCount() const { return this->databaseCount_ != nullptr;};
        void deleteDatabaseCount() { this->databaseCount_ = nullptr;};
        inline int32_t getDatabaseCount() const { DARABONBA_PTR_GET_DEFAULT(databaseCount_, 0) };
        inline ReverseJob& setDatabaseCount(int32_t databaseCount) { DARABONBA_PTR_SET_VALUE(databaseCount_, databaseCount) };


        // dbObject Field Functions 
        bool hasDbObject() const { return this->dbObject_ != nullptr;};
        void deleteDbObject() { this->dbObject_ = nullptr;};
        inline string getDbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
        inline ReverseJob& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


        // delay Field Functions 
        bool hasDelay() const { return this->delay_ != nullptr;};
        void deleteDelay() { this->delay_ = nullptr;};
        inline int64_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
        inline ReverseJob& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


        // destNetType Field Functions 
        bool hasDestNetType() const { return this->destNetType_ != nullptr;};
        void deleteDestNetType() { this->destNetType_ = nullptr;};
        inline string getDestNetType() const { DARABONBA_PTR_GET_DEFAULT(destNetType_, "") };
        inline ReverseJob& setDestNetType(string destNetType) { DARABONBA_PTR_SET_VALUE(destNetType_, destNetType) };


        // destinationEndpoint Field Functions 
        bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
        void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
        inline const ReverseJob::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, ReverseJob::DestinationEndpoint) };
        inline ReverseJob::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, ReverseJob::DestinationEndpoint) };
        inline ReverseJob& setDestinationEndpoint(const ReverseJob::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
        inline ReverseJob& setDestinationEndpoint(ReverseJob::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


        // dtsInstanceID Field Functions 
        bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
        void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
        inline string getDtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
        inline ReverseJob& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


        // dtsJobClass Field Functions 
        bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
        void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
        inline string getDtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
        inline ReverseJob& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


        // dtsJobDirection Field Functions 
        bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
        void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
        inline string getDtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
        inline ReverseJob& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


        // dtsJobId Field Functions 
        bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
        void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
        inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
        inline ReverseJob& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


        // dtsJobName Field Functions 
        bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
        void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
        inline string getDtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
        inline ReverseJob& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


        // endTimestamp Field Functions 
        bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
        void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
        inline string getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
        inline ReverseJob& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline ReverseJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // etlCalculator Field Functions 
        bool hasEtlCalculator() const { return this->etlCalculator_ != nullptr;};
        void deleteEtlCalculator() { this->etlCalculator_ = nullptr;};
        inline string getEtlCalculator() const { DARABONBA_PTR_GET_DEFAULT(etlCalculator_, "") };
        inline ReverseJob& setEtlCalculator(string etlCalculator) { DARABONBA_PTR_SET_VALUE(etlCalculator_, etlCalculator) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline ReverseJob& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline ReverseJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ReverseJob& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // isDemoJob Field Functions 
        bool hasIsDemoJob() const { return this->isDemoJob_ != nullptr;};
        void deleteIsDemoJob() { this->isDemoJob_ = nullptr;};
        inline bool getIsDemoJob() const { DARABONBA_PTR_GET_DEFAULT(isDemoJob_, false) };
        inline ReverseJob& setIsDemoJob(bool isDemoJob) { DARABONBA_PTR_SET_VALUE(isDemoJob_, isDemoJob) };


        // jobType Field Functions 
        bool hasJobType() const { return this->jobType_ != nullptr;};
        void deleteJobType() { this->jobType_ = nullptr;};
        inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
        inline ReverseJob& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


        // migrationMode Field Functions 
        bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
        void deleteMigrationMode() { this->migrationMode_ = nullptr;};
        inline const ReverseJob::MigrationMode & getMigrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, ReverseJob::MigrationMode) };
        inline ReverseJob::MigrationMode getMigrationMode() { DARABONBA_PTR_GET(migrationMode_, ReverseJob::MigrationMode) };
        inline ReverseJob& setMigrationMode(const ReverseJob::MigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
        inline ReverseJob& setMigrationMode(ReverseJob::MigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


        // originType Field Functions 
        bool hasOriginType() const { return this->originType_ != nullptr;};
        void deleteOriginType() { this->originType_ = nullptr;};
        inline string getOriginType() const { DARABONBA_PTR_GET_DEFAULT(originType_, "") };
        inline ReverseJob& setOriginType(string originType) { DARABONBA_PTR_SET_VALUE(originType_, originType) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline ReverseJob& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // performance Field Functions 
        bool hasPerformance() const { return this->performance_ != nullptr;};
        void deletePerformance() { this->performance_ = nullptr;};
        inline const ReverseJob::Performance & getPerformance() const { DARABONBA_PTR_GET_CONST(performance_, ReverseJob::Performance) };
        inline ReverseJob::Performance getPerformance() { DARABONBA_PTR_GET(performance_, ReverseJob::Performance) };
        inline ReverseJob& setPerformance(const ReverseJob::Performance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
        inline ReverseJob& setPerformance(ReverseJob::Performance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


        // precheckStatus Field Functions 
        bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
        void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
        inline const ReverseJob::PrecheckStatus & getPrecheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, ReverseJob::PrecheckStatus) };
        inline ReverseJob::PrecheckStatus getPrecheckStatus() { DARABONBA_PTR_GET(precheckStatus_, ReverseJob::PrecheckStatus) };
        inline ReverseJob& setPrecheckStatus(const ReverseJob::PrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
        inline ReverseJob& setPrecheckStatus(ReverseJob::PrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline string getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
        inline ReverseJob& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // retryState Field Functions 
        bool hasRetryState() const { return this->retryState_ != nullptr;};
        void deleteRetryState() { this->retryState_ = nullptr;};
        inline const ReverseJob::RetryState & getRetryState() const { DARABONBA_PTR_GET_CONST(retryState_, ReverseJob::RetryState) };
        inline ReverseJob::RetryState getRetryState() { DARABONBA_PTR_GET(retryState_, ReverseJob::RetryState) };
        inline ReverseJob& setRetryState(const ReverseJob::RetryState & retryState) { DARABONBA_PTR_SET_VALUE(retryState_, retryState) };
        inline ReverseJob& setRetryState(ReverseJob::RetryState && retryState) { DARABONBA_PTR_SET_RVALUE(retryState_, retryState) };


        // reverseJob Field Functions 
        bool hasReverseJob() const { return this->reverseJob_ != nullptr;};
        void deleteReverseJob() { this->reverseJob_ = nullptr;};
        inline         const Darabonba::Json & getReverseJob() const { DARABONBA_GET(reverseJob_) };
        Darabonba::Json & getReverseJob() { DARABONBA_GET(reverseJob_) };
        inline ReverseJob& setReverseJob(const Darabonba::Json & reverseJob) { DARABONBA_SET_VALUE(reverseJob_, reverseJob) };
        inline ReverseJob& setReverseJob(Darabonba::Json && reverseJob) { DARABONBA_SET_RVALUE(reverseJob_, reverseJob) };


        // sourceEndpoint Field Functions 
        bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
        void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
        inline const ReverseJob::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, ReverseJob::SourceEndpoint) };
        inline ReverseJob::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, ReverseJob::SourceEndpoint) };
        inline ReverseJob& setSourceEndpoint(const ReverseJob::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
        inline ReverseJob& setSourceEndpoint(ReverseJob::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ReverseJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // structureInitializationStatus Field Functions 
        bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
        void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
        inline const ReverseJob::StructureInitializationStatus & getStructureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, ReverseJob::StructureInitializationStatus) };
        inline ReverseJob::StructureInitializationStatus getStructureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, ReverseJob::StructureInitializationStatus) };
        inline ReverseJob& setStructureInitializationStatus(const ReverseJob::StructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
        inline ReverseJob& setStructureInitializationStatus(ReverseJob::StructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


        // subscribeTopic Field Functions 
        bool hasSubscribeTopic() const { return this->subscribeTopic_ != nullptr;};
        void deleteSubscribeTopic() { this->subscribeTopic_ = nullptr;};
        inline string getSubscribeTopic() const { DARABONBA_PTR_GET_DEFAULT(subscribeTopic_, "") };
        inline ReverseJob& setSubscribeTopic(string subscribeTopic) { DARABONBA_PTR_SET_VALUE(subscribeTopic_, subscribeTopic) };


        // subscriptionDataType Field Functions 
        bool hasSubscriptionDataType() const { return this->subscriptionDataType_ != nullptr;};
        void deleteSubscriptionDataType() { this->subscriptionDataType_ = nullptr;};
        inline const ReverseJob::SubscriptionDataType & getSubscriptionDataType() const { DARABONBA_PTR_GET_CONST(subscriptionDataType_, ReverseJob::SubscriptionDataType) };
        inline ReverseJob::SubscriptionDataType getSubscriptionDataType() { DARABONBA_PTR_GET(subscriptionDataType_, ReverseJob::SubscriptionDataType) };
        inline ReverseJob& setSubscriptionDataType(const ReverseJob::SubscriptionDataType & subscriptionDataType) { DARABONBA_PTR_SET_VALUE(subscriptionDataType_, subscriptionDataType) };
        inline ReverseJob& setSubscriptionDataType(ReverseJob::SubscriptionDataType && subscriptionDataType) { DARABONBA_PTR_SET_RVALUE(subscriptionDataType_, subscriptionDataType) };


        // subscriptionHost Field Functions 
        bool hasSubscriptionHost() const { return this->subscriptionHost_ != nullptr;};
        void deleteSubscriptionHost() { this->subscriptionHost_ = nullptr;};
        inline const ReverseJob::SubscriptionHost & getSubscriptionHost() const { DARABONBA_PTR_GET_CONST(subscriptionHost_, ReverseJob::SubscriptionHost) };
        inline ReverseJob::SubscriptionHost getSubscriptionHost() { DARABONBA_PTR_GET(subscriptionHost_, ReverseJob::SubscriptionHost) };
        inline ReverseJob& setSubscriptionHost(const ReverseJob::SubscriptionHost & subscriptionHost) { DARABONBA_PTR_SET_VALUE(subscriptionHost_, subscriptionHost) };
        inline ReverseJob& setSubscriptionHost(ReverseJob::SubscriptionHost && subscriptionHost) { DARABONBA_PTR_SET_RVALUE(subscriptionHost_, subscriptionHost) };


        // synchronizationDirection Field Functions 
        bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
        void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
        inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
        inline ReverseJob& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


        // tagList Field Functions 
        bool hasTagList() const { return this->tagList_ != nullptr;};
        void deleteTagList() { this->tagList_ = nullptr;};
        inline const vector<ReverseJob::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<ReverseJob::TagList>) };
        inline vector<ReverseJob::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<ReverseJob::TagList>) };
        inline ReverseJob& setTagList(const vector<ReverseJob::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
        inline ReverseJob& setTagList(vector<ReverseJob::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline ReverseJob& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      protected:
        // Indicates whether the new change tracking feature is used.
        // 
        // > This parameter is returned only for change tracking instances of the new version.
        shared_ptr<string> appName_ {};
        // The start of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> beginTimestamp_ {};
        // The start offset of incremental data migration or data synchronization. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<string> checkpoint_ {};
        // The consumption checkpoint of the change tracking instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> consumptionCheckpoint_ {};
        // The downstream client information in the following format: \\<IP address of the downstream client>:\\<Random ID generated by DTS>.
        shared_ptr<string> consumptionClient_ {};
        // The time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The state of the ETL task.
        // 
        // > This parameter collection is returned only if an ETL task is configured.
        shared_ptr<ReverseJob::DataEtlStatus> dataEtlStatus_ {};
        // The state of full data migration or initial full data synchronization.
        shared_ptr<ReverseJob::DataInitializationStatus> dataInitializationStatus_ {};
        // The state of incremental data migration or synchronization.
        shared_ptr<ReverseJob::DataSynchronizationStatus> dataSynchronizationStatus_ {};
        // The number of ApsaraDB RDS for MySQL instances that are attached to the source PolarDB-X 1.0 instance.
        shared_ptr<int32_t> databaseCount_ {};
        // The objects of the data migration, data synchronization, or change tracking task. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
        shared_ptr<string> dbObject_ {};
        // The latency of incremental data migration or synchronization. Unit: milliseconds.
        shared_ptr<int64_t> delay_ {};
        // The network type of the consumer client. Valid values:
        // 
        // *   **CLASSIC**: classic network.
        // *   **VPC**: VPC.
        shared_ptr<string> destNetType_ {};
        // The connection settings of the destination instance.
        shared_ptr<ReverseJob::DestinationEndpoint> destinationEndpoint_ {};
        // The DTS instance ID.
        shared_ptr<string> dtsInstanceID_ {};
        // The instance class.
        shared_ptr<string> dtsJobClass_ {};
        // The synchronization direction. Valid values:
        // 
        // *   **Forward**
        // *   **Reverse**
        // 
        // > This parameter is returned only if the topology of the data synchronization instance is two-way synchronization.
        shared_ptr<string> dtsJobDirection_ {};
        // The DTS task ID.
        shared_ptr<string> dtsJobId_ {};
        // The DTS instance name.
        shared_ptr<string> dtsJobName_ {};
        // The end of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> endTimestamp_ {};
        // The error message returned if the task failed.
        shared_ptr<string> errorMessage_ {};
        // The operator information of the ETL task.
        // 
        // > This parameter is returned only if you query the details of an ETL task.
        shared_ptr<string> etlCalculator_ {};
        // The time when the instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        // 
        // > This parameter is returned only if the return value of **PayType** is **PrePaid**.
        shared_ptr<string> expireTime_ {};
        // The time when the task was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> finishTime_ {};
        // The resource group ID.
        shared_ptr<string> groupId_ {};
        // Indicates whether the task is a subtask. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> isDemoJob_ {};
        // The type of the DTS task. Valid values:
        // 
        // *   **online**: data migration task.
        // *   **SYNC**: data synchronization task.
        // *   **SUBSCRIBE**: change tracking task.
        shared_ptr<string> jobType_ {};
        // The migration types or initial synchronization types.
        shared_ptr<ReverseJob::MigrationMode> migrationMode_ {};
        // The source of the task. Valid values:
        // 
        // *   **PTS**
        // *   **DMS**
        // *   **DTS**
        shared_ptr<string> originType_ {};
        // The billing method. Valid values:
        // 
        // *   **PrePaid**: subscription.
        // *   **PostPaid**: pay-as-you-go.
        shared_ptr<string> payType_ {};
        // The performance of the data migration or synchronization instance.
        shared_ptr<ReverseJob::Performance> performance_ {};
        // The precheck state.
        shared_ptr<ReverseJob::PrecheckStatus> precheckStatus_ {};
        // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, such as whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
        shared_ptr<string> reserved_ {};
        // The information about the retries performed by DTS due to an exception.
        shared_ptr<ReverseJob::RetryState> retryState_ {};
        // The details of the data synchronization task in the reverse direction.
        // 
        // > This parameter is returned only for two-way data synchronization tasks.
        Darabonba::Json reverseJob_ {};
        // The connection settings of the source instance.
        shared_ptr<ReverseJob::SourceEndpoint> sourceEndpoint_ {};
        // The state of initial schema synchronization. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Migrating**: The task is in progress.
        // *   **Failed**: The task failed.
        // *   **Finished**: The task is complete.
        shared_ptr<string> status_ {};
        // Initialization status of library table structure.
        shared_ptr<ReverseJob::StructureInitializationStatus> structureInitializationStatus_ {};
        // The topic of the change tracking instance.
        // 
        // > This parameter is returned only if your change tracking instances are of the new version and you have called the [CreateConsumerGroup](https://help.aliyun.com/document_detail/122863.html) operation to create a consumer group.
        shared_ptr<string> subscribeTopic_ {};
        // The type of data for change tracking.
        shared_ptr<ReverseJob::SubscriptionDataType> subscriptionDataType_ {};
        // The endpoint of the change tracking instance.
        shared_ptr<ReverseJob::SubscriptionHost> subscriptionHost_ {};
        // The synchronization direction. Valid values:
        // 
        // *   **Forward**
        // *   **Reverse**
        // 
        // > 
        // 
        // *   The default value is **Forward**.
        // *   The value **Reverse** takes effect only if the topology of the data synchronization instance is two-way synchronization.
        shared_ptr<string> synchronizationDirection_ {};
        // The tags of the task.
        shared_ptr<vector<ReverseJob::TagList>> tagList_ {};
        // The task type.
        shared_ptr<string> taskType_ {};
      };

      class RetryState : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RetryState& obj) { 
          DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(MaxRetryTime, maxRetryTime_);
          DARABONBA_PTR_TO_JSON(Module, module_);
          DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
          DARABONBA_PTR_TO_JSON(RetryTarget, retryTarget_);
          DARABONBA_PTR_TO_JSON(RetryTime, retryTime_);
          DARABONBA_PTR_TO_JSON(Retrying, retrying_);
        };
        friend void from_json(const Darabonba::Json& j, RetryState& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(MaxRetryTime, maxRetryTime_);
          DARABONBA_PTR_FROM_JSON(Module, module_);
          DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
          DARABONBA_PTR_FROM_JSON(RetryTarget, retryTarget_);
          DARABONBA_PTR_FROM_JSON(RetryTime, retryTime_);
          DARABONBA_PTR_FROM_JSON(Retrying, retrying_);
        };
        RetryState() = default ;
        RetryState(const RetryState &) = default ;
        RetryState(RetryState &&) = default ;
        RetryState(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RetryState() = default ;
        RetryState& operator=(const RetryState &) = default ;
        RetryState& operator=(RetryState &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errMsg_ == nullptr
        && this->jobId_ == nullptr && this->maxRetryTime_ == nullptr && this->module_ == nullptr && this->retryCount_ == nullptr && this->retryTarget_ == nullptr
        && this->retryTime_ == nullptr && this->retrying_ == nullptr; };
        // errMsg Field Functions 
        bool hasErrMsg() const { return this->errMsg_ != nullptr;};
        void deleteErrMsg() { this->errMsg_ = nullptr;};
        inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
        inline RetryState& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline RetryState& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // maxRetryTime Field Functions 
        bool hasMaxRetryTime() const { return this->maxRetryTime_ != nullptr;};
        void deleteMaxRetryTime() { this->maxRetryTime_ = nullptr;};
        inline int32_t getMaxRetryTime() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTime_, 0) };
        inline RetryState& setMaxRetryTime(int32_t maxRetryTime) { DARABONBA_PTR_SET_VALUE(maxRetryTime_, maxRetryTime) };


        // module Field Functions 
        bool hasModule() const { return this->module_ != nullptr;};
        void deleteModule() { this->module_ = nullptr;};
        inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
        inline RetryState& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


        // retryCount Field Functions 
        bool hasRetryCount() const { return this->retryCount_ != nullptr;};
        void deleteRetryCount() { this->retryCount_ = nullptr;};
        inline int32_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
        inline RetryState& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


        // retryTarget Field Functions 
        bool hasRetryTarget() const { return this->retryTarget_ != nullptr;};
        void deleteRetryTarget() { this->retryTarget_ = nullptr;};
        inline string getRetryTarget() const { DARABONBA_PTR_GET_DEFAULT(retryTarget_, "") };
        inline RetryState& setRetryTarget(string retryTarget) { DARABONBA_PTR_SET_VALUE(retryTarget_, retryTarget) };


        // retryTime Field Functions 
        bool hasRetryTime() const { return this->retryTime_ != nullptr;};
        void deleteRetryTime() { this->retryTime_ = nullptr;};
        inline int32_t getRetryTime() const { DARABONBA_PTR_GET_DEFAULT(retryTime_, 0) };
        inline RetryState& setRetryTime(int32_t retryTime) { DARABONBA_PTR_SET_VALUE(retryTime_, retryTime) };


        // retrying Field Functions 
        bool hasRetrying() const { return this->retrying_ != nullptr;};
        void deleteRetrying() { this->retrying_ = nullptr;};
        inline bool getRetrying() const { DARABONBA_PTR_GET_DEFAULT(retrying_, false) };
        inline RetryState& setRetrying(bool retrying) { DARABONBA_PTR_SET_VALUE(retrying_, retrying) };


      protected:
        // The error message returned.
        shared_ptr<string> errMsg_ {};
        // The task ID.
        shared_ptr<string> jobId_ {};
        // The maximum duration of a retry. Unit: seconds.
        shared_ptr<int32_t> maxRetryTime_ {};
        // The progress of the instance when DTS performs retries.
        shared_ptr<string> module_ {};
        // The number of retries.
        shared_ptr<int32_t> retryCount_ {};
        // The object on which the retries are performed. Valid values:
        // 
        // *   **srcDB**: the source database.
        // *   **destDB**: the destination database.
        // *   **inner_module**: an internal module of DTS.
        shared_ptr<string> retryTarget_ {};
        // The time that has elapsed from the point in time when the first retry starts. Unit: seconds.
        shared_ptr<int32_t> retryTime_ {};
        // Indicates whether the task is being retried. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> retrying_ {};
      };

      class PrecheckStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrecheckStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PrecheckStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PrecheckStatus() = default ;
        PrecheckStatus(const PrecheckStatus &) = default ;
        PrecheckStatus(PrecheckStatus &&) = default ;
        PrecheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrecheckStatus() = default ;
        PrecheckStatus& operator=(const PrecheckStatus &) = default ;
        PrecheckStatus& operator=(PrecheckStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Detail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Detail& obj) { 
            DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
            DARABONBA_PTR_TO_JSON(CheckItemDescription, checkItemDescription_);
            DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
            DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
            DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
          };
          friend void from_json(const Darabonba::Json& j, Detail& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
            DARABONBA_PTR_FROM_JSON(CheckItemDescription, checkItemDescription_);
            DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
            DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
            DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
          };
          Detail() = default ;
          Detail(const Detail &) = default ;
          Detail(Detail &&) = default ;
          Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Detail() = default ;
          Detail& operator=(const Detail &) = default ;
          Detail& operator=(Detail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checkItem_ == nullptr
        && this->checkItemDescription_ == nullptr && this->checkResult_ == nullptr && this->failedReason_ == nullptr && this->repairMethod_ == nullptr; };
          // checkItem Field Functions 
          bool hasCheckItem() const { return this->checkItem_ != nullptr;};
          void deleteCheckItem() { this->checkItem_ = nullptr;};
          inline string getCheckItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
          inline Detail& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


          // checkItemDescription Field Functions 
          bool hasCheckItemDescription() const { return this->checkItemDescription_ != nullptr;};
          void deleteCheckItemDescription() { this->checkItemDescription_ = nullptr;};
          inline string getCheckItemDescription() const { DARABONBA_PTR_GET_DEFAULT(checkItemDescription_, "") };
          inline Detail& setCheckItemDescription(string checkItemDescription) { DARABONBA_PTR_SET_VALUE(checkItemDescription_, checkItemDescription) };


          // checkResult Field Functions 
          bool hasCheckResult() const { return this->checkResult_ != nullptr;};
          void deleteCheckResult() { this->checkResult_ = nullptr;};
          inline string getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
          inline Detail& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


          // failedReason Field Functions 
          bool hasFailedReason() const { return this->failedReason_ != nullptr;};
          void deleteFailedReason() { this->failedReason_ = nullptr;};
          inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
          inline Detail& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


          // repairMethod Field Functions 
          bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
          void deleteRepairMethod() { this->repairMethod_ = nullptr;};
          inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
          inline Detail& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


        protected:
          // The name of the precheck item.
          shared_ptr<string> checkItem_ {};
          // The description of the precheck item.
          shared_ptr<string> checkItemDescription_ {};
          // The precheck result. Valid values:
          // 
          // *   **Success**
          // *   **Failed**
          shared_ptr<string> checkResult_ {};
          // The error message returned if the task failed to pass the precheck.
          // 
          // > This parameter is returned only if the return value of **CheckResult** is **Failed**.
          shared_ptr<string> failedReason_ {};
          // The method used to fix the precheck failure.
          // 
          // > This parameter is returned only if the return value of **CheckResult** is **Failed**.
          shared_ptr<string> repairMethod_ {};
        };

        virtual bool empty() const override { return this->detail_ == nullptr
        && this->errorMessage_ == nullptr && this->percent_ == nullptr && this->status_ == nullptr; };
        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline const vector<PrecheckStatus::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<PrecheckStatus::Detail>) };
        inline vector<PrecheckStatus::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<PrecheckStatus::Detail>) };
        inline PrecheckStatus& setDetail(const vector<PrecheckStatus::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
        inline PrecheckStatus& setDetail(vector<PrecheckStatus::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline PrecheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline PrecheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PrecheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The result of each precheck item.
        shared_ptr<vector<PrecheckStatus::Detail>> detail_ {};
        // The error message returned if the task failed.
        shared_ptr<string> errorMessage_ {};
        // The precheck progress. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The precheck state. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Prechecking**: The task is in precheck.
        // *   **PrecheckFailed**: The task failed to pass the precheck.
        // *   **Finished**: The task is complete.
        shared_ptr<string> status_ {};
      };

      class Performance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Performance& obj) { 
          DARABONBA_PTR_TO_JSON(Flow, flow_);
          DARABONBA_PTR_TO_JSON(Rps, rps_);
        };
        friend void from_json(const Darabonba::Json& j, Performance& obj) { 
          DARABONBA_PTR_FROM_JSON(Flow, flow_);
          DARABONBA_PTR_FROM_JSON(Rps, rps_);
        };
        Performance() = default ;
        Performance(const Performance &) = default ;
        Performance(Performance &&) = default ;
        Performance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Performance() = default ;
        Performance& operator=(const Performance &) = default ;
        Performance& operator=(Performance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flow_ == nullptr
        && this->rps_ == nullptr; };
        // flow Field Functions 
        bool hasFlow() const { return this->flow_ != nullptr;};
        void deleteFlow() { this->flow_ = nullptr;};
        inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
        inline Performance& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


        // rps Field Functions 
        bool hasRps() const { return this->rps_ != nullptr;};
        void deleteRps() { this->rps_ = nullptr;};
        inline string getRps() const { DARABONBA_PTR_GET_DEFAULT(rps_, "") };
        inline Performance& setRps(string rps) { DARABONBA_PTR_SET_VALUE(rps_, rps) };


      protected:
        // The size of data that is migrated or synchronized per second. Unit: Mbit/s.
        shared_ptr<string> flow_ {};
        // The number of times that SQL statements are migrated or synchronized per second, including BEGIN, COMMIT, DML, and DDL statements. DML statements include INSERT, DELETE, and UPDATE.
        shared_ptr<string> rps_ {};
      };

      class MigrationMode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MigrationMode& obj) { 
          DARABONBA_PTR_TO_JSON(DataExtractTransformLoad, dataExtractTransformLoad_);
          DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
          DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
          DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
        };
        friend void from_json(const Darabonba::Json& j, MigrationMode& obj) { 
          DARABONBA_PTR_FROM_JSON(DataExtractTransformLoad, dataExtractTransformLoad_);
          DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
          DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
          DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
        };
        MigrationMode() = default ;
        MigrationMode(const MigrationMode &) = default ;
        MigrationMode(MigrationMode &&) = default ;
        MigrationMode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MigrationMode() = default ;
        MigrationMode& operator=(const MigrationMode &) = default ;
        MigrationMode& operator=(MigrationMode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataExtractTransformLoad_ == nullptr
        && this->dataInitialization_ == nullptr && this->dataSynchronization_ == nullptr && this->structureInitialization_ == nullptr; };
        // dataExtractTransformLoad Field Functions 
        bool hasDataExtractTransformLoad() const { return this->dataExtractTransformLoad_ != nullptr;};
        void deleteDataExtractTransformLoad() { this->dataExtractTransformLoad_ = nullptr;};
        inline bool getDataExtractTransformLoad() const { DARABONBA_PTR_GET_DEFAULT(dataExtractTransformLoad_, false) };
        inline MigrationMode& setDataExtractTransformLoad(bool dataExtractTransformLoad) { DARABONBA_PTR_SET_VALUE(dataExtractTransformLoad_, dataExtractTransformLoad) };


        // dataInitialization Field Functions 
        bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
        void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
        inline bool getDataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
        inline MigrationMode& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


        // dataSynchronization Field Functions 
        bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
        void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
        inline bool getDataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
        inline MigrationMode& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


        // structureInitialization Field Functions 
        bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
        void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
        inline bool getStructureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
        inline MigrationMode& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


      protected:
        // Indicates whether data transformation is performed. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> dataExtractTransformLoad_ {};
        // Indicates whether full data migration or initial full data synchronization is performed. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> dataInitialization_ {};
        // Indicates whether incremental data migration or synchronization is performed. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> dataSynchronization_ {};
        // Indicates whether schema migration or initial schema synchronization is performed. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> structureInitialization_ {};
      };

      class DestinationEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DestinationEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(EngineName, engineName_);
          DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
          DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
          DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
          DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        DestinationEndpoint() = default ;
        DestinationEndpoint(const DestinationEndpoint &) = default ;
        DestinationEndpoint(DestinationEndpoint &&) = default ;
        DestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DestinationEndpoint() = default ;
        DestinationEndpoint& operator=(const DestinationEndpoint &) = default ;
        DestinationEndpoint& operator=(DestinationEndpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->databaseName_ == nullptr && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr
        && this->oracleSID_ == nullptr && this->port_ == nullptr && this->region_ == nullptr && this->roleName_ == nullptr && this->sslSolutionEnum_ == nullptr
        && this->userName_ == nullptr; };
        // aliyunUid Field Functions 
        bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
        void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
        inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
        inline DestinationEndpoint& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline DestinationEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // engineName Field Functions 
        bool hasEngineName() const { return this->engineName_ != nullptr;};
        void deleteEngineName() { this->engineName_ = nullptr;};
        inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
        inline DestinationEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


        // instanceID Field Functions 
        bool hasInstanceID() const { return this->instanceID_ != nullptr;};
        void deleteInstanceID() { this->instanceID_ = nullptr;};
        inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
        inline DestinationEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline DestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline DestinationEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // oracleSID Field Functions 
        bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
        void deleteOracleSID() { this->oracleSID_ = nullptr;};
        inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
        inline DestinationEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline DestinationEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline DestinationEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline DestinationEndpoint& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


        // sslSolutionEnum Field Functions 
        bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
        void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
        inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
        inline DestinationEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline DestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The ID of the Alibaba Cloud account to which the destination instance belongs.
        shared_ptr<string> aliyunUid_ {};
        // The name of the database to which the objects are migrated in the destination instance.
        shared_ptr<string> databaseName_ {};
        // The database engine of the destination instance.
        shared_ptr<string> engineName_ {};
        // The destination instance ID.
        shared_ptr<string> instanceID_ {};
        // The type of the destination instance.
        shared_ptr<string> instanceType_ {};
        // The endpoint of the destination instance.
        shared_ptr<string> ip_ {};
        // The SID of the Oracle database.
        // 
        // > This parameter is returned only if the return value of **EngineName** of the destination instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
        shared_ptr<string> oracleSID_ {};
        // The database service port of the destination instance.
        shared_ptr<string> port_ {};
        // The ID of the region in which the destination instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
        shared_ptr<string> region_ {};
        // The name of the RAM role configured for the Alibaba Cloud account to which the destination instance belongs.
        shared_ptr<string> roleName_ {};
        // Indicates whether SSL encryption is enabled. Valid values:
        // 
        // *   **DISABLE**: SSL encryption is disabled.
        // *   **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded.
        // *   **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection to an AWS MongoDB Altas database.
        // *   **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection to a Kafka cluster.
        shared_ptr<string> sslSolutionEnum_ {};
        // The database account of the destination instance.
        shared_ptr<string> userName_ {};
      };

      class DataSynchronizationStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSynchronizationStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataSynchronizationStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataSynchronizationStatus() = default ;
        DataSynchronizationStatus(const DataSynchronizationStatus &) = default ;
        DataSynchronizationStatus(DataSynchronizationStatus &&) = default ;
        DataSynchronizationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSynchronizationStatus() = default ;
        DataSynchronizationStatus& operator=(const DataSynchronizationStatus &) = default ;
        DataSynchronizationStatus& operator=(DataSynchronizationStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataSynchronizationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // needUpgrade Field Functions 
        bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
        void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
        inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
        inline DataSynchronizationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline DataSynchronizationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline DataSynchronizationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataSynchronizationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if the task failed.
        shared_ptr<string> errorMessage_ {};
        // Indicates whether the instance class needs to be upgraded. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> needUpgrade_ {};
        // The progress of incremental data migration or synchronization.
        shared_ptr<string> percent_ {};
        // The number of rows and size of data that is synchronized or migrated to the destination table per second during incremental data synchronization or migration.
        shared_ptr<string> progress_ {};
        // The state of incremental data migration or synchronization. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Migrating**: The task is in progress.
        // *   **Suspending**: The task is paused.
        // *   **Checking**: The task is in precheck.
        // *   **Failed**: The task failed.
        // *   **Finished**: The task is complete.
        // *   **Catched**: The task has no latency.
        shared_ptr<string> status_ {};
      };

      class DataInitializationStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataInitializationStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataInitializationStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataInitializationStatus() = default ;
        DataInitializationStatus(const DataInitializationStatus &) = default ;
        DataInitializationStatus(DataInitializationStatus &&) = default ;
        DataInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataInitializationStatus() = default ;
        DataInitializationStatus& operator=(const DataInitializationStatus &) = default ;
        DataInitializationStatus& operator=(DataInitializationStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // needUpgrade Field Functions 
        bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
        void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
        inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
        inline DataInitializationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline DataInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline DataInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if full data migration or initial full data synchronization failed.
        shared_ptr<string> errorMessage_ {};
        // Indicates whether the instance class needs to be upgraded. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> needUpgrade_ {};
        // The progress of full data migration or initial full data synchronization. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The number of entries that are migrated or synchronized during full data migration or initial full data synchronization.
        shared_ptr<string> progress_ {};
        // The state of full data migration or initial full data synchronization. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Migrating**: The task is in progress.
        // *   **Failed**: The task failed.
        // *   **Finished**: The task is complete.
        shared_ptr<string> status_ {};
      };

      class DataEtlStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataEtlStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataEtlStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataEtlStatus() = default ;
        DataEtlStatus(const DataEtlStatus &) = default ;
        DataEtlStatus(DataEtlStatus &&) = default ;
        DataEtlStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataEtlStatus() = default ;
        DataEtlStatus& operator=(const DataEtlStatus &) = default ;
        DataEtlStatus& operator=(DataEtlStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataEtlStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // needUpgrade Field Functions 
        bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
        void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
        inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
        inline DataEtlStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline DataEtlStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline DataEtlStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataEtlStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if the task failed.
        shared_ptr<string> errorMessage_ {};
        // Indicates whether the instance class needs to be upgraded. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> needUpgrade_ {};
        // The progress of full data migration or initial full data synchronization. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The number of entries that are migrated or synchronized during full data migration or initial full data synchronization.
        shared_ptr<string> progress_ {};
        // The state of the ETL task. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Migrating**: The task is in progress.
        // *   **Failed**: The task failed.
        // *   **Finished**: The task is complete.
        // *   **Catched**: The task has no latency.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->appName_ == nullptr
        && this->beginTimestamp_ == nullptr && this->checkpoint_ == nullptr && this->consumptionCheckpoint_ == nullptr && this->consumptionClient_ == nullptr && this->createTime_ == nullptr
        && this->dataEtlStatus_ == nullptr && this->dataInitializationStatus_ == nullptr && this->dataSynchronizationStatus_ == nullptr && this->databaseCount_ == nullptr && this->dbObject_ == nullptr
        && this->delay_ == nullptr && this->destNetType_ == nullptr && this->destinationEndpoint_ == nullptr && this->dtsInstanceID_ == nullptr && this->dtsJobClass_ == nullptr
        && this->dtsJobDirection_ == nullptr && this->dtsJobId_ == nullptr && this->dtsJobName_ == nullptr && this->endTimestamp_ == nullptr && this->errorMessage_ == nullptr
        && this->etlCalculator_ == nullptr && this->expireTime_ == nullptr && this->finishTime_ == nullptr && this->groupId_ == nullptr && this->isDemoJob_ == nullptr
        && this->jobType_ == nullptr && this->maxDu_ == nullptr && this->migrationMode_ == nullptr && this->minDu_ == nullptr && this->originType_ == nullptr
        && this->payType_ == nullptr && this->performance_ == nullptr && this->precheckStatus_ == nullptr && this->reserved_ == nullptr && this->retryState_ == nullptr
        && this->reverseJob_ == nullptr && this->sourceEndpoint_ == nullptr && this->status_ == nullptr && this->structureInitializationStatus_ == nullptr && this->subSyncJob_ == nullptr
        && this->subscribeTopic_ == nullptr && this->subscriptionDataType_ == nullptr && this->subscriptionHost_ == nullptr && this->synchronizationDirection_ == nullptr && this->tagList_ == nullptr
        && this->taskType_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline SubSyncJob& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // beginTimestamp Field Functions 
      bool hasBeginTimestamp() const { return this->beginTimestamp_ != nullptr;};
      void deleteBeginTimestamp() { this->beginTimestamp_ = nullptr;};
      inline string getBeginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(beginTimestamp_, "") };
      inline SubSyncJob& setBeginTimestamp(string beginTimestamp) { DARABONBA_PTR_SET_VALUE(beginTimestamp_, beginTimestamp) };


      // checkpoint Field Functions 
      bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
      void deleteCheckpoint() { this->checkpoint_ = nullptr;};
      inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
      inline SubSyncJob& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


      // consumptionCheckpoint Field Functions 
      bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
      void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
      inline string getConsumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
      inline SubSyncJob& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


      // consumptionClient Field Functions 
      bool hasConsumptionClient() const { return this->consumptionClient_ != nullptr;};
      void deleteConsumptionClient() { this->consumptionClient_ = nullptr;};
      inline string getConsumptionClient() const { DARABONBA_PTR_GET_DEFAULT(consumptionClient_, "") };
      inline SubSyncJob& setConsumptionClient(string consumptionClient) { DARABONBA_PTR_SET_VALUE(consumptionClient_, consumptionClient) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SubSyncJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataEtlStatus Field Functions 
      bool hasDataEtlStatus() const { return this->dataEtlStatus_ != nullptr;};
      void deleteDataEtlStatus() { this->dataEtlStatus_ = nullptr;};
      inline const SubSyncJob::DataEtlStatus & getDataEtlStatus() const { DARABONBA_PTR_GET_CONST(dataEtlStatus_, SubSyncJob::DataEtlStatus) };
      inline SubSyncJob::DataEtlStatus getDataEtlStatus() { DARABONBA_PTR_GET(dataEtlStatus_, SubSyncJob::DataEtlStatus) };
      inline SubSyncJob& setDataEtlStatus(const SubSyncJob::DataEtlStatus & dataEtlStatus) { DARABONBA_PTR_SET_VALUE(dataEtlStatus_, dataEtlStatus) };
      inline SubSyncJob& setDataEtlStatus(SubSyncJob::DataEtlStatus && dataEtlStatus) { DARABONBA_PTR_SET_RVALUE(dataEtlStatus_, dataEtlStatus) };


      // dataInitializationStatus Field Functions 
      bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
      void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
      inline const SubSyncJob::DataInitializationStatus & getDataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, SubSyncJob::DataInitializationStatus) };
      inline SubSyncJob::DataInitializationStatus getDataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, SubSyncJob::DataInitializationStatus) };
      inline SubSyncJob& setDataInitializationStatus(const SubSyncJob::DataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
      inline SubSyncJob& setDataInitializationStatus(SubSyncJob::DataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


      // dataSynchronizationStatus Field Functions 
      bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
      void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
      inline const SubSyncJob::DataSynchronizationStatus & getDataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, SubSyncJob::DataSynchronizationStatus) };
      inline SubSyncJob::DataSynchronizationStatus getDataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, SubSyncJob::DataSynchronizationStatus) };
      inline SubSyncJob& setDataSynchronizationStatus(const SubSyncJob::DataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
      inline SubSyncJob& setDataSynchronizationStatus(SubSyncJob::DataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


      // databaseCount Field Functions 
      bool hasDatabaseCount() const { return this->databaseCount_ != nullptr;};
      void deleteDatabaseCount() { this->databaseCount_ = nullptr;};
      inline int32_t getDatabaseCount() const { DARABONBA_PTR_GET_DEFAULT(databaseCount_, 0) };
      inline SubSyncJob& setDatabaseCount(int32_t databaseCount) { DARABONBA_PTR_SET_VALUE(databaseCount_, databaseCount) };


      // dbObject Field Functions 
      bool hasDbObject() const { return this->dbObject_ != nullptr;};
      void deleteDbObject() { this->dbObject_ = nullptr;};
      inline string getDbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
      inline SubSyncJob& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


      // delay Field Functions 
      bool hasDelay() const { return this->delay_ != nullptr;};
      void deleteDelay() { this->delay_ = nullptr;};
      inline int64_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
      inline SubSyncJob& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


      // destNetType Field Functions 
      bool hasDestNetType() const { return this->destNetType_ != nullptr;};
      void deleteDestNetType() { this->destNetType_ = nullptr;};
      inline string getDestNetType() const { DARABONBA_PTR_GET_DEFAULT(destNetType_, "") };
      inline SubSyncJob& setDestNetType(string destNetType) { DARABONBA_PTR_SET_VALUE(destNetType_, destNetType) };


      // destinationEndpoint Field Functions 
      bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
      void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
      inline const SubSyncJob::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, SubSyncJob::DestinationEndpoint) };
      inline SubSyncJob::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, SubSyncJob::DestinationEndpoint) };
      inline SubSyncJob& setDestinationEndpoint(const SubSyncJob::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
      inline SubSyncJob& setDestinationEndpoint(SubSyncJob::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


      // dtsInstanceID Field Functions 
      bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
      void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
      inline string getDtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
      inline SubSyncJob& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


      // dtsJobClass Field Functions 
      bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
      void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
      inline string getDtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
      inline SubSyncJob& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


      // dtsJobDirection Field Functions 
      bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
      void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
      inline string getDtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
      inline SubSyncJob& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


      // dtsJobId Field Functions 
      bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
      void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
      inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
      inline SubSyncJob& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


      // dtsJobName Field Functions 
      bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
      void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
      inline string getDtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
      inline SubSyncJob& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


      // endTimestamp Field Functions 
      bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
      void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
      inline string getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
      inline SubSyncJob& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline SubSyncJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // etlCalculator Field Functions 
      bool hasEtlCalculator() const { return this->etlCalculator_ != nullptr;};
      void deleteEtlCalculator() { this->etlCalculator_ = nullptr;};
      inline string getEtlCalculator() const { DARABONBA_PTR_GET_DEFAULT(etlCalculator_, "") };
      inline SubSyncJob& setEtlCalculator(string etlCalculator) { DARABONBA_PTR_SET_VALUE(etlCalculator_, etlCalculator) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline SubSyncJob& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline SubSyncJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline SubSyncJob& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // isDemoJob Field Functions 
      bool hasIsDemoJob() const { return this->isDemoJob_ != nullptr;};
      void deleteIsDemoJob() { this->isDemoJob_ = nullptr;};
      inline bool getIsDemoJob() const { DARABONBA_PTR_GET_DEFAULT(isDemoJob_, false) };
      inline SubSyncJob& setIsDemoJob(bool isDemoJob) { DARABONBA_PTR_SET_VALUE(isDemoJob_, isDemoJob) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline SubSyncJob& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // maxDu Field Functions 
      bool hasMaxDu() const { return this->maxDu_ != nullptr;};
      void deleteMaxDu() { this->maxDu_ = nullptr;};
      inline double getMaxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0.0) };
      inline SubSyncJob& setMaxDu(double maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


      // migrationMode Field Functions 
      bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
      void deleteMigrationMode() { this->migrationMode_ = nullptr;};
      inline const SubSyncJob::MigrationMode & getMigrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, SubSyncJob::MigrationMode) };
      inline SubSyncJob::MigrationMode getMigrationMode() { DARABONBA_PTR_GET(migrationMode_, SubSyncJob::MigrationMode) };
      inline SubSyncJob& setMigrationMode(const SubSyncJob::MigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
      inline SubSyncJob& setMigrationMode(SubSyncJob::MigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


      // minDu Field Functions 
      bool hasMinDu() const { return this->minDu_ != nullptr;};
      void deleteMinDu() { this->minDu_ = nullptr;};
      inline double getMinDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0.0) };
      inline SubSyncJob& setMinDu(double minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


      // originType Field Functions 
      bool hasOriginType() const { return this->originType_ != nullptr;};
      void deleteOriginType() { this->originType_ = nullptr;};
      inline string getOriginType() const { DARABONBA_PTR_GET_DEFAULT(originType_, "") };
      inline SubSyncJob& setOriginType(string originType) { DARABONBA_PTR_SET_VALUE(originType_, originType) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline SubSyncJob& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // performance Field Functions 
      bool hasPerformance() const { return this->performance_ != nullptr;};
      void deletePerformance() { this->performance_ = nullptr;};
      inline const SubSyncJob::Performance & getPerformance() const { DARABONBA_PTR_GET_CONST(performance_, SubSyncJob::Performance) };
      inline SubSyncJob::Performance getPerformance() { DARABONBA_PTR_GET(performance_, SubSyncJob::Performance) };
      inline SubSyncJob& setPerformance(const SubSyncJob::Performance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
      inline SubSyncJob& setPerformance(SubSyncJob::Performance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


      // precheckStatus Field Functions 
      bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
      void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
      inline const SubSyncJob::PrecheckStatus & getPrecheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, SubSyncJob::PrecheckStatus) };
      inline SubSyncJob::PrecheckStatus getPrecheckStatus() { DARABONBA_PTR_GET(precheckStatus_, SubSyncJob::PrecheckStatus) };
      inline SubSyncJob& setPrecheckStatus(const SubSyncJob::PrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
      inline SubSyncJob& setPrecheckStatus(SubSyncJob::PrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


      // reserved Field Functions 
      bool hasReserved() const { return this->reserved_ != nullptr;};
      void deleteReserved() { this->reserved_ = nullptr;};
      inline string getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
      inline SubSyncJob& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


      // retryState Field Functions 
      bool hasRetryState() const { return this->retryState_ != nullptr;};
      void deleteRetryState() { this->retryState_ = nullptr;};
      inline const SubSyncJob::RetryState & getRetryState() const { DARABONBA_PTR_GET_CONST(retryState_, SubSyncJob::RetryState) };
      inline SubSyncJob::RetryState getRetryState() { DARABONBA_PTR_GET(retryState_, SubSyncJob::RetryState) };
      inline SubSyncJob& setRetryState(const SubSyncJob::RetryState & retryState) { DARABONBA_PTR_SET_VALUE(retryState_, retryState) };
      inline SubSyncJob& setRetryState(SubSyncJob::RetryState && retryState) { DARABONBA_PTR_SET_RVALUE(retryState_, retryState) };


      // reverseJob Field Functions 
      bool hasReverseJob() const { return this->reverseJob_ != nullptr;};
      void deleteReverseJob() { this->reverseJob_ = nullptr;};
      inline const SubSyncJob::ReverseJob & getReverseJob() const { DARABONBA_PTR_GET_CONST(reverseJob_, SubSyncJob::ReverseJob) };
      inline SubSyncJob::ReverseJob getReverseJob() { DARABONBA_PTR_GET(reverseJob_, SubSyncJob::ReverseJob) };
      inline SubSyncJob& setReverseJob(const SubSyncJob::ReverseJob & reverseJob) { DARABONBA_PTR_SET_VALUE(reverseJob_, reverseJob) };
      inline SubSyncJob& setReverseJob(SubSyncJob::ReverseJob && reverseJob) { DARABONBA_PTR_SET_RVALUE(reverseJob_, reverseJob) };


      // sourceEndpoint Field Functions 
      bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
      void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
      inline const SubSyncJob::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, SubSyncJob::SourceEndpoint) };
      inline SubSyncJob::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, SubSyncJob::SourceEndpoint) };
      inline SubSyncJob& setSourceEndpoint(const SubSyncJob::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
      inline SubSyncJob& setSourceEndpoint(SubSyncJob::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SubSyncJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // structureInitializationStatus Field Functions 
      bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
      void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
      inline const SubSyncJob::StructureInitializationStatus & getStructureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, SubSyncJob::StructureInitializationStatus) };
      inline SubSyncJob::StructureInitializationStatus getStructureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, SubSyncJob::StructureInitializationStatus) };
      inline SubSyncJob& setStructureInitializationStatus(const SubSyncJob::StructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
      inline SubSyncJob& setStructureInitializationStatus(SubSyncJob::StructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


      // subSyncJob Field Functions 
      bool hasSubSyncJob() const { return this->subSyncJob_ != nullptr;};
      void deleteSubSyncJob() { this->subSyncJob_ = nullptr;};
      inline const vector<Darabonba::Json> & getSubSyncJob() const { DARABONBA_PTR_GET_CONST(subSyncJob_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getSubSyncJob() { DARABONBA_PTR_GET(subSyncJob_, vector<Darabonba::Json>) };
      inline SubSyncJob& setSubSyncJob(const vector<Darabonba::Json> & subSyncJob) { DARABONBA_PTR_SET_VALUE(subSyncJob_, subSyncJob) };
      inline SubSyncJob& setSubSyncJob(vector<Darabonba::Json> && subSyncJob) { DARABONBA_PTR_SET_RVALUE(subSyncJob_, subSyncJob) };


      // subscribeTopic Field Functions 
      bool hasSubscribeTopic() const { return this->subscribeTopic_ != nullptr;};
      void deleteSubscribeTopic() { this->subscribeTopic_ = nullptr;};
      inline string getSubscribeTopic() const { DARABONBA_PTR_GET_DEFAULT(subscribeTopic_, "") };
      inline SubSyncJob& setSubscribeTopic(string subscribeTopic) { DARABONBA_PTR_SET_VALUE(subscribeTopic_, subscribeTopic) };


      // subscriptionDataType Field Functions 
      bool hasSubscriptionDataType() const { return this->subscriptionDataType_ != nullptr;};
      void deleteSubscriptionDataType() { this->subscriptionDataType_ = nullptr;};
      inline const SubSyncJob::SubscriptionDataType & getSubscriptionDataType() const { DARABONBA_PTR_GET_CONST(subscriptionDataType_, SubSyncJob::SubscriptionDataType) };
      inline SubSyncJob::SubscriptionDataType getSubscriptionDataType() { DARABONBA_PTR_GET(subscriptionDataType_, SubSyncJob::SubscriptionDataType) };
      inline SubSyncJob& setSubscriptionDataType(const SubSyncJob::SubscriptionDataType & subscriptionDataType) { DARABONBA_PTR_SET_VALUE(subscriptionDataType_, subscriptionDataType) };
      inline SubSyncJob& setSubscriptionDataType(SubSyncJob::SubscriptionDataType && subscriptionDataType) { DARABONBA_PTR_SET_RVALUE(subscriptionDataType_, subscriptionDataType) };


      // subscriptionHost Field Functions 
      bool hasSubscriptionHost() const { return this->subscriptionHost_ != nullptr;};
      void deleteSubscriptionHost() { this->subscriptionHost_ = nullptr;};
      inline const SubSyncJob::SubscriptionHost & getSubscriptionHost() const { DARABONBA_PTR_GET_CONST(subscriptionHost_, SubSyncJob::SubscriptionHost) };
      inline SubSyncJob::SubscriptionHost getSubscriptionHost() { DARABONBA_PTR_GET(subscriptionHost_, SubSyncJob::SubscriptionHost) };
      inline SubSyncJob& setSubscriptionHost(const SubSyncJob::SubscriptionHost & subscriptionHost) { DARABONBA_PTR_SET_VALUE(subscriptionHost_, subscriptionHost) };
      inline SubSyncJob& setSubscriptionHost(SubSyncJob::SubscriptionHost && subscriptionHost) { DARABONBA_PTR_SET_RVALUE(subscriptionHost_, subscriptionHost) };


      // synchronizationDirection Field Functions 
      bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
      void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
      inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
      inline SubSyncJob& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<SubSyncJob::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<SubSyncJob::TagList>) };
      inline vector<SubSyncJob::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<SubSyncJob::TagList>) };
      inline SubSyncJob& setTagList(const vector<SubSyncJob::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline SubSyncJob& setTagList(vector<SubSyncJob::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline SubSyncJob& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // Indicates whether the new change tracking feature is used.
      // 
      // > This parameter is returned only for change tracking instances of the new version.
      shared_ptr<string> appName_ {};
      // The start of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> beginTimestamp_ {};
      // The start offset of incremental data migration or data synchronization. This value is a UNIX timestamp. Unit: seconds.
      shared_ptr<string> checkpoint_ {};
      // The consumption checkpoint of the change tracking instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> consumptionCheckpoint_ {};
      // The downstream client information in the following format: \\<IP address of the downstream client>:\\<Random ID generated by DTS>.
      shared_ptr<string> consumptionClient_ {};
      // The time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The state of the ETL task.
      // 
      // > This parameter collection is returned only if an ETL task is configured.
      shared_ptr<SubSyncJob::DataEtlStatus> dataEtlStatus_ {};
      // The state of full data migration or initial full data synchronization.
      shared_ptr<SubSyncJob::DataInitializationStatus> dataInitializationStatus_ {};
      // The state of incremental data migration or synchronization.
      shared_ptr<SubSyncJob::DataSynchronizationStatus> dataSynchronizationStatus_ {};
      // The number of ApsaraDB RDS for MySQL instances that are attached to the source PolarDB-X 1.0 instance.
      shared_ptr<int32_t> databaseCount_ {};
      // The objects of the data migration, data synchronization, or change tracking task. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
      shared_ptr<string> dbObject_ {};
      // The latency of incremental data migration or synchronization. Unit: milliseconds.
      shared_ptr<int64_t> delay_ {};
      // The network type of the consumer client. Valid values:
      // 
      // *   **CLASSIC**: classic network.
      // *   **VPC**: VPC.
      shared_ptr<string> destNetType_ {};
      // The connection settings of the destination instance.
      shared_ptr<SubSyncJob::DestinationEndpoint> destinationEndpoint_ {};
      // The DTS instance ID.
      shared_ptr<string> dtsInstanceID_ {};
      // The instance class.
      shared_ptr<string> dtsJobClass_ {};
      // The synchronization direction. Valid values:
      // 
      // *   **Forward**
      // *   **Reverse**
      // 
      // > This parameter is returned only if the topology of the data synchronization instance is two-way synchronization.
      shared_ptr<string> dtsJobDirection_ {};
      // The DTS task ID.
      shared_ptr<string> dtsJobId_ {};
      // The DTS instance name.
      shared_ptr<string> dtsJobName_ {};
      // The end of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> endTimestamp_ {};
      // The error message returned if the task failed.
      shared_ptr<string> errorMessage_ {};
      // The operator information of the ETL task.
      // 
      // > This parameter is returned only if you query the details of an ETL task.
      shared_ptr<string> etlCalculator_ {};
      // The time when the instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      // 
      // > This parameter is returned only if the return value of **PayType** is **PrePaid**.
      shared_ptr<string> expireTime_ {};
      // The time when the task was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> finishTime_ {};
      // The resource group ID.
      shared_ptr<string> groupId_ {};
      // Indicates whether the task is a subtask. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isDemoJob_ {};
      // The type of the DTS task. Valid values:
      // 
      // *   **online**: data migration task.
      // *   **SYNC**: data synchronization task.
      // *   **SUBSCRIBE**: change tracking task.
      shared_ptr<string> jobType_ {};
      // The maximum number of DUs.
      // 
      // > This parameter is supported only for serverless instances.
      shared_ptr<double> maxDu_ {};
      // The migration types or initial synchronization types.
      shared_ptr<SubSyncJob::MigrationMode> migrationMode_ {};
      // The minimum number of DUs.
      // 
      // > This parameter is supported only for serverless instances.
      shared_ptr<double> minDu_ {};
      // The source of the task. Valid values:
      // 
      // *   **PTS**
      // *   **DMS**
      // *   **DTS**
      shared_ptr<string> originType_ {};
      // The billing method. Valid values:
      // 
      // *   **PrePaid**: subscription.
      // *   **PostPaid**: pay-as-you-go.
      shared_ptr<string> payType_ {};
      // The performance of the data migration or synchronization instance.
      shared_ptr<SubSyncJob::Performance> performance_ {};
      // The precheck state.
      shared_ptr<SubSyncJob::PrecheckStatus> precheckStatus_ {};
      // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, such as whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
      shared_ptr<string> reserved_ {};
      // The information about the retries performed by DTS due to an exception.
      shared_ptr<SubSyncJob::RetryState> retryState_ {};
      // The details of the data synchronization task in the reverse direction.
      // 
      // > This parameter is returned only for two-way data synchronization tasks.
      shared_ptr<SubSyncJob::ReverseJob> reverseJob_ {};
      // The connection settings of the source instance.
      shared_ptr<SubSyncJob::SourceEndpoint> sourceEndpoint_ {};
      // The state of initial schema synchronization. Valid values:
      // 
      // *   **NotStarted**: The task is not started.
      // *   **Migrating**: The task is in progress.
      // *   **Failed**: The task failed.
      // *   **Finished**: The task is complete.
      shared_ptr<string> status_ {};
      // Initialization status of library table structure.
      shared_ptr<SubSyncJob::StructureInitializationStatus> structureInitializationStatus_ {};
      // The information about the subtasks in the current data synchronization task.
      shared_ptr<vector<Darabonba::Json>> subSyncJob_ {};
      // The topic of the change tracking instance.
      // 
      // > This parameter is returned only if your change tracking instances are of the new version and you have called the [CreateConsumerGroup](https://help.aliyun.com/document_detail/122863.html) operation to create a consumer group.
      shared_ptr<string> subscribeTopic_ {};
      // The type of data for change tracking.
      shared_ptr<SubSyncJob::SubscriptionDataType> subscriptionDataType_ {};
      // The endpoint of the change tracking instance.
      shared_ptr<SubSyncJob::SubscriptionHost> subscriptionHost_ {};
      // The synchronization direction. Valid values:
      // 
      // *   **Forward**
      // *   **Reverse**
      // 
      // > 
      // 
      // *   The default value is **Forward**.
      // *   The value **Reverse** takes effect only if the topology of the data synchronization instance is two-way synchronization.
      shared_ptr<string> synchronizationDirection_ {};
      // The tags of the task.
      shared_ptr<vector<SubSyncJob::TagList>> tagList_ {};
      // The task type.
      shared_ptr<string> taskType_ {};
    };

    class SubDistributedJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubDistributedJob& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(BeginTimestamp, beginTimestamp_);
        DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
        DARABONBA_PTR_TO_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
        DARABONBA_PTR_TO_JSON(ConsumptionClient, consumptionClient_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataEtlStatus, dataEtlStatus_);
        DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
        DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
        DARABONBA_PTR_TO_JSON(DatabaseCount, databaseCount_);
        DARABONBA_PTR_TO_JSON(DbObject, dbObject_);
        DARABONBA_PTR_TO_JSON(Delay, delay_);
        DARABONBA_PTR_TO_JSON(DestNetType, destNetType_);
        DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
        DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
        DARABONBA_PTR_TO_JSON(DtsJobClass, dtsJobClass_);
        DARABONBA_PTR_TO_JSON(DtsJobDirection, dtsJobDirection_);
        DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
        DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
        DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(EtlCalculator, etlCalculator_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(IsDemoJob, isDemoJob_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(MaxDu, maxDu_);
        DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
        DARABONBA_PTR_TO_JSON(MinDu, minDu_);
        DARABONBA_PTR_TO_JSON(OriginType, originType_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(Performance, performance_);
        DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
        DARABONBA_PTR_TO_JSON(Reserved, reserved_);
        DARABONBA_PTR_TO_JSON(RetryState, retryState_);
        DARABONBA_PTR_TO_JSON(ReverseJob, reverseJob_);
        DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
        DARABONBA_PTR_TO_JSON(SubSyncJob, subSyncJob_);
        DARABONBA_PTR_TO_JSON(SubscribeTopic, subscribeTopic_);
        DARABONBA_PTR_TO_JSON(SubscriptionDataType, subscriptionDataType_);
        DARABONBA_PTR_TO_JSON(SubscriptionHost, subscriptionHost_);
        DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
        DARABONBA_PTR_TO_JSON(TagList, tagList_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, SubDistributedJob& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(BeginTimestamp, beginTimestamp_);
        DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
        DARABONBA_PTR_FROM_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
        DARABONBA_PTR_FROM_JSON(ConsumptionClient, consumptionClient_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataEtlStatus, dataEtlStatus_);
        DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
        DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
        DARABONBA_PTR_FROM_JSON(DatabaseCount, databaseCount_);
        DARABONBA_PTR_FROM_JSON(DbObject, dbObject_);
        DARABONBA_PTR_FROM_JSON(Delay, delay_);
        DARABONBA_PTR_FROM_JSON(DestNetType, destNetType_);
        DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
        DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
        DARABONBA_PTR_FROM_JSON(DtsJobClass, dtsJobClass_);
        DARABONBA_PTR_FROM_JSON(DtsJobDirection, dtsJobDirection_);
        DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
        DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
        DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(EtlCalculator, etlCalculator_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(IsDemoJob, isDemoJob_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(MaxDu, maxDu_);
        DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
        DARABONBA_PTR_FROM_JSON(MinDu, minDu_);
        DARABONBA_PTR_FROM_JSON(OriginType, originType_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(Performance, performance_);
        DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
        DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
        DARABONBA_PTR_FROM_JSON(RetryState, retryState_);
        DARABONBA_PTR_FROM_JSON(ReverseJob, reverseJob_);
        DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
        DARABONBA_PTR_FROM_JSON(SubSyncJob, subSyncJob_);
        DARABONBA_PTR_FROM_JSON(SubscribeTopic, subscribeTopic_);
        DARABONBA_PTR_FROM_JSON(SubscriptionDataType, subscriptionDataType_);
        DARABONBA_PTR_FROM_JSON(SubscriptionHost, subscriptionHost_);
        DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
        DARABONBA_PTR_FROM_JSON(TagList, tagList_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      SubDistributedJob() = default ;
      SubDistributedJob(const SubDistributedJob &) = default ;
      SubDistributedJob(SubDistributedJob &&) = default ;
      SubDistributedJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubDistributedJob() = default ;
      SubDistributedJob& operator=(const SubDistributedJob &) = default ;
      SubDistributedJob& operator=(SubDistributedJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagList& obj) { 
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
          DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
          DARABONBA_PTR_TO_JSON(TagCategory, tagCategory_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, TagList& obj) { 
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(Scope, scope_);
          DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
          DARABONBA_PTR_FROM_JSON(TagCategory, tagCategory_);
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        TagList() = default ;
        TagList(const TagList &) = default ;
        TagList(TagList &&) = default ;
        TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagList() = default ;
        TagList& operator=(const TagList &) = default ;
        TagList& operator=(TagList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->creator_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->regionId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->scope_ == nullptr && this->srcRegion_ == nullptr && this->tagCategory_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
        inline TagList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline int64_t getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
        inline TagList& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline TagList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline TagList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TagList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline TagList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline TagList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline TagList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
        inline TagList& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


        // srcRegion Field Functions 
        bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
        void deleteSrcRegion() { this->srcRegion_ = nullptr;};
        inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
        inline TagList& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


        // tagCategory Field Functions 
        bool hasTagCategory() const { return this->tagCategory_ != nullptr;};
        void deleteTagCategory() { this->tagCategory_ = nullptr;};
        inline string getTagCategory() const { DARABONBA_PTR_GET_DEFAULT(tagCategory_, "") };
        inline TagList& setTagCategory(string tagCategory) { DARABONBA_PTR_SET_VALUE(tagCategory_, tagCategory) };


        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline TagList& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline TagList& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The Alibaba Cloud account ID.
        shared_ptr<int64_t> aliUid_ {};
        // The operator of the tag.
        shared_ptr<int64_t> creator_ {};
        // The time when the task was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the task was modified.
        shared_ptr<string> gmtModified_ {};
        // The primary key of the table.
        shared_ptr<int64_t> id_ {};
        // The ID of the region in which the DTS task resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
        shared_ptr<string> regionId_ {};
        // The ID of the data migration, data synchronization, or change tracking instance.
        shared_ptr<string> resourceId_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
        // Indicates whether the tag is visible. Valid values:
        // 
        // *   **0**: The tag is public.
        // *   **1**: The tag is private.
        shared_ptr<string> scope_ {};
        // The ID of the region in which the DTS task resides.
        // 
        // > In most cases, the ID of the region in which the destination instance resides is returned.
        shared_ptr<string> srcRegion_ {};
        // The type of the tag. Valid values:
        // 
        // *   **System**: The tag was created by the system.
        // *   **Custom**: The tag was created by a user.
        // 
        // > By default, if the parameter is left empty, custom tags and system tags are returned.
        shared_ptr<string> tagCategory_ {};
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      class SubscriptionHost : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubscriptionHost& obj) { 
          DARABONBA_PTR_TO_JSON(PrivateHost, privateHost_);
          DARABONBA_PTR_TO_JSON(PublicHost, publicHost_);
          DARABONBA_PTR_TO_JSON(VpcHost, vpcHost_);
        };
        friend void from_json(const Darabonba::Json& j, SubscriptionHost& obj) { 
          DARABONBA_PTR_FROM_JSON(PrivateHost, privateHost_);
          DARABONBA_PTR_FROM_JSON(PublicHost, publicHost_);
          DARABONBA_PTR_FROM_JSON(VpcHost, vpcHost_);
        };
        SubscriptionHost() = default ;
        SubscriptionHost(const SubscriptionHost &) = default ;
        SubscriptionHost(SubscriptionHost &&) = default ;
        SubscriptionHost(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubscriptionHost() = default ;
        SubscriptionHost& operator=(const SubscriptionHost &) = default ;
        SubscriptionHost& operator=(SubscriptionHost &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->privateHost_ == nullptr
        && this->publicHost_ == nullptr && this->vpcHost_ == nullptr; };
        // privateHost Field Functions 
        bool hasPrivateHost() const { return this->privateHost_ != nullptr;};
        void deletePrivateHost() { this->privateHost_ = nullptr;};
        inline string getPrivateHost() const { DARABONBA_PTR_GET_DEFAULT(privateHost_, "") };
        inline SubscriptionHost& setPrivateHost(string privateHost) { DARABONBA_PTR_SET_VALUE(privateHost_, privateHost) };


        // publicHost Field Functions 
        bool hasPublicHost() const { return this->publicHost_ != nullptr;};
        void deletePublicHost() { this->publicHost_ = nullptr;};
        inline string getPublicHost() const { DARABONBA_PTR_GET_DEFAULT(publicHost_, "") };
        inline SubscriptionHost& setPublicHost(string publicHost) { DARABONBA_PTR_SET_VALUE(publicHost_, publicHost) };


        // vpcHost Field Functions 
        bool hasVpcHost() const { return this->vpcHost_ != nullptr;};
        void deleteVpcHost() { this->vpcHost_ = nullptr;};
        inline string getVpcHost() const { DARABONBA_PTR_GET_DEFAULT(vpcHost_, "") };
        inline SubscriptionHost& setVpcHost(string vpcHost) { DARABONBA_PTR_SET_VALUE(vpcHost_, vpcHost) };


      protected:
        // The private endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
        shared_ptr<string> privateHost_ {};
        // The public endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
        shared_ptr<string> publicHost_ {};
        // The VPC endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
        shared_ptr<string> vpcHost_ {};
      };

      class SubscriptionDataType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubscriptionDataType& obj) { 
          DARABONBA_PTR_TO_JSON(Ddl, ddl_);
          DARABONBA_PTR_TO_JSON(Dml, dml_);
        };
        friend void from_json(const Darabonba::Json& j, SubscriptionDataType& obj) { 
          DARABONBA_PTR_FROM_JSON(Ddl, ddl_);
          DARABONBA_PTR_FROM_JSON(Dml, dml_);
        };
        SubscriptionDataType() = default ;
        SubscriptionDataType(const SubscriptionDataType &) = default ;
        SubscriptionDataType(SubscriptionDataType &&) = default ;
        SubscriptionDataType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubscriptionDataType() = default ;
        SubscriptionDataType& operator=(const SubscriptionDataType &) = default ;
        SubscriptionDataType& operator=(SubscriptionDataType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ddl_ == nullptr
        && this->dml_ == nullptr; };
        // ddl Field Functions 
        bool hasDdl() const { return this->ddl_ != nullptr;};
        void deleteDdl() { this->ddl_ = nullptr;};
        inline bool getDdl() const { DARABONBA_PTR_GET_DEFAULT(ddl_, false) };
        inline SubscriptionDataType& setDdl(bool ddl) { DARABONBA_PTR_SET_VALUE(ddl_, ddl) };


        // dml Field Functions 
        bool hasDml() const { return this->dml_ != nullptr;};
        void deleteDml() { this->dml_ = nullptr;};
        inline bool getDml() const { DARABONBA_PTR_GET_DEFAULT(dml_, false) };
        inline SubscriptionDataType& setDml(bool dml) { DARABONBA_PTR_SET_VALUE(dml_, dml) };


      protected:
        // Indicates whether DDL statements are tracked. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> ddl_ {};
        // Indicates whether DML statements are tracked. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> dml_ {};
      };

      class StructureInitializationStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StructureInitializationStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, StructureInitializationStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        StructureInitializationStatus() = default ;
        StructureInitializationStatus(const StructureInitializationStatus &) = default ;
        StructureInitializationStatus(StructureInitializationStatus &&) = default ;
        StructureInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StructureInitializationStatus() = default ;
        StructureInitializationStatus& operator=(const StructureInitializationStatus &) = default ;
        StructureInitializationStatus& operator=(StructureInitializationStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline StructureInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // needUpgrade Field Functions 
        bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
        void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
        inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
        inline StructureInitializationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline StructureInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline StructureInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline StructureInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // Error message.
        shared_ptr<string> errorMessage_ {};
        // Whether to display upgrade specifications, return value:
        // - True: Yes.
        // - False: No.
        shared_ptr<bool> needUpgrade_ {};
        // Initialization progress of library table structure, measured in percentage.
        shared_ptr<string> percent_ {};
        // The number of tables that have completed library table structure initialization.
        shared_ptr<string> progress_ {};
        // The initialization status of the library table structure includes:
        // - NotStarted: Not started.
        // - Migration: In the process of initialization.
        // - Failed: Initialization failed.
        // - Finished: Initialization completed.
        shared_ptr<string> status_ {};
      };

      class SourceEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(EngineName, engineName_);
          DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
          DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
          DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
          DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        SourceEndpoint() = default ;
        SourceEndpoint(const SourceEndpoint &) = default ;
        SourceEndpoint(SourceEndpoint &&) = default ;
        SourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceEndpoint() = default ;
        SourceEndpoint& operator=(const SourceEndpoint &) = default ;
        SourceEndpoint& operator=(SourceEndpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->databaseName_ == nullptr && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr
        && this->oracleSID_ == nullptr && this->port_ == nullptr && this->region_ == nullptr && this->roleName_ == nullptr && this->sslSolutionEnum_ == nullptr
        && this->userName_ == nullptr; };
        // aliyunUid Field Functions 
        bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
        void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
        inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
        inline SourceEndpoint& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline SourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // engineName Field Functions 
        bool hasEngineName() const { return this->engineName_ != nullptr;};
        void deleteEngineName() { this->engineName_ = nullptr;};
        inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
        inline SourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


        // instanceID Field Functions 
        bool hasInstanceID() const { return this->instanceID_ != nullptr;};
        void deleteInstanceID() { this->instanceID_ = nullptr;};
        inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
        inline SourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline SourceEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // oracleSID Field Functions 
        bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
        void deleteOracleSID() { this->oracleSID_ = nullptr;};
        inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
        inline SourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline SourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline SourceEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline SourceEndpoint& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


        // sslSolutionEnum Field Functions 
        bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
        void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
        inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
        inline SourceEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline SourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The ID of the Alibaba Cloud account to which the source instance belongs.
        shared_ptr<string> aliyunUid_ {};
        // The name of the database from which the objects are migrated in the source instance.
        shared_ptr<string> databaseName_ {};
        // The database engine of the source instance.
        shared_ptr<string> engineName_ {};
        // The source instance ID.
        shared_ptr<string> instanceID_ {};
        // The type of the source instance.
        shared_ptr<string> instanceType_ {};
        // The endpoint of the source instance.
        shared_ptr<string> ip_ {};
        // The SID of the Oracle database.
        // 
        // > This parameter is returned only if the return value of **EngineName** of the destination instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
        shared_ptr<string> oracleSID_ {};
        // The database service port of the source instance.
        shared_ptr<string> port_ {};
        // The ID of the region in which the source instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
        shared_ptr<string> region_ {};
        // The name of the RAM role configured for the Alibaba Cloud account to which the source instance belongs.
        shared_ptr<string> roleName_ {};
        // Indicates whether SSL encryption is enabled. Valid values:
        // 
        // *   **DISABLE**: SSL encryption is disabled.
        // *   **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded.
        // *   **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection to an AWS MongoDB Altas database.
        // *   **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection to a Kafka cluster.
        shared_ptr<string> sslSolutionEnum_ {};
        // The database account of the source instance.
        shared_ptr<string> userName_ {};
      };

      class ReverseJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReverseJob& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(BeginTimestamp, beginTimestamp_);
          DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
          DARABONBA_PTR_TO_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
          DARABONBA_PTR_TO_JSON(ConsumptionClient, consumptionClient_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataEtlStatus, dataEtlStatus_);
          DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
          DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
          DARABONBA_PTR_TO_JSON(DatabaseCount, databaseCount_);
          DARABONBA_PTR_TO_JSON(DbObject, dbObject_);
          DARABONBA_PTR_TO_JSON(Delay, delay_);
          DARABONBA_PTR_TO_JSON(DestNetType, destNetType_);
          DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
          DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
          DARABONBA_PTR_TO_JSON(DtsJobClass, dtsJobClass_);
          DARABONBA_PTR_TO_JSON(DtsJobDirection, dtsJobDirection_);
          DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
          DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
          DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(EtlCalculator, etlCalculator_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(IsDemoJob, isDemoJob_);
          DARABONBA_PTR_TO_JSON(JobType, jobType_);
          DARABONBA_PTR_TO_JSON(MaxDu, maxDu_);
          DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
          DARABONBA_PTR_TO_JSON(MinDu, minDu_);
          DARABONBA_PTR_TO_JSON(OriginType, originType_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(Performance, performance_);
          DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
          DARABONBA_PTR_TO_JSON(Reserved, reserved_);
          DARABONBA_PTR_TO_JSON(RetryState, retryState_);
          DARABONBA_ANY_TO_JSON(ReverseJob, reverseJob_);
          DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
          DARABONBA_PTR_TO_JSON(SubscribeTopic, subscribeTopic_);
          DARABONBA_PTR_TO_JSON(SubscriptionDataType, subscriptionDataType_);
          DARABONBA_PTR_TO_JSON(SubscriptionHost, subscriptionHost_);
          DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
          DARABONBA_PTR_TO_JSON(TagList, tagList_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        };
        friend void from_json(const Darabonba::Json& j, ReverseJob& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(BeginTimestamp, beginTimestamp_);
          DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
          DARABONBA_PTR_FROM_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
          DARABONBA_PTR_FROM_JSON(ConsumptionClient, consumptionClient_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataEtlStatus, dataEtlStatus_);
          DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
          DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
          DARABONBA_PTR_FROM_JSON(DatabaseCount, databaseCount_);
          DARABONBA_PTR_FROM_JSON(DbObject, dbObject_);
          DARABONBA_PTR_FROM_JSON(Delay, delay_);
          DARABONBA_PTR_FROM_JSON(DestNetType, destNetType_);
          DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
          DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
          DARABONBA_PTR_FROM_JSON(DtsJobClass, dtsJobClass_);
          DARABONBA_PTR_FROM_JSON(DtsJobDirection, dtsJobDirection_);
          DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
          DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
          DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(EtlCalculator, etlCalculator_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(IsDemoJob, isDemoJob_);
          DARABONBA_PTR_FROM_JSON(JobType, jobType_);
          DARABONBA_PTR_FROM_JSON(MaxDu, maxDu_);
          DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
          DARABONBA_PTR_FROM_JSON(MinDu, minDu_);
          DARABONBA_PTR_FROM_JSON(OriginType, originType_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(Performance, performance_);
          DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
          DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
          DARABONBA_PTR_FROM_JSON(RetryState, retryState_);
          DARABONBA_ANY_FROM_JSON(ReverseJob, reverseJob_);
          DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
          DARABONBA_PTR_FROM_JSON(SubscribeTopic, subscribeTopic_);
          DARABONBA_PTR_FROM_JSON(SubscriptionDataType, subscriptionDataType_);
          DARABONBA_PTR_FROM_JSON(SubscriptionHost, subscriptionHost_);
          DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
          DARABONBA_PTR_FROM_JSON(TagList, tagList_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        };
        ReverseJob() = default ;
        ReverseJob(const ReverseJob &) = default ;
        ReverseJob(ReverseJob &&) = default ;
        ReverseJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReverseJob() = default ;
        ReverseJob& operator=(const ReverseJob &) = default ;
        ReverseJob& operator=(ReverseJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TagList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TagList& obj) { 
            DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
            DARABONBA_PTR_TO_JSON(Creator, creator_);
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
            DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
            DARABONBA_PTR_TO_JSON(Scope, scope_);
            DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
            DARABONBA_PTR_TO_JSON(TagCategory, tagCategory_);
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, TagList& obj) { 
            DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
            DARABONBA_PTR_FROM_JSON(Creator, creator_);
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
            DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
            DARABONBA_PTR_FROM_JSON(Scope, scope_);
            DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
            DARABONBA_PTR_FROM_JSON(TagCategory, tagCategory_);
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
          };
          TagList() = default ;
          TagList(const TagList &) = default ;
          TagList(TagList &&) = default ;
          TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TagList() = default ;
          TagList& operator=(const TagList &) = default ;
          TagList& operator=(TagList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->creator_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->regionId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->scope_ == nullptr && this->srcRegion_ == nullptr && this->tagCategory_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
          // aliUid Field Functions 
          bool hasAliUid() const { return this->aliUid_ != nullptr;};
          void deleteAliUid() { this->aliUid_ = nullptr;};
          inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
          inline TagList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


          // creator Field Functions 
          bool hasCreator() const { return this->creator_ != nullptr;};
          void deleteCreator() { this->creator_ = nullptr;};
          inline int64_t getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
          inline TagList& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline TagList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline TagList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline TagList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline TagList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // resourceId Field Functions 
          bool hasResourceId() const { return this->resourceId_ != nullptr;};
          void deleteResourceId() { this->resourceId_ = nullptr;};
          inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
          inline TagList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


          // resourceType Field Functions 
          bool hasResourceType() const { return this->resourceType_ != nullptr;};
          void deleteResourceType() { this->resourceType_ = nullptr;};
          inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
          inline TagList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


          // scope Field Functions 
          bool hasScope() const { return this->scope_ != nullptr;};
          void deleteScope() { this->scope_ = nullptr;};
          inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
          inline TagList& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


          // srcRegion Field Functions 
          bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
          void deleteSrcRegion() { this->srcRegion_ = nullptr;};
          inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
          inline TagList& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


          // tagCategory Field Functions 
          bool hasTagCategory() const { return this->tagCategory_ != nullptr;};
          void deleteTagCategory() { this->tagCategory_ = nullptr;};
          inline string getTagCategory() const { DARABONBA_PTR_GET_DEFAULT(tagCategory_, "") };
          inline TagList& setTagCategory(string tagCategory) { DARABONBA_PTR_SET_VALUE(tagCategory_, tagCategory) };


          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline TagList& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline TagList& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          // The Alibaba Cloud account ID.
          shared_ptr<int64_t> aliUid_ {};
          // The operator of the tag.
          shared_ptr<int64_t> creator_ {};
          // The time when the task was created.
          shared_ptr<string> gmtCreate_ {};
          // The time when the task was modified.
          shared_ptr<string> gmtModified_ {};
          // The primary key of the table.
          shared_ptr<int64_t> id_ {};
          // The ID of the region in which the DTS instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
          shared_ptr<string> regionId_ {};
          // The ID of the data migration, data synchronization, or change tracking instance.
          shared_ptr<string> resourceId_ {};
          // The resource type.
          shared_ptr<string> resourceType_ {};
          // Indicates whether the tag is visible. Valid values:
          // 
          // *   **0**: The tag is public.
          // *   **1**: The tag is private.
          shared_ptr<string> scope_ {};
          // The ID of the region in which the DTS task resides.
          // 
          // > In most cases, the ID of the region in which the destination instance resides is returned.
          shared_ptr<string> srcRegion_ {};
          // The type of the tag. Valid values:
          // 
          // *   **System**: The tag was created by the system.
          // *   **Custom**: The tag was created by a user.
          // 
          // > By default, if the parameter is left empty, custom tags and system tags are returned.
          shared_ptr<string> tagCategory_ {};
          // The tag key.
          shared_ptr<string> tagKey_ {};
          // The tag value.
          shared_ptr<string> tagValue_ {};
        };

        class SubscriptionHost : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubscriptionHost& obj) { 
            DARABONBA_PTR_TO_JSON(PrivateHost, privateHost_);
            DARABONBA_PTR_TO_JSON(PublicHost, publicHost_);
            DARABONBA_PTR_TO_JSON(VpcHost, vpcHost_);
          };
          friend void from_json(const Darabonba::Json& j, SubscriptionHost& obj) { 
            DARABONBA_PTR_FROM_JSON(PrivateHost, privateHost_);
            DARABONBA_PTR_FROM_JSON(PublicHost, publicHost_);
            DARABONBA_PTR_FROM_JSON(VpcHost, vpcHost_);
          };
          SubscriptionHost() = default ;
          SubscriptionHost(const SubscriptionHost &) = default ;
          SubscriptionHost(SubscriptionHost &&) = default ;
          SubscriptionHost(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubscriptionHost() = default ;
          SubscriptionHost& operator=(const SubscriptionHost &) = default ;
          SubscriptionHost& operator=(SubscriptionHost &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->privateHost_ == nullptr
        && this->publicHost_ == nullptr && this->vpcHost_ == nullptr; };
          // privateHost Field Functions 
          bool hasPrivateHost() const { return this->privateHost_ != nullptr;};
          void deletePrivateHost() { this->privateHost_ = nullptr;};
          inline string getPrivateHost() const { DARABONBA_PTR_GET_DEFAULT(privateHost_, "") };
          inline SubscriptionHost& setPrivateHost(string privateHost) { DARABONBA_PTR_SET_VALUE(privateHost_, privateHost) };


          // publicHost Field Functions 
          bool hasPublicHost() const { return this->publicHost_ != nullptr;};
          void deletePublicHost() { this->publicHost_ = nullptr;};
          inline string getPublicHost() const { DARABONBA_PTR_GET_DEFAULT(publicHost_, "") };
          inline SubscriptionHost& setPublicHost(string publicHost) { DARABONBA_PTR_SET_VALUE(publicHost_, publicHost) };


          // vpcHost Field Functions 
          bool hasVpcHost() const { return this->vpcHost_ != nullptr;};
          void deleteVpcHost() { this->vpcHost_ = nullptr;};
          inline string getVpcHost() const { DARABONBA_PTR_GET_DEFAULT(vpcHost_, "") };
          inline SubscriptionHost& setVpcHost(string vpcHost) { DARABONBA_PTR_SET_VALUE(vpcHost_, vpcHost) };


        protected:
          // The private endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
          shared_ptr<string> privateHost_ {};
          // The public endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
          shared_ptr<string> publicHost_ {};
          // The VPC endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
          shared_ptr<string> vpcHost_ {};
        };

        class SubscriptionDataType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubscriptionDataType& obj) { 
            DARABONBA_PTR_TO_JSON(Ddl, ddl_);
            DARABONBA_PTR_TO_JSON(Dml, dml_);
          };
          friend void from_json(const Darabonba::Json& j, SubscriptionDataType& obj) { 
            DARABONBA_PTR_FROM_JSON(Ddl, ddl_);
            DARABONBA_PTR_FROM_JSON(Dml, dml_);
          };
          SubscriptionDataType() = default ;
          SubscriptionDataType(const SubscriptionDataType &) = default ;
          SubscriptionDataType(SubscriptionDataType &&) = default ;
          SubscriptionDataType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubscriptionDataType() = default ;
          SubscriptionDataType& operator=(const SubscriptionDataType &) = default ;
          SubscriptionDataType& operator=(SubscriptionDataType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ddl_ == nullptr
        && this->dml_ == nullptr; };
          // ddl Field Functions 
          bool hasDdl() const { return this->ddl_ != nullptr;};
          void deleteDdl() { this->ddl_ = nullptr;};
          inline bool getDdl() const { DARABONBA_PTR_GET_DEFAULT(ddl_, false) };
          inline SubscriptionDataType& setDdl(bool ddl) { DARABONBA_PTR_SET_VALUE(ddl_, ddl) };


          // dml Field Functions 
          bool hasDml() const { return this->dml_ != nullptr;};
          void deleteDml() { this->dml_ = nullptr;};
          inline bool getDml() const { DARABONBA_PTR_GET_DEFAULT(dml_, false) };
          inline SubscriptionDataType& setDml(bool dml) { DARABONBA_PTR_SET_VALUE(dml_, dml) };


        protected:
          // Indicates whether DDL statements are tracked. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> ddl_ {};
          // Indicates whether DML statements are tracked. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> dml_ {};
        };

        class StructureInitializationStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StructureInitializationStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, StructureInitializationStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          StructureInitializationStatus() = default ;
          StructureInitializationStatus(const StructureInitializationStatus &) = default ;
          StructureInitializationStatus(StructureInitializationStatus &&) = default ;
          StructureInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StructureInitializationStatus() = default ;
          StructureInitializationStatus& operator=(const StructureInitializationStatus &) = default ;
          StructureInitializationStatus& operator=(StructureInitializationStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline StructureInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // needUpgrade Field Functions 
          bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
          void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
          inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
          inline StructureInitializationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline StructureInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline StructureInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline StructureInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // Error message indicating task failure.
          shared_ptr<string> errorMessage_ {};
          // Whether to display upgrade specifications, return value:
          // - True: Yes.
          // - False: No.
          shared_ptr<bool> needUpgrade_ {};
          // Initialization progress of library table structure, measured in percentage.
          shared_ptr<string> percent_ {};
          // The number of tables that have completed library table structure initialization.
          shared_ptr<string> progress_ {};
          // The initialization status of the library table structure includes:
          // - NotStarted: Not started.
          // - Migration: In the process of initialization.
          // - Failed: Initialization failed.
          // - Finished: Initialization completed.
          shared_ptr<string> status_ {};
        };

        class SourceEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
            DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_TO_JSON(EngineName, engineName_);
            DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(Ip, ip_);
            DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(RoleName, roleName_);
            DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
            DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
            DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(Ip, ip_);
            DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
            DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_FROM_JSON(UserName, userName_);
          };
          SourceEndpoint() = default ;
          SourceEndpoint(const SourceEndpoint &) = default ;
          SourceEndpoint(SourceEndpoint &&) = default ;
          SourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceEndpoint() = default ;
          SourceEndpoint& operator=(const SourceEndpoint &) = default ;
          SourceEndpoint& operator=(SourceEndpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->databaseName_ == nullptr && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr
        && this->oracleSID_ == nullptr && this->port_ == nullptr && this->region_ == nullptr && this->roleName_ == nullptr && this->sslSolutionEnum_ == nullptr
        && this->userName_ == nullptr; };
          // aliyunUid Field Functions 
          bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
          void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
          inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
          inline SourceEndpoint& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


          // databaseName Field Functions 
          bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
          void deleteDatabaseName() { this->databaseName_ = nullptr;};
          inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
          inline SourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


          // engineName Field Functions 
          bool hasEngineName() const { return this->engineName_ != nullptr;};
          void deleteEngineName() { this->engineName_ = nullptr;};
          inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
          inline SourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


          // instanceID Field Functions 
          bool hasInstanceID() const { return this->instanceID_ != nullptr;};
          void deleteInstanceID() { this->instanceID_ = nullptr;};
          inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
          inline SourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
          inline SourceEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


          // oracleSID Field Functions 
          bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
          void deleteOracleSID() { this->oracleSID_ = nullptr;};
          inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
          inline SourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
          inline SourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline SourceEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // roleName Field Functions 
          bool hasRoleName() const { return this->roleName_ != nullptr;};
          void deleteRoleName() { this->roleName_ = nullptr;};
          inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
          inline SourceEndpoint& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


          // sslSolutionEnum Field Functions 
          bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
          void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
          inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
          inline SourceEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline SourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // The ID of the Alibaba Cloud account to which the source instance belongs.
          shared_ptr<string> aliyunUid_ {};
          // The name of the database from which the objects are migrated in the source instance.
          shared_ptr<string> databaseName_ {};
          // The database engine of the source instance.
          shared_ptr<string> engineName_ {};
          // The source instance ID.
          shared_ptr<string> instanceID_ {};
          // The type of the source instance.
          shared_ptr<string> instanceType_ {};
          // The endpoint of the source instance.
          shared_ptr<string> ip_ {};
          // The SID of the Oracle database.
          // 
          // > This parameter is returned only if the return value of **EngineName** of the destination instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
          shared_ptr<string> oracleSID_ {};
          // The database service port of the source instance.
          shared_ptr<string> port_ {};
          // The ID of the region in which the source instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
          shared_ptr<string> region_ {};
          // The name of the RAM role configured for the Alibaba Cloud account to which the source instance belongs.
          shared_ptr<string> roleName_ {};
          // Indicates whether SSL encryption is enabled. Valid values:
          // 
          // *   **DISABLE**: SSL encryption is disabled.
          // *   **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded.
          // *   **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection to an AWS MongoDB Altas database.
          // *   **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection to a Kafka cluster.
          shared_ptr<string> sslSolutionEnum_ {};
          // The database account of the source instance.
          shared_ptr<string> userName_ {};
        };

        class RetryState : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RetryState& obj) { 
            DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
            DARABONBA_PTR_TO_JSON(JobId, jobId_);
            DARABONBA_PTR_TO_JSON(MaxRetryTime, maxRetryTime_);
            DARABONBA_PTR_TO_JSON(Module, module_);
            DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
            DARABONBA_PTR_TO_JSON(RetryTarget, retryTarget_);
            DARABONBA_PTR_TO_JSON(RetryTime, retryTime_);
            DARABONBA_PTR_TO_JSON(Retrying, retrying_);
          };
          friend void from_json(const Darabonba::Json& j, RetryState& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
            DARABONBA_PTR_FROM_JSON(JobId, jobId_);
            DARABONBA_PTR_FROM_JSON(MaxRetryTime, maxRetryTime_);
            DARABONBA_PTR_FROM_JSON(Module, module_);
            DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
            DARABONBA_PTR_FROM_JSON(RetryTarget, retryTarget_);
            DARABONBA_PTR_FROM_JSON(RetryTime, retryTime_);
            DARABONBA_PTR_FROM_JSON(Retrying, retrying_);
          };
          RetryState() = default ;
          RetryState(const RetryState &) = default ;
          RetryState(RetryState &&) = default ;
          RetryState(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RetryState() = default ;
          RetryState& operator=(const RetryState &) = default ;
          RetryState& operator=(RetryState &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errMsg_ == nullptr
        && this->jobId_ == nullptr && this->maxRetryTime_ == nullptr && this->module_ == nullptr && this->retryCount_ == nullptr && this->retryTarget_ == nullptr
        && this->retryTime_ == nullptr && this->retrying_ == nullptr; };
          // errMsg Field Functions 
          bool hasErrMsg() const { return this->errMsg_ != nullptr;};
          void deleteErrMsg() { this->errMsg_ = nullptr;};
          inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
          inline RetryState& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


          // jobId Field Functions 
          bool hasJobId() const { return this->jobId_ != nullptr;};
          void deleteJobId() { this->jobId_ = nullptr;};
          inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
          inline RetryState& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


          // maxRetryTime Field Functions 
          bool hasMaxRetryTime() const { return this->maxRetryTime_ != nullptr;};
          void deleteMaxRetryTime() { this->maxRetryTime_ = nullptr;};
          inline int32_t getMaxRetryTime() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTime_, 0) };
          inline RetryState& setMaxRetryTime(int32_t maxRetryTime) { DARABONBA_PTR_SET_VALUE(maxRetryTime_, maxRetryTime) };


          // module Field Functions 
          bool hasModule() const { return this->module_ != nullptr;};
          void deleteModule() { this->module_ = nullptr;};
          inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
          inline RetryState& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


          // retryCount Field Functions 
          bool hasRetryCount() const { return this->retryCount_ != nullptr;};
          void deleteRetryCount() { this->retryCount_ = nullptr;};
          inline int32_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
          inline RetryState& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


          // retryTarget Field Functions 
          bool hasRetryTarget() const { return this->retryTarget_ != nullptr;};
          void deleteRetryTarget() { this->retryTarget_ = nullptr;};
          inline string getRetryTarget() const { DARABONBA_PTR_GET_DEFAULT(retryTarget_, "") };
          inline RetryState& setRetryTarget(string retryTarget) { DARABONBA_PTR_SET_VALUE(retryTarget_, retryTarget) };


          // retryTime Field Functions 
          bool hasRetryTime() const { return this->retryTime_ != nullptr;};
          void deleteRetryTime() { this->retryTime_ = nullptr;};
          inline int32_t getRetryTime() const { DARABONBA_PTR_GET_DEFAULT(retryTime_, 0) };
          inline RetryState& setRetryTime(int32_t retryTime) { DARABONBA_PTR_SET_VALUE(retryTime_, retryTime) };


          // retrying Field Functions 
          bool hasRetrying() const { return this->retrying_ != nullptr;};
          void deleteRetrying() { this->retrying_ = nullptr;};
          inline bool getRetrying() const { DARABONBA_PTR_GET_DEFAULT(retrying_, false) };
          inline RetryState& setRetrying(bool retrying) { DARABONBA_PTR_SET_VALUE(retrying_, retrying) };


        protected:
          // The error message returned.
          shared_ptr<string> errMsg_ {};
          // The task ID.
          shared_ptr<string> jobId_ {};
          // The maximum duration of a retry. Unit: seconds.
          shared_ptr<int32_t> maxRetryTime_ {};
          // The progress of the instance when DTS performs retries.
          shared_ptr<string> module_ {};
          // The number of retries.
          shared_ptr<int32_t> retryCount_ {};
          // The object on which the retries are performed. Valid values:
          // 
          // *   **srcDB**: the source database.
          // *   **destDB**: the destination database.
          // *   **inner_module**: an internal module of DTS.
          shared_ptr<string> retryTarget_ {};
          // The time that has elapsed from the point in time when the first retry starts. Unit: seconds.
          shared_ptr<int32_t> retryTime_ {};
          // Indicates whether the task is being retried. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> retrying_ {};
        };

        class PrecheckStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrecheckStatus& obj) { 
            DARABONBA_PTR_TO_JSON(Detail, detail_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, PrecheckStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(Detail, detail_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          PrecheckStatus() = default ;
          PrecheckStatus(const PrecheckStatus &) = default ;
          PrecheckStatus(PrecheckStatus &&) = default ;
          PrecheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrecheckStatus() = default ;
          PrecheckStatus& operator=(const PrecheckStatus &) = default ;
          PrecheckStatus& operator=(PrecheckStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Detail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Detail& obj) { 
              DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
              DARABONBA_PTR_TO_JSON(CheckItemDescription, checkItemDescription_);
              DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
              DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
              DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
            };
            friend void from_json(const Darabonba::Json& j, Detail& obj) { 
              DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
              DARABONBA_PTR_FROM_JSON(CheckItemDescription, checkItemDescription_);
              DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
              DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
              DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
            };
            Detail() = default ;
            Detail(const Detail &) = default ;
            Detail(Detail &&) = default ;
            Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Detail() = default ;
            Detail& operator=(const Detail &) = default ;
            Detail& operator=(Detail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->checkItem_ == nullptr
        && this->checkItemDescription_ == nullptr && this->checkResult_ == nullptr && this->failedReason_ == nullptr && this->repairMethod_ == nullptr; };
            // checkItem Field Functions 
            bool hasCheckItem() const { return this->checkItem_ != nullptr;};
            void deleteCheckItem() { this->checkItem_ = nullptr;};
            inline string getCheckItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
            inline Detail& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


            // checkItemDescription Field Functions 
            bool hasCheckItemDescription() const { return this->checkItemDescription_ != nullptr;};
            void deleteCheckItemDescription() { this->checkItemDescription_ = nullptr;};
            inline string getCheckItemDescription() const { DARABONBA_PTR_GET_DEFAULT(checkItemDescription_, "") };
            inline Detail& setCheckItemDescription(string checkItemDescription) { DARABONBA_PTR_SET_VALUE(checkItemDescription_, checkItemDescription) };


            // checkResult Field Functions 
            bool hasCheckResult() const { return this->checkResult_ != nullptr;};
            void deleteCheckResult() { this->checkResult_ = nullptr;};
            inline string getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
            inline Detail& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


            // failedReason Field Functions 
            bool hasFailedReason() const { return this->failedReason_ != nullptr;};
            void deleteFailedReason() { this->failedReason_ = nullptr;};
            inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
            inline Detail& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


            // repairMethod Field Functions 
            bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
            void deleteRepairMethod() { this->repairMethod_ = nullptr;};
            inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
            inline Detail& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


          protected:
            // The name of the precheck item.
            shared_ptr<string> checkItem_ {};
            // The description of the precheck item.
            shared_ptr<string> checkItemDescription_ {};
            // The precheck result. Valid values:
            // 
            // *   **Success**
            // *   **Failed**
            shared_ptr<string> checkResult_ {};
            // The error message returned if the task failed to pass the precheck.
            // 
            // > This parameter is returned only if the return value of **CheckResult** is **Failed**.
            shared_ptr<string> failedReason_ {};
            // The method used to fix the precheck failure.
            // 
            // > This parameter is returned only if the return value of **CheckResult** is **Failed**.
            shared_ptr<string> repairMethod_ {};
          };

          virtual bool empty() const override { return this->detail_ == nullptr
        && this->errorMessage_ == nullptr && this->percent_ == nullptr && this->status_ == nullptr; };
          // detail Field Functions 
          bool hasDetail() const { return this->detail_ != nullptr;};
          void deleteDetail() { this->detail_ = nullptr;};
          inline const vector<PrecheckStatus::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<PrecheckStatus::Detail>) };
          inline vector<PrecheckStatus::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<PrecheckStatus::Detail>) };
          inline PrecheckStatus& setDetail(const vector<PrecheckStatus::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
          inline PrecheckStatus& setDetail(vector<PrecheckStatus::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline PrecheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline PrecheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline PrecheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The result of each precheck item.
          shared_ptr<vector<PrecheckStatus::Detail>> detail_ {};
          // The error message returned if the task failed.
          shared_ptr<string> errorMessage_ {};
          // The precheck progress. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The precheck state. Valid values:
          // 
          // *   **NotStarted**: The task is not started.
          // *   **Prechecking**: The task is in precheck.
          // *   **PrecheckFailed**: The task failed to pass the precheck.
          // *   **Finished**: The task is complete.
          shared_ptr<string> status_ {};
        };

        class Performance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Performance& obj) { 
            DARABONBA_PTR_TO_JSON(Flow, flow_);
            DARABONBA_PTR_TO_JSON(Rps, rps_);
          };
          friend void from_json(const Darabonba::Json& j, Performance& obj) { 
            DARABONBA_PTR_FROM_JSON(Flow, flow_);
            DARABONBA_PTR_FROM_JSON(Rps, rps_);
          };
          Performance() = default ;
          Performance(const Performance &) = default ;
          Performance(Performance &&) = default ;
          Performance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Performance() = default ;
          Performance& operator=(const Performance &) = default ;
          Performance& operator=(Performance &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->flow_ == nullptr
        && this->rps_ == nullptr; };
          // flow Field Functions 
          bool hasFlow() const { return this->flow_ != nullptr;};
          void deleteFlow() { this->flow_ = nullptr;};
          inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
          inline Performance& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


          // rps Field Functions 
          bool hasRps() const { return this->rps_ != nullptr;};
          void deleteRps() { this->rps_ = nullptr;};
          inline string getRps() const { DARABONBA_PTR_GET_DEFAULT(rps_, "") };
          inline Performance& setRps(string rps) { DARABONBA_PTR_SET_VALUE(rps_, rps) };


        protected:
          // The size of data that is migrated or synchronized per second. Unit: Mbit/s.
          shared_ptr<string> flow_ {};
          // The number of times that SQL statements are migrated or synchronized per second, including BEGIN, COMMIT, DML, and DDL statements. DML statements include INSERT, DELETE, and UPDATE.
          shared_ptr<string> rps_ {};
        };

        class MigrationMode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MigrationMode& obj) { 
            DARABONBA_PTR_TO_JSON(DataExtractTransformLoad, dataExtractTransformLoad_);
            DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
            DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
            DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
          };
          friend void from_json(const Darabonba::Json& j, MigrationMode& obj) { 
            DARABONBA_PTR_FROM_JSON(DataExtractTransformLoad, dataExtractTransformLoad_);
            DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
            DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
            DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
          };
          MigrationMode() = default ;
          MigrationMode(const MigrationMode &) = default ;
          MigrationMode(MigrationMode &&) = default ;
          MigrationMode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MigrationMode() = default ;
          MigrationMode& operator=(const MigrationMode &) = default ;
          MigrationMode& operator=(MigrationMode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dataExtractTransformLoad_ == nullptr
        && this->dataInitialization_ == nullptr && this->dataSynchronization_ == nullptr && this->structureInitialization_ == nullptr; };
          // dataExtractTransformLoad Field Functions 
          bool hasDataExtractTransformLoad() const { return this->dataExtractTransformLoad_ != nullptr;};
          void deleteDataExtractTransformLoad() { this->dataExtractTransformLoad_ = nullptr;};
          inline bool getDataExtractTransformLoad() const { DARABONBA_PTR_GET_DEFAULT(dataExtractTransformLoad_, false) };
          inline MigrationMode& setDataExtractTransformLoad(bool dataExtractTransformLoad) { DARABONBA_PTR_SET_VALUE(dataExtractTransformLoad_, dataExtractTransformLoad) };


          // dataInitialization Field Functions 
          bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
          void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
          inline bool getDataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
          inline MigrationMode& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


          // dataSynchronization Field Functions 
          bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
          void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
          inline bool getDataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
          inline MigrationMode& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


          // structureInitialization Field Functions 
          bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
          void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
          inline bool getStructureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
          inline MigrationMode& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


        protected:
          // Indicates whether data transformation is performed. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> dataExtractTransformLoad_ {};
          // Indicates whether full data migration or initial full data synchronization is performed. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> dataInitialization_ {};
          // Indicates whether incremental data migration or synchronization is performed. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> dataSynchronization_ {};
          // Indicates whether schema migration or initial schema synchronization is performed. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> structureInitialization_ {};
        };

        class DestinationEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DestinationEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
            DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_TO_JSON(EngineName, engineName_);
            DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(Ip, ip_);
            DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(RoleName, roleName_);
            DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
            DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
            DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
            DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(Ip, ip_);
            DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
            DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
            DARABONBA_PTR_FROM_JSON(UserName, userName_);
          };
          DestinationEndpoint() = default ;
          DestinationEndpoint(const DestinationEndpoint &) = default ;
          DestinationEndpoint(DestinationEndpoint &&) = default ;
          DestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DestinationEndpoint() = default ;
          DestinationEndpoint& operator=(const DestinationEndpoint &) = default ;
          DestinationEndpoint& operator=(DestinationEndpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->databaseName_ == nullptr && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr
        && this->oracleSID_ == nullptr && this->port_ == nullptr && this->region_ == nullptr && this->roleName_ == nullptr && this->sslSolutionEnum_ == nullptr
        && this->userName_ == nullptr; };
          // aliyunUid Field Functions 
          bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
          void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
          inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
          inline DestinationEndpoint& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


          // databaseName Field Functions 
          bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
          void deleteDatabaseName() { this->databaseName_ = nullptr;};
          inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
          inline DestinationEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


          // engineName Field Functions 
          bool hasEngineName() const { return this->engineName_ != nullptr;};
          void deleteEngineName() { this->engineName_ = nullptr;};
          inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
          inline DestinationEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


          // instanceID Field Functions 
          bool hasInstanceID() const { return this->instanceID_ != nullptr;};
          void deleteInstanceID() { this->instanceID_ = nullptr;};
          inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
          inline DestinationEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline DestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // ip Field Functions 
          bool hasIp() const { return this->ip_ != nullptr;};
          void deleteIp() { this->ip_ = nullptr;};
          inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
          inline DestinationEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


          // oracleSID Field Functions 
          bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
          void deleteOracleSID() { this->oracleSID_ = nullptr;};
          inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
          inline DestinationEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
          inline DestinationEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline DestinationEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // roleName Field Functions 
          bool hasRoleName() const { return this->roleName_ != nullptr;};
          void deleteRoleName() { this->roleName_ = nullptr;};
          inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
          inline DestinationEndpoint& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


          // sslSolutionEnum Field Functions 
          bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
          void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
          inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
          inline DestinationEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline DestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // The ID of the Alibaba Cloud account to which the destination instance belongs.
          shared_ptr<string> aliyunUid_ {};
          // The name of the database to which the objects are migrated in the destination instance.
          shared_ptr<string> databaseName_ {};
          // The database engine of the destination instance.
          shared_ptr<string> engineName_ {};
          // The destination instance ID.
          shared_ptr<string> instanceID_ {};
          // The type of the destination instance.
          shared_ptr<string> instanceType_ {};
          // The endpoint of the destination instance.
          shared_ptr<string> ip_ {};
          // The SID of the Oracle database.
          // 
          // > This parameter is returned only if the return value of **EngineName** of the destination instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
          shared_ptr<string> oracleSID_ {};
          // The database service port of the destination instance.
          shared_ptr<string> port_ {};
          // The ID of the region in which the destination instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
          shared_ptr<string> region_ {};
          // The name of the RAM role configured for the Alibaba Cloud account to which the destination instance belongs.
          shared_ptr<string> roleName_ {};
          // Indicates whether SSL encryption is enabled. Valid values:
          // 
          // *   **DISABLE**: SSL encryption is disabled.
          // *   **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded.
          // *   **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection to an AWS MongoDB Altas database.
          // *   **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection to a Kafka cluster.
          shared_ptr<string> sslSolutionEnum_ {};
          // The database account of the destination instance.
          shared_ptr<string> userName_ {};
        };

        class DataSynchronizationStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSynchronizationStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, DataSynchronizationStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          DataSynchronizationStatus() = default ;
          DataSynchronizationStatus(const DataSynchronizationStatus &) = default ;
          DataSynchronizationStatus(DataSynchronizationStatus &&) = default ;
          DataSynchronizationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataSynchronizationStatus() = default ;
          DataSynchronizationStatus& operator=(const DataSynchronizationStatus &) = default ;
          DataSynchronizationStatus& operator=(DataSynchronizationStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline DataSynchronizationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // needUpgrade Field Functions 
          bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
          void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
          inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
          inline DataSynchronizationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline DataSynchronizationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline DataSynchronizationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DataSynchronizationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if the task failed.
          shared_ptr<string> errorMessage_ {};
          // Indicates whether the instance class needs to be upgraded. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> needUpgrade_ {};
          // The progress of incremental data migration or synchronization.
          shared_ptr<string> percent_ {};
          // The number of rows and size of data that is synchronized or migrated to the destination table per second during incremental data synchronization or migration.
          shared_ptr<string> progress_ {};
          // The state of incremental data migration or synchronization. Valid values:
          // 
          // *   **NotStarted**: The task is not started.
          // *   **Migrating**: The task is in progress.
          // *   **Suspending**: The task is paused.
          // *   **Checking**: The task is in precheck.
          // *   **Failed**: The task failed.
          // *   **Finished**: The task is complete.
          // *   **Catched**: The task has no latency.
          shared_ptr<string> status_ {};
        };

        class DataInitializationStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataInitializationStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, DataInitializationStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          DataInitializationStatus() = default ;
          DataInitializationStatus(const DataInitializationStatus &) = default ;
          DataInitializationStatus(DataInitializationStatus &&) = default ;
          DataInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataInitializationStatus() = default ;
          DataInitializationStatus& operator=(const DataInitializationStatus &) = default ;
          DataInitializationStatus& operator=(DataInitializationStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline DataInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // needUpgrade Field Functions 
          bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
          void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
          inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
          inline DataInitializationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline DataInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline DataInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DataInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if full data migration or initial full data synchronization failed.
          shared_ptr<string> errorMessage_ {};
          // Indicates whether the instance class needs to be upgraded. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> needUpgrade_ {};
          // The progress of full data migration or initial full data synchronization. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The number of entries that are migrated or synchronized during full data migration or initial full data synchronization.
          shared_ptr<string> progress_ {};
          // The state of full data migration or initial full data synchronization. Valid values:
          // 
          // *   **NotStarted**: The task is not started.
          // *   **Migrating**: The task is in progress.
          // *   **Failed**: The task failed.
          // *   **Finished**: The task is complete.
          shared_ptr<string> status_ {};
        };

        class DataEtlStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataEtlStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(Progress, progress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, DataEtlStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(Progress, progress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          DataEtlStatus() = default ;
          DataEtlStatus(const DataEtlStatus &) = default ;
          DataEtlStatus(DataEtlStatus &&) = default ;
          DataEtlStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataEtlStatus() = default ;
          DataEtlStatus& operator=(const DataEtlStatus &) = default ;
          DataEtlStatus& operator=(DataEtlStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline DataEtlStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // needUpgrade Field Functions 
          bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
          void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
          inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
          inline DataEtlStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
          inline DataEtlStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // progress Field Functions 
          bool hasProgress() const { return this->progress_ != nullptr;};
          void deleteProgress() { this->progress_ = nullptr;};
          inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
          inline DataEtlStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DataEtlStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The error message returned if the task failed.
          shared_ptr<string> errorMessage_ {};
          // Indicates whether the instance class needs to be upgraded. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> needUpgrade_ {};
          // The progress of full data migration or initial full data synchronization. Unit: percentage.
          shared_ptr<string> percent_ {};
          // The number of entries that are migrated or synchronized during full data migration or initial full data synchronization.
          shared_ptr<string> progress_ {};
          // The state of the ETL task. Valid values:
          // 
          // *   **NotStarted**: The task is not started.
          // *   **Migrating**: The task is in progress.
          // *   **Failed**: The task failed.
          // *   **Finished**: The task is complete.
          // *   **Catched**: The task has no latency.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->appName_ == nullptr
        && this->beginTimestamp_ == nullptr && this->checkpoint_ == nullptr && this->consumptionCheckpoint_ == nullptr && this->consumptionClient_ == nullptr && this->createTime_ == nullptr
        && this->dataEtlStatus_ == nullptr && this->dataInitializationStatus_ == nullptr && this->dataSynchronizationStatus_ == nullptr && this->databaseCount_ == nullptr && this->dbObject_ == nullptr
        && this->delay_ == nullptr && this->destNetType_ == nullptr && this->destinationEndpoint_ == nullptr && this->dtsInstanceID_ == nullptr && this->dtsJobClass_ == nullptr
        && this->dtsJobDirection_ == nullptr && this->dtsJobId_ == nullptr && this->dtsJobName_ == nullptr && this->endTimestamp_ == nullptr && this->errorMessage_ == nullptr
        && this->etlCalculator_ == nullptr && this->expireTime_ == nullptr && this->finishTime_ == nullptr && this->groupId_ == nullptr && this->isDemoJob_ == nullptr
        && this->jobType_ == nullptr && this->maxDu_ == nullptr && this->migrationMode_ == nullptr && this->minDu_ == nullptr && this->originType_ == nullptr
        && this->payType_ == nullptr && this->performance_ == nullptr && this->precheckStatus_ == nullptr && this->reserved_ == nullptr && this->retryState_ == nullptr
        && this->reverseJob_ == nullptr && this->sourceEndpoint_ == nullptr && this->status_ == nullptr && this->structureInitializationStatus_ == nullptr && this->subscribeTopic_ == nullptr
        && this->subscriptionDataType_ == nullptr && this->subscriptionHost_ == nullptr && this->synchronizationDirection_ == nullptr && this->tagList_ == nullptr && this->taskType_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline ReverseJob& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // beginTimestamp Field Functions 
        bool hasBeginTimestamp() const { return this->beginTimestamp_ != nullptr;};
        void deleteBeginTimestamp() { this->beginTimestamp_ = nullptr;};
        inline string getBeginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(beginTimestamp_, "") };
        inline ReverseJob& setBeginTimestamp(string beginTimestamp) { DARABONBA_PTR_SET_VALUE(beginTimestamp_, beginTimestamp) };


        // checkpoint Field Functions 
        bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
        void deleteCheckpoint() { this->checkpoint_ = nullptr;};
        inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
        inline ReverseJob& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


        // consumptionCheckpoint Field Functions 
        bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
        void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
        inline string getConsumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
        inline ReverseJob& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


        // consumptionClient Field Functions 
        bool hasConsumptionClient() const { return this->consumptionClient_ != nullptr;};
        void deleteConsumptionClient() { this->consumptionClient_ = nullptr;};
        inline string getConsumptionClient() const { DARABONBA_PTR_GET_DEFAULT(consumptionClient_, "") };
        inline ReverseJob& setConsumptionClient(string consumptionClient) { DARABONBA_PTR_SET_VALUE(consumptionClient_, consumptionClient) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ReverseJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataEtlStatus Field Functions 
        bool hasDataEtlStatus() const { return this->dataEtlStatus_ != nullptr;};
        void deleteDataEtlStatus() { this->dataEtlStatus_ = nullptr;};
        inline const ReverseJob::DataEtlStatus & getDataEtlStatus() const { DARABONBA_PTR_GET_CONST(dataEtlStatus_, ReverseJob::DataEtlStatus) };
        inline ReverseJob::DataEtlStatus getDataEtlStatus() { DARABONBA_PTR_GET(dataEtlStatus_, ReverseJob::DataEtlStatus) };
        inline ReverseJob& setDataEtlStatus(const ReverseJob::DataEtlStatus & dataEtlStatus) { DARABONBA_PTR_SET_VALUE(dataEtlStatus_, dataEtlStatus) };
        inline ReverseJob& setDataEtlStatus(ReverseJob::DataEtlStatus && dataEtlStatus) { DARABONBA_PTR_SET_RVALUE(dataEtlStatus_, dataEtlStatus) };


        // dataInitializationStatus Field Functions 
        bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
        void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
        inline const ReverseJob::DataInitializationStatus & getDataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, ReverseJob::DataInitializationStatus) };
        inline ReverseJob::DataInitializationStatus getDataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, ReverseJob::DataInitializationStatus) };
        inline ReverseJob& setDataInitializationStatus(const ReverseJob::DataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
        inline ReverseJob& setDataInitializationStatus(ReverseJob::DataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


        // dataSynchronizationStatus Field Functions 
        bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
        void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
        inline const ReverseJob::DataSynchronizationStatus & getDataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, ReverseJob::DataSynchronizationStatus) };
        inline ReverseJob::DataSynchronizationStatus getDataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, ReverseJob::DataSynchronizationStatus) };
        inline ReverseJob& setDataSynchronizationStatus(const ReverseJob::DataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
        inline ReverseJob& setDataSynchronizationStatus(ReverseJob::DataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


        // databaseCount Field Functions 
        bool hasDatabaseCount() const { return this->databaseCount_ != nullptr;};
        void deleteDatabaseCount() { this->databaseCount_ = nullptr;};
        inline int32_t getDatabaseCount() const { DARABONBA_PTR_GET_DEFAULT(databaseCount_, 0) };
        inline ReverseJob& setDatabaseCount(int32_t databaseCount) { DARABONBA_PTR_SET_VALUE(databaseCount_, databaseCount) };


        // dbObject Field Functions 
        bool hasDbObject() const { return this->dbObject_ != nullptr;};
        void deleteDbObject() { this->dbObject_ = nullptr;};
        inline string getDbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
        inline ReverseJob& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


        // delay Field Functions 
        bool hasDelay() const { return this->delay_ != nullptr;};
        void deleteDelay() { this->delay_ = nullptr;};
        inline int64_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
        inline ReverseJob& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


        // destNetType Field Functions 
        bool hasDestNetType() const { return this->destNetType_ != nullptr;};
        void deleteDestNetType() { this->destNetType_ = nullptr;};
        inline string getDestNetType() const { DARABONBA_PTR_GET_DEFAULT(destNetType_, "") };
        inline ReverseJob& setDestNetType(string destNetType) { DARABONBA_PTR_SET_VALUE(destNetType_, destNetType) };


        // destinationEndpoint Field Functions 
        bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
        void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
        inline const ReverseJob::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, ReverseJob::DestinationEndpoint) };
        inline ReverseJob::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, ReverseJob::DestinationEndpoint) };
        inline ReverseJob& setDestinationEndpoint(const ReverseJob::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
        inline ReverseJob& setDestinationEndpoint(ReverseJob::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


        // dtsInstanceID Field Functions 
        bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
        void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
        inline string getDtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
        inline ReverseJob& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


        // dtsJobClass Field Functions 
        bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
        void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
        inline string getDtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
        inline ReverseJob& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


        // dtsJobDirection Field Functions 
        bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
        void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
        inline string getDtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
        inline ReverseJob& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


        // dtsJobId Field Functions 
        bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
        void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
        inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
        inline ReverseJob& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


        // dtsJobName Field Functions 
        bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
        void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
        inline string getDtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
        inline ReverseJob& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


        // endTimestamp Field Functions 
        bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
        void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
        inline string getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
        inline ReverseJob& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline ReverseJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // etlCalculator Field Functions 
        bool hasEtlCalculator() const { return this->etlCalculator_ != nullptr;};
        void deleteEtlCalculator() { this->etlCalculator_ = nullptr;};
        inline string getEtlCalculator() const { DARABONBA_PTR_GET_DEFAULT(etlCalculator_, "") };
        inline ReverseJob& setEtlCalculator(string etlCalculator) { DARABONBA_PTR_SET_VALUE(etlCalculator_, etlCalculator) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline ReverseJob& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline ReverseJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ReverseJob& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // isDemoJob Field Functions 
        bool hasIsDemoJob() const { return this->isDemoJob_ != nullptr;};
        void deleteIsDemoJob() { this->isDemoJob_ = nullptr;};
        inline bool getIsDemoJob() const { DARABONBA_PTR_GET_DEFAULT(isDemoJob_, false) };
        inline ReverseJob& setIsDemoJob(bool isDemoJob) { DARABONBA_PTR_SET_VALUE(isDemoJob_, isDemoJob) };


        // jobType Field Functions 
        bool hasJobType() const { return this->jobType_ != nullptr;};
        void deleteJobType() { this->jobType_ = nullptr;};
        inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
        inline ReverseJob& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


        // maxDu Field Functions 
        bool hasMaxDu() const { return this->maxDu_ != nullptr;};
        void deleteMaxDu() { this->maxDu_ = nullptr;};
        inline double getMaxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0.0) };
        inline ReverseJob& setMaxDu(double maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


        // migrationMode Field Functions 
        bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
        void deleteMigrationMode() { this->migrationMode_ = nullptr;};
        inline const ReverseJob::MigrationMode & getMigrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, ReverseJob::MigrationMode) };
        inline ReverseJob::MigrationMode getMigrationMode() { DARABONBA_PTR_GET(migrationMode_, ReverseJob::MigrationMode) };
        inline ReverseJob& setMigrationMode(const ReverseJob::MigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
        inline ReverseJob& setMigrationMode(ReverseJob::MigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


        // minDu Field Functions 
        bool hasMinDu() const { return this->minDu_ != nullptr;};
        void deleteMinDu() { this->minDu_ = nullptr;};
        inline double getMinDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0.0) };
        inline ReverseJob& setMinDu(double minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


        // originType Field Functions 
        bool hasOriginType() const { return this->originType_ != nullptr;};
        void deleteOriginType() { this->originType_ = nullptr;};
        inline string getOriginType() const { DARABONBA_PTR_GET_DEFAULT(originType_, "") };
        inline ReverseJob& setOriginType(string originType) { DARABONBA_PTR_SET_VALUE(originType_, originType) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline ReverseJob& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // performance Field Functions 
        bool hasPerformance() const { return this->performance_ != nullptr;};
        void deletePerformance() { this->performance_ = nullptr;};
        inline const ReverseJob::Performance & getPerformance() const { DARABONBA_PTR_GET_CONST(performance_, ReverseJob::Performance) };
        inline ReverseJob::Performance getPerformance() { DARABONBA_PTR_GET(performance_, ReverseJob::Performance) };
        inline ReverseJob& setPerformance(const ReverseJob::Performance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
        inline ReverseJob& setPerformance(ReverseJob::Performance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


        // precheckStatus Field Functions 
        bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
        void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
        inline const ReverseJob::PrecheckStatus & getPrecheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, ReverseJob::PrecheckStatus) };
        inline ReverseJob::PrecheckStatus getPrecheckStatus() { DARABONBA_PTR_GET(precheckStatus_, ReverseJob::PrecheckStatus) };
        inline ReverseJob& setPrecheckStatus(const ReverseJob::PrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
        inline ReverseJob& setPrecheckStatus(ReverseJob::PrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


        // reserved Field Functions 
        bool hasReserved() const { return this->reserved_ != nullptr;};
        void deleteReserved() { this->reserved_ = nullptr;};
        inline string getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
        inline ReverseJob& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


        // retryState Field Functions 
        bool hasRetryState() const { return this->retryState_ != nullptr;};
        void deleteRetryState() { this->retryState_ = nullptr;};
        inline const ReverseJob::RetryState & getRetryState() const { DARABONBA_PTR_GET_CONST(retryState_, ReverseJob::RetryState) };
        inline ReverseJob::RetryState getRetryState() { DARABONBA_PTR_GET(retryState_, ReverseJob::RetryState) };
        inline ReverseJob& setRetryState(const ReverseJob::RetryState & retryState) { DARABONBA_PTR_SET_VALUE(retryState_, retryState) };
        inline ReverseJob& setRetryState(ReverseJob::RetryState && retryState) { DARABONBA_PTR_SET_RVALUE(retryState_, retryState) };


        // reverseJob Field Functions 
        bool hasReverseJob() const { return this->reverseJob_ != nullptr;};
        void deleteReverseJob() { this->reverseJob_ = nullptr;};
        inline         const Darabonba::Json & getReverseJob() const { DARABONBA_GET(reverseJob_) };
        Darabonba::Json & getReverseJob() { DARABONBA_GET(reverseJob_) };
        inline ReverseJob& setReverseJob(const Darabonba::Json & reverseJob) { DARABONBA_SET_VALUE(reverseJob_, reverseJob) };
        inline ReverseJob& setReverseJob(Darabonba::Json && reverseJob) { DARABONBA_SET_RVALUE(reverseJob_, reverseJob) };


        // sourceEndpoint Field Functions 
        bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
        void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
        inline const ReverseJob::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, ReverseJob::SourceEndpoint) };
        inline ReverseJob::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, ReverseJob::SourceEndpoint) };
        inline ReverseJob& setSourceEndpoint(const ReverseJob::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
        inline ReverseJob& setSourceEndpoint(ReverseJob::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ReverseJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // structureInitializationStatus Field Functions 
        bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
        void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
        inline const ReverseJob::StructureInitializationStatus & getStructureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, ReverseJob::StructureInitializationStatus) };
        inline ReverseJob::StructureInitializationStatus getStructureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, ReverseJob::StructureInitializationStatus) };
        inline ReverseJob& setStructureInitializationStatus(const ReverseJob::StructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
        inline ReverseJob& setStructureInitializationStatus(ReverseJob::StructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


        // subscribeTopic Field Functions 
        bool hasSubscribeTopic() const { return this->subscribeTopic_ != nullptr;};
        void deleteSubscribeTopic() { this->subscribeTopic_ = nullptr;};
        inline string getSubscribeTopic() const { DARABONBA_PTR_GET_DEFAULT(subscribeTopic_, "") };
        inline ReverseJob& setSubscribeTopic(string subscribeTopic) { DARABONBA_PTR_SET_VALUE(subscribeTopic_, subscribeTopic) };


        // subscriptionDataType Field Functions 
        bool hasSubscriptionDataType() const { return this->subscriptionDataType_ != nullptr;};
        void deleteSubscriptionDataType() { this->subscriptionDataType_ = nullptr;};
        inline const ReverseJob::SubscriptionDataType & getSubscriptionDataType() const { DARABONBA_PTR_GET_CONST(subscriptionDataType_, ReverseJob::SubscriptionDataType) };
        inline ReverseJob::SubscriptionDataType getSubscriptionDataType() { DARABONBA_PTR_GET(subscriptionDataType_, ReverseJob::SubscriptionDataType) };
        inline ReverseJob& setSubscriptionDataType(const ReverseJob::SubscriptionDataType & subscriptionDataType) { DARABONBA_PTR_SET_VALUE(subscriptionDataType_, subscriptionDataType) };
        inline ReverseJob& setSubscriptionDataType(ReverseJob::SubscriptionDataType && subscriptionDataType) { DARABONBA_PTR_SET_RVALUE(subscriptionDataType_, subscriptionDataType) };


        // subscriptionHost Field Functions 
        bool hasSubscriptionHost() const { return this->subscriptionHost_ != nullptr;};
        void deleteSubscriptionHost() { this->subscriptionHost_ = nullptr;};
        inline const ReverseJob::SubscriptionHost & getSubscriptionHost() const { DARABONBA_PTR_GET_CONST(subscriptionHost_, ReverseJob::SubscriptionHost) };
        inline ReverseJob::SubscriptionHost getSubscriptionHost() { DARABONBA_PTR_GET(subscriptionHost_, ReverseJob::SubscriptionHost) };
        inline ReverseJob& setSubscriptionHost(const ReverseJob::SubscriptionHost & subscriptionHost) { DARABONBA_PTR_SET_VALUE(subscriptionHost_, subscriptionHost) };
        inline ReverseJob& setSubscriptionHost(ReverseJob::SubscriptionHost && subscriptionHost) { DARABONBA_PTR_SET_RVALUE(subscriptionHost_, subscriptionHost) };


        // synchronizationDirection Field Functions 
        bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
        void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
        inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
        inline ReverseJob& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


        // tagList Field Functions 
        bool hasTagList() const { return this->tagList_ != nullptr;};
        void deleteTagList() { this->tagList_ = nullptr;};
        inline const vector<ReverseJob::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<ReverseJob::TagList>) };
        inline vector<ReverseJob::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<ReverseJob::TagList>) };
        inline ReverseJob& setTagList(const vector<ReverseJob::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
        inline ReverseJob& setTagList(vector<ReverseJob::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline ReverseJob& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      protected:
        // Indicates whether the new change tracking feature is used.
        // 
        // > This parameter is returned only for change tracking instances of the new version.
        shared_ptr<string> appName_ {};
        // The start of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> beginTimestamp_ {};
        // The start offset of incremental data migration or data synchronization. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<string> checkpoint_ {};
        // The consumption checkpoint of the change tracking instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> consumptionCheckpoint_ {};
        // The downstream client information in the following format: \\<IP address of the downstream client>:\\<Random ID generated by DTS>.
        shared_ptr<string> consumptionClient_ {};
        // The time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The state of the ETL task.
        // 
        // > This parameter collection is returned only if an ETL task is configured.
        shared_ptr<ReverseJob::DataEtlStatus> dataEtlStatus_ {};
        // The state of full data migration or initial full data synchronization.
        shared_ptr<ReverseJob::DataInitializationStatus> dataInitializationStatus_ {};
        // The state of incremental data migration or synchronization.
        shared_ptr<ReverseJob::DataSynchronizationStatus> dataSynchronizationStatus_ {};
        // The number of ApsaraDB RDS for MySQL instances that are attached to the source PolarDB-X 1.0 instance.
        shared_ptr<int32_t> databaseCount_ {};
        // The objects of the data migration, data synchronization, or change tracking task. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
        shared_ptr<string> dbObject_ {};
        // The latency of incremental data migration or synchronization. Unit: milliseconds.
        shared_ptr<int64_t> delay_ {};
        // The network type of the consumer client. Valid values:
        // 
        // *   **CLASSIC**: classic network.
        // *   **VPC**: VPC.
        shared_ptr<string> destNetType_ {};
        // The connection settings of the destination instance.
        shared_ptr<ReverseJob::DestinationEndpoint> destinationEndpoint_ {};
        // The DTS instance ID.
        shared_ptr<string> dtsInstanceID_ {};
        // The instance class.
        shared_ptr<string> dtsJobClass_ {};
        // The synchronization direction. Valid values:
        // 
        // *   **Forward**
        // *   **Reverse**
        // 
        // > This parameter is returned only if the topology of the data synchronization instance is two-way synchronization.
        shared_ptr<string> dtsJobDirection_ {};
        // The DTS task ID.
        shared_ptr<string> dtsJobId_ {};
        // The DTS instance name.
        shared_ptr<string> dtsJobName_ {};
        // The end of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> endTimestamp_ {};
        // The error message returned if the task failed.
        shared_ptr<string> errorMessage_ {};
        // The operator information of the ETL task.
        // 
        // > This parameter is returned only if you query the details of an ETL task.
        shared_ptr<string> etlCalculator_ {};
        // The time when the instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        // 
        // > This parameter is returned only if the return value of **PayType** is **PrePaid**.
        shared_ptr<string> expireTime_ {};
        // The time when the task was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> finishTime_ {};
        // The resource group ID.
        shared_ptr<string> groupId_ {};
        // Indicates whether the task is a subtask. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> isDemoJob_ {};
        // The type of the DTS task. Valid values:
        // 
        // *   **online**: data migration task.
        // *   **SYNC**: data synchronization task.
        // *   **SUBSCRIBE**: change tracking task.
        shared_ptr<string> jobType_ {};
        // The maximum number of DUs.
        // 
        // > This parameter is supported only for serverless instances.
        shared_ptr<double> maxDu_ {};
        // The migration types or initial synchronization types.
        shared_ptr<ReverseJob::MigrationMode> migrationMode_ {};
        // The minimum number of DTS Units (DUs).
        // 
        // > This parameter is supported only for serverless instances.
        shared_ptr<double> minDu_ {};
        // The source of the task. Valid values:
        // 
        // *   **PTS**
        // *   **DMS**
        // *   **DTS**
        shared_ptr<string> originType_ {};
        // The billing method. Valid values:
        // 
        // *   **PrePaid**: subscription.
        // *   **PostPaid**: pay-as-you-go.
        shared_ptr<string> payType_ {};
        // The performance of the data migration or synchronization instance.
        shared_ptr<ReverseJob::Performance> performance_ {};
        // The precheck state.
        shared_ptr<ReverseJob::PrecheckStatus> precheckStatus_ {};
        // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, such as whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
        shared_ptr<string> reserved_ {};
        // The information about the retries performed by DTS due to an exception.
        shared_ptr<ReverseJob::RetryState> retryState_ {};
        // The details of the data synchronization task in the reverse direction.
        // 
        // > This parameter is returned only for two-way data synchronization tasks.
        Darabonba::Json reverseJob_ {};
        // The connection settings of the source instance.
        shared_ptr<ReverseJob::SourceEndpoint> sourceEndpoint_ {};
        // The state of initial schema synchronization. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Migrating**: The task is in progress.
        // *   **Failed**: The task failed.
        // *   **Finished**: The task is complete.
        shared_ptr<string> status_ {};
        // Initialization status of library table structure.
        shared_ptr<ReverseJob::StructureInitializationStatus> structureInitializationStatus_ {};
        // The topic of the change tracking instance.
        // 
        // > This parameter is returned only if your change tracking instances are of the new version and you have called the [CreateConsumerGroup](https://help.aliyun.com/document_detail/122863.html) operation to create a consumer group.
        shared_ptr<string> subscribeTopic_ {};
        // The type of data for change tracking.
        shared_ptr<ReverseJob::SubscriptionDataType> subscriptionDataType_ {};
        // The endpoint of the change tracking instance.
        shared_ptr<ReverseJob::SubscriptionHost> subscriptionHost_ {};
        // The synchronization direction. Valid values:
        // 
        // *   **Forward**
        // *   **Reverse**
        // 
        // > 
        // 
        // *   The default value is **Forward**.
        // *   The value **Reverse** takes effect only if the topology of the data synchronization instance is two-way synchronization.
        shared_ptr<string> synchronizationDirection_ {};
        // The tags of the task.
        shared_ptr<vector<ReverseJob::TagList>> tagList_ {};
        // The task type.
        shared_ptr<string> taskType_ {};
      };

      class RetryState : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RetryState& obj) { 
          DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(MaxRetryTime, maxRetryTime_);
          DARABONBA_PTR_TO_JSON(Module, module_);
          DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
          DARABONBA_PTR_TO_JSON(RetryTarget, retryTarget_);
          DARABONBA_PTR_TO_JSON(RetryTime, retryTime_);
          DARABONBA_PTR_TO_JSON(Retrying, retrying_);
        };
        friend void from_json(const Darabonba::Json& j, RetryState& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(MaxRetryTime, maxRetryTime_);
          DARABONBA_PTR_FROM_JSON(Module, module_);
          DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
          DARABONBA_PTR_FROM_JSON(RetryTarget, retryTarget_);
          DARABONBA_PTR_FROM_JSON(RetryTime, retryTime_);
          DARABONBA_PTR_FROM_JSON(Retrying, retrying_);
        };
        RetryState() = default ;
        RetryState(const RetryState &) = default ;
        RetryState(RetryState &&) = default ;
        RetryState(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RetryState() = default ;
        RetryState& operator=(const RetryState &) = default ;
        RetryState& operator=(RetryState &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errMsg_ == nullptr
        && this->jobId_ == nullptr && this->maxRetryTime_ == nullptr && this->module_ == nullptr && this->retryCount_ == nullptr && this->retryTarget_ == nullptr
        && this->retryTime_ == nullptr && this->retrying_ == nullptr; };
        // errMsg Field Functions 
        bool hasErrMsg() const { return this->errMsg_ != nullptr;};
        void deleteErrMsg() { this->errMsg_ = nullptr;};
        inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
        inline RetryState& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline RetryState& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // maxRetryTime Field Functions 
        bool hasMaxRetryTime() const { return this->maxRetryTime_ != nullptr;};
        void deleteMaxRetryTime() { this->maxRetryTime_ = nullptr;};
        inline int32_t getMaxRetryTime() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTime_, 0) };
        inline RetryState& setMaxRetryTime(int32_t maxRetryTime) { DARABONBA_PTR_SET_VALUE(maxRetryTime_, maxRetryTime) };


        // module Field Functions 
        bool hasModule() const { return this->module_ != nullptr;};
        void deleteModule() { this->module_ = nullptr;};
        inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
        inline RetryState& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


        // retryCount Field Functions 
        bool hasRetryCount() const { return this->retryCount_ != nullptr;};
        void deleteRetryCount() { this->retryCount_ = nullptr;};
        inline int32_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
        inline RetryState& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


        // retryTarget Field Functions 
        bool hasRetryTarget() const { return this->retryTarget_ != nullptr;};
        void deleteRetryTarget() { this->retryTarget_ = nullptr;};
        inline string getRetryTarget() const { DARABONBA_PTR_GET_DEFAULT(retryTarget_, "") };
        inline RetryState& setRetryTarget(string retryTarget) { DARABONBA_PTR_SET_VALUE(retryTarget_, retryTarget) };


        // retryTime Field Functions 
        bool hasRetryTime() const { return this->retryTime_ != nullptr;};
        void deleteRetryTime() { this->retryTime_ = nullptr;};
        inline int32_t getRetryTime() const { DARABONBA_PTR_GET_DEFAULT(retryTime_, 0) };
        inline RetryState& setRetryTime(int32_t retryTime) { DARABONBA_PTR_SET_VALUE(retryTime_, retryTime) };


        // retrying Field Functions 
        bool hasRetrying() const { return this->retrying_ != nullptr;};
        void deleteRetrying() { this->retrying_ = nullptr;};
        inline bool getRetrying() const { DARABONBA_PTR_GET_DEFAULT(retrying_, false) };
        inline RetryState& setRetrying(bool retrying) { DARABONBA_PTR_SET_VALUE(retrying_, retrying) };


      protected:
        // The error message returned.
        shared_ptr<string> errMsg_ {};
        // The task ID.
        shared_ptr<string> jobId_ {};
        // The maximum duration of a retry. Unit: seconds.
        shared_ptr<int32_t> maxRetryTime_ {};
        // The progress of the instance when DTS performs retries.
        shared_ptr<string> module_ {};
        // The number of retries.
        shared_ptr<int32_t> retryCount_ {};
        // The object on which the retries are performed. Valid values:
        // 
        // *   **srcDB**: the source database.
        // *   **destDB**: the destination database.
        // *   **inner_module**: an internal module of DTS.
        shared_ptr<string> retryTarget_ {};
        // The time that has elapsed from the point in time when the first retry starts. Unit: seconds.
        shared_ptr<int32_t> retryTime_ {};
        // Indicates whether the task is being retried. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> retrying_ {};
      };

      class PrecheckStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrecheckStatus& obj) { 
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PrecheckStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PrecheckStatus() = default ;
        PrecheckStatus(const PrecheckStatus &) = default ;
        PrecheckStatus(PrecheckStatus &&) = default ;
        PrecheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrecheckStatus() = default ;
        PrecheckStatus& operator=(const PrecheckStatus &) = default ;
        PrecheckStatus& operator=(PrecheckStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Detail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Detail& obj) { 
            DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
            DARABONBA_PTR_TO_JSON(CheckItemDescription, checkItemDescription_);
            DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
            DARABONBA_PTR_TO_JSON(FailedReason, failedReason_);
            DARABONBA_PTR_TO_JSON(RepairMethod, repairMethod_);
          };
          friend void from_json(const Darabonba::Json& j, Detail& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
            DARABONBA_PTR_FROM_JSON(CheckItemDescription, checkItemDescription_);
            DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
            DARABONBA_PTR_FROM_JSON(FailedReason, failedReason_);
            DARABONBA_PTR_FROM_JSON(RepairMethod, repairMethod_);
          };
          Detail() = default ;
          Detail(const Detail &) = default ;
          Detail(Detail &&) = default ;
          Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Detail() = default ;
          Detail& operator=(const Detail &) = default ;
          Detail& operator=(Detail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checkItem_ == nullptr
        && this->checkItemDescription_ == nullptr && this->checkResult_ == nullptr && this->failedReason_ == nullptr && this->repairMethod_ == nullptr; };
          // checkItem Field Functions 
          bool hasCheckItem() const { return this->checkItem_ != nullptr;};
          void deleteCheckItem() { this->checkItem_ = nullptr;};
          inline string getCheckItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
          inline Detail& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


          // checkItemDescription Field Functions 
          bool hasCheckItemDescription() const { return this->checkItemDescription_ != nullptr;};
          void deleteCheckItemDescription() { this->checkItemDescription_ = nullptr;};
          inline string getCheckItemDescription() const { DARABONBA_PTR_GET_DEFAULT(checkItemDescription_, "") };
          inline Detail& setCheckItemDescription(string checkItemDescription) { DARABONBA_PTR_SET_VALUE(checkItemDescription_, checkItemDescription) };


          // checkResult Field Functions 
          bool hasCheckResult() const { return this->checkResult_ != nullptr;};
          void deleteCheckResult() { this->checkResult_ = nullptr;};
          inline string getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, "") };
          inline Detail& setCheckResult(string checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


          // failedReason Field Functions 
          bool hasFailedReason() const { return this->failedReason_ != nullptr;};
          void deleteFailedReason() { this->failedReason_ = nullptr;};
          inline string getFailedReason() const { DARABONBA_PTR_GET_DEFAULT(failedReason_, "") };
          inline Detail& setFailedReason(string failedReason) { DARABONBA_PTR_SET_VALUE(failedReason_, failedReason) };


          // repairMethod Field Functions 
          bool hasRepairMethod() const { return this->repairMethod_ != nullptr;};
          void deleteRepairMethod() { this->repairMethod_ = nullptr;};
          inline string getRepairMethod() const { DARABONBA_PTR_GET_DEFAULT(repairMethod_, "") };
          inline Detail& setRepairMethod(string repairMethod) { DARABONBA_PTR_SET_VALUE(repairMethod_, repairMethod) };


        protected:
          // The name of the precheck item.
          shared_ptr<string> checkItem_ {};
          // The description of the precheck item.
          shared_ptr<string> checkItemDescription_ {};
          // The precheck result. Valid values:
          // 
          // *   **Success**
          // *   **Failed**
          shared_ptr<string> checkResult_ {};
          // The error message returned if the task failed to pass the precheck.
          // 
          // > This parameter is returned only if the return value of **CheckResult** is **Failed**.
          shared_ptr<string> failedReason_ {};
          // The method used to fix the precheck failure.
          // 
          // > This parameter is returned only if the return value of **CheckResult** is **Failed**.
          shared_ptr<string> repairMethod_ {};
        };

        virtual bool empty() const override { return this->detail_ == nullptr
        && this->errorMessage_ == nullptr && this->percent_ == nullptr && this->status_ == nullptr; };
        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline const vector<PrecheckStatus::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<PrecheckStatus::Detail>) };
        inline vector<PrecheckStatus::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<PrecheckStatus::Detail>) };
        inline PrecheckStatus& setDetail(const vector<PrecheckStatus::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
        inline PrecheckStatus& setDetail(vector<PrecheckStatus::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline PrecheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline PrecheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PrecheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The result of each precheck item.
        shared_ptr<vector<PrecheckStatus::Detail>> detail_ {};
        // The error message returned if the task failed.
        shared_ptr<string> errorMessage_ {};
        // The precheck progress. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The precheck state. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Prechecking**: The task is in precheck.
        // *   **PrecheckFailed**: The task failed to pass the precheck.
        // *   **Finished**: The task is complete.
        shared_ptr<string> status_ {};
      };

      class Performance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Performance& obj) { 
          DARABONBA_PTR_TO_JSON(Flow, flow_);
          DARABONBA_PTR_TO_JSON(Rps, rps_);
        };
        friend void from_json(const Darabonba::Json& j, Performance& obj) { 
          DARABONBA_PTR_FROM_JSON(Flow, flow_);
          DARABONBA_PTR_FROM_JSON(Rps, rps_);
        };
        Performance() = default ;
        Performance(const Performance &) = default ;
        Performance(Performance &&) = default ;
        Performance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Performance() = default ;
        Performance& operator=(const Performance &) = default ;
        Performance& operator=(Performance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flow_ == nullptr
        && this->rps_ == nullptr; };
        // flow Field Functions 
        bool hasFlow() const { return this->flow_ != nullptr;};
        void deleteFlow() { this->flow_ = nullptr;};
        inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
        inline Performance& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


        // rps Field Functions 
        bool hasRps() const { return this->rps_ != nullptr;};
        void deleteRps() { this->rps_ = nullptr;};
        inline string getRps() const { DARABONBA_PTR_GET_DEFAULT(rps_, "") };
        inline Performance& setRps(string rps) { DARABONBA_PTR_SET_VALUE(rps_, rps) };


      protected:
        // The size of data that is migrated or synchronized per second. Unit: Mbit/s.
        shared_ptr<string> flow_ {};
        // The number of times that SQL statements are migrated or synchronized per second, including BEGIN, COMMIT, DML, and DDL statements. DML statements include INSERT, DELETE, and UPDATE.
        shared_ptr<string> rps_ {};
      };

      class MigrationMode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MigrationMode& obj) { 
          DARABONBA_PTR_TO_JSON(DataExtractTransformLoad, dataExtractTransformLoad_);
          DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
          DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
          DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
        };
        friend void from_json(const Darabonba::Json& j, MigrationMode& obj) { 
          DARABONBA_PTR_FROM_JSON(DataExtractTransformLoad, dataExtractTransformLoad_);
          DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
          DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
          DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
        };
        MigrationMode() = default ;
        MigrationMode(const MigrationMode &) = default ;
        MigrationMode(MigrationMode &&) = default ;
        MigrationMode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MigrationMode() = default ;
        MigrationMode& operator=(const MigrationMode &) = default ;
        MigrationMode& operator=(MigrationMode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataExtractTransformLoad_ == nullptr
        && this->dataInitialization_ == nullptr && this->dataSynchronization_ == nullptr && this->structureInitialization_ == nullptr; };
        // dataExtractTransformLoad Field Functions 
        bool hasDataExtractTransformLoad() const { return this->dataExtractTransformLoad_ != nullptr;};
        void deleteDataExtractTransformLoad() { this->dataExtractTransformLoad_ = nullptr;};
        inline bool getDataExtractTransformLoad() const { DARABONBA_PTR_GET_DEFAULT(dataExtractTransformLoad_, false) };
        inline MigrationMode& setDataExtractTransformLoad(bool dataExtractTransformLoad) { DARABONBA_PTR_SET_VALUE(dataExtractTransformLoad_, dataExtractTransformLoad) };


        // dataInitialization Field Functions 
        bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
        void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
        inline bool getDataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
        inline MigrationMode& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


        // dataSynchronization Field Functions 
        bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
        void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
        inline bool getDataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
        inline MigrationMode& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


        // structureInitialization Field Functions 
        bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
        void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
        inline bool getStructureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
        inline MigrationMode& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


      protected:
        // Indicates whether data transformation is performed. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> dataExtractTransformLoad_ {};
        // Indicates whether full data migration or initial full data synchronization is performed. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> dataInitialization_ {};
        // Indicates whether incremental data migration or synchronization is performed. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> dataSynchronization_ {};
        // Indicates whether schema migration or initial schema synchronization is performed. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> structureInitialization_ {};
      };

      class DestinationEndpoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DestinationEndpoint& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(EngineName, engineName_);
          DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
          DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
          DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
          DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        DestinationEndpoint() = default ;
        DestinationEndpoint(const DestinationEndpoint &) = default ;
        DestinationEndpoint(DestinationEndpoint &&) = default ;
        DestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DestinationEndpoint() = default ;
        DestinationEndpoint& operator=(const DestinationEndpoint &) = default ;
        DestinationEndpoint& operator=(DestinationEndpoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->databaseName_ == nullptr && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr && this->ip_ == nullptr
        && this->oracleSID_ == nullptr && this->port_ == nullptr && this->region_ == nullptr && this->roleName_ == nullptr && this->sslSolutionEnum_ == nullptr
        && this->userName_ == nullptr; };
        // aliyunUid Field Functions 
        bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
        void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
        inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
        inline DestinationEndpoint& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline DestinationEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // engineName Field Functions 
        bool hasEngineName() const { return this->engineName_ != nullptr;};
        void deleteEngineName() { this->engineName_ = nullptr;};
        inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
        inline DestinationEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


        // instanceID Field Functions 
        bool hasInstanceID() const { return this->instanceID_ != nullptr;};
        void deleteInstanceID() { this->instanceID_ = nullptr;};
        inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
        inline DestinationEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline DestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline DestinationEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // oracleSID Field Functions 
        bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
        void deleteOracleSID() { this->oracleSID_ = nullptr;};
        inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
        inline DestinationEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline DestinationEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline DestinationEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline DestinationEndpoint& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


        // sslSolutionEnum Field Functions 
        bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
        void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
        inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
        inline DestinationEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline DestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The ID of the Alibaba Cloud account to which the destination instance belongs.
        shared_ptr<string> aliyunUid_ {};
        // The name of the database to which the objects are migrated in the destination instance.
        shared_ptr<string> databaseName_ {};
        // The database engine of the destination instance.
        shared_ptr<string> engineName_ {};
        // The destination instance ID.
        shared_ptr<string> instanceID_ {};
        // The type of the destination instance.
        shared_ptr<string> instanceType_ {};
        // The endpoint of the destination instance.
        shared_ptr<string> ip_ {};
        // The SID of the Oracle database.
        // 
        // > This parameter is returned only if the return value of **EngineName** of the destination instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
        shared_ptr<string> oracleSID_ {};
        // The database service port of the destination instance.
        shared_ptr<string> port_ {};
        // The ID of the region in which the destination instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
        shared_ptr<string> region_ {};
        // The name of the RAM role configured for the Alibaba Cloud account to which the destination instance belongs.
        shared_ptr<string> roleName_ {};
        // Indicates whether SSL encryption is enabled. Valid values:
        // 
        // *   **DISABLE**: SSL encryption is disabled.
        // *   **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded.
        // *   **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection to an AWS MongoDB Altas database.
        // *   **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection to a Kafka cluster.
        shared_ptr<string> sslSolutionEnum_ {};
        // The database account of the destination instance.
        shared_ptr<string> userName_ {};
      };

      class DataSynchronizationStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSynchronizationStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataSynchronizationStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataSynchronizationStatus() = default ;
        DataSynchronizationStatus(const DataSynchronizationStatus &) = default ;
        DataSynchronizationStatus(DataSynchronizationStatus &&) = default ;
        DataSynchronizationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSynchronizationStatus() = default ;
        DataSynchronizationStatus& operator=(const DataSynchronizationStatus &) = default ;
        DataSynchronizationStatus& operator=(DataSynchronizationStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataSynchronizationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // needUpgrade Field Functions 
        bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
        void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
        inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
        inline DataSynchronizationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline DataSynchronizationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline DataSynchronizationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataSynchronizationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if the task failed.
        shared_ptr<string> errorMessage_ {};
        // Indicates whether the instance class needs to be upgraded. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> needUpgrade_ {};
        // The progress of incremental data migration or synchronization.
        shared_ptr<string> percent_ {};
        // The number of rows and size of data that is synchronized or migrated to the destination table per second during incremental data synchronization or migration.
        shared_ptr<string> progress_ {};
        // The state of incremental data migration or synchronization. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Migrating**: The task is in progress.
        // *   **Suspending**: The task is paused.
        // *   **Checking**: The task is in precheck.
        // *   **Failed**: The task failed.
        // *   **Finished**: The task is complete.
        // *   **Catched**: The task has no latency.
        shared_ptr<string> status_ {};
      };

      class DataInitializationStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataInitializationStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataInitializationStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataInitializationStatus() = default ;
        DataInitializationStatus(const DataInitializationStatus &) = default ;
        DataInitializationStatus(DataInitializationStatus &&) = default ;
        DataInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataInitializationStatus() = default ;
        DataInitializationStatus& operator=(const DataInitializationStatus &) = default ;
        DataInitializationStatus& operator=(DataInitializationStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // needUpgrade Field Functions 
        bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
        void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
        inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
        inline DataInitializationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline DataInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline DataInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if full data migration or initial full data synchronization failed.
        shared_ptr<string> errorMessage_ {};
        // Indicates whether the instance class needs to be upgraded. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> needUpgrade_ {};
        // The progress of full data migration or initial full data synchronization. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The number of entries that are migrated or synchronized during full data migration or initial full data synchronization.
        shared_ptr<string> progress_ {};
        // The state of full data migration or initial full data synchronization. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Migrating**: The task is in progress.
        // *   **Failed**: The task failed.
        // *   **Finished**: The task is complete.
        shared_ptr<string> status_ {};
      };

      class DataEtlStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataEtlStatus& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataEtlStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataEtlStatus() = default ;
        DataEtlStatus(const DataEtlStatus &) = default ;
        DataEtlStatus(DataEtlStatus &&) = default ;
        DataEtlStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataEtlStatus() = default ;
        DataEtlStatus& operator=(const DataEtlStatus &) = default ;
        DataEtlStatus& operator=(DataEtlStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline DataEtlStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // needUpgrade Field Functions 
        bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
        void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
        inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
        inline DataEtlStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
        inline DataEtlStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline DataEtlStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataEtlStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error message returned if the task failed.
        shared_ptr<string> errorMessage_ {};
        // Indicates whether the instance class needs to be upgraded. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> needUpgrade_ {};
        // The progress of full data migration or initial full data synchronization. Unit: percentage.
        shared_ptr<string> percent_ {};
        // The number of entries that are migrated or synchronized during full data migration or initial full data synchronization.
        shared_ptr<string> progress_ {};
        // The state of the ETL task. Valid values:
        // 
        // *   **NotStarted**: The task is not started.
        // *   **Migrating**: The task is in progress.
        // *   **Failed**: The task failed.
        // *   **Finished**: The task is complete.
        // *   **Catched**: The task has no latency.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->appName_ == nullptr
        && this->beginTimestamp_ == nullptr && this->checkpoint_ == nullptr && this->consumptionCheckpoint_ == nullptr && this->consumptionClient_ == nullptr && this->createTime_ == nullptr
        && this->dataEtlStatus_ == nullptr && this->dataInitializationStatus_ == nullptr && this->dataSynchronizationStatus_ == nullptr && this->databaseCount_ == nullptr && this->dbObject_ == nullptr
        && this->delay_ == nullptr && this->destNetType_ == nullptr && this->destinationEndpoint_ == nullptr && this->dtsInstanceID_ == nullptr && this->dtsJobClass_ == nullptr
        && this->dtsJobDirection_ == nullptr && this->dtsJobId_ == nullptr && this->dtsJobName_ == nullptr && this->endTimestamp_ == nullptr && this->errorMessage_ == nullptr
        && this->etlCalculator_ == nullptr && this->expireTime_ == nullptr && this->finishTime_ == nullptr && this->groupId_ == nullptr && this->isDemoJob_ == nullptr
        && this->jobType_ == nullptr && this->maxDu_ == nullptr && this->migrationMode_ == nullptr && this->minDu_ == nullptr && this->originType_ == nullptr
        && this->payType_ == nullptr && this->performance_ == nullptr && this->precheckStatus_ == nullptr && this->reserved_ == nullptr && this->retryState_ == nullptr
        && this->reverseJob_ == nullptr && this->sourceEndpoint_ == nullptr && this->status_ == nullptr && this->structureInitializationStatus_ == nullptr && this->subSyncJob_ == nullptr
        && this->subscribeTopic_ == nullptr && this->subscriptionDataType_ == nullptr && this->subscriptionHost_ == nullptr && this->synchronizationDirection_ == nullptr && this->tagList_ == nullptr
        && this->taskType_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline SubDistributedJob& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // beginTimestamp Field Functions 
      bool hasBeginTimestamp() const { return this->beginTimestamp_ != nullptr;};
      void deleteBeginTimestamp() { this->beginTimestamp_ = nullptr;};
      inline string getBeginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(beginTimestamp_, "") };
      inline SubDistributedJob& setBeginTimestamp(string beginTimestamp) { DARABONBA_PTR_SET_VALUE(beginTimestamp_, beginTimestamp) };


      // checkpoint Field Functions 
      bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
      void deleteCheckpoint() { this->checkpoint_ = nullptr;};
      inline string getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
      inline SubDistributedJob& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


      // consumptionCheckpoint Field Functions 
      bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
      void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
      inline string getConsumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
      inline SubDistributedJob& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


      // consumptionClient Field Functions 
      bool hasConsumptionClient() const { return this->consumptionClient_ != nullptr;};
      void deleteConsumptionClient() { this->consumptionClient_ = nullptr;};
      inline string getConsumptionClient() const { DARABONBA_PTR_GET_DEFAULT(consumptionClient_, "") };
      inline SubDistributedJob& setConsumptionClient(string consumptionClient) { DARABONBA_PTR_SET_VALUE(consumptionClient_, consumptionClient) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SubDistributedJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataEtlStatus Field Functions 
      bool hasDataEtlStatus() const { return this->dataEtlStatus_ != nullptr;};
      void deleteDataEtlStatus() { this->dataEtlStatus_ = nullptr;};
      inline const SubDistributedJob::DataEtlStatus & getDataEtlStatus() const { DARABONBA_PTR_GET_CONST(dataEtlStatus_, SubDistributedJob::DataEtlStatus) };
      inline SubDistributedJob::DataEtlStatus getDataEtlStatus() { DARABONBA_PTR_GET(dataEtlStatus_, SubDistributedJob::DataEtlStatus) };
      inline SubDistributedJob& setDataEtlStatus(const SubDistributedJob::DataEtlStatus & dataEtlStatus) { DARABONBA_PTR_SET_VALUE(dataEtlStatus_, dataEtlStatus) };
      inline SubDistributedJob& setDataEtlStatus(SubDistributedJob::DataEtlStatus && dataEtlStatus) { DARABONBA_PTR_SET_RVALUE(dataEtlStatus_, dataEtlStatus) };


      // dataInitializationStatus Field Functions 
      bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
      void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
      inline const SubDistributedJob::DataInitializationStatus & getDataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, SubDistributedJob::DataInitializationStatus) };
      inline SubDistributedJob::DataInitializationStatus getDataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, SubDistributedJob::DataInitializationStatus) };
      inline SubDistributedJob& setDataInitializationStatus(const SubDistributedJob::DataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
      inline SubDistributedJob& setDataInitializationStatus(SubDistributedJob::DataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


      // dataSynchronizationStatus Field Functions 
      bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
      void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
      inline const SubDistributedJob::DataSynchronizationStatus & getDataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, SubDistributedJob::DataSynchronizationStatus) };
      inline SubDistributedJob::DataSynchronizationStatus getDataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, SubDistributedJob::DataSynchronizationStatus) };
      inline SubDistributedJob& setDataSynchronizationStatus(const SubDistributedJob::DataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
      inline SubDistributedJob& setDataSynchronizationStatus(SubDistributedJob::DataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


      // databaseCount Field Functions 
      bool hasDatabaseCount() const { return this->databaseCount_ != nullptr;};
      void deleteDatabaseCount() { this->databaseCount_ = nullptr;};
      inline int32_t getDatabaseCount() const { DARABONBA_PTR_GET_DEFAULT(databaseCount_, 0) };
      inline SubDistributedJob& setDatabaseCount(int32_t databaseCount) { DARABONBA_PTR_SET_VALUE(databaseCount_, databaseCount) };


      // dbObject Field Functions 
      bool hasDbObject() const { return this->dbObject_ != nullptr;};
      void deleteDbObject() { this->dbObject_ = nullptr;};
      inline string getDbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
      inline SubDistributedJob& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


      // delay Field Functions 
      bool hasDelay() const { return this->delay_ != nullptr;};
      void deleteDelay() { this->delay_ = nullptr;};
      inline int64_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
      inline SubDistributedJob& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


      // destNetType Field Functions 
      bool hasDestNetType() const { return this->destNetType_ != nullptr;};
      void deleteDestNetType() { this->destNetType_ = nullptr;};
      inline string getDestNetType() const { DARABONBA_PTR_GET_DEFAULT(destNetType_, "") };
      inline SubDistributedJob& setDestNetType(string destNetType) { DARABONBA_PTR_SET_VALUE(destNetType_, destNetType) };


      // destinationEndpoint Field Functions 
      bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
      void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
      inline const SubDistributedJob::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, SubDistributedJob::DestinationEndpoint) };
      inline SubDistributedJob::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, SubDistributedJob::DestinationEndpoint) };
      inline SubDistributedJob& setDestinationEndpoint(const SubDistributedJob::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
      inline SubDistributedJob& setDestinationEndpoint(SubDistributedJob::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


      // dtsInstanceID Field Functions 
      bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
      void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
      inline string getDtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
      inline SubDistributedJob& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


      // dtsJobClass Field Functions 
      bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
      void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
      inline string getDtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
      inline SubDistributedJob& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


      // dtsJobDirection Field Functions 
      bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
      void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
      inline string getDtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
      inline SubDistributedJob& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


      // dtsJobId Field Functions 
      bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
      void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
      inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
      inline SubDistributedJob& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


      // dtsJobName Field Functions 
      bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
      void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
      inline string getDtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
      inline SubDistributedJob& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


      // endTimestamp Field Functions 
      bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
      void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
      inline string getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
      inline SubDistributedJob& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline SubDistributedJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // etlCalculator Field Functions 
      bool hasEtlCalculator() const { return this->etlCalculator_ != nullptr;};
      void deleteEtlCalculator() { this->etlCalculator_ = nullptr;};
      inline string getEtlCalculator() const { DARABONBA_PTR_GET_DEFAULT(etlCalculator_, "") };
      inline SubDistributedJob& setEtlCalculator(string etlCalculator) { DARABONBA_PTR_SET_VALUE(etlCalculator_, etlCalculator) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline SubDistributedJob& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline SubDistributedJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline SubDistributedJob& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // isDemoJob Field Functions 
      bool hasIsDemoJob() const { return this->isDemoJob_ != nullptr;};
      void deleteIsDemoJob() { this->isDemoJob_ = nullptr;};
      inline bool getIsDemoJob() const { DARABONBA_PTR_GET_DEFAULT(isDemoJob_, false) };
      inline SubDistributedJob& setIsDemoJob(bool isDemoJob) { DARABONBA_PTR_SET_VALUE(isDemoJob_, isDemoJob) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline SubDistributedJob& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // maxDu Field Functions 
      bool hasMaxDu() const { return this->maxDu_ != nullptr;};
      void deleteMaxDu() { this->maxDu_ = nullptr;};
      inline double getMaxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0.0) };
      inline SubDistributedJob& setMaxDu(double maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


      // migrationMode Field Functions 
      bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
      void deleteMigrationMode() { this->migrationMode_ = nullptr;};
      inline const SubDistributedJob::MigrationMode & getMigrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, SubDistributedJob::MigrationMode) };
      inline SubDistributedJob::MigrationMode getMigrationMode() { DARABONBA_PTR_GET(migrationMode_, SubDistributedJob::MigrationMode) };
      inline SubDistributedJob& setMigrationMode(const SubDistributedJob::MigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
      inline SubDistributedJob& setMigrationMode(SubDistributedJob::MigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


      // minDu Field Functions 
      bool hasMinDu() const { return this->minDu_ != nullptr;};
      void deleteMinDu() { this->minDu_ = nullptr;};
      inline double getMinDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0.0) };
      inline SubDistributedJob& setMinDu(double minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


      // originType Field Functions 
      bool hasOriginType() const { return this->originType_ != nullptr;};
      void deleteOriginType() { this->originType_ = nullptr;};
      inline string getOriginType() const { DARABONBA_PTR_GET_DEFAULT(originType_, "") };
      inline SubDistributedJob& setOriginType(string originType) { DARABONBA_PTR_SET_VALUE(originType_, originType) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline SubDistributedJob& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // performance Field Functions 
      bool hasPerformance() const { return this->performance_ != nullptr;};
      void deletePerformance() { this->performance_ = nullptr;};
      inline const SubDistributedJob::Performance & getPerformance() const { DARABONBA_PTR_GET_CONST(performance_, SubDistributedJob::Performance) };
      inline SubDistributedJob::Performance getPerformance() { DARABONBA_PTR_GET(performance_, SubDistributedJob::Performance) };
      inline SubDistributedJob& setPerformance(const SubDistributedJob::Performance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
      inline SubDistributedJob& setPerformance(SubDistributedJob::Performance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


      // precheckStatus Field Functions 
      bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
      void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
      inline const SubDistributedJob::PrecheckStatus & getPrecheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, SubDistributedJob::PrecheckStatus) };
      inline SubDistributedJob::PrecheckStatus getPrecheckStatus() { DARABONBA_PTR_GET(precheckStatus_, SubDistributedJob::PrecheckStatus) };
      inline SubDistributedJob& setPrecheckStatus(const SubDistributedJob::PrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
      inline SubDistributedJob& setPrecheckStatus(SubDistributedJob::PrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


      // reserved Field Functions 
      bool hasReserved() const { return this->reserved_ != nullptr;};
      void deleteReserved() { this->reserved_ = nullptr;};
      inline string getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
      inline SubDistributedJob& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


      // retryState Field Functions 
      bool hasRetryState() const { return this->retryState_ != nullptr;};
      void deleteRetryState() { this->retryState_ = nullptr;};
      inline const SubDistributedJob::RetryState & getRetryState() const { DARABONBA_PTR_GET_CONST(retryState_, SubDistributedJob::RetryState) };
      inline SubDistributedJob::RetryState getRetryState() { DARABONBA_PTR_GET(retryState_, SubDistributedJob::RetryState) };
      inline SubDistributedJob& setRetryState(const SubDistributedJob::RetryState & retryState) { DARABONBA_PTR_SET_VALUE(retryState_, retryState) };
      inline SubDistributedJob& setRetryState(SubDistributedJob::RetryState && retryState) { DARABONBA_PTR_SET_RVALUE(retryState_, retryState) };


      // reverseJob Field Functions 
      bool hasReverseJob() const { return this->reverseJob_ != nullptr;};
      void deleteReverseJob() { this->reverseJob_ = nullptr;};
      inline const SubDistributedJob::ReverseJob & getReverseJob() const { DARABONBA_PTR_GET_CONST(reverseJob_, SubDistributedJob::ReverseJob) };
      inline SubDistributedJob::ReverseJob getReverseJob() { DARABONBA_PTR_GET(reverseJob_, SubDistributedJob::ReverseJob) };
      inline SubDistributedJob& setReverseJob(const SubDistributedJob::ReverseJob & reverseJob) { DARABONBA_PTR_SET_VALUE(reverseJob_, reverseJob) };
      inline SubDistributedJob& setReverseJob(SubDistributedJob::ReverseJob && reverseJob) { DARABONBA_PTR_SET_RVALUE(reverseJob_, reverseJob) };


      // sourceEndpoint Field Functions 
      bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
      void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
      inline const SubDistributedJob::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, SubDistributedJob::SourceEndpoint) };
      inline SubDistributedJob::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, SubDistributedJob::SourceEndpoint) };
      inline SubDistributedJob& setSourceEndpoint(const SubDistributedJob::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
      inline SubDistributedJob& setSourceEndpoint(SubDistributedJob::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SubDistributedJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // structureInitializationStatus Field Functions 
      bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
      void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
      inline const SubDistributedJob::StructureInitializationStatus & getStructureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, SubDistributedJob::StructureInitializationStatus) };
      inline SubDistributedJob::StructureInitializationStatus getStructureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, SubDistributedJob::StructureInitializationStatus) };
      inline SubDistributedJob& setStructureInitializationStatus(const SubDistributedJob::StructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
      inline SubDistributedJob& setStructureInitializationStatus(SubDistributedJob::StructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


      // subSyncJob Field Functions 
      bool hasSubSyncJob() const { return this->subSyncJob_ != nullptr;};
      void deleteSubSyncJob() { this->subSyncJob_ = nullptr;};
      inline const vector<Darabonba::Json> & getSubSyncJob() const { DARABONBA_PTR_GET_CONST(subSyncJob_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getSubSyncJob() { DARABONBA_PTR_GET(subSyncJob_, vector<Darabonba::Json>) };
      inline SubDistributedJob& setSubSyncJob(const vector<Darabonba::Json> & subSyncJob) { DARABONBA_PTR_SET_VALUE(subSyncJob_, subSyncJob) };
      inline SubDistributedJob& setSubSyncJob(vector<Darabonba::Json> && subSyncJob) { DARABONBA_PTR_SET_RVALUE(subSyncJob_, subSyncJob) };


      // subscribeTopic Field Functions 
      bool hasSubscribeTopic() const { return this->subscribeTopic_ != nullptr;};
      void deleteSubscribeTopic() { this->subscribeTopic_ = nullptr;};
      inline string getSubscribeTopic() const { DARABONBA_PTR_GET_DEFAULT(subscribeTopic_, "") };
      inline SubDistributedJob& setSubscribeTopic(string subscribeTopic) { DARABONBA_PTR_SET_VALUE(subscribeTopic_, subscribeTopic) };


      // subscriptionDataType Field Functions 
      bool hasSubscriptionDataType() const { return this->subscriptionDataType_ != nullptr;};
      void deleteSubscriptionDataType() { this->subscriptionDataType_ = nullptr;};
      inline const SubDistributedJob::SubscriptionDataType & getSubscriptionDataType() const { DARABONBA_PTR_GET_CONST(subscriptionDataType_, SubDistributedJob::SubscriptionDataType) };
      inline SubDistributedJob::SubscriptionDataType getSubscriptionDataType() { DARABONBA_PTR_GET(subscriptionDataType_, SubDistributedJob::SubscriptionDataType) };
      inline SubDistributedJob& setSubscriptionDataType(const SubDistributedJob::SubscriptionDataType & subscriptionDataType) { DARABONBA_PTR_SET_VALUE(subscriptionDataType_, subscriptionDataType) };
      inline SubDistributedJob& setSubscriptionDataType(SubDistributedJob::SubscriptionDataType && subscriptionDataType) { DARABONBA_PTR_SET_RVALUE(subscriptionDataType_, subscriptionDataType) };


      // subscriptionHost Field Functions 
      bool hasSubscriptionHost() const { return this->subscriptionHost_ != nullptr;};
      void deleteSubscriptionHost() { this->subscriptionHost_ = nullptr;};
      inline const SubDistributedJob::SubscriptionHost & getSubscriptionHost() const { DARABONBA_PTR_GET_CONST(subscriptionHost_, SubDistributedJob::SubscriptionHost) };
      inline SubDistributedJob::SubscriptionHost getSubscriptionHost() { DARABONBA_PTR_GET(subscriptionHost_, SubDistributedJob::SubscriptionHost) };
      inline SubDistributedJob& setSubscriptionHost(const SubDistributedJob::SubscriptionHost & subscriptionHost) { DARABONBA_PTR_SET_VALUE(subscriptionHost_, subscriptionHost) };
      inline SubDistributedJob& setSubscriptionHost(SubDistributedJob::SubscriptionHost && subscriptionHost) { DARABONBA_PTR_SET_RVALUE(subscriptionHost_, subscriptionHost) };


      // synchronizationDirection Field Functions 
      bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
      void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
      inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
      inline SubDistributedJob& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<SubDistributedJob::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<SubDistributedJob::TagList>) };
      inline vector<SubDistributedJob::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<SubDistributedJob::TagList>) };
      inline SubDistributedJob& setTagList(const vector<SubDistributedJob::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline SubDistributedJob& setTagList(vector<SubDistributedJob::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline SubDistributedJob& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // Indicates whether the new change tracking feature is used.
      // 
      // > This parameter is returned only for change tracking instances of the new version.
      shared_ptr<string> appName_ {};
      // The start of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> beginTimestamp_ {};
      // The start offset of incremental data migration or data synchronization. This value is a UNIX timestamp. Unit: seconds.
      shared_ptr<string> checkpoint_ {};
      // The consumption checkpoint of the change tracking instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> consumptionCheckpoint_ {};
      // The downstream client information in the following format: \\<IP address of the downstream client>:\\<Random ID generated by DTS>.
      shared_ptr<string> consumptionClient_ {};
      // The time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The state of the ETL task.
      // 
      // > This parameter collection is returned only if an ETL task is configured.
      shared_ptr<SubDistributedJob::DataEtlStatus> dataEtlStatus_ {};
      // The state of full data migration or initial full data synchronization.
      shared_ptr<SubDistributedJob::DataInitializationStatus> dataInitializationStatus_ {};
      // The state of incremental data migration or synchronization.
      shared_ptr<SubDistributedJob::DataSynchronizationStatus> dataSynchronizationStatus_ {};
      // The number of ApsaraDB RDS for MySQL instances that are attached to the source PolarDB-X 1.0 instance.
      shared_ptr<int32_t> databaseCount_ {};
      // The objects of the data migration, data synchronization, or change tracking task. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
      shared_ptr<string> dbObject_ {};
      // The latency of incremental data migration or synchronization. Unit: milliseconds.
      shared_ptr<int64_t> delay_ {};
      // The network type of the consumer client. Valid values:
      // 
      // *   **CLASSIC**: classic network.
      // *   **VPC**: VPC.
      shared_ptr<string> destNetType_ {};
      // The connection settings of the destination instance.
      shared_ptr<SubDistributedJob::DestinationEndpoint> destinationEndpoint_ {};
      // The DTS instance ID.
      shared_ptr<string> dtsInstanceID_ {};
      // The instance class.
      shared_ptr<string> dtsJobClass_ {};
      // The synchronization direction. Valid values:
      // 
      // *   **Forward**
      // *   **Reverse**
      // 
      // > This parameter is returned only if the topology of the data synchronization instance is two-way synchronization.
      shared_ptr<string> dtsJobDirection_ {};
      // The DTS task ID.
      shared_ptr<string> dtsJobId_ {};
      // The DTS instance name.
      shared_ptr<string> dtsJobName_ {};
      // The end of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> endTimestamp_ {};
      // The error message returned if the task failed.
      shared_ptr<string> errorMessage_ {};
      // The operator information of the ETL task.
      // 
      // > This parameter is returned only if you query the details of an ETL task.
      shared_ptr<string> etlCalculator_ {};
      // The time when the instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      // 
      // > This parameter is returned only if the return value of **PayType** is **PrePaid**.
      shared_ptr<string> expireTime_ {};
      // The time when the task was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> finishTime_ {};
      // The resource group ID.
      shared_ptr<string> groupId_ {};
      // Indicates whether the task is a subtask. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isDemoJob_ {};
      // The type of the DTS task. Valid values:
      // 
      // *   **online**: data migration task.
      // *   **SYNC**: data synchronization task.
      // *   **SUBSCRIBE**: change tracking task.
      shared_ptr<string> jobType_ {};
      // The maximum number of DUs.
      // 
      // > This parameter is supported only for serverless instances.
      shared_ptr<double> maxDu_ {};
      // The migration types or initial synchronization types.
      shared_ptr<SubDistributedJob::MigrationMode> migrationMode_ {};
      // The minimum number of DUs.
      // 
      // > This parameter is supported only for serverless instances.
      shared_ptr<double> minDu_ {};
      // The source of the task. Valid values:
      // 
      // *   **PTS**
      // *   **DMS**
      // *   **DTS**
      shared_ptr<string> originType_ {};
      // The billing method. Valid values:
      // 
      // *   **PrePaid**: subscription.
      // *   **PostPaid**: pay-as-you-go.
      shared_ptr<string> payType_ {};
      // The performance of the data migration or synchronization instance.
      shared_ptr<SubDistributedJob::Performance> performance_ {};
      // The precheck state.
      shared_ptr<SubDistributedJob::PrecheckStatus> precheckStatus_ {};
      // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, such as whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
      shared_ptr<string> reserved_ {};
      // The information about the retries performed by DTS due to an exception.
      shared_ptr<SubDistributedJob::RetryState> retryState_ {};
      // The details of the data synchronization task in the reverse direction.
      // 
      // > This parameter is returned only for two-way data synchronization tasks.
      shared_ptr<SubDistributedJob::ReverseJob> reverseJob_ {};
      // The connection settings of the source instance.
      shared_ptr<SubDistributedJob::SourceEndpoint> sourceEndpoint_ {};
      // The state of initial schema synchronization. Valid values:
      // 
      // *   **NotStarted**: The task is not started.
      // *   **Migrating**: The task is in progress.
      // *   **Failed**: The task failed.
      // *   **Finished**: The task is complete.
      shared_ptr<string> status_ {};
      // Initialization status of library table structure.
      shared_ptr<SubDistributedJob::StructureInitializationStatus> structureInitializationStatus_ {};
      // The information about the subtasks in the current data synchronization task.
      shared_ptr<vector<Darabonba::Json>> subSyncJob_ {};
      // The topic of the change tracking instance.
      // 
      // > This parameter is returned only if your change tracking instances are of the new version and you have called the [CreateConsumerGroup](https://help.aliyun.com/document_detail/122863.html) operation to create a consumer group.
      shared_ptr<string> subscribeTopic_ {};
      // The type of data for change tracking.
      shared_ptr<SubDistributedJob::SubscriptionDataType> subscriptionDataType_ {};
      // The endpoint of the change tracking instance.
      shared_ptr<SubDistributedJob::SubscriptionHost> subscriptionHost_ {};
      // The synchronization direction. Valid values:
      // 
      // *   **Forward**
      // *   **Reverse**
      // 
      // > 
      // 
      // *   The default value is **Forward**.
      // *   The value **Reverse** takes effect only if the topology of the data synchronization instance is two-way synchronization.
      shared_ptr<string> synchronizationDirection_ {};
      // The tags of the task.
      shared_ptr<vector<SubDistributedJob::TagList>> tagList_ {};
      // The task type.
      shared_ptr<string> taskType_ {};
    };

    class SourceEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceEndpoint& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_TO_JSON(CanModifyPassword, canModifyPassword_);
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(EngineName, engineName_);
        DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, SourceEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_FROM_JSON(CanModifyPassword, canModifyPassword_);
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
        DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      SourceEndpoint() = default ;
      SourceEndpoint(const SourceEndpoint &) = default ;
      SourceEndpoint(SourceEndpoint &&) = default ;
      SourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceEndpoint() = default ;
      SourceEndpoint& operator=(const SourceEndpoint &) = default ;
      SourceEndpoint& operator=(SourceEndpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->canModifyPassword_ == nullptr && this->databaseName_ == nullptr && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr
        && this->ip_ == nullptr && this->oracleSID_ == nullptr && this->port_ == nullptr && this->region_ == nullptr && this->roleName_ == nullptr
        && this->sslSolutionEnum_ == nullptr && this->userName_ == nullptr; };
      // aliyunUid Field Functions 
      bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
      void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
      inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
      inline SourceEndpoint& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


      // canModifyPassword Field Functions 
      bool hasCanModifyPassword() const { return this->canModifyPassword_ != nullptr;};
      void deleteCanModifyPassword() { this->canModifyPassword_ = nullptr;};
      inline bool getCanModifyPassword() const { DARABONBA_PTR_GET_DEFAULT(canModifyPassword_, false) };
      inline SourceEndpoint& setCanModifyPassword(bool canModifyPassword) { DARABONBA_PTR_SET_VALUE(canModifyPassword_, canModifyPassword) };


      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline SourceEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // engineName Field Functions 
      bool hasEngineName() const { return this->engineName_ != nullptr;};
      void deleteEngineName() { this->engineName_ = nullptr;};
      inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
      inline SourceEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


      // instanceID Field Functions 
      bool hasInstanceID() const { return this->instanceID_ != nullptr;};
      void deleteInstanceID() { this->instanceID_ = nullptr;};
      inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
      inline SourceEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline SourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline SourceEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // oracleSID Field Functions 
      bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
      void deleteOracleSID() { this->oracleSID_ = nullptr;};
      inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
      inline SourceEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline SourceEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline SourceEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline SourceEndpoint& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // sslSolutionEnum Field Functions 
      bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
      void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
      inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
      inline SourceEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline SourceEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The ID of the Alibaba Cloud account to which the source instance belongs.
      shared_ptr<string> aliyunUid_ {};
      // Indicates whether the password can be modified. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> canModifyPassword_ {};
      // The name of the database from which the objects are migrated in the source instance.
      shared_ptr<string> databaseName_ {};
      // The database engine of the source instance.
      shared_ptr<string> engineName_ {};
      // The source instance ID.
      shared_ptr<string> instanceID_ {};
      // The type of the source instance.
      shared_ptr<string> instanceType_ {};
      // The endpoint of the source instance.
      shared_ptr<string> ip_ {};
      // The system ID (SID) of the Oracle database.
      // 
      // > This parameter is returned only if the return value of **EngineName** of the source instance is **Oracle** and the Oracle database is deployed in a non-Real Application Cluster (RAC) architecture.
      shared_ptr<string> oracleSID_ {};
      // The database service port of the source instance.
      shared_ptr<string> port_ {};
      // The ID of the region in which the source instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
      shared_ptr<string> region_ {};
      // The name of the Resource Access Management (RAM) role configured for the Alibaba Cloud account to which the source instance belongs.
      shared_ptr<string> roleName_ {};
      // Indicates whether SSL encryption is enabled. Valid values:
      // 
      // *   **DISABLE**: SSL encryption is disabled.
      // *   **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded.
      // *   **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection to an AWS MongoDB Altas database.
      // *   **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection to a Kafka cluster.
      shared_ptr<string> sslSolutionEnum_ {};
      // The database account of the source instance.
      shared_ptr<string> userName_ {};
    };

    class RetryState : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RetryState& obj) { 
        DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(MaxRetryTime, maxRetryTime_);
        DARABONBA_PTR_TO_JSON(Module, module_);
        DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
        DARABONBA_PTR_TO_JSON(RetryTarget, retryTarget_);
        DARABONBA_PTR_TO_JSON(RetryTime, retryTime_);
        DARABONBA_PTR_TO_JSON(Retrying, retrying_);
      };
      friend void from_json(const Darabonba::Json& j, RetryState& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(MaxRetryTime, maxRetryTime_);
        DARABONBA_PTR_FROM_JSON(Module, module_);
        DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
        DARABONBA_PTR_FROM_JSON(RetryTarget, retryTarget_);
        DARABONBA_PTR_FROM_JSON(RetryTime, retryTime_);
        DARABONBA_PTR_FROM_JSON(Retrying, retrying_);
      };
      RetryState() = default ;
      RetryState(const RetryState &) = default ;
      RetryState(RetryState &&) = default ;
      RetryState(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RetryState() = default ;
      RetryState& operator=(const RetryState &) = default ;
      RetryState& operator=(RetryState &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errMessage_ == nullptr
        && this->jobId_ == nullptr && this->maxRetryTime_ == nullptr && this->module_ == nullptr && this->retryCount_ == nullptr && this->retryTarget_ == nullptr
        && this->retryTime_ == nullptr && this->retrying_ == nullptr; };
      // errMessage Field Functions 
      bool hasErrMessage() const { return this->errMessage_ != nullptr;};
      void deleteErrMessage() { this->errMessage_ = nullptr;};
      inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
      inline RetryState& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline RetryState& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // maxRetryTime Field Functions 
      bool hasMaxRetryTime() const { return this->maxRetryTime_ != nullptr;};
      void deleteMaxRetryTime() { this->maxRetryTime_ = nullptr;};
      inline int32_t getMaxRetryTime() const { DARABONBA_PTR_GET_DEFAULT(maxRetryTime_, 0) };
      inline RetryState& setMaxRetryTime(int32_t maxRetryTime) { DARABONBA_PTR_SET_VALUE(maxRetryTime_, maxRetryTime) };


      // module Field Functions 
      bool hasModule() const { return this->module_ != nullptr;};
      void deleteModule() { this->module_ = nullptr;};
      inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
      inline RetryState& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


      // retryCount Field Functions 
      bool hasRetryCount() const { return this->retryCount_ != nullptr;};
      void deleteRetryCount() { this->retryCount_ = nullptr;};
      inline int32_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
      inline RetryState& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


      // retryTarget Field Functions 
      bool hasRetryTarget() const { return this->retryTarget_ != nullptr;};
      void deleteRetryTarget() { this->retryTarget_ = nullptr;};
      inline string getRetryTarget() const { DARABONBA_PTR_GET_DEFAULT(retryTarget_, "") };
      inline RetryState& setRetryTarget(string retryTarget) { DARABONBA_PTR_SET_VALUE(retryTarget_, retryTarget) };


      // retryTime Field Functions 
      bool hasRetryTime() const { return this->retryTime_ != nullptr;};
      void deleteRetryTime() { this->retryTime_ = nullptr;};
      inline int32_t getRetryTime() const { DARABONBA_PTR_GET_DEFAULT(retryTime_, 0) };
      inline RetryState& setRetryTime(int32_t retryTime) { DARABONBA_PTR_SET_VALUE(retryTime_, retryTime) };


      // retrying Field Functions 
      bool hasRetrying() const { return this->retrying_ != nullptr;};
      void deleteRetrying() { this->retrying_ = nullptr;};
      inline bool getRetrying() const { DARABONBA_PTR_GET_DEFAULT(retrying_, false) };
      inline RetryState& setRetrying(bool retrying) { DARABONBA_PTR_SET_VALUE(retrying_, retrying) };


    protected:
      // The error message returned if these retries failed.
      shared_ptr<string> errMessage_ {};
      // The task ID.
      shared_ptr<string> jobId_ {};
      // The maximum duration of a retry. Unit: seconds.
      shared_ptr<int32_t> maxRetryTime_ {};
      // The progress of the instance when DTS performs retries.
      shared_ptr<string> module_ {};
      // The number of retries.
      shared_ptr<int32_t> retryCount_ {};
      // The object on which the retries are performed. Valid values:
      // 
      // *   **srcDB**: the source database.
      // *   **destDB**: the destination database.
      // *   **inner_module**: an internal module of DTS.
      shared_ptr<string> retryTarget_ {};
      // The time that has elapsed from the point in time when the first retry starts. Unit: seconds.
      shared_ptr<int32_t> retryTime_ {};
      // Indicates whether the task is being retried. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> retrying_ {};
    };

    class MigrationMode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MigrationMode& obj) { 
        DARABONBA_PTR_TO_JSON(DataExtractTransformLoad, dataExtractTransformLoad_);
        DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
        DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
        DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
      };
      friend void from_json(const Darabonba::Json& j, MigrationMode& obj) { 
        DARABONBA_PTR_FROM_JSON(DataExtractTransformLoad, dataExtractTransformLoad_);
        DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
        DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
        DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
      };
      MigrationMode() = default ;
      MigrationMode(const MigrationMode &) = default ;
      MigrationMode(MigrationMode &&) = default ;
      MigrationMode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MigrationMode() = default ;
      MigrationMode& operator=(const MigrationMode &) = default ;
      MigrationMode& operator=(MigrationMode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataExtractTransformLoad_ == nullptr
        && this->dataInitialization_ == nullptr && this->dataSynchronization_ == nullptr && this->structureInitialization_ == nullptr; };
      // dataExtractTransformLoad Field Functions 
      bool hasDataExtractTransformLoad() const { return this->dataExtractTransformLoad_ != nullptr;};
      void deleteDataExtractTransformLoad() { this->dataExtractTransformLoad_ = nullptr;};
      inline bool getDataExtractTransformLoad() const { DARABONBA_PTR_GET_DEFAULT(dataExtractTransformLoad_, false) };
      inline MigrationMode& setDataExtractTransformLoad(bool dataExtractTransformLoad) { DARABONBA_PTR_SET_VALUE(dataExtractTransformLoad_, dataExtractTransformLoad) };


      // dataInitialization Field Functions 
      bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
      void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
      inline bool getDataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
      inline MigrationMode& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


      // dataSynchronization Field Functions 
      bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
      void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
      inline bool getDataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
      inline MigrationMode& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


      // structureInitialization Field Functions 
      bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
      void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
      inline bool getStructureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
      inline MigrationMode& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


    protected:
      // Indicates whether data transformation is performed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> dataExtractTransformLoad_ {};
      // Indicates whether full data migration or initial full data synchronization is performed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> dataInitialization_ {};
      // Indicates whether incremental data migration or synchronization is performed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> dataSynchronization_ {};
      // Indicates whether schema migration or initial schema synchronization is performed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> structureInitialization_ {};
    };

    class DestinationEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DestinationEndpoint& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_TO_JSON(CanModifyPassword, canModifyPassword_);
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(EngineName, engineName_);
        DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(OracleSID, oracleSID_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        DARABONBA_PTR_TO_JSON(SslSolutionEnum, sslSolutionEnum_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, DestinationEndpoint& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_FROM_JSON(CanModifyPassword, canModifyPassword_);
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
        DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(OracleSID, oracleSID_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        DARABONBA_PTR_FROM_JSON(SslSolutionEnum, sslSolutionEnum_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      DestinationEndpoint() = default ;
      DestinationEndpoint(const DestinationEndpoint &) = default ;
      DestinationEndpoint(DestinationEndpoint &&) = default ;
      DestinationEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DestinationEndpoint() = default ;
      DestinationEndpoint& operator=(const DestinationEndpoint &) = default ;
      DestinationEndpoint& operator=(DestinationEndpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->canModifyPassword_ == nullptr && this->databaseName_ == nullptr && this->engineName_ == nullptr && this->instanceID_ == nullptr && this->instanceType_ == nullptr
        && this->ip_ == nullptr && this->oracleSID_ == nullptr && this->port_ == nullptr && this->region_ == nullptr && this->roleName_ == nullptr
        && this->sslSolutionEnum_ == nullptr && this->userName_ == nullptr; };
      // aliyunUid Field Functions 
      bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
      void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
      inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
      inline DestinationEndpoint& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


      // canModifyPassword Field Functions 
      bool hasCanModifyPassword() const { return this->canModifyPassword_ != nullptr;};
      void deleteCanModifyPassword() { this->canModifyPassword_ = nullptr;};
      inline bool getCanModifyPassword() const { DARABONBA_PTR_GET_DEFAULT(canModifyPassword_, false) };
      inline DestinationEndpoint& setCanModifyPassword(bool canModifyPassword) { DARABONBA_PTR_SET_VALUE(canModifyPassword_, canModifyPassword) };


      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline DestinationEndpoint& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // engineName Field Functions 
      bool hasEngineName() const { return this->engineName_ != nullptr;};
      void deleteEngineName() { this->engineName_ = nullptr;};
      inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
      inline DestinationEndpoint& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


      // instanceID Field Functions 
      bool hasInstanceID() const { return this->instanceID_ != nullptr;};
      void deleteInstanceID() { this->instanceID_ = nullptr;};
      inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
      inline DestinationEndpoint& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline DestinationEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline DestinationEndpoint& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // oracleSID Field Functions 
      bool hasOracleSID() const { return this->oracleSID_ != nullptr;};
      void deleteOracleSID() { this->oracleSID_ = nullptr;};
      inline string getOracleSID() const { DARABONBA_PTR_GET_DEFAULT(oracleSID_, "") };
      inline DestinationEndpoint& setOracleSID(string oracleSID) { DARABONBA_PTR_SET_VALUE(oracleSID_, oracleSID) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline DestinationEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline DestinationEndpoint& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline DestinationEndpoint& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // sslSolutionEnum Field Functions 
      bool hasSslSolutionEnum() const { return this->sslSolutionEnum_ != nullptr;};
      void deleteSslSolutionEnum() { this->sslSolutionEnum_ = nullptr;};
      inline string getSslSolutionEnum() const { DARABONBA_PTR_GET_DEFAULT(sslSolutionEnum_, "") };
      inline DestinationEndpoint& setSslSolutionEnum(string sslSolutionEnum) { DARABONBA_PTR_SET_VALUE(sslSolutionEnum_, sslSolutionEnum) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline DestinationEndpoint& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<string> aliyunUid_ {};
      // Indicates whether the password can be modified. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> canModifyPassword_ {};
      // The name of the database to which the objects are migrated in the destination instance.
      shared_ptr<string> databaseName_ {};
      // The database engine of the destination instance.
      shared_ptr<string> engineName_ {};
      // The destination instance ID.
      shared_ptr<string> instanceID_ {};
      // The type of the destination instance.
      shared_ptr<string> instanceType_ {};
      // The endpoint of the destination instance.
      shared_ptr<string> ip_ {};
      // The SID of the Oracle database.
      // 
      // > This parameter is returned only if the return value of **EngineName** of the destination instance is **Oracle** and the Oracle database is deployed in a non-RAC architecture.
      shared_ptr<string> oracleSID_ {};
      // The database service port of the destination instance.
      shared_ptr<string> port_ {};
      // The ID of the region in which the destination instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
      shared_ptr<string> region_ {};
      shared_ptr<string> roleName_ {};
      // Indicates whether SSL encryption is enabled. Valid values:
      // 
      // *   **DISABLE**: SSL encryption is disabled.
      // *   **ENABLE_WITH_CERTIFICATE**: SSL encryption is enabled and the CA certificate is uploaded.
      // *   **ENABLE_ONLY_4_MONGODB_ALTAS**: SSL encryption is enabled for the connection to an AWS MongoDB Altas database.
      // *   **ENABLE_ONLY_4_KAFKA_SCRAM_SHA_256**: SCRAM-SHA-256 is used to encrypt the connection to a Kafka cluster.
      shared_ptr<string> sslSolutionEnum_ {};
      // The database account of the destination instance.
      shared_ptr<string> userName_ {};
    };

    class DataSynchronizationStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSynchronizationStatus& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
        DARABONBA_PTR_TO_JSON(Percent, percent_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DataSynchronizationStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
        DARABONBA_PTR_FROM_JSON(Percent, percent_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DataSynchronizationStatus() = default ;
      DataSynchronizationStatus(const DataSynchronizationStatus &) = default ;
      DataSynchronizationStatus(DataSynchronizationStatus &&) = default ;
      DataSynchronizationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSynchronizationStatus() = default ;
      DataSynchronizationStatus& operator=(const DataSynchronizationStatus &) = default ;
      DataSynchronizationStatus& operator=(DataSynchronizationStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->needUpgrade_ == nullptr && this->percent_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline DataSynchronizationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // needUpgrade Field Functions 
      bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
      void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
      inline bool getNeedUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
      inline DataSynchronizationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


      // percent Field Functions 
      bool hasPercent() const { return this->percent_ != nullptr;};
      void deletePercent() { this->percent_ = nullptr;};
      inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
      inline DataSynchronizationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline DataSynchronizationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataSynchronizationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The error message returned if incremental data migration or synchronization failed.
      shared_ptr<string> errorMessage_ {};
      // Indicates whether the instance class needs to be upgraded. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> needUpgrade_ {};
      // The progress of incremental data migration or synchronization. Unit: percentage.
      shared_ptr<string> percent_ {};
      // The number of rows and size of data that is synchronized or migrated to the destination table per second during incremental data synchronization or migration.
      shared_ptr<string> progress_ {};
      // The state of incremental data migration or synchronization. Valid values:
      // 
      // *   **NotStarted**: The task is not started.
      // *   **Migrating**: The task is in progress.
      // *   **Suspending**: The task is paused.
      // *   **Checking**: The task is in precheck.
      // *   **Failed**: The task failed.
      // *   **Finished**: The task is complete.
      // *   **Catched**: The task has no latency.
      shared_ptr<string> status_ {};
    };

    class DataDeliveryChannelInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataDeliveryChannelInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
        DARABONBA_PTR_TO_JSON(PublicDproxyUrl, publicDproxyUrl_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
        DARABONBA_PTR_TO_JSON(VpcDproxyUrl, vpcDproxyUrl_);
      };
      friend void from_json(const Darabonba::Json& j, DataDeliveryChannelInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
        DARABONBA_PTR_FROM_JSON(PublicDproxyUrl, publicDproxyUrl_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
        DARABONBA_PTR_FROM_JSON(VpcDproxyUrl, vpcDproxyUrl_);
      };
      DataDeliveryChannelInfo() = default ;
      DataDeliveryChannelInfo(const DataDeliveryChannelInfo &) = default ;
      DataDeliveryChannelInfo(DataDeliveryChannelInfo &&) = default ;
      DataDeliveryChannelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataDeliveryChannelInfo() = default ;
      DataDeliveryChannelInfo& operator=(const DataDeliveryChannelInfo &) = default ;
      DataDeliveryChannelInfo& operator=(DataDeliveryChannelInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->partitionNum_ == nullptr
        && this->publicDproxyUrl_ == nullptr && this->region_ == nullptr && this->topic_ == nullptr && this->vpcDproxyUrl_ == nullptr; };
      // partitionNum Field Functions 
      bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
      void deletePartitionNum() { this->partitionNum_ = nullptr;};
      inline int32_t getPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
      inline DataDeliveryChannelInfo& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


      // publicDproxyUrl Field Functions 
      bool hasPublicDproxyUrl() const { return this->publicDproxyUrl_ != nullptr;};
      void deletePublicDproxyUrl() { this->publicDproxyUrl_ = nullptr;};
      inline string getPublicDproxyUrl() const { DARABONBA_PTR_GET_DEFAULT(publicDproxyUrl_, "") };
      inline DataDeliveryChannelInfo& setPublicDproxyUrl(string publicDproxyUrl) { DARABONBA_PTR_SET_VALUE(publicDproxyUrl_, publicDproxyUrl) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline DataDeliveryChannelInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline DataDeliveryChannelInfo& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      // vpcDproxyUrl Field Functions 
      bool hasVpcDproxyUrl() const { return this->vpcDproxyUrl_ != nullptr;};
      void deleteVpcDproxyUrl() { this->vpcDproxyUrl_ = nullptr;};
      inline string getVpcDproxyUrl() const { DARABONBA_PTR_GET_DEFAULT(vpcDproxyUrl_, "") };
      inline DataDeliveryChannelInfo& setVpcDproxyUrl(string vpcDproxyUrl) { DARABONBA_PTR_SET_VALUE(vpcDproxyUrl_, vpcDproxyUrl) };


    protected:
      // The number of partitions of the destination topic.
      shared_ptr<int32_t> partitionNum_ {};
      // The public endpoint of the data shipping channel.
      shared_ptr<string> publicDproxyUrl_ {};
      // The region in which the data shipping channel resides.
      shared_ptr<string> region_ {};
      // The destination topic of the data shipping instance.
      shared_ptr<string> topic_ {};
      // The VPC endpoint of the data shipping channel.
      shared_ptr<string> vpcDproxyUrl_ {};
    };

    virtual bool empty() const override { return this->appName_ == nullptr
        && this->beginTimestamp_ == nullptr && this->binlog_ == nullptr && this->binlogSite_ == nullptr && this->binlogTime_ == nullptr && this->bootTime_ == nullptr
        && this->checkpoint_ == nullptr && this->code_ == nullptr && this->consumptionCheckpoint_ == nullptr && this->consumptionClient_ == nullptr && this->createTime_ == nullptr
        && this->dataDeliveryChannelInfo_ == nullptr && this->dataSynchronizationStatus_ == nullptr && this->databaseCount_ == nullptr && this->dbObject_ == nullptr && this->dedicatedClusterId_ == nullptr
        && this->delay_ == nullptr && this->demoJob_ == nullptr && this->destNetType_ == nullptr && this->destinationEndpoint_ == nullptr && this->dtsBisLabel_ == nullptr
        && this->dtsInstanceID_ == nullptr && this->dtsJobClass_ == nullptr && this->dtsJobDirection_ == nullptr && this->dtsJobId_ == nullptr && this->dtsJobName_ == nullptr
        && this->dynamicMessage_ == nullptr && this->endTimestamp_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->errorMessage_ == nullptr
        && this->etlCalculator_ == nullptr && this->expireTime_ == nullptr && this->finishTime_ == nullptr && this->groupId_ == nullptr && this->httpStatusCode_ == nullptr
        && this->initCheckpoint_ == nullptr && this->insightModule_ == nullptr && this->jobType_ == nullptr && this->lastUpdateTime_ == nullptr && this->maxDu_ == nullptr
        && this->migrationMode_ == nullptr && this->minDu_ == nullptr && this->payType_ == nullptr && this->requestId_ == nullptr && this->reserved_ == nullptr
        && this->resourceGroupDisplayName_ == nullptr && this->resourceGroupId_ == nullptr && this->retryState_ == nullptr && this->sourceEndpoint_ == nullptr && this->status_ == nullptr
        && this->subDistributedJob_ == nullptr && this->subSyncJob_ == nullptr && this->subscribeTopic_ == nullptr && this->subscriptionDataType_ == nullptr && this->subscriptionHost_ == nullptr
        && this->success_ == nullptr && this->synchronizationDirection_ == nullptr && this->taskType_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeDtsJobDetailResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // beginTimestamp Field Functions 
    bool hasBeginTimestamp() const { return this->beginTimestamp_ != nullptr;};
    void deleteBeginTimestamp() { this->beginTimestamp_ = nullptr;};
    inline string getBeginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(beginTimestamp_, "") };
    inline DescribeDtsJobDetailResponseBody& setBeginTimestamp(string beginTimestamp) { DARABONBA_PTR_SET_VALUE(beginTimestamp_, beginTimestamp) };


    // binlog Field Functions 
    bool hasBinlog() const { return this->binlog_ != nullptr;};
    void deleteBinlog() { this->binlog_ = nullptr;};
    inline string getBinlog() const { DARABONBA_PTR_GET_DEFAULT(binlog_, "") };
    inline DescribeDtsJobDetailResponseBody& setBinlog(string binlog) { DARABONBA_PTR_SET_VALUE(binlog_, binlog) };


    // binlogSite Field Functions 
    bool hasBinlogSite() const { return this->binlogSite_ != nullptr;};
    void deleteBinlogSite() { this->binlogSite_ = nullptr;};
    inline string getBinlogSite() const { DARABONBA_PTR_GET_DEFAULT(binlogSite_, "") };
    inline DescribeDtsJobDetailResponseBody& setBinlogSite(string binlogSite) { DARABONBA_PTR_SET_VALUE(binlogSite_, binlogSite) };


    // binlogTime Field Functions 
    bool hasBinlogTime() const { return this->binlogTime_ != nullptr;};
    void deleteBinlogTime() { this->binlogTime_ = nullptr;};
    inline string getBinlogTime() const { DARABONBA_PTR_GET_DEFAULT(binlogTime_, "") };
    inline DescribeDtsJobDetailResponseBody& setBinlogTime(string binlogTime) { DARABONBA_PTR_SET_VALUE(binlogTime_, binlogTime) };


    // bootTime Field Functions 
    bool hasBootTime() const { return this->bootTime_ != nullptr;};
    void deleteBootTime() { this->bootTime_ = nullptr;};
    inline string getBootTime() const { DARABONBA_PTR_GET_DEFAULT(bootTime_, "") };
    inline DescribeDtsJobDetailResponseBody& setBootTime(string bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline int64_t getCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, 0L) };
    inline DescribeDtsJobDetailResponseBody& setCheckpoint(int64_t checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeDtsJobDetailResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // consumptionCheckpoint Field Functions 
    bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
    void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
    inline string getConsumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
    inline DescribeDtsJobDetailResponseBody& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


    // consumptionClient Field Functions 
    bool hasConsumptionClient() const { return this->consumptionClient_ != nullptr;};
    void deleteConsumptionClient() { this->consumptionClient_ = nullptr;};
    inline string getConsumptionClient() const { DARABONBA_PTR_GET_DEFAULT(consumptionClient_, "") };
    inline DescribeDtsJobDetailResponseBody& setConsumptionClient(string consumptionClient) { DARABONBA_PTR_SET_VALUE(consumptionClient_, consumptionClient) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDtsJobDetailResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataDeliveryChannelInfo Field Functions 
    bool hasDataDeliveryChannelInfo() const { return this->dataDeliveryChannelInfo_ != nullptr;};
    void deleteDataDeliveryChannelInfo() { this->dataDeliveryChannelInfo_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBody::DataDeliveryChannelInfo & getDataDeliveryChannelInfo() const { DARABONBA_PTR_GET_CONST(dataDeliveryChannelInfo_, DescribeDtsJobDetailResponseBody::DataDeliveryChannelInfo) };
    inline DescribeDtsJobDetailResponseBody::DataDeliveryChannelInfo getDataDeliveryChannelInfo() { DARABONBA_PTR_GET(dataDeliveryChannelInfo_, DescribeDtsJobDetailResponseBody::DataDeliveryChannelInfo) };
    inline DescribeDtsJobDetailResponseBody& setDataDeliveryChannelInfo(const DescribeDtsJobDetailResponseBody::DataDeliveryChannelInfo & dataDeliveryChannelInfo) { DARABONBA_PTR_SET_VALUE(dataDeliveryChannelInfo_, dataDeliveryChannelInfo) };
    inline DescribeDtsJobDetailResponseBody& setDataDeliveryChannelInfo(DescribeDtsJobDetailResponseBody::DataDeliveryChannelInfo && dataDeliveryChannelInfo) { DARABONBA_PTR_SET_RVALUE(dataDeliveryChannelInfo_, dataDeliveryChannelInfo) };


    // dataSynchronizationStatus Field Functions 
    bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
    void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBody::DataSynchronizationStatus & getDataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, DescribeDtsJobDetailResponseBody::DataSynchronizationStatus) };
    inline DescribeDtsJobDetailResponseBody::DataSynchronizationStatus getDataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, DescribeDtsJobDetailResponseBody::DataSynchronizationStatus) };
    inline DescribeDtsJobDetailResponseBody& setDataSynchronizationStatus(const DescribeDtsJobDetailResponseBody::DataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
    inline DescribeDtsJobDetailResponseBody& setDataSynchronizationStatus(DescribeDtsJobDetailResponseBody::DataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


    // databaseCount Field Functions 
    bool hasDatabaseCount() const { return this->databaseCount_ != nullptr;};
    void deleteDatabaseCount() { this->databaseCount_ = nullptr;};
    inline int32_t getDatabaseCount() const { DARABONBA_PTR_GET_DEFAULT(databaseCount_, 0) };
    inline DescribeDtsJobDetailResponseBody& setDatabaseCount(int32_t databaseCount) { DARABONBA_PTR_SET_VALUE(databaseCount_, databaseCount) };


    // dbObject Field Functions 
    bool hasDbObject() const { return this->dbObject_ != nullptr;};
    void deleteDbObject() { this->dbObject_ = nullptr;};
    inline string getDbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
    inline DescribeDtsJobDetailResponseBody& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string getDedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline DescribeDtsJobDetailResponseBody& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int64_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
    inline DescribeDtsJobDetailResponseBody& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // demoJob Field Functions 
    bool hasDemoJob() const { return this->demoJob_ != nullptr;};
    void deleteDemoJob() { this->demoJob_ = nullptr;};
    inline bool getDemoJob() const { DARABONBA_PTR_GET_DEFAULT(demoJob_, false) };
    inline DescribeDtsJobDetailResponseBody& setDemoJob(bool demoJob) { DARABONBA_PTR_SET_VALUE(demoJob_, demoJob) };


    // destNetType Field Functions 
    bool hasDestNetType() const { return this->destNetType_ != nullptr;};
    void deleteDestNetType() { this->destNetType_ = nullptr;};
    inline string getDestNetType() const { DARABONBA_PTR_GET_DEFAULT(destNetType_, "") };
    inline DescribeDtsJobDetailResponseBody& setDestNetType(string destNetType) { DARABONBA_PTR_SET_VALUE(destNetType_, destNetType) };


    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBody::DestinationEndpoint & getDestinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, DescribeDtsJobDetailResponseBody::DestinationEndpoint) };
    inline DescribeDtsJobDetailResponseBody::DestinationEndpoint getDestinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, DescribeDtsJobDetailResponseBody::DestinationEndpoint) };
    inline DescribeDtsJobDetailResponseBody& setDestinationEndpoint(const DescribeDtsJobDetailResponseBody::DestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline DescribeDtsJobDetailResponseBody& setDestinationEndpoint(DescribeDtsJobDetailResponseBody::DestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // dtsBisLabel Field Functions 
    bool hasDtsBisLabel() const { return this->dtsBisLabel_ != nullptr;};
    void deleteDtsBisLabel() { this->dtsBisLabel_ = nullptr;};
    inline string getDtsBisLabel() const { DARABONBA_PTR_GET_DEFAULT(dtsBisLabel_, "") };
    inline DescribeDtsJobDetailResponseBody& setDtsBisLabel(string dtsBisLabel) { DARABONBA_PTR_SET_VALUE(dtsBisLabel_, dtsBisLabel) };


    // dtsInstanceID Field Functions 
    bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
    void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
    inline string getDtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
    inline DescribeDtsJobDetailResponseBody& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


    // dtsJobClass Field Functions 
    bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
    void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
    inline string getDtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
    inline DescribeDtsJobDetailResponseBody& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


    // dtsJobDirection Field Functions 
    bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
    void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
    inline string getDtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
    inline DescribeDtsJobDetailResponseBody& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDtsJobDetailResponseBody& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dtsJobName Field Functions 
    bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
    void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
    inline string getDtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
    inline DescribeDtsJobDetailResponseBody& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeDtsJobDetailResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline string getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
    inline DescribeDtsJobDetailResponseBody& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDtsJobDetailResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDtsJobDetailResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDtsJobDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // etlCalculator Field Functions 
    bool hasEtlCalculator() const { return this->etlCalculator_ != nullptr;};
    void deleteEtlCalculator() { this->etlCalculator_ = nullptr;};
    inline string getEtlCalculator() const { DARABONBA_PTR_GET_DEFAULT(etlCalculator_, "") };
    inline DescribeDtsJobDetailResponseBody& setEtlCalculator(string etlCalculator) { DARABONBA_PTR_SET_VALUE(etlCalculator_, etlCalculator) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDtsJobDetailResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeDtsJobDetailResponseBody& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDtsJobDetailResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeDtsJobDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // initCheckpoint Field Functions 
    bool hasInitCheckpoint() const { return this->initCheckpoint_ != nullptr;};
    void deleteInitCheckpoint() { this->initCheckpoint_ = nullptr;};
    inline string getInitCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(initCheckpoint_, "") };
    inline DescribeDtsJobDetailResponseBody& setInitCheckpoint(string initCheckpoint) { DARABONBA_PTR_SET_VALUE(initCheckpoint_, initCheckpoint) };


    // insightModule Field Functions 
    bool hasInsightModule() const { return this->insightModule_ != nullptr;};
    void deleteInsightModule() { this->insightModule_ = nullptr;};
    inline bool getInsightModule() const { DARABONBA_PTR_GET_DEFAULT(insightModule_, false) };
    inline DescribeDtsJobDetailResponseBody& setInsightModule(bool insightModule) { DARABONBA_PTR_SET_VALUE(insightModule_, insightModule) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DescribeDtsJobDetailResponseBody& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline string getLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, "") };
    inline DescribeDtsJobDetailResponseBody& setLastUpdateTime(string lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


    // maxDu Field Functions 
    bool hasMaxDu() const { return this->maxDu_ != nullptr;};
    void deleteMaxDu() { this->maxDu_ = nullptr;};
    inline double getMaxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0.0) };
    inline DescribeDtsJobDetailResponseBody& setMaxDu(double maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


    // migrationMode Field Functions 
    bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
    void deleteMigrationMode() { this->migrationMode_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBody::MigrationMode & getMigrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, DescribeDtsJobDetailResponseBody::MigrationMode) };
    inline DescribeDtsJobDetailResponseBody::MigrationMode getMigrationMode() { DARABONBA_PTR_GET(migrationMode_, DescribeDtsJobDetailResponseBody::MigrationMode) };
    inline DescribeDtsJobDetailResponseBody& setMigrationMode(const DescribeDtsJobDetailResponseBody::MigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
    inline DescribeDtsJobDetailResponseBody& setMigrationMode(DescribeDtsJobDetailResponseBody::MigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


    // minDu Field Functions 
    bool hasMinDu() const { return this->minDu_ != nullptr;};
    void deleteMinDu() { this->minDu_ = nullptr;};
    inline double getMinDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0.0) };
    inline DescribeDtsJobDetailResponseBody& setMinDu(double minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDtsJobDetailResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDtsJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline string getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
    inline DescribeDtsJobDetailResponseBody& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // resourceGroupDisplayName Field Functions 
    bool hasResourceGroupDisplayName() const { return this->resourceGroupDisplayName_ != nullptr;};
    void deleteResourceGroupDisplayName() { this->resourceGroupDisplayName_ = nullptr;};
    inline string getResourceGroupDisplayName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupDisplayName_, "") };
    inline DescribeDtsJobDetailResponseBody& setResourceGroupDisplayName(string resourceGroupDisplayName) { DARABONBA_PTR_SET_VALUE(resourceGroupDisplayName_, resourceGroupDisplayName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDtsJobDetailResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retryState Field Functions 
    bool hasRetryState() const { return this->retryState_ != nullptr;};
    void deleteRetryState() { this->retryState_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBody::RetryState & getRetryState() const { DARABONBA_PTR_GET_CONST(retryState_, DescribeDtsJobDetailResponseBody::RetryState) };
    inline DescribeDtsJobDetailResponseBody::RetryState getRetryState() { DARABONBA_PTR_GET(retryState_, DescribeDtsJobDetailResponseBody::RetryState) };
    inline DescribeDtsJobDetailResponseBody& setRetryState(const DescribeDtsJobDetailResponseBody::RetryState & retryState) { DARABONBA_PTR_SET_VALUE(retryState_, retryState) };
    inline DescribeDtsJobDetailResponseBody& setRetryState(DescribeDtsJobDetailResponseBody::RetryState && retryState) { DARABONBA_PTR_SET_RVALUE(retryState_, retryState) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBody::SourceEndpoint & getSourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, DescribeDtsJobDetailResponseBody::SourceEndpoint) };
    inline DescribeDtsJobDetailResponseBody::SourceEndpoint getSourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, DescribeDtsJobDetailResponseBody::SourceEndpoint) };
    inline DescribeDtsJobDetailResponseBody& setSourceEndpoint(const DescribeDtsJobDetailResponseBody::SourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeDtsJobDetailResponseBody& setSourceEndpoint(DescribeDtsJobDetailResponseBody::SourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobDetailResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subDistributedJob Field Functions 
    bool hasSubDistributedJob() const { return this->subDistributedJob_ != nullptr;};
    void deleteSubDistributedJob() { this->subDistributedJob_ = nullptr;};
    inline const vector<DescribeDtsJobDetailResponseBody::SubDistributedJob> & getSubDistributedJob() const { DARABONBA_PTR_GET_CONST(subDistributedJob_, vector<DescribeDtsJobDetailResponseBody::SubDistributedJob>) };
    inline vector<DescribeDtsJobDetailResponseBody::SubDistributedJob> getSubDistributedJob() { DARABONBA_PTR_GET(subDistributedJob_, vector<DescribeDtsJobDetailResponseBody::SubDistributedJob>) };
    inline DescribeDtsJobDetailResponseBody& setSubDistributedJob(const vector<DescribeDtsJobDetailResponseBody::SubDistributedJob> & subDistributedJob) { DARABONBA_PTR_SET_VALUE(subDistributedJob_, subDistributedJob) };
    inline DescribeDtsJobDetailResponseBody& setSubDistributedJob(vector<DescribeDtsJobDetailResponseBody::SubDistributedJob> && subDistributedJob) { DARABONBA_PTR_SET_RVALUE(subDistributedJob_, subDistributedJob) };


    // subSyncJob Field Functions 
    bool hasSubSyncJob() const { return this->subSyncJob_ != nullptr;};
    void deleteSubSyncJob() { this->subSyncJob_ = nullptr;};
    inline const vector<DescribeDtsJobDetailResponseBody::SubSyncJob> & getSubSyncJob() const { DARABONBA_PTR_GET_CONST(subSyncJob_, vector<DescribeDtsJobDetailResponseBody::SubSyncJob>) };
    inline vector<DescribeDtsJobDetailResponseBody::SubSyncJob> getSubSyncJob() { DARABONBA_PTR_GET(subSyncJob_, vector<DescribeDtsJobDetailResponseBody::SubSyncJob>) };
    inline DescribeDtsJobDetailResponseBody& setSubSyncJob(const vector<DescribeDtsJobDetailResponseBody::SubSyncJob> & subSyncJob) { DARABONBA_PTR_SET_VALUE(subSyncJob_, subSyncJob) };
    inline DescribeDtsJobDetailResponseBody& setSubSyncJob(vector<DescribeDtsJobDetailResponseBody::SubSyncJob> && subSyncJob) { DARABONBA_PTR_SET_RVALUE(subSyncJob_, subSyncJob) };


    // subscribeTopic Field Functions 
    bool hasSubscribeTopic() const { return this->subscribeTopic_ != nullptr;};
    void deleteSubscribeTopic() { this->subscribeTopic_ = nullptr;};
    inline string getSubscribeTopic() const { DARABONBA_PTR_GET_DEFAULT(subscribeTopic_, "") };
    inline DescribeDtsJobDetailResponseBody& setSubscribeTopic(string subscribeTopic) { DARABONBA_PTR_SET_VALUE(subscribeTopic_, subscribeTopic) };


    // subscriptionDataType Field Functions 
    bool hasSubscriptionDataType() const { return this->subscriptionDataType_ != nullptr;};
    void deleteSubscriptionDataType() { this->subscriptionDataType_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBody::SubscriptionDataType & getSubscriptionDataType() const { DARABONBA_PTR_GET_CONST(subscriptionDataType_, DescribeDtsJobDetailResponseBody::SubscriptionDataType) };
    inline DescribeDtsJobDetailResponseBody::SubscriptionDataType getSubscriptionDataType() { DARABONBA_PTR_GET(subscriptionDataType_, DescribeDtsJobDetailResponseBody::SubscriptionDataType) };
    inline DescribeDtsJobDetailResponseBody& setSubscriptionDataType(const DescribeDtsJobDetailResponseBody::SubscriptionDataType & subscriptionDataType) { DARABONBA_PTR_SET_VALUE(subscriptionDataType_, subscriptionDataType) };
    inline DescribeDtsJobDetailResponseBody& setSubscriptionDataType(DescribeDtsJobDetailResponseBody::SubscriptionDataType && subscriptionDataType) { DARABONBA_PTR_SET_RVALUE(subscriptionDataType_, subscriptionDataType) };


    // subscriptionHost Field Functions 
    bool hasSubscriptionHost() const { return this->subscriptionHost_ != nullptr;};
    void deleteSubscriptionHost() { this->subscriptionHost_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBody::SubscriptionHost & getSubscriptionHost() const { DARABONBA_PTR_GET_CONST(subscriptionHost_, DescribeDtsJobDetailResponseBody::SubscriptionHost) };
    inline DescribeDtsJobDetailResponseBody::SubscriptionHost getSubscriptionHost() { DARABONBA_PTR_GET(subscriptionHost_, DescribeDtsJobDetailResponseBody::SubscriptionHost) };
    inline DescribeDtsJobDetailResponseBody& setSubscriptionHost(const DescribeDtsJobDetailResponseBody::SubscriptionHost & subscriptionHost) { DARABONBA_PTR_SET_VALUE(subscriptionHost_, subscriptionHost) };
    inline DescribeDtsJobDetailResponseBody& setSubscriptionHost(DescribeDtsJobDetailResponseBody::SubscriptionHost && subscriptionHost) { DARABONBA_PTR_SET_RVALUE(subscriptionHost_, subscriptionHost) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDtsJobDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline DescribeDtsJobDetailResponseBody& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeDtsJobDetailResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // Indicates whether the new change tracking feature is used.
    // 
    // > This parameter is returned only for change tracking instances of the new version.
    shared_ptr<string> appName_ {};
    // The start of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> beginTimestamp_ {};
    // The binary logs.
    shared_ptr<string> binlog_ {};
    // The current offset.
    shared_ptr<string> binlogSite_ {};
    // The offset range.
    shared_ptr<string> binlogTime_ {};
    // The time when the task was started. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> bootTime_ {};
    // The start offset of incremental data migration or data synchronization. This value is a UNIX timestamp. Unit: seconds.
    shared_ptr<int64_t> checkpoint_ {};
    // The error code. This parameter will be removed in the future.
    shared_ptr<int32_t> code_ {};
    // The consumption checkpoint of the change tracking instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> consumptionCheckpoint_ {};
    // The downstream client information in the following format: \\<IP address of the downstream client>:\\<Random ID generated by DTS>.
    shared_ptr<string> consumptionClient_ {};
    // The time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> createTime_ {};
    // The information about the data shipping channel.
    shared_ptr<DescribeDtsJobDetailResponseBody::DataDeliveryChannelInfo> dataDeliveryChannelInfo_ {};
    // The state of incremental data migration or synchronization.
    shared_ptr<DescribeDtsJobDetailResponseBody::DataSynchronizationStatus> dataSynchronizationStatus_ {};
    // The number of ApsaraDB RDS for MySQL instances that are attached to the source PolarDB-X 1.0 instance.
    shared_ptr<int32_t> databaseCount_ {};
    // The objects of the data migration, data synchronization, or change tracking task. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
    shared_ptr<string> dbObject_ {};
    // The dedicated cluster ID.
    shared_ptr<string> dedicatedClusterId_ {};
    // The latency of incremental data migration or synchronization. Unit: milliseconds.
    shared_ptr<int64_t> delay_ {};
    // Indicates whether the task is a subtask. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> demoJob_ {};
    // The network type of the consumer client. Valid values:
    // 
    // *   **CLASSIC**: classic network.
    // *   **VPC**: virtual private cloud (VPC).
    shared_ptr<string> destNetType_ {};
    // The connection settings of the destination instance.
    shared_ptr<DescribeDtsJobDetailResponseBody::DestinationEndpoint> destinationEndpoint_ {};
    // The environment tag of the DTS instance. Valid values:
    // 
    // *   **normal******
    // *   **online******
    shared_ptr<string> dtsBisLabel_ {};
    // The ID of the data migration, data synchronization, or change tracking instance.
    shared_ptr<string> dtsInstanceID_ {};
    // The instance class.
    // 
    // > For more information about the description and test performance of each instance class, see [Specifications of data migration instances](https://help.aliyun.com/document_detail/26606.html) and [Specifications of data synchronization instances](https://help.aliyun.com/document_detail/26605.html).
    shared_ptr<string> dtsJobClass_ {};
    // The synchronization direction. Valid values:
    // 
    // *   **Forward**
    // *   **Reverse**
    // 
    // > This parameter is returned only if the topology of the data synchronization instance is two-way synchronization.
    shared_ptr<string> dtsJobDirection_ {};
    // The ID of the data migration, data synchronization, or change tracking task.
    shared_ptr<string> dtsJobId_ {};
    // The name of the data migration, data synchronization, or change tracking task.
    shared_ptr<string> dtsJobName_ {};
    // The dynamic part in the error message. The value of this parameter is used to replace **%s** in the value of **ErrMessage**.
    // 
    // > For example, if the return value of **ErrMessage** is **The Value of Input Parameter %s is not valid** and the value of **DynamicMessage** is **DtsJobId**, the specified value of **DtsJobId** is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The end of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> endTimestamp_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errMessage_ {};
    // The error message returned if the task failed.
    shared_ptr<string> errorMessage_ {};
    // The operator information of the ETL task.
    // 
    // > This parameter is returned only if you query the details of an ETL task.
    shared_ptr<string> etlCalculator_ {};
    // The time when the instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // > This parameter is returned only if the return value of **PayType** is **PrePaid**.
    shared_ptr<string> expireTime_ {};
    // The time when the task was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> finishTime_ {};
    // The resource group ID.
    shared_ptr<string> groupId_ {};
    // The returned HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> initCheckpoint_ {};
    shared_ptr<bool> insightModule_ {};
    // The type of the DTS task. Valid values:
    // 
    // *   **sync**: a data synchronization task.
    // *   **subSync**: a subtask generated when the objects to be synchronized are modified.
    // 
    // > In most cases, this parameter is returned together with **TaskType**.
    shared_ptr<string> jobType_ {};
    // The timestamp when the task was last updated.
    shared_ptr<string> lastUpdateTime_ {};
    // The maximum number of DUs.
    // 
    // > This parameter is supported only for serverless instances.
    shared_ptr<double> maxDu_ {};
    // The migration types or initial synchronization types.
    shared_ptr<DescribeDtsJobDetailResponseBody::MigrationMode> migrationMode_ {};
    // The minimum number of DUs.
    // 
    // > This parameter is supported only for serverless instances.
    shared_ptr<double> minDu_ {};
    // The billing method of the DTS instance. Valid values:
    // 
    // *   **PrePaid**: subscription.
    // *   **PostPaid**: pay-as-you-go.
    shared_ptr<string> payType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, such as whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
    shared_ptr<string> reserved_ {};
    // The resource group name.
    shared_ptr<string> resourceGroupDisplayName_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The information about the retries performed by DTS due to an exception.
    shared_ptr<DescribeDtsJobDetailResponseBody::RetryState> retryState_ {};
    // The connection settings of the source instance.
    shared_ptr<DescribeDtsJobDetailResponseBody::SourceEndpoint> sourceEndpoint_ {};
    // The state of the data migration or synchronization task. Valid values:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **NotConfigured**: The task is not configured.
    // *   **Prechecking**: The task is in precheck.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **PreCheckPass**: The task passed the precheck.
    // *   **Initializing**: Initial data synchronization is in progress.
    // *   **InitializeFailed**: Initial data synchronization failed.
    // *   **synchronizing**: Data synchronization is in progress.
    // *   **Migrating**: Data migration is in progress.
    // *   **Failed**: Data synchronization failed.
    // *   **MigrationFailed**: Data migration failed.
    // *   **Suspending**: The task is paused.
    // *   **Modifying**: The objects of the task are being modified.
    // *   **Retrying**: The task is being retried.
    // *   **Upgrade**: The task is being upgraded.
    // *   **Downgrade**: The task is being downgraded.
    // *   **Locked**: The task is locked.
    // *   **Finished**: The task is complete.
    shared_ptr<string> status_ {};
    // The information about the subtasks in the current distributed task. If the DTS task is not a distributed task, the value of this parameter is null.
    // 
    // > This parameter is available only if the DTS task is a data synchronization task.
    shared_ptr<vector<DescribeDtsJobDetailResponseBody::SubDistributedJob>> subDistributedJob_ {};
    // The information about the subtasks in the current data synchronization task.
    shared_ptr<vector<DescribeDtsJobDetailResponseBody::SubSyncJob>> subSyncJob_ {};
    // The topic of the change tracking instance.
    // 
    // > This parameter is returned only if your change tracking instances are of the new version and you have called the [CreateConsumerGroup](https://help.aliyun.com/document_detail/122863.html) operation to create a consumer group.
    shared_ptr<string> subscribeTopic_ {};
    // The type of data for change tracking.
    shared_ptr<DescribeDtsJobDetailResponseBody::SubscriptionDataType> subscriptionDataType_ {};
    // The endpoint of the change tracking instance.
    shared_ptr<DescribeDtsJobDetailResponseBody::SubscriptionHost> subscriptionHost_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The synchronization direction. Valid values:
    // 
    // *   **Forward**
    // *   **Reverse**
    // 
    // > 
    // 
    // *   The default value is **Forward**.
    // *   The value **Reverse** takes effect only if the topology of the data synchronization instance is two-way synchronization.
    shared_ptr<string> synchronizationDirection_ {};
    // The type of the task.
    // 
    // > In most cases, this parameter is returned together with **JobType**.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
