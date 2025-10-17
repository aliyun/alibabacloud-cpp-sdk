// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYETLDEMOLISTREVERSEJOB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYETLDEMOLISTREVERSEJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataInitializationStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataSynchronizationStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListReverseJobDestinationEndpoint.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListReverseJobMigrationMode.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListReverseJobPerformance.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListReverseJobPrecheckStatus.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListReverseJobSourceEndpoint.hpp>
#include <alibabacloud/models/DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsResponseBodyEtlDemoListReverseJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsResponseBodyEtlDemoListReverseJob& obj) { 
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
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
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Performance, performance_);
      DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_TO_JSON(Reserved, reserved_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsResponseBodyEtlDemoListReverseJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
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
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(EtlSafeCheckpoint, etlSafeCheckpoint_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Performance, performance_);
      DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
    };
    DescribeDtsJobsResponseBodyEtlDemoListReverseJob() = default ;
    DescribeDtsJobsResponseBodyEtlDemoListReverseJob(const DescribeDtsJobsResponseBodyEtlDemoListReverseJob &) = default ;
    DescribeDtsJobsResponseBodyEtlDemoListReverseJob(DescribeDtsJobsResponseBodyEtlDemoListReverseJob &&) = default ;
    DescribeDtsJobsResponseBodyEtlDemoListReverseJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsResponseBodyEtlDemoListReverseJob() = default ;
    DescribeDtsJobsResponseBodyEtlDemoListReverseJob& operator=(const DescribeDtsJobsResponseBodyEtlDemoListReverseJob &) = default ;
    DescribeDtsJobsResponseBodyEtlDemoListReverseJob& operator=(DescribeDtsJobsResponseBodyEtlDemoListReverseJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkpoint_ == nullptr
        && return this->createTime_ == nullptr && return this->dataInitializationStatus_ == nullptr && return this->dataSynchronizationStatus_ == nullptr && return this->dbObject_ == nullptr && return this->delay_ == nullptr
        && return this->destinationEndpoint_ == nullptr && return this->dtsInstanceID_ == nullptr && return this->dtsJobClass_ == nullptr && return this->dtsJobDirection_ == nullptr && return this->dtsJobId_ == nullptr
        && return this->dtsJobName_ == nullptr && return this->errorMessage_ == nullptr && return this->etlSafeCheckpoint_ == nullptr && return this->expireTime_ == nullptr && return this->migrationMode_ == nullptr
        && return this->payType_ == nullptr && return this->performance_ == nullptr && return this->precheckStatus_ == nullptr && return this->reserved_ == nullptr && return this->sourceEndpoint_ == nullptr
        && return this->status_ == nullptr && return this->structureInitializationStatus_ == nullptr; };
    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline string checkpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataInitializationStatus Field Functions 
    bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
    void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataInitializationStatus & dataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataInitializationStatus) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataInitializationStatus dataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataInitializationStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setDataInitializationStatus(const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setDataInitializationStatus(Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


    // dataSynchronizationStatus Field Functions 
    bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
    void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataSynchronizationStatus & dataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataSynchronizationStatus) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataSynchronizationStatus dataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataSynchronizationStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setDataSynchronizationStatus(const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setDataSynchronizationStatus(Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


    // dbObject Field Functions 
    bool hasDbObject() const { return this->dbObject_ != nullptr;};
    void deleteDbObject() { this->dbObject_ = nullptr;};
    inline string dbObject() const { DARABONBA_PTR_GET_DEFAULT(dbObject_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setDbObject(string dbObject) { DARABONBA_PTR_SET_VALUE(dbObject_, dbObject) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int64_t delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0L) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setDelay(int64_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDestinationEndpoint & destinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDestinationEndpoint) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDestinationEndpoint destinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDestinationEndpoint) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setDestinationEndpoint(const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setDestinationEndpoint(Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // dtsInstanceID Field Functions 
    bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
    void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
    inline string dtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


    // dtsJobClass Field Functions 
    bool hasDtsJobClass() const { return this->dtsJobClass_ != nullptr;};
    void deleteDtsJobClass() { this->dtsJobClass_ = nullptr;};
    inline string dtsJobClass() const { DARABONBA_PTR_GET_DEFAULT(dtsJobClass_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setDtsJobClass(string dtsJobClass) { DARABONBA_PTR_SET_VALUE(dtsJobClass_, dtsJobClass) };


    // dtsJobDirection Field Functions 
    bool hasDtsJobDirection() const { return this->dtsJobDirection_ != nullptr;};
    void deleteDtsJobDirection() { this->dtsJobDirection_ = nullptr;};
    inline string dtsJobDirection() const { DARABONBA_PTR_GET_DEFAULT(dtsJobDirection_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setDtsJobDirection(string dtsJobDirection) { DARABONBA_PTR_SET_VALUE(dtsJobDirection_, dtsJobDirection) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // dtsJobName Field Functions 
    bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
    void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
    inline string dtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // etlSafeCheckpoint Field Functions 
    bool hasEtlSafeCheckpoint() const { return this->etlSafeCheckpoint_ != nullptr;};
    void deleteEtlSafeCheckpoint() { this->etlSafeCheckpoint_ = nullptr;};
    inline string etlSafeCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(etlSafeCheckpoint_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setEtlSafeCheckpoint(string etlSafeCheckpoint) { DARABONBA_PTR_SET_VALUE(etlSafeCheckpoint_, etlSafeCheckpoint) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // migrationMode Field Functions 
    bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
    void deleteMigrationMode() { this->migrationMode_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobMigrationMode & migrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobMigrationMode) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobMigrationMode migrationMode() { DARABONBA_PTR_GET(migrationMode_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobMigrationMode) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setMigrationMode(const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobMigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setMigrationMode(Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobMigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // performance Field Functions 
    bool hasPerformance() const { return this->performance_ != nullptr;};
    void deletePerformance() { this->performance_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobPerformance & performance() const { DARABONBA_PTR_GET_CONST(performance_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobPerformance) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobPerformance performance() { DARABONBA_PTR_GET(performance_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobPerformance) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setPerformance(const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobPerformance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setPerformance(Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobPerformance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


    // precheckStatus Field Functions 
    bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
    void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobPrecheckStatus & precheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobPrecheckStatus) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobPrecheckStatus precheckStatus() { DARABONBA_PTR_GET(precheckStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobPrecheckStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setPrecheckStatus(const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobPrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setPrecheckStatus(Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobPrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline string reserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobSourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobSourceEndpoint) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobSourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobSourceEndpoint) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setSourceEndpoint(const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobSourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setSourceEndpoint(Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobSourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // structureInitializationStatus Field Functions 
    bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
    void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
    inline const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus & structureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus) };
    inline Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus structureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setStructureInitializationStatus(const Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJob& setStructureInitializationStatus(Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


  protected:
    // The start offset of incremental data synchronization. This value is a UNIX timestamp representing the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> checkpoint_ = nullptr;
    // The time when the task was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The state of initial full data synchronization.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataInitializationStatus> dataInitializationStatus_ = nullptr;
    // The state of incremental data synchronization.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDataSynchronizationStatus> dataSynchronizationStatus_ = nullptr;
    // The schema of the objects that you want to synchronize. The value is a JSON string and can contain regular expressions. For more information, see Objects of DTS tasks.
    std::shared_ptr<string> dbObject_ = nullptr;
    // The latency of incremental data synchronization. Unit: seconds.
    std::shared_ptr<int64_t> delay_ = nullptr;
    // The connection settings of the destination instance.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobDestinationEndpoint> destinationEndpoint_ = nullptr;
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
    // The error message returned if the task failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The checkpoint of the ETL task.
    std::shared_ptr<string> etlSafeCheckpoint_ = nullptr;
    // The time when the instance expires. The time follows the ISO 8601 standard in the* yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC. 
    // 
    // > This parameter is returned only if the returned value of **PayType** is **PrePaid**.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The migration types or initial synchronization types.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobMigrationMode> migrationMode_ = nullptr;
    // The billing method of the DTS instance. Valid values:
    // 
    // - **PrePaid**: subscription
    // - **PostPaid**: pay-as-you-go
    std::shared_ptr<string> payType_ = nullptr;
    // The performance of the data migration or synchronization instance.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobPerformance> performance_ = nullptr;
    // The precheck state.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobPrecheckStatus> precheckStatus_ = nullptr;
    // The reserved parameter of DTS. The value is a JSON string. You can specify this parameter to meet specific requirements, for example, whether to automatically start a precheck. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
    std::shared_ptr<string> reserved_ = nullptr;
    // The connection settings of the source instance.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobSourceEndpoint> sourceEndpoint_ = nullptr;
    // The state of the DTS instance. For more information about the valid values, see the description of the request parameter **Status**.
    std::shared_ptr<string> status_ = nullptr;
    // The state of initial schema synchronization.
    std::shared_ptr<Models::DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus> structureInitializationStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
