// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodyDataSynchronizationStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodyDestinationEndpoint.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodyMigrationMode.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodyRetryState.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySourceEndpoint.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubDistributedJob.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJob.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubscriptionDataType.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubscriptionHost.hpp>
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
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->beginTimestamp_ == nullptr && return this->binlog_ == nullptr && return this->binlogSite_ == nullptr && return this->binlogTime_ == nullptr && return this->bootTime_ == nullptr
        && return this->checkpoint_ == nullptr && return this->code_ == nullptr && return this->consumptionCheckpoint_ == nullptr && return this->consumptionClient_ == nullptr && return this->createTime_ == nullptr
        && return this->dataDeliveryChannelInfo_ == nullptr && return this->dataSynchronizationStatus_ == nullptr && return this->databaseCount_ == nullptr && return this->dbObject_ == nullptr && return this->dedicatedClusterId_ == nullptr
        && return this->delay_ == nullptr && return this->demoJob_ == nullptr && return this->destNetType_ == nullptr && return this->destinationEndpoint_ == nullptr && return this->dtsBisLabel_ == nullptr
        && return this->dtsInstanceID_ == nullptr && return this->dtsJobClass_ == nullptr && return this->dtsJobDirection_ == nullptr && return this->dtsJobId_ == nullptr && return this->dtsJobName_ == nullptr
        && return this->dynamicMessage_ == nullptr && return this->endTimestamp_ == nullptr && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->errorMessage_ == nullptr
        && return this->etlCalculator_ == nullptr && return this->expireTime_ == nullptr && return this->finishTime_ == nullptr && return this->groupId_ == nullptr && return this->httpStatusCode_ == nullptr
        && return this->initCheckpoint_ == nullptr && return this->jobType_ == nullptr && return this->lastUpdateTime_ == nullptr && return this->maxDu_ == nullptr && return this->migrationMode_ == nullptr
        && return this->minDu_ == nullptr && return this->payType_ == nullptr && return this->requestId_ == nullptr && return this->reserved_ == nullptr && return this->resourceGroupDisplayName_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->retryState_ == nullptr && return this->sourceEndpoint_ == nullptr && return this->status_ == nullptr && return this->subDistributedJob_ == nullptr
        && return this->subSyncJob_ == nullptr && return this->subscribeTopic_ == nullptr && return this->subscriptionDataType_ == nullptr && return this->subscriptionHost_ == nullptr && return this->success_ == nullptr
        && return this->synchronizationDirection_ == nullptr && return this->taskType_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeDtsJobDetailResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // beginTimestamp Field Functions 
    bool hasBeginTimestamp() const { return this->beginTimestamp_ != nullptr;};
    void deleteBeginTimestamp() { this->beginTimestamp_ = nullptr;};
    inline string beginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(beginTimestamp_, "") };
    inline DescribeDtsJobDetailResponseBody& setBeginTimestamp(string beginTimestamp) { DARABONBA_PTR_SET_VALUE(beginTimestamp_, beginTimestamp) };


    // binlog Field Functions 
    bool hasBinlog() const { return this->binlog_ != nullptr;};
    void deleteBinlog() { this->binlog_ = nullptr;};
    inline string binlog() const { DARABONBA_PTR_GET_DEFAULT(binlog_, "") };
    inline DescribeDtsJobDetailResponseBody& setBinlog(string binlog) { DARABONBA_PTR_SET_VALUE(binlog_, binlog) };


    // binlogSite Field Functions 
    bool hasBinlogSite() const { return this->binlogSite_ != nullptr;};
    void deleteBinlogSite() { this->binlogSite_ = nullptr;};
    inline string binlogSite() const { DARABONBA_PTR_GET_DEFAULT(binlogSite_, "") };
    inline DescribeDtsJobDetailResponseBody& setBinlogSite(string binlogSite) { DARABONBA_PTR_SET_VALUE(binlogSite_, binlogSite) };


    // binlogTime Field Functions 
    bool hasBinlogTime() const { return this->binlogTime_ != nullptr;};
    void deleteBinlogTime() { this->binlogTime_ = nullptr;};
    inline string binlogTime() const { DARABONBA_PTR_GET_DEFAULT(binlogTime_, "") };
    inline DescribeDtsJobDetailResponseBody& setBinlogTime(string binlogTime) { DARABONBA_PTR_SET_VALUE(binlogTime_, binlogTime) };


    // bootTime Field Functions 
    bool hasBootTime() const { return this->bootTime_ != nullptr;};
    void deleteBootTime() { this->bootTime_ = nullptr;};
    inline string bootTime() const { DARABONBA_PTR_GET_DEFAULT(bootTime_, "") };
    inline DescribeDtsJobDetailResponseBody& setBootTime(string bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline int64_t checkpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, 0L) };
    inline DescribeDtsJobDetailResponseBody& setCheckpoint(int64_t checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeDtsJobDetailResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // consumptionCheckpoint Field Functions 
    bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
    void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
    inline string consumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
    inline DescribeDtsJobDetailResponseBody& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


    // consumptionClient Field Functions 
    bool hasConsumptionClient() const { return this->consumptionClient_ != nullptr;};
    void deleteConsumptionClient() { this->consumptionClient_ = nullptr;};
    inline string consumptionClient() const { DARABONBA_PTR_GET_DEFAULT(consumptionClient_, "") };
    inline DescribeDtsJobDetailResponseBody& setConsumptionClient(string consumptionClient) { DARABONBA_PTR_SET_VALUE(consumptionClient_, consumptionClient) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDtsJobDetailResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataDeliveryChannelInfo Field Functions 
    bool hasDataDeliveryChannelInfo() const { return this->dataDeliveryChannelInfo_ != nullptr;};
    void deleteDataDeliveryChannelInfo() { this->dataDeliveryChannelInfo_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo & dataDeliveryChannelInfo() const { DARABONBA_PTR_GET_CONST(dataDeliveryChannelInfo_, DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo) };
    inline DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo dataDeliveryChannelInfo() { DARABONBA_PTR_GET(dataDeliveryChannelInfo_, DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo) };
    inline DescribeDtsJobDetailResponseBody& setDataDeliveryChannelInfo(const DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo & dataDeliveryChannelInfo) { DARABONBA_PTR_SET_VALUE(dataDeliveryChannelInfo_, dataDeliveryChannelInfo) };
    inline DescribeDtsJobDetailResponseBody& setDataDeliveryChannelInfo(DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo && dataDeliveryChannelInfo) { DARABONBA_PTR_SET_RVALUE(dataDeliveryChannelInfo_, dataDeliveryChannelInfo) };


    // dataSynchronizationStatus Field Functions 
    bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
    void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBodyDataSynchronizationStatus & dataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, DescribeDtsJobDetailResponseBodyDataSynchronizationStatus) };
    inline DescribeDtsJobDetailResponseBodyDataSynchronizationStatus dataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, DescribeDtsJobDetailResponseBodyDataSynchronizationStatus) };
    inline DescribeDtsJobDetailResponseBody& setDataSynchronizationStatus(const DescribeDtsJobDetailResponseBodyDataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
    inline DescribeDtsJobDetailResponseBody& setDataSynchronizationStatus(DescribeDtsJobDetailResponseBodyDataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


    // databaseCount Field Functions 
    bool hasDatabaseCount() const { return this->databaseCount_ != nullptr;};
    void deleteDatabaseCount() { this->databaseCount_ = nullptr;};
    inline int32_t databaseCount() const { DARABONBA_PTR_GET_DEFAULT(databaseCount_, 0) };
    inline DescribeDtsJobDetailResponseBody& setDatabaseCount(int32_t databaseCount) { DARABONBA_PTR_SET_VALUE(databaseCount_, databaseCount) };


    // dbObject Field Functions 
    bool hasDbObject() const { return this->dbObject_ != nullptr;};
    void deleteDbObject() { this->dbObject_ = nullptr;};
    inline string dbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
    inline DescribeDtsJobDetailResponseBody& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string dedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline DescribeDtsJobDetailResponseBody& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int64_t delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
    inline DescribeDtsJobDetailResponseBody& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // demoJob Field Functions 
    bool hasDemoJob() const { return this->demoJob_ != nullptr;};
    void deleteDemoJob() { this->demoJob_ = nullptr;};
    inline bool demoJob() const { DARABONBA_PTR_GET_DEFAULT(demoJob_, false) };
    inline DescribeDtsJobDetailResponseBody& setDemoJob(bool demoJob) { DARABONBA_PTR_SET_VALUE(demoJob_, demoJob) };


    // destNetType Field Functions 
    bool hasDestNetType() const { return this->destNetType_ != nullptr;};
    void deleteDestNetType() { this->destNetType_ = nullptr;};
    inline string destNetType() const { DARABONBA_PTR_GET_DEFAULT(destNetType_, "") };
    inline DescribeDtsJobDetailResponseBody& setDestNetType(string destNetType) { DARABONBA_PTR_SET_VALUE(destNetType_, destNetType) };


    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBodyDestinationEndpoint & destinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, DescribeDtsJobDetailResponseBodyDestinationEndpoint) };
    inline DescribeDtsJobDetailResponseBodyDestinationEndpoint destinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, DescribeDtsJobDetailResponseBodyDestinationEndpoint) };
    inline DescribeDtsJobDetailResponseBody& setDestinationEndpoint(const DescribeDtsJobDetailResponseBodyDestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline DescribeDtsJobDetailResponseBody& setDestinationEndpoint(DescribeDtsJobDetailResponseBodyDestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // dtsBisLabel Field Functions 
    bool hasDtsBisLabel() const { return this->dtsBisLabel_ != nullptr;};
    void deleteDtsBisLabel() { this->dtsBisLabel_ = nullptr;};
    inline string dtsBisLabel() const { DARABONBA_PTR_GET_DEFAULT(dtsBisLabel_, "") };
    inline DescribeDtsJobDetailResponseBody& setDtsBisLabel(string dtsBisLabel) { DARABONBA_PTR_SET_VALUE(dtsBisLabel_, dtsBisLabel) };


    // dtsInstanceID Field Functions 
    bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
    void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
    inline string dtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
    inline DescribeDtsJobDetailResponseBody& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


    // dtsJobClass Field Functions 
    bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
    void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
    inline string dtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
    inline DescribeDtsJobDetailResponseBody& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


    // dtsJobDirection Field Functions 
    bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
    void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
    inline string dtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
    inline DescribeDtsJobDetailResponseBody& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDtsJobDetailResponseBody& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dtsJobName Field Functions 
    bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
    void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
    inline string dtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
    inline DescribeDtsJobDetailResponseBody& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeDtsJobDetailResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline string endTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
    inline DescribeDtsJobDetailResponseBody& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDtsJobDetailResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDtsJobDetailResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDtsJobDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // etlCalculator Field Functions 
    bool hasEtlCalculator() const { return this->etlCalculator_ != nullptr;};
    void deleteEtlCalculator() { this->etlCalculator_ = nullptr;};
    inline string etlCalculator() const { DARABONBA_PTR_GET_DEFAULT(etlCalculator_, "") };
    inline DescribeDtsJobDetailResponseBody& setEtlCalculator(string etlCalculator) { DARABONBA_PTR_SET_VALUE(etlCalculator_, etlCalculator) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDtsJobDetailResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeDtsJobDetailResponseBody& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDtsJobDetailResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeDtsJobDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // initCheckpoint Field Functions 
    bool hasInitCheckpoint() const { return this->initCheckpoint_ != nullptr;};
    void deleteInitCheckpoint() { this->initCheckpoint_ = nullptr;};
    inline string initCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(initCheckpoint_, "") };
    inline DescribeDtsJobDetailResponseBody& setInitCheckpoint(string initCheckpoint) { DARABONBA_PTR_SET_VALUE(initCheckpoint_, initCheckpoint) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DescribeDtsJobDetailResponseBody& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline string lastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, "") };
    inline DescribeDtsJobDetailResponseBody& setLastUpdateTime(string lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


    // maxDu Field Functions 
    bool hasMaxDu() const { return this->maxDu_ != nullptr;};
    void deleteMaxDu() { this->maxDu_ = nullptr;};
    inline double maxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0.0) };
    inline DescribeDtsJobDetailResponseBody& setMaxDu(double maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


    // migrationMode Field Functions 
    bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
    void deleteMigrationMode() { this->migrationMode_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBodyMigrationMode & migrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, DescribeDtsJobDetailResponseBodyMigrationMode) };
    inline DescribeDtsJobDetailResponseBodyMigrationMode migrationMode() { DARABONBA_PTR_GET(migrationMode_, DescribeDtsJobDetailResponseBodyMigrationMode) };
    inline DescribeDtsJobDetailResponseBody& setMigrationMode(const DescribeDtsJobDetailResponseBodyMigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
    inline DescribeDtsJobDetailResponseBody& setMigrationMode(DescribeDtsJobDetailResponseBodyMigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


    // minDu Field Functions 
    bool hasMinDu() const { return this->minDu_ != nullptr;};
    void deleteMinDu() { this->minDu_ = nullptr;};
    inline double minDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0.0) };
    inline DescribeDtsJobDetailResponseBody& setMinDu(double minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDtsJobDetailResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDtsJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline string reserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
    inline DescribeDtsJobDetailResponseBody& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // resourceGroupDisplayName Field Functions 
    bool hasResourceGroupDisplayName() const { return this->resourceGroupDisplayName_ != nullptr;};
    void deleteResourceGroupDisplayName() { this->resourceGroupDisplayName_ = nullptr;};
    inline string resourceGroupDisplayName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupDisplayName_, "") };
    inline DescribeDtsJobDetailResponseBody& setResourceGroupDisplayName(string resourceGroupDisplayName) { DARABONBA_PTR_SET_VALUE(resourceGroupDisplayName_, resourceGroupDisplayName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDtsJobDetailResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retryState Field Functions 
    bool hasRetryState() const { return this->retryState_ != nullptr;};
    void deleteRetryState() { this->retryState_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBodyRetryState & retryState() const { DARABONBA_PTR_GET_CONST(retryState_, DescribeDtsJobDetailResponseBodyRetryState) };
    inline DescribeDtsJobDetailResponseBodyRetryState retryState() { DARABONBA_PTR_GET(retryState_, DescribeDtsJobDetailResponseBodyRetryState) };
    inline DescribeDtsJobDetailResponseBody& setRetryState(const DescribeDtsJobDetailResponseBodyRetryState & retryState) { DARABONBA_PTR_SET_VALUE(retryState_, retryState) };
    inline DescribeDtsJobDetailResponseBody& setRetryState(DescribeDtsJobDetailResponseBodyRetryState && retryState) { DARABONBA_PTR_SET_RVALUE(retryState_, retryState) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBodySourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, DescribeDtsJobDetailResponseBodySourceEndpoint) };
    inline DescribeDtsJobDetailResponseBodySourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, DescribeDtsJobDetailResponseBodySourceEndpoint) };
    inline DescribeDtsJobDetailResponseBody& setSourceEndpoint(const DescribeDtsJobDetailResponseBodySourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeDtsJobDetailResponseBody& setSourceEndpoint(DescribeDtsJobDetailResponseBodySourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobDetailResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subDistributedJob Field Functions 
    bool hasSubDistributedJob() const { return this->subDistributedJob_ != nullptr;};
    void deleteSubDistributedJob() { this->subDistributedJob_ = nullptr;};
    inline const vector<DescribeDtsJobDetailResponseBodySubDistributedJob> & subDistributedJob() const { DARABONBA_PTR_GET_CONST(subDistributedJob_, vector<DescribeDtsJobDetailResponseBodySubDistributedJob>) };
    inline vector<DescribeDtsJobDetailResponseBodySubDistributedJob> subDistributedJob() { DARABONBA_PTR_GET(subDistributedJob_, vector<DescribeDtsJobDetailResponseBodySubDistributedJob>) };
    inline DescribeDtsJobDetailResponseBody& setSubDistributedJob(const vector<DescribeDtsJobDetailResponseBodySubDistributedJob> & subDistributedJob) { DARABONBA_PTR_SET_VALUE(subDistributedJob_, subDistributedJob) };
    inline DescribeDtsJobDetailResponseBody& setSubDistributedJob(vector<DescribeDtsJobDetailResponseBodySubDistributedJob> && subDistributedJob) { DARABONBA_PTR_SET_RVALUE(subDistributedJob_, subDistributedJob) };


    // subSyncJob Field Functions 
    bool hasSubSyncJob() const { return this->subSyncJob_ != nullptr;};
    void deleteSubSyncJob() { this->subSyncJob_ = nullptr;};
    inline const vector<DescribeDtsJobDetailResponseBodySubSyncJob> & subSyncJob() const { DARABONBA_PTR_GET_CONST(subSyncJob_, vector<DescribeDtsJobDetailResponseBodySubSyncJob>) };
    inline vector<DescribeDtsJobDetailResponseBodySubSyncJob> subSyncJob() { DARABONBA_PTR_GET(subSyncJob_, vector<DescribeDtsJobDetailResponseBodySubSyncJob>) };
    inline DescribeDtsJobDetailResponseBody& setSubSyncJob(const vector<DescribeDtsJobDetailResponseBodySubSyncJob> & subSyncJob) { DARABONBA_PTR_SET_VALUE(subSyncJob_, subSyncJob) };
    inline DescribeDtsJobDetailResponseBody& setSubSyncJob(vector<DescribeDtsJobDetailResponseBodySubSyncJob> && subSyncJob) { DARABONBA_PTR_SET_RVALUE(subSyncJob_, subSyncJob) };


    // subscribeTopic Field Functions 
    bool hasSubscribeTopic() const { return this->subscribeTopic_ != nullptr;};
    void deleteSubscribeTopic() { this->subscribeTopic_ = nullptr;};
    inline string subscribeTopic() const { DARABONBA_PTR_GET_DEFAULT(subscribeTopic_, "") };
    inline DescribeDtsJobDetailResponseBody& setSubscribeTopic(string subscribeTopic) { DARABONBA_PTR_SET_VALUE(subscribeTopic_, subscribeTopic) };


    // subscriptionDataType Field Functions 
    bool hasSubscriptionDataType() const { return this->subscriptionDataType_ != nullptr;};
    void deleteSubscriptionDataType() { this->subscriptionDataType_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBodySubscriptionDataType & subscriptionDataType() const { DARABONBA_PTR_GET_CONST(subscriptionDataType_, DescribeDtsJobDetailResponseBodySubscriptionDataType) };
    inline DescribeDtsJobDetailResponseBodySubscriptionDataType subscriptionDataType() { DARABONBA_PTR_GET(subscriptionDataType_, DescribeDtsJobDetailResponseBodySubscriptionDataType) };
    inline DescribeDtsJobDetailResponseBody& setSubscriptionDataType(const DescribeDtsJobDetailResponseBodySubscriptionDataType & subscriptionDataType) { DARABONBA_PTR_SET_VALUE(subscriptionDataType_, subscriptionDataType) };
    inline DescribeDtsJobDetailResponseBody& setSubscriptionDataType(DescribeDtsJobDetailResponseBodySubscriptionDataType && subscriptionDataType) { DARABONBA_PTR_SET_RVALUE(subscriptionDataType_, subscriptionDataType) };


    // subscriptionHost Field Functions 
    bool hasSubscriptionHost() const { return this->subscriptionHost_ != nullptr;};
    void deleteSubscriptionHost() { this->subscriptionHost_ = nullptr;};
    inline const DescribeDtsJobDetailResponseBodySubscriptionHost & subscriptionHost() const { DARABONBA_PTR_GET_CONST(subscriptionHost_, DescribeDtsJobDetailResponseBodySubscriptionHost) };
    inline DescribeDtsJobDetailResponseBodySubscriptionHost subscriptionHost() { DARABONBA_PTR_GET(subscriptionHost_, DescribeDtsJobDetailResponseBodySubscriptionHost) };
    inline DescribeDtsJobDetailResponseBody& setSubscriptionHost(const DescribeDtsJobDetailResponseBodySubscriptionHost & subscriptionHost) { DARABONBA_PTR_SET_VALUE(subscriptionHost_, subscriptionHost) };
    inline DescribeDtsJobDetailResponseBody& setSubscriptionHost(DescribeDtsJobDetailResponseBodySubscriptionHost && subscriptionHost) { DARABONBA_PTR_SET_RVALUE(subscriptionHost_, subscriptionHost) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDtsJobDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string synchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline DescribeDtsJobDetailResponseBody& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeDtsJobDetailResponseBody& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // Indicates whether the new change tracking feature is used.
    // 
    // > This parameter is returned only for change tracking instances of the new version.
    std::shared_ptr<string> appName_ = nullptr;
    // The start of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> beginTimestamp_ = nullptr;
    // The binary logs.
    std::shared_ptr<string> binlog_ = nullptr;
    // The current offset.
    std::shared_ptr<string> binlogSite_ = nullptr;
    // The offset range.
    std::shared_ptr<string> binlogTime_ = nullptr;
    // The time when the task was started. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> bootTime_ = nullptr;
    // The start offset of incremental data migration or data synchronization. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> checkpoint_ = nullptr;
    // The error code. This parameter will be removed in the future.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The consumption checkpoint of the change tracking instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> consumptionCheckpoint_ = nullptr;
    // The downstream client information in the following format: \\<IP address of the downstream client>:\\<Random ID generated by DTS>.
    std::shared_ptr<string> consumptionClient_ = nullptr;
    // The time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The information about the data shipping channel.
    std::shared_ptr<DescribeDtsJobDetailResponseBodyDataDeliveryChannelInfo> dataDeliveryChannelInfo_ = nullptr;
    // The state of incremental data migration or synchronization.
    std::shared_ptr<DescribeDtsJobDetailResponseBodyDataSynchronizationStatus> dataSynchronizationStatus_ = nullptr;
    // The number of ApsaraDB RDS for MySQL instances that are attached to the source PolarDB-X 1.0 instance.
    std::shared_ptr<int32_t> databaseCount_ = nullptr;
    // The objects of the data migration, data synchronization, or change tracking task. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
    std::shared_ptr<string> dbObject_ = nullptr;
    // The dedicated cluster ID.
    std::shared_ptr<string> dedicatedClusterId_ = nullptr;
    // The latency of incremental data migration or synchronization. Unit: milliseconds.
    std::shared_ptr<int64_t> delay_ = nullptr;
    // Indicates whether the task is a subtask. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> demoJob_ = nullptr;
    // The network type of the consumer client. Valid values:
    // 
    // *   **CLASSIC**: classic network.
    // *   **VPC**: virtual private cloud (VPC).
    std::shared_ptr<string> destNetType_ = nullptr;
    // The connection settings of the destination instance.
    std::shared_ptr<DescribeDtsJobDetailResponseBodyDestinationEndpoint> destinationEndpoint_ = nullptr;
    // The environment tag of the DTS instance. Valid values:
    // 
    // *   **normal******
    // *   **online******
    std::shared_ptr<string> dtsBisLabel_ = nullptr;
    // The ID of the data migration, data synchronization, or change tracking instance.
    std::shared_ptr<string> dtsInstanceID_ = nullptr;
    // The instance class.
    // 
    // > For more information about the description and test performance of each instance class, see [Specifications of data migration instances](https://help.aliyun.com/document_detail/26606.html) and [Specifications of data synchronization instances](https://help.aliyun.com/document_detail/26605.html).
    std::shared_ptr<string> dtsJobClass_ = nullptr;
    // The synchronization direction. Valid values:
    // 
    // *   **Forward**
    // *   **Reverse**
    // 
    // > This parameter is returned only if the topology of the data synchronization instance is two-way synchronization.
    std::shared_ptr<string> dtsJobDirection_ = nullptr;
    // The ID of the data migration, data synchronization, or change tracking task.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The name of the data migration, data synchronization, or change tracking task.
    std::shared_ptr<string> dtsJobName_ = nullptr;
    // The dynamic part in the error message. The value of this parameter is used to replace **%s** in the value of **ErrMessage**.
    // 
    // > For example, if the return value of **ErrMessage** is **The Value of Input Parameter %s is not valid** and the value of **DynamicMessage** is **DtsJobId**, the specified value of **DtsJobId** is invalid.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // The end of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTimestamp_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The error message returned if the task failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The operator information of the ETL task.
    // 
    // > This parameter is returned only if you query the details of an ETL task.
    std::shared_ptr<string> etlCalculator_ = nullptr;
    // The time when the instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // > This parameter is returned only if the return value of **PayType** is **PrePaid**.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The time when the task was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The returned HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> initCheckpoint_ = nullptr;
    // The type of the DTS task. Valid values:
    // 
    // *   **sync**: a data synchronization task.
    // *   **subSync**: a subtask generated when the objects to be synchronized are modified.
    // 
    // > In most cases, this parameter is returned together with **TaskType**.
    std::shared_ptr<string> jobType_ = nullptr;
    // The timestamp when the task was last updated.
    std::shared_ptr<string> lastUpdateTime_ = nullptr;
    // The maximum number of DUs.
    // 
    // > This parameter is supported only for serverless instances.
    std::shared_ptr<double> maxDu_ = nullptr;
    // The migration types or initial synchronization types.
    std::shared_ptr<DescribeDtsJobDetailResponseBodyMigrationMode> migrationMode_ = nullptr;
    // The minimum number of DUs.
    // 
    // > This parameter is supported only for serverless instances.
    std::shared_ptr<double> minDu_ = nullptr;
    // The billing method of the DTS instance. Valid values:
    // 
    // *   **PrePaid**: subscription.
    // *   **PostPaid**: pay-as-you-go.
    std::shared_ptr<string> payType_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, such as whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
    std::shared_ptr<string> reserved_ = nullptr;
    // The resource group name.
    std::shared_ptr<string> resourceGroupDisplayName_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The information about the retries performed by DTS due to an exception.
    std::shared_ptr<DescribeDtsJobDetailResponseBodyRetryState> retryState_ = nullptr;
    // The connection settings of the source instance.
    std::shared_ptr<DescribeDtsJobDetailResponseBodySourceEndpoint> sourceEndpoint_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
    // The information about the subtasks in the current distributed task. If the DTS task is not a distributed task, the value of this parameter is null.
    // 
    // > This parameter is available only if the DTS task is a data synchronization task.
    std::shared_ptr<vector<DescribeDtsJobDetailResponseBodySubDistributedJob>> subDistributedJob_ = nullptr;
    // The information about the subtasks in the current data synchronization task.
    std::shared_ptr<vector<DescribeDtsJobDetailResponseBodySubSyncJob>> subSyncJob_ = nullptr;
    // The topic of the change tracking instance.
    // 
    // > This parameter is returned only if your change tracking instances are of the new version and you have called the [CreateConsumerGroup](https://help.aliyun.com/document_detail/122863.html) operation to create a consumer group.
    std::shared_ptr<string> subscribeTopic_ = nullptr;
    // The type of data for change tracking.
    std::shared_ptr<DescribeDtsJobDetailResponseBodySubscriptionDataType> subscriptionDataType_ = nullptr;
    // The endpoint of the change tracking instance.
    std::shared_ptr<DescribeDtsJobDetailResponseBodySubscriptionHost> subscriptionHost_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The synchronization direction. Valid values:
    // 
    // *   **Forward**
    // *   **Reverse**
    // 
    // > 
    // 
    // *   The default value is **Forward**.
    // *   The value **Reverse** takes effect only if the topology of the data synchronization instance is two-way synchronization.
    std::shared_ptr<string> synchronizationDirection_ = nullptr;
    // The type of the task.
    // 
    // > In most cases, this parameter is returned together with **JobType**.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
