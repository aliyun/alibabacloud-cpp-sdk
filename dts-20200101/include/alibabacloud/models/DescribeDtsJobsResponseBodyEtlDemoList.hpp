// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYETLDEMOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYETLDEMOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListDataEtlStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListDataInitializationStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListDataSynchronizationStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListDestinationEndpoint.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListMigrationMode.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListPerformance.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListRetryState.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListReverseJob.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListSourceEndpoint.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListStructureInitializationStatus.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsResponseBodyEtlDemoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsResponseBodyEtlDemoList& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BeginTimestamp, beginTimestamp_);
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
      DARABONBA_PTR_TO_JSON(ConsumptionClient, consumptionClient_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataEtlStatus, dataEtlStatus_);
      DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_TO_JSON(DbObject, dbObject_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
      DARABONBA_PTR_TO_JSON(DtsJobClass, dtsJobClass_);
      DARABONBA_PTR_TO_JSON(DtsJobDirection, dtsJobDirection_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_TO_JSON(OriginType, originType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Performance, performance_);
      DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_TO_JSON(Reserved, reserved_);
      DARABONBA_PTR_TO_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RetryState, retryState_);
      DARABONBA_PTR_TO_JSON(ReverseJob, reverseJob_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsResponseBodyEtlDemoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BeginTimestamp, beginTimestamp_);
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
      DARABONBA_PTR_FROM_JSON(ConsumptionClient, consumptionClient_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataEtlStatus, dataEtlStatus_);
      DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_FROM_JSON(DbObject, dbObject_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
      DARABONBA_PTR_FROM_JSON(DtsJobClass, dtsJobClass_);
      DARABONBA_PTR_FROM_JSON(DtsJobDirection, dtsJobDirection_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_FROM_JSON(OriginType, originType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Performance, performance_);
      DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RetryState, retryState_);
      DARABONBA_PTR_FROM_JSON(ReverseJob, reverseJob_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
    };
    DescribeDtsJobsResponseBodyEtlDemoList() = default ;
    DescribeDtsJobsResponseBodyEtlDemoList(const DescribeDtsJobsResponseBodyEtlDemoList &) = default ;
    DescribeDtsJobsResponseBodyEtlDemoList(DescribeDtsJobsResponseBodyEtlDemoList &&) = default ;
    DescribeDtsJobsResponseBodyEtlDemoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsResponseBodyEtlDemoList() = default ;
    DescribeDtsJobsResponseBodyEtlDemoList& operator=(const DescribeDtsJobsResponseBodyEtlDemoList &) = default ;
    DescribeDtsJobsResponseBodyEtlDemoList& operator=(DescribeDtsJobsResponseBodyEtlDemoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->beginTimestamp_ != nullptr && this->checkpoint_ != nullptr && this->consumptionCheckpoint_ != nullptr && this->consumptionClient_ != nullptr && this->createTime_ != nullptr
        && this->dataEtlStatus_ != nullptr && this->dataInitializationStatus_ != nullptr && this->dataSynchronizationStatus_ != nullptr && this->dbObject_ != nullptr && this->delay_ != nullptr
        && this->destinationEndpoint_ != nullptr && this->dtsInstanceID_ != nullptr && this->dtsJobClass_ != nullptr && this->dtsJobDirection_ != nullptr && this->dtsJobId_ != nullptr
        && this->dtsJobName_ != nullptr && this->endTimestamp_ != nullptr && this->errorMessage_ != nullptr && this->etlSafeCheckpoint_ != nullptr && this->expireTime_ != nullptr
        && this->jobType_ != nullptr && this->migrationMode_ != nullptr && this->originType_ != nullptr && this->payType_ != nullptr && this->performance_ != nullptr
        && this->precheckStatus_ != nullptr && this->reserved_ != nullptr && this->resourceGroupDisplayName_ != nullptr && this->resourceGroupId_ != nullptr && this->retryState_ != nullptr
        && this->reverseJob_ != nullptr && this->sourceEndpoint_ != nullptr && this->status_ != nullptr && this->structureInitializationStatus_ != nullptr && this->tagList_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // beginTimestamp Field Functions 
    bool hasBeginTimestamp() const { return this->beginTimestamp_ != nullptr;};
    void deleteBeginTimestamp() { this->beginTimestamp_ = nullptr;};
    inline string beginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(beginTimestamp_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setBeginTimestamp(string beginTimestamp) { DARABONBA_PTR_SET_VALUE(beginTimestamp_, beginTimestamp) };


    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline string checkpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // consumptionCheckpoint Field Functions 
    bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
    void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
    inline string consumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


    // consumptionClient Field Functions 
    bool hasConsumptionClient() const { return this->consumptionClient_ != nullptr;};
    void deleteConsumptionClient() { this->consumptionClient_ = nullptr;};
    inline string consumptionClient() const { DARABONBA_PTR_GET_DEFAULT(consumptionClient_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setConsumptionClient(string consumptionClient) { DARABONBA_PTR_SET_VALUE(consumptionClient_, consumptionClient) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataEtlStatus Field Functions 
    bool hasDataEtlStatus() const { return this->dataEtlStatus_ != nullptr;};
    void deleteDataEtlStatus() { this->dataEtlStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListDataEtlStatus & dataEtlStatus() const { DARABONBA_PTR_GET_CONST(dataEtlStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListDataEtlStatus) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListDataEtlStatus dataEtlStatus() { DARABONBA_PTR_GET(dataEtlStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListDataEtlStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDataEtlStatus(const Models::DescribeDtsJobsResponseBodyEtlDemoListDataEtlStatus & dataEtlStatus) { DARABONBA_PTR_SET_VALUE(dataEtlStatus_, dataEtlStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDataEtlStatus(Models::DescribeDtsJobsResponseBodyEtlDemoListDataEtlStatus && dataEtlStatus) { DARABONBA_PTR_SET_RVALUE(dataEtlStatus_, dataEtlStatus) };


    // dataInitializationStatus Field Functions 
    bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
    void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListDataInitializationStatus & dataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListDataInitializationStatus) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListDataInitializationStatus dataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListDataInitializationStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDataInitializationStatus(const Models::DescribeDtsJobsResponseBodyEtlDemoListDataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDataInitializationStatus(Models::DescribeDtsJobsResponseBodyEtlDemoListDataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


    // dataSynchronizationStatus Field Functions 
    bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
    void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListDataSynchronizationStatus & dataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListDataSynchronizationStatus) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListDataSynchronizationStatus dataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListDataSynchronizationStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDataSynchronizationStatus(const Models::DescribeDtsJobsResponseBodyEtlDemoListDataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDataSynchronizationStatus(Models::DescribeDtsJobsResponseBodyEtlDemoListDataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


    // dbObject Field Functions 
    bool hasDbObject() const { return this->dbObject_ != nullptr;};
    void deleteDbObject() { this->dbObject_ = nullptr;};
    inline string dbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int64_t delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListDestinationEndpoint & destinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, Models::DescribeDtsJobsResponseBodyEtlDemoListDestinationEndpoint) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListDestinationEndpoint destinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, Models::DescribeDtsJobsResponseBodyEtlDemoListDestinationEndpoint) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDestinationEndpoint(const Models::DescribeDtsJobsResponseBodyEtlDemoListDestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDestinationEndpoint(Models::DescribeDtsJobsResponseBodyEtlDemoListDestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // dtsInstanceID Field Functions 
    bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
    void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
    inline string dtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


    // dtsJobClass Field Functions 
    bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
    void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
    inline string dtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


    // dtsJobDirection Field Functions 
    bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
    void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
    inline string dtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dtsJobName Field Functions 
    bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
    void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
    inline string dtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline string endTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // etlSafeCheckpoint Field Functions 
    bool hasEtlSafeCheckpoint() const { return this->etlSafeCheckpoint_ != nullptr;};
    void deleteEtlSafeCheckpoint() { this->etlSafeCheckpoint_ = nullptr;};
    inline string etlSafeCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(etlSafeCheckpoint_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setEtlSafeCheckpoint(string etlSafeCheckpoint) { DARABONBA_PTR_SET_VALUE(etlSafeCheckpoint_, etlSafeCheckpoint) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // migrationMode Field Functions 
    bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
    void deleteMigrationMode() { this->migrationMode_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListMigrationMode & migrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, Models::DescribeDtsJobsResponseBodyEtlDemoListMigrationMode) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListMigrationMode migrationMode() { DARABONBA_PTR_GET(migrationMode_, Models::DescribeDtsJobsResponseBodyEtlDemoListMigrationMode) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setMigrationMode(const Models::DescribeDtsJobsResponseBodyEtlDemoListMigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setMigrationMode(Models::DescribeDtsJobsResponseBodyEtlDemoListMigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


    // originType Field Functions 
    bool hasOriginType() const { return this->originType_ != nullptr;};
    void deleteOriginType() { this->originType_ = nullptr;};
    inline string originType() const { DARABONBA_PTR_GET_DEFAULT(originType_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setOriginType(string originType) { DARABONBA_PTR_SET_VALUE(originType_, originType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // performance Field Functions 
    bool hasPerformance() const { return this->performance_ != nullptr;};
    void deletePerformance() { this->performance_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListPerformance & performance() const { DARABONBA_PTR_GET_CONST(performance_, Models::DescribeDtsJobsResponseBodyEtlDemoListPerformance) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListPerformance performance() { DARABONBA_PTR_GET(performance_, Models::DescribeDtsJobsResponseBodyEtlDemoListPerformance) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setPerformance(const Models::DescribeDtsJobsResponseBodyEtlDemoListPerformance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setPerformance(Models::DescribeDtsJobsResponseBodyEtlDemoListPerformance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


    // precheckStatus Field Functions 
    bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
    void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus & precheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus precheckStatus() { DARABONBA_PTR_GET(precheckStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setPrecheckStatus(const Models::DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setPrecheckStatus(Models::DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline string reserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // resourceGroupDisplayName Field Functions 
    bool hasResourceGroupDisplayName() const { return this->resourceGroupDisplayName_ != nullptr;};
    void deleteResourceGroupDisplayName() { this->resourceGroupDisplayName_ = nullptr;};
    inline string resourceGroupDisplayName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupDisplayName_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setResourceGroupDisplayName(string resourceGroupDisplayName) { DARABONBA_PTR_SET_VALUE(resourceGroupDisplayName_, resourceGroupDisplayName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retryState Field Functions 
    bool hasRetryState() const { return this->retryState_ != nullptr;};
    void deleteRetryState() { this->retryState_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListRetryState & retryState() const { DARABONBA_PTR_GET_CONST(retryState_, Models::DescribeDtsJobsResponseBodyEtlDemoListRetryState) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListRetryState retryState() { DARABONBA_PTR_GET(retryState_, Models::DescribeDtsJobsResponseBodyEtlDemoListRetryState) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setRetryState(const Models::DescribeDtsJobsResponseBodyEtlDemoListRetryState & retryState) { DARABONBA_PTR_SET_VALUE(retryState_, retryState) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setRetryState(Models::DescribeDtsJobsResponseBodyEtlDemoListRetryState && retryState) { DARABONBA_PTR_SET_RVALUE(retryState_, retryState) };


    // reverseJob Field Functions 
    bool hasReverseJob() const { return this->reverseJob_ != nullptr;};
    void deleteReverseJob() { this->reverseJob_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJob & reverseJob() const { DARABONBA_PTR_GET_CONST(reverseJob_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJob) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJob reverseJob() { DARABONBA_PTR_GET(reverseJob_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJob) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setReverseJob(const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJob & reverseJob) { DARABONBA_PTR_SET_VALUE(reverseJob_, reverseJob) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setReverseJob(Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJob && reverseJob) { DARABONBA_PTR_SET_RVALUE(reverseJob_, reverseJob) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListSourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, Models::DescribeDtsJobsResponseBodyEtlDemoListSourceEndpoint) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListSourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, Models::DescribeDtsJobsResponseBodyEtlDemoListSourceEndpoint) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setSourceEndpoint(const Models::DescribeDtsJobsResponseBodyEtlDemoListSourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setSourceEndpoint(Models::DescribeDtsJobsResponseBodyEtlDemoListSourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // structureInitializationStatus Field Functions 
    bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
    void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListStructureInitializationStatus & structureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListStructureInitializationStatus) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListStructureInitializationStatus structureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListStructureInitializationStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setStructureInitializationStatus(const Models::DescribeDtsJobsResponseBodyEtlDemoListStructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setStructureInitializationStatus(Models::DescribeDtsJobsResponseBodyEtlDemoListStructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<Models::DescribeDtsJobsResponseBodyEtlDemoListTagList> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<Models::DescribeDtsJobsResponseBodyEtlDemoListTagList>) };
    inline vector<Models::DescribeDtsJobsResponseBodyEtlDemoListTagList> tagList() { DARABONBA_PTR_GET(tagList_, vector<Models::DescribeDtsJobsResponseBodyEtlDemoListTagList>) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setTagList(const vector<Models::DescribeDtsJobsResponseBodyEtlDemoListTagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline DescribeDtsJobsResponseBodyEtlDemoList& setTagList(vector<Models::DescribeDtsJobsResponseBodyEtlDemoListTagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


  protected:
    // Indicates whether the **new** change tracking feature is used. 
    // 
    // > This parameter is returned only for change tracking instances of the new version.
    std::shared_ptr<string> appName_ = nullptr;
    // The start of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> beginTimestamp_ = nullptr;
    // The start offset of incremental data migration or data synchronization. This value is a UNIX timestamp representing the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> checkpoint_ = nullptr;
    // The consumption checkpoint of the change tracking instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> consumptionCheckpoint_ = nullptr;
    // The downstream client information in the following format: <IP address of the downstream client>:<Random ID generated by DTS>.
    std::shared_ptr<string> consumptionClient_ = nullptr;
    // The time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:s*sZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The state of the ETL task. 
    // 
    // > This parameter collection is returned only if an ETL task is configured.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListDataEtlStatus> dataEtlStatus_ = nullptr;
    // The state of full data migration or initial full data synchronization.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListDataInitializationStatus> dataInitializationStatus_ = nullptr;
    // The state of incremental data migration or synchronization.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListDataSynchronizationStatus> dataSynchronizationStatus_ = nullptr;
    // The objects of the data migration, data synchronization, or change tracking task. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
    std::shared_ptr<string> dbObject_ = nullptr;
    // The latency of incremental data migration or synchronization. 
    // 
    // > If you query data migration tasks, the unit of this parameter is milliseconds. If you query data synchronization tasks, the unit of this parameter is seconds.
    std::shared_ptr<int64_t> delay_ = nullptr;
    // The connection settings of the destination instance.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListDestinationEndpoint> destinationEndpoint_ = nullptr;
    // The ID of the data migration, data synchronization, or change tracking instance.
    std::shared_ptr<string> dtsInstanceID_ = nullptr;
    // The instance class. 
    // 
    // > For more information about the test performance of each instance class, see [Specifications of data migration instances](https://help.aliyun.com/document_detail/26606.html) and [Specifications of data synchronization instances](https://help.aliyun.com/document_detail/26605.html).
    std::shared_ptr<string> dtsJobClass_ = nullptr;
    // The synchronization direction. Valid values:
    // 
    // - **Forward**
    // - **Reverse**
    // 
    // > This parameter is returned only if the topology of the data synchronization instance is two-way synchronization.
    std::shared_ptr<string> dtsJobDirection_ = nullptr;
    // The ID of the data migration, data synchronization, or change tracking task.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The name of the data migration, data synchronization, or change tracking task.
    std::shared_ptr<string> dtsJobName_ = nullptr;
    // The end of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTimestamp_ = nullptr;
    // The error message returned if the task failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The checkpoint of the ETL task.
    std::shared_ptr<string> etlSafeCheckpoint_ = nullptr;
    // The time when the instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // > This parameter is returned only if the returned value of **PayType** is **PrePaid**.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The type of the DTS task. Valid values:
    // 
    // - **MIGRATION**: data migration task 
    // - **SYNC**: data synchronization task 
    // - **SUBSCRIBE**: change tracking task
    std::shared_ptr<string> jobType_ = nullptr;
    // The migration types or initial synchronization types.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListMigrationMode> migrationMode_ = nullptr;
    // The source of the task.
    // - **PTS**
    // - **DMS**
    // - **DTS**
    std::shared_ptr<string> originType_ = nullptr;
    // The billing method of the DTS instance. Valid values:
    // 
    // - **PrePaid**: subscription 
    // - **PostPaid**: pay-as-you-go
    std::shared_ptr<string> payType_ = nullptr;
    // The performance of the data migration or synchronization instance.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListPerformance> performance_ = nullptr;
    // The precheck state.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListPrecheckStatus> precheckStatus_ = nullptr;
    // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, for example, whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
    std::shared_ptr<string> reserved_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> resourceGroupDisplayName_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The information about the retries performed by DTS due to an exception.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListRetryState> retryState_ = nullptr;
    // The details of the data synchronization task in the reverse direction. 
    // 
    // > This parameter is returned only for two-way data synchronization tasks.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJob> reverseJob_ = nullptr;
    // The connection settings of the source instance.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListSourceEndpoint> sourceEndpoint_ = nullptr;
    // The state of the DTS instance. For more information about the valid values, see the description of the request parameter **Status**.
    std::shared_ptr<string> status_ = nullptr;
    // The state of schema migration or initial schema synchronization.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListStructureInitializationStatus> structureInitializationStatus_ = nullptr;
    // The tags of the task.
    std::shared_ptr<vector<Models::DescribeDtsJobsResponseBodyEtlDemoListTagList>> tagList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
