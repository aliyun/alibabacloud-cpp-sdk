// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBSYNCJOB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBSYNCJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobDataEtlStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobDataInitializationStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobDataSynchronizationStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobDestinationEndpoint.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobMigrationMode.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobPerformance.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobPrecheckStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobRetryState.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobReverseJob.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobSourceEndpoint.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobStructureInitializationStatus.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionDataType.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionHost.hpp>
#include <alibabacloud/models/DescribeDtsJobDetailResponseBodySubSyncJobTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobDetailResponseBodySubSyncJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobDetailResponseBodySubSyncJob& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobDetailResponseBodySubSyncJob& obj) { 
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
    DescribeDtsJobDetailResponseBodySubSyncJob() = default ;
    DescribeDtsJobDetailResponseBodySubSyncJob(const DescribeDtsJobDetailResponseBodySubSyncJob &) = default ;
    DescribeDtsJobDetailResponseBodySubSyncJob(DescribeDtsJobDetailResponseBodySubSyncJob &&) = default ;
    DescribeDtsJobDetailResponseBodySubSyncJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobDetailResponseBodySubSyncJob() = default ;
    DescribeDtsJobDetailResponseBodySubSyncJob& operator=(const DescribeDtsJobDetailResponseBodySubSyncJob &) = default ;
    DescribeDtsJobDetailResponseBodySubSyncJob& operator=(DescribeDtsJobDetailResponseBodySubSyncJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->beginTimestamp_ == nullptr && return this->checkpoint_ == nullptr && return this->consumptionCheckpoint_ == nullptr && return this->consumptionClient_ == nullptr && return this->createTime_ == nullptr
        && return this->dataEtlStatus_ == nullptr && return this->dataInitializationStatus_ == nullptr && return this->dataSynchronizationStatus_ == nullptr && return this->databaseCount_ == nullptr && return this->dbObject_ == nullptr
        && return this->delay_ == nullptr && return this->destNetType_ == nullptr && return this->destinationEndpoint_ == nullptr && return this->dtsInstanceID_ == nullptr && return this->dtsJobClass_ == nullptr
        && return this->dtsJobDirection_ == nullptr && return this->dtsJobId_ == nullptr && return this->dtsJobName_ == nullptr && return this->endTimestamp_ == nullptr && return this->errorMessage_ == nullptr
        && return this->etlCalculator_ == nullptr && return this->expireTime_ == nullptr && return this->finishTime_ == nullptr && return this->groupId_ == nullptr && return this->isDemoJob_ == nullptr
        && return this->jobType_ == nullptr && return this->maxDu_ == nullptr && return this->migrationMode_ == nullptr && return this->minDu_ == nullptr && return this->originType_ == nullptr
        && return this->payType_ == nullptr && return this->performance_ == nullptr && return this->precheckStatus_ == nullptr && return this->reserved_ == nullptr && return this->retryState_ == nullptr
        && return this->reverseJob_ == nullptr && return this->sourceEndpoint_ == nullptr && return this->status_ == nullptr && return this->structureInitializationStatus_ == nullptr && return this->subSyncJob_ == nullptr
        && return this->subscribeTopic_ == nullptr && return this->subscriptionDataType_ == nullptr && return this->subscriptionHost_ == nullptr && return this->synchronizationDirection_ == nullptr && return this->tagList_ == nullptr
        && return this->taskType_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // beginTimestamp Field Functions 
    bool hasBeginTimestamp() const { return this->beginTimestamp_ != nullptr;};
    void deleteBeginTimestamp() { this->beginTimestamp_ = nullptr;};
    inline string beginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(beginTimestamp_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setBeginTimestamp(string beginTimestamp) { DARABONBA_PTR_SET_VALUE(beginTimestamp_, beginTimestamp) };


    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline string checkpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // consumptionCheckpoint Field Functions 
    bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
    void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
    inline string consumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


    // consumptionClient Field Functions 
    bool hasConsumptionClient() const { return this->consumptionClient_ != nullptr;};
    void deleteConsumptionClient() { this->consumptionClient_ = nullptr;};
    inline string consumptionClient() const { DARABONBA_PTR_GET_DEFAULT(consumptionClient_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setConsumptionClient(string consumptionClient) { DARABONBA_PTR_SET_VALUE(consumptionClient_, consumptionClient) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataEtlStatus Field Functions 
    bool hasDataEtlStatus() const { return this->dataEtlStatus_ != nullptr;};
    void deleteDataEtlStatus() { this->dataEtlStatus_ = nullptr;};
    inline const Models::DescribeDtsJobDetailResponseBodySubSyncJobDataEtlStatus & dataEtlStatus() const { DARABONBA_PTR_GET_CONST(dataEtlStatus_, Models::DescribeDtsJobDetailResponseBodySubSyncJobDataEtlStatus) };
    inline Models::DescribeDtsJobDetailResponseBodySubSyncJobDataEtlStatus dataEtlStatus() { DARABONBA_PTR_GET(dataEtlStatus_, Models::DescribeDtsJobDetailResponseBodySubSyncJobDataEtlStatus) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDataEtlStatus(const Models::DescribeDtsJobDetailResponseBodySubSyncJobDataEtlStatus & dataEtlStatus) { DARABONBA_PTR_SET_VALUE(dataEtlStatus_, dataEtlStatus) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDataEtlStatus(Models::DescribeDtsJobDetailResponseBodySubSyncJobDataEtlStatus && dataEtlStatus) { DARABONBA_PTR_SET_RVALUE(dataEtlStatus_, dataEtlStatus) };


    // dataInitializationStatus Field Functions 
    bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
    void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobDetailResponseBodySubSyncJobDataInitializationStatus & dataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, Models::DescribeDtsJobDetailResponseBodySubSyncJobDataInitializationStatus) };
    inline Models::DescribeDtsJobDetailResponseBodySubSyncJobDataInitializationStatus dataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, Models::DescribeDtsJobDetailResponseBodySubSyncJobDataInitializationStatus) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDataInitializationStatus(const Models::DescribeDtsJobDetailResponseBodySubSyncJobDataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDataInitializationStatus(Models::DescribeDtsJobDetailResponseBodySubSyncJobDataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


    // dataSynchronizationStatus Field Functions 
    bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
    void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobDetailResponseBodySubSyncJobDataSynchronizationStatus & dataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, Models::DescribeDtsJobDetailResponseBodySubSyncJobDataSynchronizationStatus) };
    inline Models::DescribeDtsJobDetailResponseBodySubSyncJobDataSynchronizationStatus dataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, Models::DescribeDtsJobDetailResponseBodySubSyncJobDataSynchronizationStatus) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDataSynchronizationStatus(const Models::DescribeDtsJobDetailResponseBodySubSyncJobDataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDataSynchronizationStatus(Models::DescribeDtsJobDetailResponseBodySubSyncJobDataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


    // databaseCount Field Functions 
    bool hasDatabaseCount() const { return this->databaseCount_ != nullptr;};
    void deleteDatabaseCount() { this->databaseCount_ = nullptr;};
    inline int32_t databaseCount() const { DARABONBA_PTR_GET_DEFAULT(databaseCount_, 0) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDatabaseCount(int32_t databaseCount) { DARABONBA_PTR_SET_VALUE(databaseCount_, databaseCount) };


    // dbObject Field Functions 
    bool hasDbObject() const { return this->dbObject_ != nullptr;};
    void deleteDbObject() { this->dbObject_ = nullptr;};
    inline string dbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int64_t delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // destNetType Field Functions 
    bool hasDestNetType() const { return this->destNetType_ != nullptr;};
    void deleteDestNetType() { this->destNetType_ = nullptr;};
    inline string destNetType() const { DARABONBA_PTR_GET_DEFAULT(destNetType_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDestNetType(string destNetType) { DARABONBA_PTR_SET_VALUE(destNetType_, destNetType) };


    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const Models::DescribeDtsJobDetailResponseBodySubSyncJobDestinationEndpoint & destinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, Models::DescribeDtsJobDetailResponseBodySubSyncJobDestinationEndpoint) };
    inline Models::DescribeDtsJobDetailResponseBodySubSyncJobDestinationEndpoint destinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, Models::DescribeDtsJobDetailResponseBodySubSyncJobDestinationEndpoint) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDestinationEndpoint(const Models::DescribeDtsJobDetailResponseBodySubSyncJobDestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDestinationEndpoint(Models::DescribeDtsJobDetailResponseBodySubSyncJobDestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // dtsInstanceID Field Functions 
    bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
    void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
    inline string dtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


    // dtsJobClass Field Functions 
    bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
    void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
    inline string dtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


    // dtsJobDirection Field Functions 
    bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
    void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
    inline string dtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dtsJobName Field Functions 
    bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
    void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
    inline string dtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline string endTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // etlCalculator Field Functions 
    bool hasEtlCalculator() const { return this->etlCalculator_ != nullptr;};
    void deleteEtlCalculator() { this->etlCalculator_ = nullptr;};
    inline string etlCalculator() const { DARABONBA_PTR_GET_DEFAULT(etlCalculator_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setEtlCalculator(string etlCalculator) { DARABONBA_PTR_SET_VALUE(etlCalculator_, etlCalculator) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isDemoJob Field Functions 
    bool hasIsDemoJob() const { return this->isDemoJob_ != nullptr;};
    void deleteIsDemoJob() { this->isDemoJob_ = nullptr;};
    inline bool isDemoJob() const { DARABONBA_PTR_GET_DEFAULT(isDemoJob_, false) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setIsDemoJob(bool isDemoJob) { DARABONBA_PTR_SET_VALUE(isDemoJob_, isDemoJob) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // maxDu Field Functions 
    bool hasMaxDu() const { return this->maxDu_ != nullptr;};
    void deleteMaxDu() { this->maxDu_ = nullptr;};
    inline double maxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0.0) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setMaxDu(double maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


    // migrationMode Field Functions 
    bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
    void deleteMigrationMode() { this->migrationMode_ = nullptr;};
    inline const Models::DescribeDtsJobDetailResponseBodySubSyncJobMigrationMode & migrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, Models::DescribeDtsJobDetailResponseBodySubSyncJobMigrationMode) };
    inline Models::DescribeDtsJobDetailResponseBodySubSyncJobMigrationMode migrationMode() { DARABONBA_PTR_GET(migrationMode_, Models::DescribeDtsJobDetailResponseBodySubSyncJobMigrationMode) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setMigrationMode(const Models::DescribeDtsJobDetailResponseBodySubSyncJobMigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setMigrationMode(Models::DescribeDtsJobDetailResponseBodySubSyncJobMigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


    // minDu Field Functions 
    bool hasMinDu() const { return this->minDu_ != nullptr;};
    void deleteMinDu() { this->minDu_ = nullptr;};
    inline double minDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0.0) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setMinDu(double minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


    // originType Field Functions 
    bool hasOriginType() const { return this->originType_ != nullptr;};
    void deleteOriginType() { this->originType_ = nullptr;};
    inline string originType() const { DARABONBA_PTR_GET_DEFAULT(originType_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setOriginType(string originType) { DARABONBA_PTR_SET_VALUE(originType_, originType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // performance Field Functions 
    bool hasPerformance() const { return this->performance_ != nullptr;};
    void deletePerformance() { this->performance_ = nullptr;};
    inline const Models::DescribeDtsJobDetailResponseBodySubSyncJobPerformance & performance() const { DARABONBA_PTR_GET_CONST(performance_, Models::DescribeDtsJobDetailResponseBodySubSyncJobPerformance) };
    inline Models::DescribeDtsJobDetailResponseBodySubSyncJobPerformance performance() { DARABONBA_PTR_GET(performance_, Models::DescribeDtsJobDetailResponseBodySubSyncJobPerformance) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setPerformance(const Models::DescribeDtsJobDetailResponseBodySubSyncJobPerformance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setPerformance(Models::DescribeDtsJobDetailResponseBodySubSyncJobPerformance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


    // precheckStatus Field Functions 
    bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
    void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
    inline const Models::DescribeDtsJobDetailResponseBodySubSyncJobPrecheckStatus & precheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, Models::DescribeDtsJobDetailResponseBodySubSyncJobPrecheckStatus) };
    inline Models::DescribeDtsJobDetailResponseBodySubSyncJobPrecheckStatus precheckStatus() { DARABONBA_PTR_GET(precheckStatus_, Models::DescribeDtsJobDetailResponseBodySubSyncJobPrecheckStatus) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setPrecheckStatus(const Models::DescribeDtsJobDetailResponseBodySubSyncJobPrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setPrecheckStatus(Models::DescribeDtsJobDetailResponseBodySubSyncJobPrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline string reserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // retryState Field Functions 
    bool hasRetryState() const { return this->retryState_ != nullptr;};
    void deleteRetryState() { this->retryState_ = nullptr;};
    inline const Models::DescribeDtsJobDetailResponseBodySubSyncJobRetryState & retryState() const { DARABONBA_PTR_GET_CONST(retryState_, Models::DescribeDtsJobDetailResponseBodySubSyncJobRetryState) };
    inline Models::DescribeDtsJobDetailResponseBodySubSyncJobRetryState retryState() { DARABONBA_PTR_GET(retryState_, Models::DescribeDtsJobDetailResponseBodySubSyncJobRetryState) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setRetryState(const Models::DescribeDtsJobDetailResponseBodySubSyncJobRetryState & retryState) { DARABONBA_PTR_SET_VALUE(retryState_, retryState) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setRetryState(Models::DescribeDtsJobDetailResponseBodySubSyncJobRetryState && retryState) { DARABONBA_PTR_SET_RVALUE(retryState_, retryState) };


    // reverseJob Field Functions 
    bool hasReverseJob() const { return this->reverseJob_ != nullptr;};
    void deleteReverseJob() { this->reverseJob_ = nullptr;};
    inline const Models::DescribeDtsJobDetailResponseBodySubSyncJobReverseJob & reverseJob() const { DARABONBA_PTR_GET_CONST(reverseJob_, Models::DescribeDtsJobDetailResponseBodySubSyncJobReverseJob) };
    inline Models::DescribeDtsJobDetailResponseBodySubSyncJobReverseJob reverseJob() { DARABONBA_PTR_GET(reverseJob_, Models::DescribeDtsJobDetailResponseBodySubSyncJobReverseJob) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setReverseJob(const Models::DescribeDtsJobDetailResponseBodySubSyncJobReverseJob & reverseJob) { DARABONBA_PTR_SET_VALUE(reverseJob_, reverseJob) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setReverseJob(Models::DescribeDtsJobDetailResponseBodySubSyncJobReverseJob && reverseJob) { DARABONBA_PTR_SET_RVALUE(reverseJob_, reverseJob) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const Models::DescribeDtsJobDetailResponseBodySubSyncJobSourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, Models::DescribeDtsJobDetailResponseBodySubSyncJobSourceEndpoint) };
    inline Models::DescribeDtsJobDetailResponseBodySubSyncJobSourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, Models::DescribeDtsJobDetailResponseBodySubSyncJobSourceEndpoint) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setSourceEndpoint(const Models::DescribeDtsJobDetailResponseBodySubSyncJobSourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setSourceEndpoint(Models::DescribeDtsJobDetailResponseBodySubSyncJobSourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // structureInitializationStatus Field Functions 
    bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
    void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobDetailResponseBodySubSyncJobStructureInitializationStatus & structureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, Models::DescribeDtsJobDetailResponseBodySubSyncJobStructureInitializationStatus) };
    inline Models::DescribeDtsJobDetailResponseBodySubSyncJobStructureInitializationStatus structureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, Models::DescribeDtsJobDetailResponseBodySubSyncJobStructureInitializationStatus) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setStructureInitializationStatus(const Models::DescribeDtsJobDetailResponseBodySubSyncJobStructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setStructureInitializationStatus(Models::DescribeDtsJobDetailResponseBodySubSyncJobStructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


    // subSyncJob Field Functions 
    bool hasSubSyncJob() const { return this->subSyncJob_ != nullptr;};
    void deleteSubSyncJob() { this->subSyncJob_ = nullptr;};
    inline const vector<Darabonba::Json> & subSyncJob() const { DARABONBA_PTR_GET_CONST(subSyncJob_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> subSyncJob() { DARABONBA_PTR_GET(subSyncJob_, vector<Darabonba::Json>) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setSubSyncJob(const vector<Darabonba::Json> & subSyncJob) { DARABONBA_PTR_SET_VALUE(subSyncJob_, subSyncJob) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setSubSyncJob(vector<Darabonba::Json> && subSyncJob) { DARABONBA_PTR_SET_RVALUE(subSyncJob_, subSyncJob) };


    // subscribeTopic Field Functions 
    bool hasSubscribeTopic() const { return this->subscribeTopic_ != nullptr;};
    void deleteSubscribeTopic() { this->subscribeTopic_ = nullptr;};
    inline string subscribeTopic() const { DARABONBA_PTR_GET_DEFAULT(subscribeTopic_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setSubscribeTopic(string subscribeTopic) { DARABONBA_PTR_SET_VALUE(subscribeTopic_, subscribeTopic) };


    // subscriptionDataType Field Functions 
    bool hasSubscriptionDataType() const { return this->subscriptionDataType_ != nullptr;};
    void deleteSubscriptionDataType() { this->subscriptionDataType_ = nullptr;};
    inline const Models::DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionDataType & subscriptionDataType() const { DARABONBA_PTR_GET_CONST(subscriptionDataType_, Models::DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionDataType) };
    inline Models::DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionDataType subscriptionDataType() { DARABONBA_PTR_GET(subscriptionDataType_, Models::DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionDataType) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setSubscriptionDataType(const Models::DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionDataType & subscriptionDataType) { DARABONBA_PTR_SET_VALUE(subscriptionDataType_, subscriptionDataType) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setSubscriptionDataType(Models::DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionDataType && subscriptionDataType) { DARABONBA_PTR_SET_RVALUE(subscriptionDataType_, subscriptionDataType) };


    // subscriptionHost Field Functions 
    bool hasSubscriptionHost() const { return this->subscriptionHost_ != nullptr;};
    void deleteSubscriptionHost() { this->subscriptionHost_ = nullptr;};
    inline const Models::DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionHost & subscriptionHost() const { DARABONBA_PTR_GET_CONST(subscriptionHost_, Models::DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionHost) };
    inline Models::DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionHost subscriptionHost() { DARABONBA_PTR_GET(subscriptionHost_, Models::DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionHost) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setSubscriptionHost(const Models::DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionHost & subscriptionHost) { DARABONBA_PTR_SET_VALUE(subscriptionHost_, subscriptionHost) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setSubscriptionHost(Models::DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionHost && subscriptionHost) { DARABONBA_PTR_SET_RVALUE(subscriptionHost_, subscriptionHost) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string synchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<Models::DescribeDtsJobDetailResponseBodySubSyncJobTagList> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<Models::DescribeDtsJobDetailResponseBodySubSyncJobTagList>) };
    inline vector<Models::DescribeDtsJobDetailResponseBodySubSyncJobTagList> tagList() { DARABONBA_PTR_GET(tagList_, vector<Models::DescribeDtsJobDetailResponseBodySubSyncJobTagList>) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setTagList(const vector<Models::DescribeDtsJobDetailResponseBodySubSyncJobTagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setTagList(vector<Models::DescribeDtsJobDetailResponseBodySubSyncJobTagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJob& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // Indicates whether the new change tracking feature is used.
    // 
    // > This parameter is returned only for change tracking instances of the new version.
    std::shared_ptr<string> appName_ = nullptr;
    // The start of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> beginTimestamp_ = nullptr;
    // The start offset of incremental data migration or data synchronization. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<string> checkpoint_ = nullptr;
    // The consumption checkpoint of the change tracking instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> consumptionCheckpoint_ = nullptr;
    // The downstream client information in the following format: \\<IP address of the downstream client>:\\<Random ID generated by DTS>.
    std::shared_ptr<string> consumptionClient_ = nullptr;
    // The time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The state of the ETL task.
    // 
    // > This parameter collection is returned only if an ETL task is configured.
    std::shared_ptr<Models::DescribeDtsJobDetailResponseBodySubSyncJobDataEtlStatus> dataEtlStatus_ = nullptr;
    // The state of full data migration or initial full data synchronization.
    std::shared_ptr<Models::DescribeDtsJobDetailResponseBodySubSyncJobDataInitializationStatus> dataInitializationStatus_ = nullptr;
    // The state of incremental data migration or synchronization.
    std::shared_ptr<Models::DescribeDtsJobDetailResponseBodySubSyncJobDataSynchronizationStatus> dataSynchronizationStatus_ = nullptr;
    // The number of ApsaraDB RDS for MySQL instances that are attached to the source PolarDB-X 1.0 instance.
    std::shared_ptr<int32_t> databaseCount_ = nullptr;
    // The objects of the data migration, data synchronization, or change tracking task. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
    std::shared_ptr<string> dbObject_ = nullptr;
    // The latency of incremental data migration or synchronization. Unit: milliseconds.
    std::shared_ptr<int64_t> delay_ = nullptr;
    // The network type of the consumer client. Valid values:
    // 
    // *   **CLASSIC**: classic network.
    // *   **VPC**: VPC.
    std::shared_ptr<string> destNetType_ = nullptr;
    // The connection settings of the destination instance.
    std::shared_ptr<Models::DescribeDtsJobDetailResponseBodySubSyncJobDestinationEndpoint> destinationEndpoint_ = nullptr;
    // The DTS instance ID.
    std::shared_ptr<string> dtsInstanceID_ = nullptr;
    // The instance class.
    std::shared_ptr<string> dtsJobClass_ = nullptr;
    // The synchronization direction. Valid values:
    // 
    // *   **Forward**
    // *   **Reverse**
    // 
    // > This parameter is returned only if the topology of the data synchronization instance is two-way synchronization.
    std::shared_ptr<string> dtsJobDirection_ = nullptr;
    // The DTS task ID.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The DTS instance name.
    std::shared_ptr<string> dtsJobName_ = nullptr;
    // The end of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTimestamp_ = nullptr;
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
    // Indicates whether the task is a subtask. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isDemoJob_ = nullptr;
    // The type of the DTS task. Valid values:
    // 
    // *   **online**: data migration task.
    // *   **SYNC**: data synchronization task.
    // *   **SUBSCRIBE**: change tracking task.
    std::shared_ptr<string> jobType_ = nullptr;
    // The maximum number of DUs.
    // 
    // > This parameter is supported only for serverless instances.
    std::shared_ptr<double> maxDu_ = nullptr;
    // The migration types or initial synchronization types.
    std::shared_ptr<Models::DescribeDtsJobDetailResponseBodySubSyncJobMigrationMode> migrationMode_ = nullptr;
    // The minimum number of DUs.
    // 
    // > This parameter is supported only for serverless instances.
    std::shared_ptr<double> minDu_ = nullptr;
    // The source of the task. Valid values:
    // 
    // *   **PTS**
    // *   **DMS**
    // *   **DTS**
    std::shared_ptr<string> originType_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   **PrePaid**: subscription.
    // *   **PostPaid**: pay-as-you-go.
    std::shared_ptr<string> payType_ = nullptr;
    // The performance of the data migration or synchronization instance.
    std::shared_ptr<Models::DescribeDtsJobDetailResponseBodySubSyncJobPerformance> performance_ = nullptr;
    // The precheck state.
    std::shared_ptr<Models::DescribeDtsJobDetailResponseBodySubSyncJobPrecheckStatus> precheckStatus_ = nullptr;
    // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, such as whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
    std::shared_ptr<string> reserved_ = nullptr;
    // The information about the retries performed by DTS due to an exception.
    std::shared_ptr<Models::DescribeDtsJobDetailResponseBodySubSyncJobRetryState> retryState_ = nullptr;
    // The details of the data synchronization task in the reverse direction.
    // 
    // > This parameter is returned only for two-way data synchronization tasks.
    std::shared_ptr<Models::DescribeDtsJobDetailResponseBodySubSyncJobReverseJob> reverseJob_ = nullptr;
    // The connection settings of the source instance.
    std::shared_ptr<Models::DescribeDtsJobDetailResponseBodySubSyncJobSourceEndpoint> sourceEndpoint_ = nullptr;
    // The state of initial schema synchronization. Valid values:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Migrating**: The task is in progress.
    // *   **Failed**: The task failed.
    // *   **Finished**: The task is complete.
    std::shared_ptr<string> status_ = nullptr;
    // Initialization status of library table structure.
    std::shared_ptr<Models::DescribeDtsJobDetailResponseBodySubSyncJobStructureInitializationStatus> structureInitializationStatus_ = nullptr;
    // The information about the subtasks in the current data synchronization task.
    std::shared_ptr<vector<Darabonba::Json>> subSyncJob_ = nullptr;
    // The topic of the change tracking instance.
    // 
    // > This parameter is returned only if your change tracking instances are of the new version and you have called the [CreateConsumerGroup](https://help.aliyun.com/document_detail/122863.html) operation to create a consumer group.
    std::shared_ptr<string> subscribeTopic_ = nullptr;
    // The type of data for change tracking.
    std::shared_ptr<Models::DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionDataType> subscriptionDataType_ = nullptr;
    // The endpoint of the change tracking instance.
    std::shared_ptr<Models::DescribeDtsJobDetailResponseBodySubSyncJobSubscriptionHost> subscriptionHost_ = nullptr;
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
    // The tags of the task.
    std::shared_ptr<vector<Models::DescribeDtsJobDetailResponseBodySubSyncJobTagList>> tagList_ = nullptr;
    // The task type.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
