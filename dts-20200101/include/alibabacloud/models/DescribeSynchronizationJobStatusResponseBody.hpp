// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobStatusResponseBodyPerformance.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobStatusResponseBodyPrecheckStatus.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobStatusResponseBodySourceEndpoint.hpp>
#include <alibabacloud/models/DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSynchronizationJobStatusResponseBodySynchronizationObjects.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationJobStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(DelayMillis, delayMillis_);
      DARABONBA_PTR_TO_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Performance, performance_);
      DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobClass, synchronizationJobClass_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobId, synchronizationJobId_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobName, synchronizationJobName_);
      DARABONBA_PTR_TO_JSON(SynchronizationObjects, synchronizationObjects_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(DelayMillis, delayMillis_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpoint, destinationEndpoint_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Performance, performance_);
      DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobClass, synchronizationJobClass_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobId, synchronizationJobId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobName, synchronizationJobName_);
      DARABONBA_PTR_FROM_JSON(SynchronizationObjects, synchronizationObjects_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeSynchronizationJobStatusResponseBody() = default ;
    DescribeSynchronizationJobStatusResponseBody(const DescribeSynchronizationJobStatusResponseBody &) = default ;
    DescribeSynchronizationJobStatusResponseBody(DescribeSynchronizationJobStatusResponseBody &&) = default ;
    DescribeSynchronizationJobStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobStatusResponseBody() = default ;
    DescribeSynchronizationJobStatusResponseBody& operator=(const DescribeSynchronizationJobStatusResponseBody &) = default ;
    DescribeSynchronizationJobStatusResponseBody& operator=(DescribeSynchronizationJobStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkpoint_ != nullptr
        && this->dataInitialization_ != nullptr && this->dataInitializationStatus_ != nullptr && this->dataSynchronizationStatus_ != nullptr && this->delay_ != nullptr && this->delayMillis_ != nullptr
        && this->destinationEndpoint_ != nullptr && this->errCode_ != nullptr && this->errMessage_ != nullptr && this->errorMessage_ != nullptr && this->expireTime_ != nullptr
        && this->payType_ != nullptr && this->performance_ != nullptr && this->precheckStatus_ != nullptr && this->requestId_ != nullptr && this->sourceEndpoint_ != nullptr
        && this->status_ != nullptr && this->structureInitialization_ != nullptr && this->structureInitializationStatus_ != nullptr && this->success_ != nullptr && this->synchronizationDirection_ != nullptr
        && this->synchronizationJobClass_ != nullptr && this->synchronizationJobId_ != nullptr && this->synchronizationJobName_ != nullptr && this->synchronizationObjects_ != nullptr && this->taskId_ != nullptr; };
    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline string checkpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // dataInitialization Field Functions 
    bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
    void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
    inline string dataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setDataInitialization(string dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


    // dataInitializationStatus Field Functions 
    bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
    void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
    inline const DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus & dataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus) };
    inline DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus dataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus) };
    inline DescribeSynchronizationJobStatusResponseBody& setDataInitializationStatus(const DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
    inline DescribeSynchronizationJobStatusResponseBody& setDataInitializationStatus(DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


    // dataSynchronizationStatus Field Functions 
    bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
    void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
    inline const DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus & dataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus) };
    inline DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus dataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus) };
    inline DescribeSynchronizationJobStatusResponseBody& setDataSynchronizationStatus(const DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
    inline DescribeSynchronizationJobStatusResponseBody& setDataSynchronizationStatus(DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline string delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setDelay(string delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // delayMillis Field Functions 
    bool hasDelayMillis() const { return this->delayMillis_ != nullptr;};
    void deleteDelayMillis() { this->delayMillis_ = nullptr;};
    inline int64_t delayMillis() const { DARABONBA_PTR_GET_DEFAULT(delayMillis_, 0L) };
    inline DescribeSynchronizationJobStatusResponseBody& setDelayMillis(int64_t delayMillis) { DARABONBA_PTR_SET_VALUE(delayMillis_, delayMillis) };


    // destinationEndpoint Field Functions 
    bool hasDestinationEndpoint() const { return this->destinationEndpoint_ != nullptr;};
    void deleteDestinationEndpoint() { this->destinationEndpoint_ = nullptr;};
    inline const DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint & destinationEndpoint() const { DARABONBA_PTR_GET_CONST(destinationEndpoint_, DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint) };
    inline DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint destinationEndpoint() { DARABONBA_PTR_GET(destinationEndpoint_, DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint) };
    inline DescribeSynchronizationJobStatusResponseBody& setDestinationEndpoint(const DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint & destinationEndpoint) { DARABONBA_PTR_SET_VALUE(destinationEndpoint_, destinationEndpoint) };
    inline DescribeSynchronizationJobStatusResponseBody& setDestinationEndpoint(DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint && destinationEndpoint) { DARABONBA_PTR_SET_RVALUE(destinationEndpoint_, destinationEndpoint) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // performance Field Functions 
    bool hasPerformance() const { return this->performance_ != nullptr;};
    void deletePerformance() { this->performance_ = nullptr;};
    inline const DescribeSynchronizationJobStatusResponseBodyPerformance & performance() const { DARABONBA_PTR_GET_CONST(performance_, DescribeSynchronizationJobStatusResponseBodyPerformance) };
    inline DescribeSynchronizationJobStatusResponseBodyPerformance performance() { DARABONBA_PTR_GET(performance_, DescribeSynchronizationJobStatusResponseBodyPerformance) };
    inline DescribeSynchronizationJobStatusResponseBody& setPerformance(const DescribeSynchronizationJobStatusResponseBodyPerformance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
    inline DescribeSynchronizationJobStatusResponseBody& setPerformance(DescribeSynchronizationJobStatusResponseBodyPerformance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


    // precheckStatus Field Functions 
    bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
    void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
    inline const DescribeSynchronizationJobStatusResponseBodyPrecheckStatus & precheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, DescribeSynchronizationJobStatusResponseBodyPrecheckStatus) };
    inline DescribeSynchronizationJobStatusResponseBodyPrecheckStatus precheckStatus() { DARABONBA_PTR_GET(precheckStatus_, DescribeSynchronizationJobStatusResponseBodyPrecheckStatus) };
    inline DescribeSynchronizationJobStatusResponseBody& setPrecheckStatus(const DescribeSynchronizationJobStatusResponseBodyPrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
    inline DescribeSynchronizationJobStatusResponseBody& setPrecheckStatus(DescribeSynchronizationJobStatusResponseBodyPrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const DescribeSynchronizationJobStatusResponseBodySourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, DescribeSynchronizationJobStatusResponseBodySourceEndpoint) };
    inline DescribeSynchronizationJobStatusResponseBodySourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, DescribeSynchronizationJobStatusResponseBodySourceEndpoint) };
    inline DescribeSynchronizationJobStatusResponseBody& setSourceEndpoint(const DescribeSynchronizationJobStatusResponseBodySourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline DescribeSynchronizationJobStatusResponseBody& setSourceEndpoint(DescribeSynchronizationJobStatusResponseBodySourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // structureInitialization Field Functions 
    bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
    void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
    inline string structureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setStructureInitialization(string structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


    // structureInitializationStatus Field Functions 
    bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
    void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
    inline const DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus & structureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus) };
    inline DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus structureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus) };
    inline DescribeSynchronizationJobStatusResponseBody& setStructureInitializationStatus(const DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
    inline DescribeSynchronizationJobStatusResponseBody& setStructureInitializationStatus(DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string synchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // synchronizationJobClass Field Functions 
    bool hasSynchronizationJobClass() const { return this->synchronizationJobClass_ != nullptr;};
    void deleteSynchronizationJobClass() { this->synchronizationJobClass_ = nullptr;};
    inline string synchronizationJobClass() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobClass_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setSynchronizationJobClass(string synchronizationJobClass) { DARABONBA_PTR_SET_VALUE(synchronizationJobClass_, synchronizationJobClass) };


    // synchronizationJobId Field Functions 
    bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
    void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
    inline string synchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


    // synchronizationJobName Field Functions 
    bool hasSynchronizationJobName() const { return this->synchronizationJobName_ != nullptr;};
    void deleteSynchronizationJobName() { this->synchronizationJobName_ = nullptr;};
    inline string synchronizationJobName() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobName_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setSynchronizationJobName(string synchronizationJobName) { DARABONBA_PTR_SET_VALUE(synchronizationJobName_, synchronizationJobName) };


    // synchronizationObjects Field Functions 
    bool hasSynchronizationObjects() const { return this->synchronizationObjects_ != nullptr;};
    void deleteSynchronizationObjects() { this->synchronizationObjects_ = nullptr;};
    inline const vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjects> & synchronizationObjects() const { DARABONBA_PTR_GET_CONST(synchronizationObjects_, vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjects>) };
    inline vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjects> synchronizationObjects() { DARABONBA_PTR_GET(synchronizationObjects_, vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjects>) };
    inline DescribeSynchronizationJobStatusResponseBody& setSynchronizationObjects(const vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjects> & synchronizationObjects) { DARABONBA_PTR_SET_VALUE(synchronizationObjects_, synchronizationObjects) };
    inline DescribeSynchronizationJobStatusResponseBody& setSynchronizationObjects(vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjects> && synchronizationObjects) { DARABONBA_PTR_SET_RVALUE(synchronizationObjects_, synchronizationObjects) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeSynchronizationJobStatusResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The UNIX timestamp generated when the latest data record was synchronized.
    // 
    // >  You can use a search engine to obtain a UNIX timestamp converter.
    std::shared_ptr<string> checkpoint_ = nullptr;
    // Indicates whether full data synchronization is performed. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<string> dataInitialization_ = nullptr;
    // The status of full data synchronization.
    std::shared_ptr<DescribeSynchronizationJobStatusResponseBodyDataInitializationStatus> dataInitializationStatus_ = nullptr;
    // The status of incremental data synchronization.
    std::shared_ptr<DescribeSynchronizationJobStatusResponseBodyDataSynchronizationStatus> dataSynchronizationStatus_ = nullptr;
    // The synchronization latency, in seconds.
    std::shared_ptr<string> delay_ = nullptr;
    // The synchronization delay, in milliseconds.
    std::shared_ptr<int64_t> delayMillis_ = nullptr;
    // The connection settings of the destination instance.
    std::shared_ptr<DescribeSynchronizationJobStatusResponseBodyDestinationEndpoint> destinationEndpoint_ = nullptr;
    // The error code returned if the call failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the call failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The error message returned if data synchronization failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The time when the data synchronization instance expires. The time is displayed in the *yyyy-MM-dd*T*HH:mm:ss*Z format in UTC.
    // 
    // >  This parameter is returned only if the return value of the **PayType** parameter is **PrePaid**.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The billing method of the data synchronization instance. Valid values:
    // 
    // *   **PrePaid**: subscription
    // *   **PostPaid**: pay-as-you-go
    std::shared_ptr<string> payType_ = nullptr;
    // The performance of the data synchronization instance.
    std::shared_ptr<DescribeSynchronizationJobStatusResponseBodyPerformance> performance_ = nullptr;
    // The precheck status.
    std::shared_ptr<DescribeSynchronizationJobStatusResponseBodyPrecheckStatus> precheckStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The connection settings of the source instance.
    std::shared_ptr<DescribeSynchronizationJobStatusResponseBodySourceEndpoint> sourceEndpoint_ = nullptr;
    // The status of the data synchronization task. Valid values:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Prechecking**: The task is being prechecked.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **Initializing**: The task is performing initial synchronization.
    // *   **InitializeFailed**: Initial synchronization failed.
    // *   **Synchronizing**: The task is synchronizing data.
    // *   **Failed**: The task failed to synchronize data.
    // *   **Suspending**: The task is paused.
    // *   **Modifying**: The objects in the task are being modified.
    // *   **Finished**: The task is completed.
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether schema synchronization is performed. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<string> structureInitialization_ = nullptr;
    // The status of schema synchronization.
    std::shared_ptr<DescribeSynchronizationJobStatusResponseBodyStructureInitializationStatus> structureInitializationStatus_ = nullptr;
    // Indicates whether the call was successful.
    std::shared_ptr<string> success_ = nullptr;
    // The synchronization direction. Valid values:
    // 
    // *   **Forward**
    // *   **Reverse**
    std::shared_ptr<string> synchronizationDirection_ = nullptr;
    // The specification of the data synchronization instance.
    std::shared_ptr<string> synchronizationJobClass_ = nullptr;
    // The ID of the data synchronization instance.
    std::shared_ptr<string> synchronizationJobId_ = nullptr;
    // The name of the data synchronization task.
    std::shared_ptr<string> synchronizationJobName_ = nullptr;
    // The objects that are synchronized by the task.
    std::shared_ptr<vector<DescribeSynchronizationJobStatusResponseBodySynchronizationObjects>> synchronizationObjects_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
