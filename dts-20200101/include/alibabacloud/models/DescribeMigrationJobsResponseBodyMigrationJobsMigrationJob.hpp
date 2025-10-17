// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODYMIGRATIONJOBSMIGRATIONJOB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODYMIGRATIONJOBSMIGRATIONJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization.hpp>
#include <alibabacloud/models/DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization.hpp>
#include <alibabacloud/models/DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint.hpp>
#include <alibabacloud/models/DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode.hpp>
#include <alibabacloud/models/DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject.hpp>
#include <alibabacloud/models/DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck.hpp>
#include <alibabacloud/models/DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint.hpp>
#include <alibabacloud/models/DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization.hpp>
#include <alibabacloud/models/DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& obj) { 
      DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_TO_JSON(InstanceCreateTime, instanceCreateTime_);
      DARABONBA_PTR_TO_JSON(JobCreateTime, jobCreateTime_);
      DARABONBA_PTR_TO_JSON(MigrationJobClass, migrationJobClass_);
      DARABONBA_PTR_TO_JSON(MigrationJobID, migrationJobID_);
      DARABONBA_PTR_TO_JSON(MigrationJobName, migrationJobName_);
      DARABONBA_PTR_TO_JSON(MigrationJobStatus, migrationJobStatus_);
      DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_TO_JSON(MigrationObject, migrationObject_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Precheck, precheck_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_FROM_JSON(InstanceCreateTime, instanceCreateTime_);
      DARABONBA_PTR_FROM_JSON(JobCreateTime, jobCreateTime_);
      DARABONBA_PTR_FROM_JSON(MigrationJobClass, migrationJobClass_);
      DARABONBA_PTR_FROM_JSON(MigrationJobID, migrationJobID_);
      DARABONBA_PTR_FROM_JSON(MigrationJobName, migrationJobName_);
      DARABONBA_PTR_FROM_JSON(MigrationJobStatus, migrationJobStatus_);
      DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_FROM_JSON(MigrationObject, migrationObject_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Precheck, precheck_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob() = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob(const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob &) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob(DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob &&) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob() = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& operator=(const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob &) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& operator=(DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInitialization_ == nullptr
        && return this->dataSynchronization_ == nullptr && return this->destinationEndpoint_ == nullptr && return this->instanceCreateTime_ == nullptr && return this->jobCreateTime_ == nullptr && return this->migrationJobClass_ == nullptr
        && return this->migrationJobID_ == nullptr && return this->migrationJobName_ == nullptr && return this->migrationJobStatus_ == nullptr && return this->migrationMode_ == nullptr && return this->migrationObject_ == nullptr
        && return this->payType_ == nullptr && return this->precheck_ == nullptr && return this->sourceEndpoint_ == nullptr && return this->structureInitialization_ == nullptr && return this->tags_ == nullptr; };
    // dataInitialization Field Functions 
    bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
    void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
    inline const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization & dataInitialization() const { DARABONBA_PTR_GET_CONST(dataInitialization_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization) };
    inline Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization dataInitialization() { DARABONBA_PTR_GET(dataInitialization_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setDataInitialization(const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization & dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setDataInitialization(Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization && dataInitialization) { DARABONBA_PTR_SET_RVALUE(dataInitialization_, dataInitialization) };


    // dataSynchronization Field Functions 
    bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
    void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
    inline const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization & dataSynchronization() const { DARABONBA_PTR_GET_CONST(dataSynchronization_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization) };
    inline Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization dataSynchronization() { DARABONBA_PTR_GET(dataSynchronization_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setDataSynchronization(const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization & dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setDataSynchronization(Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization && dataSynchronization) { DARABONBA_PTR_SET_RVALUE(dataSynchronization_, dataSynchronization) };


    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint & destinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint) };
    inline Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint destinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setDestinationEndpoint(const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setDestinationEndpoint(Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // instanceCreateTime Field Functions 
    bool hasInstanceCreateTime() const { return this->instanceCreateTime_ != nullptr;};
    void deleteInstanceCreateTime() { this->instanceCreateTime_ = nullptr;};
    inline string instanceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(instanceCreateTime_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setInstanceCreateTime(string instanceCreateTime) { DARABONBA_PTR_SET_VALUE(instanceCreateTime_, instanceCreateTime) };


    // jobCreateTime Field Functions 
    bool hasJobCreateTime() const { return this->jobCreateTime_ != nullptr;};
    void deleteJobCreateTime() { this->jobCreateTime_ = nullptr;};
    inline string jobCreateTime() const { DARABONBA_PTR_GET_DEFAULT(jobCreateTime_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setJobCreateTime(string jobCreateTime) { DARABONBA_PTR_SET_VALUE(jobCreateTime_, jobCreateTime) };


    // migrationJobClass Field Functions 
    bool hasMigrationJobClass() const { return this->migrationJobClass_ != nullptr;};
    void deleteMigrationJobClass() { this->migrationJobClass_ = nullptr;};
    inline string migrationJobClass() const { DARABONBA_PTR_GET_DEFAULT(migrationJobClass_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setMigrationJobClass(string migrationJobClass) { DARABONBA_PTR_SET_VALUE(migrationJobClass_, migrationJobClass) };


    // migrationJobID Field Functions 
    bool hasMigrationJobID() const { return this->migrationJobID_ != nullptr;};
    void deleteMigrationJobID() { this->migrationJobID_ = nullptr;};
    inline string migrationJobID() const { DARABONBA_PTR_GET_DEFAULT(migrationJobID_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setMigrationJobID(string migrationJobID) { DARABONBA_PTR_SET_VALUE(migrationJobID_, migrationJobID) };


    // migrationJobName Field Functions 
    bool hasMigrationJobName() const { return this->migrationJobName_ != nullptr;};
    void deleteMigrationJobName() { this->migrationJobName_ = nullptr;};
    inline string migrationJobName() const { DARABONBA_PTR_GET_DEFAULT(migrationJobName_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setMigrationJobName(string migrationJobName) { DARABONBA_PTR_SET_VALUE(migrationJobName_, migrationJobName) };


    // migrationJobStatus Field Functions 
    bool hasMigrationJobStatus() const { return this->migrationJobStatus_ != nullptr;};
    void deleteMigrationJobStatus() { this->migrationJobStatus_ = nullptr;};
    inline string migrationJobStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationJobStatus_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setMigrationJobStatus(string migrationJobStatus) { DARABONBA_PTR_SET_VALUE(migrationJobStatus_, migrationJobStatus) };


    // migrationMode Field Functions 
    bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
    void deleteMigrationMode() { this->migrationMode_ = nullptr;};
    inline const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode & migrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode) };
    inline Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode migrationMode() { DARABONBA_PTR_GET(migrationMode_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setMigrationMode(const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setMigrationMode(Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


    // migrationObject Field Functions 
    bool hasMigrationObject() const { return this->migrationObject_ != nullptr;};
    void deleteMigrationObject() { this->migrationObject_ = nullptr;};
    inline const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject & migrationObject() const { DARABONBA_PTR_GET_CONST(migrationObject_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject) };
    inline Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject migrationObject() { DARABONBA_PTR_GET(migrationObject_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setMigrationObject(const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject & migrationObject) { DARABONBA_PTR_SET_VALUE(migrationObject_, migrationObject) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setMigrationObject(Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject && migrationObject) { DARABONBA_PTR_SET_RVALUE(migrationObject_, migrationObject) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // precheck Field Functions 
    bool hasPrecheck() const { return this->precheck_ != nullptr;};
    void deletePrecheck() { this->precheck_ = nullptr;};
    inline const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck & precheck() const { DARABONBA_PTR_GET_CONST(precheck_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck) };
    inline Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck precheck() { DARABONBA_PTR_GET(precheck_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setPrecheck(const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck & precheck) { DARABONBA_PTR_SET_VALUE(precheck_, precheck) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setPrecheck(Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck && precheck) { DARABONBA_PTR_SET_RVALUE(precheck_, precheck) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint) };
    inline Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setSourceEndpoint(const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setSourceEndpoint(Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // structureInitialization Field Functions 
    bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
    void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
    inline const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization & structureInitialization() const { DARABONBA_PTR_GET_CONST(structureInitialization_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization) };
    inline Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization structureInitialization() { DARABONBA_PTR_GET(structureInitialization_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setStructureInitialization(const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization & structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setStructureInitialization(Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization && structureInitialization) { DARABONBA_PTR_SET_RVALUE(structureInitialization_, structureInitialization) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobTags) };
    inline Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobTags) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setTags(const Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJob& setTags(Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The details of full data migration.
    std::shared_ptr<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataInitialization> dataInitialization_ = nullptr;
    // The details of incremental data migration.
    std::shared_ptr<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDataSynchronization> dataSynchronization_ = nullptr;
    // The connection settings of the destination instance.
    std::shared_ptr<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobDestinationEndpoint> destinationEndpoint_ = nullptr;
    // The time when the data migration instance was created. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    std::shared_ptr<string> instanceCreateTime_ = nullptr;
    // The time when the data migration task was created. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    std::shared_ptr<string> jobCreateTime_ = nullptr;
    // The specification of the data migration instance. Valid values: **small**, **medium**, **large**, **xlarge**, and **2xlarge**. For more information, see [Specifications of data migration instances](https://help.aliyun.com/document_detail/26606.html).
    std::shared_ptr<string> migrationJobClass_ = nullptr;
    // The ID of the data migration instance.
    std::shared_ptr<string> migrationJobID_ = nullptr;
    // The name of the data migration task.
    std::shared_ptr<string> migrationJobName_ = nullptr;
    // The status of the data migration task. Valid values:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Prechecking**: The task is being prechecked.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **Migrating**: The task is migrating data.
    // *   **Suspending**: The task is paused.
    // *   **MigrationFailed**: The task failed to migrate data.
    // *   **Finished**: The task is completed.
    std::shared_ptr<string> migrationJobStatus_ = nullptr;
    // The migration types.
    std::shared_ptr<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationMode> migrationMode_ = nullptr;
    // The objects that are migrated by the task.
    std::shared_ptr<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobMigrationObject> migrationObject_ = nullptr;
    // The billing method of the data migration instance. The value is **PostPaid** (pay-as-you-go).
    std::shared_ptr<string> payType_ = nullptr;
    // The precheck details.
    std::shared_ptr<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobPrecheck> precheck_ = nullptr;
    // The connection settings of the source instance.
    std::shared_ptr<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobSourceEndpoint> sourceEndpoint_ = nullptr;
    // The details of schema migration.
    std::shared_ptr<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization> structureInitialization_ = nullptr;
    // The collection of tags.
    std::shared_ptr<Models::DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
