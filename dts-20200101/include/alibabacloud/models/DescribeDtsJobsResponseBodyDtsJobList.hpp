// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListDataCloudStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListDataEtlStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListDataInitializationStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListDataSynchronizationStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListDestinationEndpoint.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListErrorDetails.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListIncDataCheckStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListMigrationMode.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListPerformance.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListPrecheckStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListRetryState.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListReverseJob.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListSourceEndpoint.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListStructureDataCheckStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListStructureInitializationStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsResponseBodyDtsJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsResponseBodyDtsJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BeginTimestamp, beginTimestamp_);
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
      DARABONBA_PTR_TO_JSON(ConsumptionClient, consumptionClient_);
      DARABONBA_PTR_TO_JSON(CpuUsage, cpuUsage_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataCloudStatus, dataCloudStatus_);
      DARABONBA_PTR_TO_JSON(DataEtlStatus, dataEtlStatus_);
      DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_TO_JSON(DbObject, dbObject_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_TO_JSON(DtsBisLabel, dtsBisLabel_);
      DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
      DARABONBA_PTR_TO_JSON(DtsJobClass, dtsJobClass_);
      DARABONBA_PTR_TO_JSON(DtsJobDirection, dtsJobDirection_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_TO_JSON(DuRealUsage, duRealUsage_);
      DARABONBA_PTR_TO_JSON(DuUsage, duUsage_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(ErrorDetails, errorDetails_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(FullDataCheckStatus, fullDataCheckStatus_);
      DARABONBA_PTR_TO_JSON(IncDataCheckStatus, incDataCheckStatus_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MaxDu, maxDu_);
      DARABONBA_PTR_TO_JSON(MemUsage, memUsage_);
      DARABONBA_PTR_TO_JSON(MigrationErrCode, migrationErrCode_);
      DARABONBA_PTR_TO_JSON(MigrationErrHelpDocId, migrationErrHelpDocId_);
      DARABONBA_PTR_TO_JSON(MigrationErrHelpDocKey, migrationErrHelpDocKey_);
      DARABONBA_PTR_TO_JSON(MigrationErrMsg, migrationErrMsg_);
      DARABONBA_PTR_TO_JSON(MigrationErrType, migrationErrType_);
      DARABONBA_PTR_TO_JSON(MigrationErrWorkaround, migrationErrWorkaround_);
      DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_TO_JSON(MinDu, minDu_);
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
      DARABONBA_PTR_TO_JSON(StructureDataCheckStatus, structureDataCheckStatus_);
      DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsResponseBodyDtsJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BeginTimestamp, beginTimestamp_);
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(ConsumptionCheckpoint, consumptionCheckpoint_);
      DARABONBA_PTR_FROM_JSON(ConsumptionClient, consumptionClient_);
      DARABONBA_PTR_FROM_JSON(CpuUsage, cpuUsage_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataCloudStatus, dataCloudStatus_);
      DARABONBA_PTR_FROM_JSON(DataEtlStatus, dataEtlStatus_);
      DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_FROM_JSON(DbObject, dbObject_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_FROM_JSON(DtsBisLabel, dtsBisLabel_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
      DARABONBA_PTR_FROM_JSON(DtsJobClass, dtsJobClass_);
      DARABONBA_PTR_FROM_JSON(DtsJobDirection, dtsJobDirection_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_FROM_JSON(DuRealUsage, duRealUsage_);
      DARABONBA_PTR_FROM_JSON(DuUsage, duUsage_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(ErrorDetails, errorDetails_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(FullDataCheckStatus, fullDataCheckStatus_);
      DARABONBA_PTR_FROM_JSON(IncDataCheckStatus, incDataCheckStatus_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MaxDu, maxDu_);
      DARABONBA_PTR_FROM_JSON(MemUsage, memUsage_);
      DARABONBA_PTR_FROM_JSON(MigrationErrCode, migrationErrCode_);
      DARABONBA_PTR_FROM_JSON(MigrationErrHelpDocId, migrationErrHelpDocId_);
      DARABONBA_PTR_FROM_JSON(MigrationErrHelpDocKey, migrationErrHelpDocKey_);
      DARABONBA_PTR_FROM_JSON(MigrationErrMsg, migrationErrMsg_);
      DARABONBA_PTR_FROM_JSON(MigrationErrType, migrationErrType_);
      DARABONBA_PTR_FROM_JSON(MigrationErrWorkaround, migrationErrWorkaround_);
      DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_FROM_JSON(MinDu, minDu_);
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
      DARABONBA_PTR_FROM_JSON(StructureDataCheckStatus, structureDataCheckStatus_);
      DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
    };
    DescribeDtsJobsResponseBodyDtsJobList() = default ;
    DescribeDtsJobsResponseBodyDtsJobList(const DescribeDtsJobsResponseBodyDtsJobList &) = default ;
    DescribeDtsJobsResponseBodyDtsJobList(DescribeDtsJobsResponseBodyDtsJobList &&) = default ;
    DescribeDtsJobsResponseBodyDtsJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsResponseBodyDtsJobList() = default ;
    DescribeDtsJobsResponseBodyDtsJobList& operator=(const DescribeDtsJobsResponseBodyDtsJobList &) = default ;
    DescribeDtsJobsResponseBodyDtsJobList& operator=(DescribeDtsJobsResponseBodyDtsJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->beginTimestamp_ != nullptr && this->checkpoint_ != nullptr && this->consumptionCheckpoint_ != nullptr && this->consumptionClient_ != nullptr && this->cpuUsage_ != nullptr
        && this->createTime_ != nullptr && this->dataCloudStatus_ != nullptr && this->dataEtlStatus_ != nullptr && this->dataInitializationStatus_ != nullptr && this->dataSynchronizationStatus_ != nullptr
        && this->dbObject_ != nullptr && this->dedicatedClusterId_ != nullptr && this->delay_ != nullptr && this->destinationEndpoint_ != nullptr && this->dtsBisLabel_ != nullptr
        && this->dtsInstanceID_ != nullptr && this->dtsJobClass_ != nullptr && this->dtsJobDirection_ != nullptr && this->dtsJobId_ != nullptr && this->dtsJobName_ != nullptr
        && this->duRealUsage_ != nullptr && this->duUsage_ != nullptr && this->endTimestamp_ != nullptr && this->errorDetails_ != nullptr && this->errorMessage_ != nullptr
        && this->etlSafeCheckpoint_ != nullptr && this->expireTime_ != nullptr && this->fullDataCheckStatus_ != nullptr && this->incDataCheckStatus_ != nullptr && this->jobType_ != nullptr
        && this->maxDu_ != nullptr && this->memUsage_ != nullptr && this->migrationErrCode_ != nullptr && this->migrationErrHelpDocId_ != nullptr && this->migrationErrHelpDocKey_ != nullptr
        && this->migrationErrMsg_ != nullptr && this->migrationErrType_ != nullptr && this->migrationErrWorkaround_ != nullptr && this->migrationMode_ != nullptr && this->minDu_ != nullptr
        && this->originType_ != nullptr && this->payType_ != nullptr && this->performance_ != nullptr && this->precheckStatus_ != nullptr && this->reserved_ != nullptr
        && this->resourceGroupDisplayName_ != nullptr && this->resourceGroupId_ != nullptr && this->retryState_ != nullptr && this->reverseJob_ != nullptr && this->sourceEndpoint_ != nullptr
        && this->status_ != nullptr && this->structureDataCheckStatus_ != nullptr && this->structureInitializationStatus_ != nullptr && this->tagList_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // beginTimestamp Field Functions 
    bool hasBeginTimestamp() const { return this->beginTimestamp_ != nullptr;};
    void deleteBeginTimestamp() { this->beginTimestamp_ = nullptr;};
    inline string beginTimestamp() const { DARABONBA_PTR_GET_DEFAULT(beginTimestamp_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setBeginTimestamp(string beginTimestamp) { DARABONBA_PTR_SET_VALUE(beginTimestamp_, beginTimestamp) };


    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline string checkpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // consumptionCheckpoint Field Functions 
    bool hasConsumptionCheckpoint() const { return this->consumptionCheckpoint_ != nullptr;};
    void deleteConsumptionCheckpoint() { this->consumptionCheckpoint_ = nullptr;};
    inline string consumptionCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(consumptionCheckpoint_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setConsumptionCheckpoint(string consumptionCheckpoint) { DARABONBA_PTR_SET_VALUE(consumptionCheckpoint_, consumptionCheckpoint) };


    // consumptionClient Field Functions 
    bool hasConsumptionClient() const { return this->consumptionClient_ != nullptr;};
    void deleteConsumptionClient() { this->consumptionClient_ = nullptr;};
    inline string consumptionClient() const { DARABONBA_PTR_GET_DEFAULT(consumptionClient_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setConsumptionClient(string consumptionClient) { DARABONBA_PTR_SET_VALUE(consumptionClient_, consumptionClient) };


    // cpuUsage Field Functions 
    bool hasCpuUsage() const { return this->cpuUsage_ != nullptr;};
    void deleteCpuUsage() { this->cpuUsage_ = nullptr;};
    inline string cpuUsage() const { DARABONBA_PTR_GET_DEFAULT(cpuUsage_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setCpuUsage(string cpuUsage) { DARABONBA_PTR_SET_VALUE(cpuUsage_, cpuUsage) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataCloudStatus Field Functions 
    bool hasDataCloudStatus() const { return this->dataCloudStatus_ != nullptr;};
    void deleteDataCloudStatus() { this->dataCloudStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListDataCloudStatus & dataCloudStatus() const { DARABONBA_PTR_GET_CONST(dataCloudStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListDataCloudStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListDataCloudStatus dataCloudStatus() { DARABONBA_PTR_GET(dataCloudStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListDataCloudStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDataCloudStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListDataCloudStatus & dataCloudStatus) { DARABONBA_PTR_SET_VALUE(dataCloudStatus_, dataCloudStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDataCloudStatus(Models::DescribeDtsJobsResponseBodyDtsJobListDataCloudStatus && dataCloudStatus) { DARABONBA_PTR_SET_RVALUE(dataCloudStatus_, dataCloudStatus) };


    // dataEtlStatus Field Functions 
    bool hasDataEtlStatus() const { return this->dataEtlStatus_ != nullptr;};
    void deleteDataEtlStatus() { this->dataEtlStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListDataEtlStatus & dataEtlStatus() const { DARABONBA_PTR_GET_CONST(dataEtlStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListDataEtlStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListDataEtlStatus dataEtlStatus() { DARABONBA_PTR_GET(dataEtlStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListDataEtlStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDataEtlStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListDataEtlStatus & dataEtlStatus) { DARABONBA_PTR_SET_VALUE(dataEtlStatus_, dataEtlStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDataEtlStatus(Models::DescribeDtsJobsResponseBodyDtsJobListDataEtlStatus && dataEtlStatus) { DARABONBA_PTR_SET_RVALUE(dataEtlStatus_, dataEtlStatus) };


    // dataInitializationStatus Field Functions 
    bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
    void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListDataInitializationStatus & dataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListDataInitializationStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListDataInitializationStatus dataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListDataInitializationStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDataInitializationStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListDataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDataInitializationStatus(Models::DescribeDtsJobsResponseBodyDtsJobListDataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


    // dataSynchronizationStatus Field Functions 
    bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
    void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListDataSynchronizationStatus & dataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListDataSynchronizationStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListDataSynchronizationStatus dataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListDataSynchronizationStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDataSynchronizationStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListDataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDataSynchronizationStatus(Models::DescribeDtsJobsResponseBodyDtsJobListDataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


    // dbObject Field Functions 
    bool hasDbObject() const { return this->dbObject_ != nullptr;};
    void deleteDbObject() { this->dbObject_ = nullptr;};
    inline string dbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string dedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int64_t delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListDestinationEndpoint & destinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, Models::DescribeDtsJobsResponseBodyDtsJobListDestinationEndpoint) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListDestinationEndpoint destinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, Models::DescribeDtsJobsResponseBodyDtsJobListDestinationEndpoint) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDestinationEndpoint(const Models::DescribeDtsJobsResponseBodyDtsJobListDestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDestinationEndpoint(Models::DescribeDtsJobsResponseBodyDtsJobListDestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // dtsBisLabel Field Functions 
    bool hasDtsBisLabel() const { return this->dtsBisLabel_ != nullptr;};
    void deleteDtsBisLabel() { this->dtsBisLabel_ = nullptr;};
    inline string dtsBisLabel() const { DARABONBA_PTR_GET_DEFAULT(dtsBisLabel_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDtsBisLabel(string dtsBisLabel) { DARABONBA_PTR_SET_VALUE(dtsBisLabel_, dtsBisLabel) };


    // dtsInstanceID Field Functions 
    bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
    void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
    inline string dtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


    // dtsJobClass Field Functions 
    bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
    void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
    inline string dtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


    // dtsJobDirection Field Functions 
    bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
    void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
    inline string dtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dtsJobName Field Functions 
    bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
    void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
    inline string dtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


    // duRealUsage Field Functions 
    bool hasDuRealUsage() const { return this->duRealUsage_ != nullptr;};
    void deleteDuRealUsage() { this->duRealUsage_ = nullptr;};
    inline string duRealUsage() const { DARABONBA_PTR_GET_DEFAULT(duRealUsage_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDuRealUsage(string duRealUsage) { DARABONBA_PTR_SET_VALUE(duRealUsage_, duRealUsage) };


    // duUsage Field Functions 
    bool hasDuUsage() const { return this->duUsage_ != nullptr;};
    void deleteDuUsage() { this->duUsage_ = nullptr;};
    inline int64_t duUsage() const { DARABONBA_PTR_GET_DEFAULT(duUsage_, 0L) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setDuUsage(int64_t duUsage) { DARABONBA_PTR_SET_VALUE(duUsage_, duUsage) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline string endTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setEndTimestamp(string endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // errorDetails Field Functions 
    bool hasErrorDetails() const { return this->errorDetails_ != nullptr;};
    void deleteErrorDetails() { this->errorDetails_ = nullptr;};
    inline const vector<Models::DescribeDtsJobsResponseBodyDtsJobListErrorDetails> & errorDetails() const { DARABONBA_PTR_GET_CONST(errorDetails_, vector<Models::DescribeDtsJobsResponseBodyDtsJobListErrorDetails>) };
    inline vector<Models::DescribeDtsJobsResponseBodyDtsJobListErrorDetails> errorDetails() { DARABONBA_PTR_GET(errorDetails_, vector<Models::DescribeDtsJobsResponseBodyDtsJobListErrorDetails>) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setErrorDetails(const vector<Models::DescribeDtsJobsResponseBodyDtsJobListErrorDetails> & errorDetails) { DARABONBA_PTR_SET_VALUE(errorDetails_, errorDetails) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setErrorDetails(vector<Models::DescribeDtsJobsResponseBodyDtsJobListErrorDetails> && errorDetails) { DARABONBA_PTR_SET_RVALUE(errorDetails_, errorDetails) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // etlSafeCheckpoint Field Functions 
    bool hasEtlSafeCheckpoint() const { return this->etlSafeCheckpoint_ != nullptr;};
    void deleteEtlSafeCheckpoint() { this->etlSafeCheckpoint_ = nullptr;};
    inline string etlSafeCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(etlSafeCheckpoint_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setEtlSafeCheckpoint(string etlSafeCheckpoint) { DARABONBA_PTR_SET_VALUE(etlSafeCheckpoint_, etlSafeCheckpoint) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // fullDataCheckStatus Field Functions 
    bool hasFullDataCheckStatus() const { return this->fullDataCheckStatus_ != nullptr;};
    void deleteFullDataCheckStatus() { this->fullDataCheckStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus & fullDataCheckStatus() const { DARABONBA_PTR_GET_CONST(fullDataCheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus fullDataCheckStatus() { DARABONBA_PTR_GET(fullDataCheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setFullDataCheckStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus & fullDataCheckStatus) { DARABONBA_PTR_SET_VALUE(fullDataCheckStatus_, fullDataCheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setFullDataCheckStatus(Models::DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus && fullDataCheckStatus) { DARABONBA_PTR_SET_RVALUE(fullDataCheckStatus_, fullDataCheckStatus) };


    // incDataCheckStatus Field Functions 
    bool hasIncDataCheckStatus() const { return this->incDataCheckStatus_ != nullptr;};
    void deleteIncDataCheckStatus() { this->incDataCheckStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListIncDataCheckStatus & incDataCheckStatus() const { DARABONBA_PTR_GET_CONST(incDataCheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListIncDataCheckStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListIncDataCheckStatus incDataCheckStatus() { DARABONBA_PTR_GET(incDataCheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListIncDataCheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setIncDataCheckStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListIncDataCheckStatus & incDataCheckStatus) { DARABONBA_PTR_SET_VALUE(incDataCheckStatus_, incDataCheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setIncDataCheckStatus(Models::DescribeDtsJobsResponseBodyDtsJobListIncDataCheckStatus && incDataCheckStatus) { DARABONBA_PTR_SET_RVALUE(incDataCheckStatus_, incDataCheckStatus) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // maxDu Field Functions 
    bool hasMaxDu() const { return this->maxDu_ != nullptr;};
    void deleteMaxDu() { this->maxDu_ = nullptr;};
    inline double maxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0.0) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setMaxDu(double maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


    // memUsage Field Functions 
    bool hasMemUsage() const { return this->memUsage_ != nullptr;};
    void deleteMemUsage() { this->memUsage_ = nullptr;};
    inline string memUsage() const { DARABONBA_PTR_GET_DEFAULT(memUsage_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setMemUsage(string memUsage) { DARABONBA_PTR_SET_VALUE(memUsage_, memUsage) };


    // migrationErrCode Field Functions 
    bool hasMigrationErrCode() const { return this->migrationErrCode_ != nullptr;};
    void deleteMigrationErrCode() { this->migrationErrCode_ = nullptr;};
    inline string migrationErrCode() const { DARABONBA_PTR_GET_DEFAULT(migrationErrCode_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setMigrationErrCode(string migrationErrCode) { DARABONBA_PTR_SET_VALUE(migrationErrCode_, migrationErrCode) };


    // migrationErrHelpDocId Field Functions 
    bool hasMigrationErrHelpDocId() const { return this->migrationErrHelpDocId_ != nullptr;};
    void deleteMigrationErrHelpDocId() { this->migrationErrHelpDocId_ = nullptr;};
    inline string migrationErrHelpDocId() const { DARABONBA_PTR_GET_DEFAULT(migrationErrHelpDocId_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setMigrationErrHelpDocId(string migrationErrHelpDocId) { DARABONBA_PTR_SET_VALUE(migrationErrHelpDocId_, migrationErrHelpDocId) };


    // migrationErrHelpDocKey Field Functions 
    bool hasMigrationErrHelpDocKey() const { return this->migrationErrHelpDocKey_ != nullptr;};
    void deleteMigrationErrHelpDocKey() { this->migrationErrHelpDocKey_ = nullptr;};
    inline string migrationErrHelpDocKey() const { DARABONBA_PTR_GET_DEFAULT(migrationErrHelpDocKey_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setMigrationErrHelpDocKey(string migrationErrHelpDocKey) { DARABONBA_PTR_SET_VALUE(migrationErrHelpDocKey_, migrationErrHelpDocKey) };


    // migrationErrMsg Field Functions 
    bool hasMigrationErrMsg() const { return this->migrationErrMsg_ != nullptr;};
    void deleteMigrationErrMsg() { this->migrationErrMsg_ = nullptr;};
    inline string migrationErrMsg() const { DARABONBA_PTR_GET_DEFAULT(migrationErrMsg_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setMigrationErrMsg(string migrationErrMsg) { DARABONBA_PTR_SET_VALUE(migrationErrMsg_, migrationErrMsg) };


    // migrationErrType Field Functions 
    bool hasMigrationErrType() const { return this->migrationErrType_ != nullptr;};
    void deleteMigrationErrType() { this->migrationErrType_ = nullptr;};
    inline string migrationErrType() const { DARABONBA_PTR_GET_DEFAULT(migrationErrType_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setMigrationErrType(string migrationErrType) { DARABONBA_PTR_SET_VALUE(migrationErrType_, migrationErrType) };


    // migrationErrWorkaround Field Functions 
    bool hasMigrationErrWorkaround() const { return this->migrationErrWorkaround_ != nullptr;};
    void deleteMigrationErrWorkaround() { this->migrationErrWorkaround_ = nullptr;};
    inline string migrationErrWorkaround() const { DARABONBA_PTR_GET_DEFAULT(migrationErrWorkaround_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setMigrationErrWorkaround(string migrationErrWorkaround) { DARABONBA_PTR_SET_VALUE(migrationErrWorkaround_, migrationErrWorkaround) };


    // migrationMode Field Functions 
    bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
    void deleteMigrationMode() { this->migrationMode_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListMigrationMode & migrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, Models::DescribeDtsJobsResponseBodyDtsJobListMigrationMode) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListMigrationMode migrationMode() { DARABONBA_PTR_GET(migrationMode_, Models::DescribeDtsJobsResponseBodyDtsJobListMigrationMode) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setMigrationMode(const Models::DescribeDtsJobsResponseBodyDtsJobListMigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setMigrationMode(Models::DescribeDtsJobsResponseBodyDtsJobListMigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


    // minDu Field Functions 
    bool hasMinDu() const { return this->minDu_ != nullptr;};
    void deleteMinDu() { this->minDu_ = nullptr;};
    inline double minDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0.0) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setMinDu(double minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


    // originType Field Functions 
    bool hasOriginType() const { return this->originType_ != nullptr;};
    void deleteOriginType() { this->originType_ = nullptr;};
    inline string originType() const { DARABONBA_PTR_GET_DEFAULT(originType_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setOriginType(string originType) { DARABONBA_PTR_SET_VALUE(originType_, originType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // performance Field Functions 
    bool hasPerformance() const { return this->performance_ != nullptr;};
    void deletePerformance() { this->performance_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListPerformance & performance() const { DARABONBA_PTR_GET_CONST(performance_, Models::DescribeDtsJobsResponseBodyDtsJobListPerformance) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListPerformance performance() { DARABONBA_PTR_GET(performance_, Models::DescribeDtsJobsResponseBodyDtsJobListPerformance) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setPerformance(const Models::DescribeDtsJobsResponseBodyDtsJobListPerformance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setPerformance(Models::DescribeDtsJobsResponseBodyDtsJobListPerformance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


    // precheckStatus Field Functions 
    bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
    void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListPrecheckStatus & precheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListPrecheckStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListPrecheckStatus precheckStatus() { DARABONBA_PTR_GET(precheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListPrecheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setPrecheckStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListPrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setPrecheckStatus(Models::DescribeDtsJobsResponseBodyDtsJobListPrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline string reserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // resourceGroupDisplayName Field Functions 
    bool hasResourceGroupDisplayName() const { return this->resourceGroupDisplayName_ != nullptr;};
    void deleteResourceGroupDisplayName() { this->resourceGroupDisplayName_ = nullptr;};
    inline string resourceGroupDisplayName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupDisplayName_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setResourceGroupDisplayName(string resourceGroupDisplayName) { DARABONBA_PTR_SET_VALUE(resourceGroupDisplayName_, resourceGroupDisplayName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retryState Field Functions 
    bool hasRetryState() const { return this->retryState_ != nullptr;};
    void deleteRetryState() { this->retryState_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListRetryState & retryState() const { DARABONBA_PTR_GET_CONST(retryState_, Models::DescribeDtsJobsResponseBodyDtsJobListRetryState) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListRetryState retryState() { DARABONBA_PTR_GET(retryState_, Models::DescribeDtsJobsResponseBodyDtsJobListRetryState) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setRetryState(const Models::DescribeDtsJobsResponseBodyDtsJobListRetryState & retryState) { DARABONBA_PTR_SET_VALUE(retryState_, retryState) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setRetryState(Models::DescribeDtsJobsResponseBodyDtsJobListRetryState && retryState) { DARABONBA_PTR_SET_RVALUE(retryState_, retryState) };


    // reverseJob Field Functions 
    bool hasReverseJob() const { return this->reverseJob_ != nullptr;};
    void deleteReverseJob() { this->reverseJob_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJob & reverseJob() const { DARABONBA_PTR_GET_CONST(reverseJob_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJob) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListReverseJob reverseJob() { DARABONBA_PTR_GET(reverseJob_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJob) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setReverseJob(const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJob & reverseJob) { DARABONBA_PTR_SET_VALUE(reverseJob_, reverseJob) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setReverseJob(Models::DescribeDtsJobsResponseBodyDtsJobListReverseJob && reverseJob) { DARABONBA_PTR_SET_RVALUE(reverseJob_, reverseJob) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListSourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, Models::DescribeDtsJobsResponseBodyDtsJobListSourceEndpoint) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListSourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, Models::DescribeDtsJobsResponseBodyDtsJobListSourceEndpoint) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setSourceEndpoint(const Models::DescribeDtsJobsResponseBodyDtsJobListSourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setSourceEndpoint(Models::DescribeDtsJobsResponseBodyDtsJobListSourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // structureDataCheckStatus Field Functions 
    bool hasStructureDataCheckStatus() const { return this->structureDataCheckStatus_ != nullptr;};
    void deleteStructureDataCheckStatus() { this->structureDataCheckStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListStructureDataCheckStatus & structureDataCheckStatus() const { DARABONBA_PTR_GET_CONST(structureDataCheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListStructureDataCheckStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListStructureDataCheckStatus structureDataCheckStatus() { DARABONBA_PTR_GET(structureDataCheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListStructureDataCheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setStructureDataCheckStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListStructureDataCheckStatus & structureDataCheckStatus) { DARABONBA_PTR_SET_VALUE(structureDataCheckStatus_, structureDataCheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setStructureDataCheckStatus(Models::DescribeDtsJobsResponseBodyDtsJobListStructureDataCheckStatus && structureDataCheckStatus) { DARABONBA_PTR_SET_RVALUE(structureDataCheckStatus_, structureDataCheckStatus) };


    // structureInitializationStatus Field Functions 
    bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
    void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListStructureInitializationStatus & structureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListStructureInitializationStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListStructureInitializationStatus structureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListStructureInitializationStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setStructureInitializationStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListStructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setStructureInitializationStatus(Models::DescribeDtsJobsResponseBodyDtsJobListStructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<Models::DescribeDtsJobsResponseBodyDtsJobListTagList> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<Models::DescribeDtsJobsResponseBodyDtsJobListTagList>) };
    inline vector<Models::DescribeDtsJobsResponseBodyDtsJobListTagList> tagList() { DARABONBA_PTR_GET(tagList_, vector<Models::DescribeDtsJobsResponseBodyDtsJobListTagList>) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setTagList(const vector<Models::DescribeDtsJobsResponseBodyDtsJobListTagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline DescribeDtsJobsResponseBodyDtsJobList& setTagList(vector<Models::DescribeDtsJobsResponseBodyDtsJobListTagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


  protected:
    // Indicates whether the **new** change tracking feature is used.
    // 
    // >  This parameter is returned only for change tracking instances of the new version.
    std::shared_ptr<string> appName_ = nullptr;
    // The start of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> beginTimestamp_ = nullptr;
    // The start offset of incremental data synchronization. The value is a UNIX timestamp representing the number of seconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> checkpoint_ = nullptr;
    // The consumption checkpoint of the change tracking instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> consumptionCheckpoint_ = nullptr;
    // The downstream client information, in the following format: \\<IP address of the downstream client>:\\<Random ID generated by DTS>.
    std::shared_ptr<string> consumptionClient_ = nullptr;
    // The CPU utilization of the instance. Unit: percentage.
    std::shared_ptr<string> cpuUsage_ = nullptr;
    // The point in time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The state of the physical gateway-based migration task.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListDataCloudStatus> dataCloudStatus_ = nullptr;
    // The state of the extract, transform, and load (ETL) task. Valid values:
    // 
    // >  This parameter collection is returned only if an ETL task is configured.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListDataEtlStatus> dataEtlStatus_ = nullptr;
    // The state of full data synchronization.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListDataInitializationStatus> dataInitializationStatus_ = nullptr;
    // The state of incremental data migration or synchronization.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListDataSynchronizationStatus> dataSynchronizationStatus_ = nullptr;
    // The objects that you want to synchronize. The value is a JSON string and can contain regular expressions. For more information, see "Objects of DTS tasks".
    std::shared_ptr<string> dbObject_ = nullptr;
    // The ID of the DTS dedicated cluster on which a DTS task runs.
    std::shared_ptr<string> dedicatedClusterId_ = nullptr;
    // The latency of incremental data synchronization. Unit: seconds.
    std::shared_ptr<int64_t> delay_ = nullptr;
    // The connection settings of the destination instance.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListDestinationEndpoint> destinationEndpoint_ = nullptr;
    // The environment tag of the DTS instance. Valid values:
    // 
    // - **normal**
    // - **online**
    std::shared_ptr<string> dtsBisLabel_ = nullptr;
    // The ID of the data synchronization instance.
    std::shared_ptr<string> dtsInstanceID_ = nullptr;
    // The instance class.
    // 
    // >  For more information about the test performance of each instance class, see [Specifications of data synchronization instances](https://help.aliyun.com/document_detail/26605.html).
    std::shared_ptr<string> dtsJobClass_ = nullptr;
    // The synchronization direction. The value is **Reverse**.
    std::shared_ptr<string> dtsJobDirection_ = nullptr;
    // The ID of the data synchronization task.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The name of the data synchronization task.
    std::shared_ptr<string> dtsJobName_ = nullptr;
    // The DTS Units (DUs) usage of a task in a DTS dedicated cluster.
    std::shared_ptr<string> duRealUsage_ = nullptr;
    // The number of DUs that have been used.
    std::shared_ptr<int64_t> duUsage_ = nullptr;
    // The end of the time range for change tracking. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTimestamp_ = nullptr;
    // The error message returned.
    std::shared_ptr<vector<Models::DescribeDtsJobsResponseBodyDtsJobListErrorDetails>> errorDetails_ = nullptr;
    // The error message returned if the task failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The checkpoint of the ETL task.
    std::shared_ptr<string> etlSafeCheckpoint_ = nullptr;
    // The point in time when the instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // >  This parameter is returned only if the value of the **PayType** parameter is **PrePaid**.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The state information about the full data verification task.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus> fullDataCheckStatus_ = nullptr;
    // The state information about the incremental data verification task.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListIncDataCheckStatus> incDataCheckStatus_ = nullptr;
    // The type of the DTS task. Valid values:
    // 
    // - **MIGRATION**: data migration task 
    // - **SYNC**: data synchronization task 
    // - **SUBSCRIBE**: change tracking task
    std::shared_ptr<string> jobType_ = nullptr;
    // Upper limit of DU.
    // 
    // > Only supported by Serverless instances.
    std::shared_ptr<double> maxDu_ = nullptr;
    // The memory that has been used. Unit: MB.
    std::shared_ptr<string> memUsage_ = nullptr;
    // The error code.
    std::shared_ptr<string> migrationErrCode_ = nullptr;
    // The ID of the error code-related documentation.
    std::shared_ptr<string> migrationErrHelpDocId_ = nullptr;
    // The key of the error code-related documentation.
    std::shared_ptr<string> migrationErrHelpDocKey_ = nullptr;
    // The error message.
    std::shared_ptr<string> migrationErrMsg_ = nullptr;
    // The type of the error code.
    std::shared_ptr<string> migrationErrType_ = nullptr;
    // The solution to the error.
    std::shared_ptr<string> migrationErrWorkaround_ = nullptr;
    // The migration or synchronization modes.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListMigrationMode> migrationMode_ = nullptr;
    // Lower limit of DU.
    // 
    // > Only supported by Serverless instances.
    std::shared_ptr<double> minDu_ = nullptr;
    // The source of the task. Valid values:
    // 
    // *   **PTS**
    // *   **DMS**
    // *   **DTS**
    std::shared_ptr<string> originType_ = nullptr;
    // The billing method of the DTS instance. Valid values:
    // 
    // *   **PrePaid**: subscription
    // *   **PostPaid**: pay-as-you-go
    std::shared_ptr<string> payType_ = nullptr;
    // The performance of the data migration or synchronization instance.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListPerformance> performance_ = nullptr;
    // The precheck state.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListPrecheckStatus> precheckStatus_ = nullptr;
    // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, for example, whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
    std::shared_ptr<string> reserved_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> resourceGroupDisplayName_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The information about the retries performed by DTS due to an exception.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListRetryState> retryState_ = nullptr;
    // The details of the data synchronization task in the reverse direction. 
    // 
    // > This parameter is returned only for two-way data synchronization tasks.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJob> reverseJob_ = nullptr;
    // The connection settings of the source instance.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListSourceEndpoint> sourceEndpoint_ = nullptr;
    // The state of the DTS instance. For more information about the valid values, see the description of the request parameter **Status**.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListStructureDataCheckStatus> structureDataCheckStatus_ = nullptr;
    // The state of schema migration or initial schema synchronization.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListStructureInitializationStatus> structureInitializationStatus_ = nullptr;
    // The tags of the task.
    std::shared_ptr<vector<Models::DescribeDtsJobsResponseBodyDtsJobListTagList>> tagList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
