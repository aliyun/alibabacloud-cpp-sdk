// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMigrationJobStatusResponseBodyDataInitializationStatus.hpp>
#include <alibabacloud/models/DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus.hpp>
#include <alibabacloud/models/DescribeMigrationJobStatusResponseBodyDestinationEndpoint.hpp>
#include <alibabacloud/models/DescribeMigrationJobStatusResponseBodyMigrationMode.hpp>
#include <alibabacloud/models/DescribeMigrationJobStatusResponseBodyPrecheckStatus.hpp>
#include <alibabacloud/models/DescribeMigrationJobStatusResponseBodySourceEndpoint.hpp>
#include <alibabacloud/models/DescribeMigrationJobStatusResponseBodyStructureInitializationStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(MigrationJobClass, migrationJobClass_);
      DARABONBA_PTR_TO_JSON(MigrationJobId, migrationJobId_);
      DARABONBA_PTR_TO_JSON(MigrationJobName, migrationJobName_);
      DARABONBA_PTR_TO_JSON(MigrationJobStatus, migrationJobStatus_);
      DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_TO_JSON(MigrationObject, migrationObject_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(MigrationJobClass, migrationJobClass_);
      DARABONBA_PTR_FROM_JSON(MigrationJobId, migrationJobId_);
      DARABONBA_PTR_FROM_JSON(MigrationJobName, migrationJobName_);
      DARABONBA_PTR_FROM_JSON(MigrationJobStatus, migrationJobStatus_);
      DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
      DARABONBA_PTR_FROM_JSON(MigrationObject, migrationObject_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeMigrationJobStatusResponseBody() = default ;
    DescribeMigrationJobStatusResponseBody(const DescribeMigrationJobStatusResponseBody &) = default ;
    DescribeMigrationJobStatusResponseBody(DescribeMigrationJobStatusResponseBody &&) = default ;
    DescribeMigrationJobStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobStatusResponseBody() = default ;
    DescribeMigrationJobStatusResponseBody& operator=(const DescribeMigrationJobStatusResponseBody &) = default ;
    DescribeMigrationJobStatusResponseBody& operator=(DescribeMigrationJobStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInitializationStatus_ != nullptr
        && this->dataSynchronizationStatus_ != nullptr && this->destinationEndpoint_ != nullptr && this->errCode_ != nullptr && this->errMessage_ != nullptr && this->migrationJobClass_ != nullptr
        && this->migrationJobId_ != nullptr && this->migrationJobName_ != nullptr && this->migrationJobStatus_ != nullptr && this->migrationMode_ != nullptr && this->migrationObject_ != nullptr
        && this->payType_ != nullptr && this->precheckStatus_ != nullptr && this->requestId_ != nullptr && this->sourceEndpoint_ != nullptr && this->structureInitializationStatus_ != nullptr
        && this->success_ != nullptr && this->taskId_ != nullptr; };
    // dataInitializationStatus Field Functions 
    bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
    void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
    inline const DescribeMigrationJobStatusResponseBodyDataInitializationStatus & dataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, DescribeMigrationJobStatusResponseBodyDataInitializationStatus) };
    inline DescribeMigrationJobStatusResponseBodyDataInitializationStatus dataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, DescribeMigrationJobStatusResponseBodyDataInitializationStatus) };
    inline DescribeMigrationJobStatusResponseBody& setDataInitializationStatus(const DescribeMigrationJobStatusResponseBodyDataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
    inline DescribeMigrationJobStatusResponseBody& setDataInitializationStatus(DescribeMigrationJobStatusResponseBodyDataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


    // dataSynchronizationStatus Field Functions 
    bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
    void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
    inline const DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus & dataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus) };
    inline DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus dataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus) };
    inline DescribeMigrationJobStatusResponseBody& setDataSynchronizationStatus(const DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
    inline DescribeMigrationJobStatusResponseBody& setDataSynchronizationStatus(DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const DescribeMigrationJobStatusResponseBodyDestinationEndpoint & destinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, DescribeMigrationJobStatusResponseBodyDestinationEndpoint) };
    inline DescribeMigrationJobStatusResponseBodyDestinationEndpoint destinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, DescribeMigrationJobStatusResponseBodyDestinationEndpoint) };
    inline DescribeMigrationJobStatusResponseBody& setDestinationEndpoint(const DescribeMigrationJobStatusResponseBodyDestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline DescribeMigrationJobStatusResponseBody& setDestinationEndpoint(DescribeMigrationJobStatusResponseBodyDestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeMigrationJobStatusResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeMigrationJobStatusResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // migrationJobClass Field Functions 
    bool hasMigrationJobClass() const { return this->migrationJobClass_ != nullptr;};
    void deleteMigrationJobClass() { this->migrationJobClass_ = nullptr;};
    inline string migrationJobClass() const { DARABONBA_PTR_GET_DEFAULT(migrationJobClass_, "") };
    inline DescribeMigrationJobStatusResponseBody& setMigrationJobClass(string migrationJobClass) { DARABONBA_PTR_SET_VALUE(migrationJobClass_, migrationJobClass) };


    // migrationJobId Field Functions 
    bool hasMigrationJobId() const { return this->migrationJobId_ != nullptr;};
    void deleteMigrationJobId() { this->migrationJobId_ = nullptr;};
    inline string migrationJobId() const { DARABONBA_PTR_GET_DEFAULT(migrationJobId_, "") };
    inline DescribeMigrationJobStatusResponseBody& setMigrationJobId(string migrationJobId) { DARABONBA_PTR_SET_VALUE(migrationJobId_, migrationJobId) };


    // migrationJobName Field Functions 
    bool hasMigrationJobName() const { return this->migrationJobName_ != nullptr;};
    void deleteMigrationJobName() { this->migrationJobName_ = nullptr;};
    inline string migrationJobName() const { DARABONBA_PTR_GET_DEFAULT(migrationJobName_, "") };
    inline DescribeMigrationJobStatusResponseBody& setMigrationJobName(string migrationJobName) { DARABONBA_PTR_SET_VALUE(migrationJobName_, migrationJobName) };


    // migrationJobStatus Field Functions 
    bool hasMigrationJobStatus() const { return this->migrationJobStatus_ != nullptr;};
    void deleteMigrationJobStatus() { this->migrationJobStatus_ = nullptr;};
    inline string migrationJobStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationJobStatus_, "") };
    inline DescribeMigrationJobStatusResponseBody& setMigrationJobStatus(string migrationJobStatus) { DARABONBA_PTR_SET_VALUE(migrationJobStatus_, migrationJobStatus) };


    // migrationMode Field Functions 
    bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
    void deleteMigrationMode() { this->migrationMode_ = nullptr;};
    inline const DescribeMigrationJobStatusResponseBodyMigrationMode & migrationMode() const { DARABONBA_PTR_GET_CONST(migrationMode_, DescribeMigrationJobStatusResponseBodyMigrationMode) };
    inline DescribeMigrationJobStatusResponseBodyMigrationMode migrationMode() { DARABONBA_PTR_GET(migrationMode_, DescribeMigrationJobStatusResponseBodyMigrationMode) };
    inline DescribeMigrationJobStatusResponseBody& setMigrationMode(const DescribeMigrationJobStatusResponseBodyMigrationMode & migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };
    inline DescribeMigrationJobStatusResponseBody& setMigrationMode(DescribeMigrationJobStatusResponseBodyMigrationMode && migrationMode) { DARABONBA_PTR_SET_RVALUE(migrationMode_, migrationMode) };


    // migrationObject Field Functions 
    bool hasMigrationObject() const { return this->migrationObject_ != nullptr;};
    void deleteMigrationObject() { this->migrationObject_ = nullptr;};
    inline string migrationObject() const { DARABONBA_PTR_GET_DEFAULT(migrationObject_, "") };
    inline DescribeMigrationJobStatusResponseBody& setMigrationObject(string migrationObject) { DARABONBA_PTR_SET_VALUE(migrationObject_, migrationObject) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeMigrationJobStatusResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // precheckStatus Field Functions 
    bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
    void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
    inline const DescribeMigrationJobStatusResponseBodyPrecheckStatus & precheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, DescribeMigrationJobStatusResponseBodyPrecheckStatus) };
    inline DescribeMigrationJobStatusResponseBodyPrecheckStatus precheckStatus() { DARABONBA_PTR_GET(precheckStatus_, DescribeMigrationJobStatusResponseBodyPrecheckStatus) };
    inline DescribeMigrationJobStatusResponseBody& setPrecheckStatus(const DescribeMigrationJobStatusResponseBodyPrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
    inline DescribeMigrationJobStatusResponseBody& setPrecheckStatus(DescribeMigrationJobStatusResponseBodyPrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMigrationJobStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const DescribeMigrationJobStatusResponseBodySourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, DescribeMigrationJobStatusResponseBodySourceEndpoint) };
    inline DescribeMigrationJobStatusResponseBodySourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, DescribeMigrationJobStatusResponseBodySourceEndpoint) };
    inline DescribeMigrationJobStatusResponseBody& setSourceEndpoint(const DescribeMigrationJobStatusResponseBodySourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeMigrationJobStatusResponseBody& setSourceEndpoint(DescribeMigrationJobStatusResponseBodySourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // structureInitializationStatus Field Functions 
    bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
    void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
    inline const DescribeMigrationJobStatusResponseBodyStructureInitializationStatus & structureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, DescribeMigrationJobStatusResponseBodyStructureInitializationStatus) };
    inline DescribeMigrationJobStatusResponseBodyStructureInitializationStatus structureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, DescribeMigrationJobStatusResponseBodyStructureInitializationStatus) };
    inline DescribeMigrationJobStatusResponseBody& setStructureInitializationStatus(const DescribeMigrationJobStatusResponseBodyStructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
    inline DescribeMigrationJobStatusResponseBody& setStructureInitializationStatus(DescribeMigrationJobStatusResponseBodyStructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeMigrationJobStatusResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeMigrationJobStatusResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The status of full data migration.
    std::shared_ptr<DescribeMigrationJobStatusResponseBodyDataInitializationStatus> dataInitializationStatus_ = nullptr;
    // The status of incremental data migration.
    std::shared_ptr<DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus> dataSynchronizationStatus_ = nullptr;
    // The connection settings of the destination instance.
    std::shared_ptr<DescribeMigrationJobStatusResponseBodyDestinationEndpoint> destinationEndpoint_ = nullptr;
    // The error code returned if the call failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the call failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The specification of the data migration instance. Valid values: **small**, **medium**, **large**, **xlarge**, and **2xlarge**. For more information, see [Specifications of data migration instances](https://help.aliyun.com/document_detail/26606.html).
    std::shared_ptr<string> migrationJobClass_ = nullptr;
    // The ID of the data migration instance.
    std::shared_ptr<string> migrationJobId_ = nullptr;
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
    std::shared_ptr<DescribeMigrationJobStatusResponseBodyMigrationMode> migrationMode_ = nullptr;
    // The objects that are migrated by the task.
    std::shared_ptr<string> migrationObject_ = nullptr;
    // The billing method of the data migration instance. The value is **PostPaid** (pay-as-you-go).
    std::shared_ptr<string> payType_ = nullptr;
    // The precheck details.
    std::shared_ptr<DescribeMigrationJobStatusResponseBodyPrecheckStatus> precheckStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The connection settings of the source instance.
    std::shared_ptr<DescribeMigrationJobStatusResponseBodySourceEndpoint> sourceEndpoint_ = nullptr;
    // The status of schema migration.
    std::shared_ptr<DescribeMigrationJobStatusResponseBodyStructureInitializationStatus> structureInitializationStatus_ = nullptr;
    // Indicates whether the call was successful.
    std::shared_ptr<string> success_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
