// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLISTREVERSEJOB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLISTREVERSEJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListReverseJobDataInitializationStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListReverseJobDataSynchronizationStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListReverseJobDestinationEndpoint.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListReverseJobFullDataCheckStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListReverseJobIncDataCheckStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListReverseJobPerformance.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListReverseJobPrecheckStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListReverseJobSourceEndpoint.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureDataCheckStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureInitializationStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsResponseBodyDtsJobListReverseJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsResponseBodyDtsJobListReverseJob& obj) { 
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(CpuUsage, cpuUsage_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_TO_JSON(DbObject, dbObject_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
      DARABONBA_PTR_TO_JSON(DtsJobClass, dtsJobClass_);
      DARABONBA_PTR_TO_JSON(DtsJobDirection, dtsJobDirection_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_TO_JSON(DuUsage, duUsage_);
      DARABONBA_PTR_TO_JSON(ErrorDetails, errorDetails_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(FullDataCheckStatus, fullDataCheckStatus_);
      DARABONBA_PTR_TO_JSON(IncDataCheckStatus, incDataCheckStatus_);
      DARABONBA_PTR_TO_JSON(MaxDu, maxDu_);
      DARABONBA_PTR_TO_JSON(MemUsage, memUsage_);
      DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_TO_JSON(MinDu, minDu_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Performance, performance_);
      DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_TO_JSON(Reserved, reserved_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StructureDataCheckStatus, structureDataCheckStatus_);
      DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsResponseBodyDtsJobListReverseJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(CpuUsage, cpuUsage_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_FROM_JSON(DbObject, dbObject_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
      DARABONBA_PTR_FROM_JSON(DtsJobClass, dtsJobClass_);
      DARABONBA_PTR_FROM_JSON(DtsJobDirection, dtsJobDirection_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
      DARABONBA_PTR_FROM_JSON(DuUsage, duUsage_);
      DARABONBA_PTR_FROM_JSON(ErrorDetails, errorDetails_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(FullDataCheckStatus, fullDataCheckStatus_);
      DARABONBA_PTR_FROM_JSON(IncDataCheckStatus, incDataCheckStatus_);
      DARABONBA_PTR_FROM_JSON(MaxDu, maxDu_);
      DARABONBA_PTR_FROM_JSON(MemUsage, memUsage_);
      DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_FROM_JSON(MinDu, minDu_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Performance, performance_);
      DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StructureDataCheckStatus, structureDataCheckStatus_);
      DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
    };
    DescribeDtsJobsResponseBodyDtsJobListReverseJob() = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJob(const DescribeDtsJobsResponseBodyDtsJobListReverseJob &) = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJob(DescribeDtsJobsResponseBodyDtsJobListReverseJob &&) = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsResponseBodyDtsJobListReverseJob() = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJob& operator=(const DescribeDtsJobsResponseBodyDtsJobListReverseJob &) = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJob& operator=(DescribeDtsJobsResponseBodyDtsJobListReverseJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkpoint_ != nullptr
        && this->cpuUsage_ != nullptr && this->createTime_ != nullptr && this->dataInitializationStatus_ != nullptr && this->dataSynchronizationStatus_ != nullptr && this->dbObject_ != nullptr
        && this->dedicatedClusterId_ != nullptr && this->delay_ != nullptr && this->destinationEndpoint_ != nullptr && this->dtsInstanceID_ != nullptr && this->dtsJobClass_ != nullptr
        && this->dtsJobDirection_ != nullptr && this->dtsJobId_ != nullptr && this->dtsJobName_ != nullptr && this->duUsage_ != nullptr && this->errorDetails_ != nullptr
        && this->errorMessage_ != nullptr && this->etlSafeCheckpoint_ != nullptr && this->expireTime_ != nullptr && this->fullDataCheckStatus_ != nullptr && this->incDataCheckStatus_ != nullptr
        && this->maxDu_ != nullptr && this->memUsage_ != nullptr && this->migrationMode_ != nullptr && this->minDu_ != nullptr && this->payType_ != nullptr
        && this->performance_ != nullptr && this->precheckStatus_ != nullptr && this->reserved_ != nullptr && this->sourceEndpoint_ != nullptr && this->status_ != nullptr
        && this->structureDataCheckStatus_ != nullptr && this->structureInitializationStatus_ != nullptr; };
    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline string checkpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // cpuUsage Field Functions 
    bool hasCpuUsage() const { return this->cpuUsage_ != nullptr;};
    void deleteCpuUsage() { this->cpuUsage_ = nullptr;};
    inline string cpuUsage() const { DARABONBA_PTR_GET_DEFAULT(cpuUsage_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setCpuUsage(string cpuUsage) { DARABONBA_PTR_SET_VALUE(cpuUsage_, cpuUsage) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataInitializationStatus Field Functions 
    bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
    void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDataInitializationStatus & dataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDataInitializationStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDataInitializationStatus dataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDataInitializationStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDataInitializationStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDataInitializationStatus(Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


    // dataSynchronizationStatus Field Functions 
    bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
    void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDataSynchronizationStatus & dataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDataSynchronizationStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDataSynchronizationStatus dataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDataSynchronizationStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDataSynchronizationStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDataSynchronizationStatus(Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


    // dbObject Field Functions 
    bool hasDbObject() const { return this->dbObject_ != nullptr;};
    void deleteDbObject() { this->dbObject_ = nullptr;};
    inline string dbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string dedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int64_t delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDestinationEndpoint & destinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDestinationEndpoint) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDestinationEndpoint destinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDestinationEndpoint) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDestinationEndpoint(const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDestinationEndpoint(Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // dtsInstanceID Field Functions 
    bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
    void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
    inline string dtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


    // dtsJobClass Field Functions 
    bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
    void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
    inline string dtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


    // dtsJobDirection Field Functions 
    bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
    void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
    inline string dtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dtsJobName Field Functions 
    bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
    void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
    inline string dtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


    // duUsage Field Functions 
    bool hasDuUsage() const { return this->duUsage_ != nullptr;};
    void deleteDuUsage() { this->duUsage_ = nullptr;};
    inline int64_t duUsage() const { DARABONBA_PTR_GET_DEFAULT(duUsage_, 0L) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setDuUsage(int64_t duUsage) { DARABONBA_PTR_SET_VALUE(duUsage_, duUsage) };


    // errorDetails Field Functions 
    bool hasErrorDetails() const { return this->errorDetails_ != nullptr;};
    void deleteErrorDetails() { this->errorDetails_ = nullptr;};
    inline const vector<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails> & errorDetails() const { DARABONBA_PTR_GET_CONST(errorDetails_, vector<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails>) };
    inline vector<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails> errorDetails() { DARABONBA_PTR_GET(errorDetails_, vector<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails>) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setErrorDetails(const vector<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails> & errorDetails) { DARABONBA_PTR_SET_VALUE(errorDetails_, errorDetails) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setErrorDetails(vector<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails> && errorDetails) { DARABONBA_PTR_SET_RVALUE(errorDetails_, errorDetails) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // etlSafeCheckpoint Field Functions 
    bool hasEtlSafeCheckpoint() const { return this->etlSafeCheckpoint_ != nullptr;};
    void deleteEtlSafeCheckpoint() { this->etlSafeCheckpoint_ = nullptr;};
    inline string etlSafeCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(etlSafeCheckpoint_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setEtlSafeCheckpoint(string etlSafeCheckpoint) { DARABONBA_PTR_SET_VALUE(etlSafeCheckpoint_, etlSafeCheckpoint) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // fullDataCheckStatus Field Functions 
    bool hasFullDataCheckStatus() const { return this->fullDataCheckStatus_ != nullptr;};
    void deleteFullDataCheckStatus() { this->fullDataCheckStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobFullDataCheckStatus & fullDataCheckStatus() const { DARABONBA_PTR_GET_CONST(fullDataCheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobFullDataCheckStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobFullDataCheckStatus fullDataCheckStatus() { DARABONBA_PTR_GET(fullDataCheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobFullDataCheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setFullDataCheckStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobFullDataCheckStatus & fullDataCheckStatus) { DARABONBA_PTR_SET_VALUE(fullDataCheckStatus_, fullDataCheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setFullDataCheckStatus(Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobFullDataCheckStatus && fullDataCheckStatus) { DARABONBA_PTR_SET_RVALUE(fullDataCheckStatus_, fullDataCheckStatus) };


    // incDataCheckStatus Field Functions 
    bool hasIncDataCheckStatus() const { return this->incDataCheckStatus_ != nullptr;};
    void deleteIncDataCheckStatus() { this->incDataCheckStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobIncDataCheckStatus & incDataCheckStatus() const { DARABONBA_PTR_GET_CONST(incDataCheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobIncDataCheckStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobIncDataCheckStatus incDataCheckStatus() { DARABONBA_PTR_GET(incDataCheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobIncDataCheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setIncDataCheckStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobIncDataCheckStatus & incDataCheckStatus) { DARABONBA_PTR_SET_VALUE(incDataCheckStatus_, incDataCheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setIncDataCheckStatus(Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobIncDataCheckStatus && incDataCheckStatus) { DARABONBA_PTR_SET_RVALUE(incDataCheckStatus_, incDataCheckStatus) };


    // maxDu Field Functions 
    bool hasMaxDu() const { return this->maxDu_ != nullptr;};
    void deleteMaxDu() { this->maxDu_ = nullptr;};
    inline double maxDu() const { DARABONBA_PTR_GET_DEFAULT(maxDu_, 0.0) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setMaxDu(double maxDu) { DARABONBA_PTR_SET_VALUE(maxDu_, maxDu) };


    // memUsage Field Functions 
    bool hasMemUsage() const { return this->memUsage_ != nullptr;};
    void deleteMemUsage() { this->memUsage_ = nullptr;};
    inline string memUsage() const { DARABONBA_PTR_GET_DEFAULT(memUsage_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setMemUsage(string memUsage) { DARABONBA_PTR_SET_VALUE(memUsage_, memUsage) };


    // migrationMode Field Functions 
    bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
    void deleteMigrationMode() { this->migrationMode_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode & migrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode migrationMode() { DARABONBA_PTR_GET(migrationMode_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setMigrationMode(const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setMigrationMode(Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


    // minDu Field Functions 
    bool hasMinDu() const { return this->minDu_ != nullptr;};
    void deleteMinDu() { this->minDu_ = nullptr;};
    inline double minDu() const { DARABONBA_PTR_GET_DEFAULT(minDu_, 0.0) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setMinDu(double minDu) { DARABONBA_PTR_SET_VALUE(minDu_, minDu) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // performance Field Functions 
    bool hasPerformance() const { return this->performance_ != nullptr;};
    void deletePerformance() { this->performance_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobPerformance & performance() const { DARABONBA_PTR_GET_CONST(performance_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobPerformance) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobPerformance performance() { DARABONBA_PTR_GET(performance_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobPerformance) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setPerformance(const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobPerformance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setPerformance(Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobPerformance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


    // precheckStatus Field Functions 
    bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
    void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobPrecheckStatus & precheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobPrecheckStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobPrecheckStatus precheckStatus() { DARABONBA_PTR_GET(precheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobPrecheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setPrecheckStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobPrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setPrecheckStatus(Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobPrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline string reserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobSourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobSourceEndpoint) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobSourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobSourceEndpoint) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setSourceEndpoint(const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobSourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setSourceEndpoint(Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobSourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // structureDataCheckStatus Field Functions 
    bool hasStructureDataCheckStatus() const { return this->structureDataCheckStatus_ != nullptr;};
    void deleteStructureDataCheckStatus() { this->structureDataCheckStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureDataCheckStatus & structureDataCheckStatus() const { DARABONBA_PTR_GET_CONST(structureDataCheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureDataCheckStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureDataCheckStatus structureDataCheckStatus() { DARABONBA_PTR_GET(structureDataCheckStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureDataCheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setStructureDataCheckStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureDataCheckStatus & structureDataCheckStatus) { DARABONBA_PTR_SET_VALUE(structureDataCheckStatus_, structureDataCheckStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setStructureDataCheckStatus(Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureDataCheckStatus && structureDataCheckStatus) { DARABONBA_PTR_SET_RVALUE(structureDataCheckStatus_, structureDataCheckStatus) };


    // structureInitializationStatus Field Functions 
    bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
    void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureInitializationStatus & structureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureInitializationStatus) };
    inline Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureInitializationStatus structureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureInitializationStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setStructureInitializationStatus(const Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJob& setStructureInitializationStatus(Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


  protected:
    // The start offset of incremental data synchronization. This value is a UNIX timestamp representing the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> checkpoint_ = nullptr;
    // The CPU utilization of the instance. Unit: percentage.
    std::shared_ptr<string> cpuUsage_ = nullptr;
    // The time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The state of initial full data synchronization.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDataInitializationStatus> dataInitializationStatus_ = nullptr;
    // The state of incremental data synchronization.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDataSynchronizationStatus> dataSynchronizationStatus_ = nullptr;
    // The schema of the objects that you want to synchronize. The value is a JSON string and can contain regular expressions. For more information, see Objects of DTS tasks.
    std::shared_ptr<string> dbObject_ = nullptr;
    // The ID of the DTS dedicated cluster on which a DTS task runs.
    std::shared_ptr<string> dedicatedClusterId_ = nullptr;
    // The latency of incremental data synchronization. Unit: seconds.
    std::shared_ptr<int64_t> delay_ = nullptr;
    // The connection settings of the destination instance.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobDestinationEndpoint> destinationEndpoint_ = nullptr;
    // The ID of the data synchronization instance.
    std::shared_ptr<string> dtsInstanceID_ = nullptr;
    // The instance class. 
    // 
    // > For more information about the test performance of each instance class, see [Specifications of data synchronization instances](https://help.aliyun.com/document_detail/26605.html).
    std::shared_ptr<string> dtsJobClass_ = nullptr;
    // The synchronization direction. **Reverse** is returned.
    std::shared_ptr<string> dtsJobDirection_ = nullptr;
    // The ID of the synchronization task.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The name of the data synchronization task.
    std::shared_ptr<string> dtsJobName_ = nullptr;
    // The number of DUs that have been used.
    std::shared_ptr<int64_t> duUsage_ = nullptr;
    // The error message returned.
    std::shared_ptr<vector<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails>> errorDetails_ = nullptr;
    // The error message returned if the task failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The checkpoint of the ETL task.
    std::shared_ptr<string> etlSafeCheckpoint_ = nullptr;
    // The time when the instance expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC. 
    // 
    // > This parameter is returned only if the returned value of **PayType** is **PrePaid**.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The state information about the full data verification task.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobFullDataCheckStatus> fullDataCheckStatus_ = nullptr;
    // The state information about the incremental data verification task.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobIncDataCheckStatus> incDataCheckStatus_ = nullptr;
    // Upper limit of DU.
    // 
    // > Only supported by Serverless instances.
    std::shared_ptr<double> maxDu_ = nullptr;
    // The memory that has been used. Unit: MB.
    std::shared_ptr<string> memUsage_ = nullptr;
    // The initial synchronization types.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobMigrationMode> migrationMode_ = nullptr;
    // Lower limit of DU.
    // 
    // > Only supported by Serverless instances.
    std::shared_ptr<double> minDu_ = nullptr;
    // The billing method of the DTS instance. Valid values:
    // 
    // - **PrePaid**: subscription
    // - **PostPaid**: pay-as-you-go
    std::shared_ptr<string> payType_ = nullptr;
    // The performance of the data synchronization instance.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobPerformance> performance_ = nullptr;
    // The precheck state.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobPrecheckStatus> precheckStatus_ = nullptr;
    // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, for example, whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
    std::shared_ptr<string> reserved_ = nullptr;
    // The connection settings of the source instance.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobSourceEndpoint> sourceEndpoint_ = nullptr;
    // The state of the DTS instance. For more information about the valid values, see the description of the request parameter **Status**.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureDataCheckStatus> structureDataCheckStatus_ = nullptr;
    // The state of initial schema synchronization.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyDtsJobListReverseJobStructureInitializationStatus> structureInitializationStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
