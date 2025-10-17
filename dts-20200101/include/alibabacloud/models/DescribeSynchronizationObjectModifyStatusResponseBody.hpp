// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONOBJECTMODIFYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONOBJECTMODIFYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus.hpp>
#include <alibabacloud/models/DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus.hpp>
#include <alibabacloud/models/DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus.hpp>
#include <alibabacloud/models/DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationObjectModifyStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationObjectModifyStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_TO_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationObjectModifyStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInitializationStatus, dataInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(DataSynchronizationStatus, dataSynchronizationStatus_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StructureInitializationStatus, structureInitializationStatus_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSynchronizationObjectModifyStatusResponseBody() = default ;
    DescribeSynchronizationObjectModifyStatusResponseBody(const DescribeSynchronizationObjectModifyStatusResponseBody &) = default ;
    DescribeSynchronizationObjectModifyStatusResponseBody(DescribeSynchronizationObjectModifyStatusResponseBody &&) = default ;
    DescribeSynchronizationObjectModifyStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationObjectModifyStatusResponseBody() = default ;
    DescribeSynchronizationObjectModifyStatusResponseBody& operator=(const DescribeSynchronizationObjectModifyStatusResponseBody &) = default ;
    DescribeSynchronizationObjectModifyStatusResponseBody& operator=(DescribeSynchronizationObjectModifyStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInitializationStatus_ == nullptr
        && return this->dataSynchronizationStatus_ == nullptr && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->errorMessage_ == nullptr && return this->precheckStatus_ == nullptr
        && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->structureInitializationStatus_ == nullptr && return this->success_ == nullptr; };
    // dataInitializationStatus Field Functions 
    bool hasDataInitializationStatus() const { return this->dataInitializationStatus_ != nullptr;};
    void deleteDataInitializationStatus() { this->dataInitializationStatus_ = nullptr;};
    inline const DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus & dataInitializationStatus() const { DARABONBA_PTR_GET_CONST(dataInitializationStatus_, DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus dataInitializationStatus() { DARABONBA_PTR_GET(dataInitializationStatus_, DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setDataInitializationStatus(const DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus & dataInitializationStatus) { DARABONBA_PTR_SET_VALUE(dataInitializationStatus_, dataInitializationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setDataInitializationStatus(DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus && dataInitializationStatus) { DARABONBA_PTR_SET_RVALUE(dataInitializationStatus_, dataInitializationStatus) };


    // dataSynchronizationStatus Field Functions 
    bool hasDataSynchronizationStatus() const { return this->dataSynchronizationStatus_ != nullptr;};
    void deleteDataSynchronizationStatus() { this->dataSynchronizationStatus_ = nullptr;};
    inline const DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus & dataSynchronizationStatus() const { DARABONBA_PTR_GET_CONST(dataSynchronizationStatus_, DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus dataSynchronizationStatus() { DARABONBA_PTR_GET(dataSynchronizationStatus_, DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setDataSynchronizationStatus(const DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus & dataSynchronizationStatus) { DARABONBA_PTR_SET_VALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setDataSynchronizationStatus(DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus && dataSynchronizationStatus) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationStatus_, dataSynchronizationStatus) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // precheckStatus Field Functions 
    bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
    void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
    inline const DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus & precheckStatus() const { DARABONBA_PTR_GET_CONST(precheckStatus_, DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus precheckStatus() { DARABONBA_PTR_GET(precheckStatus_, DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setPrecheckStatus(const DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus & precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setPrecheckStatus(DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus && precheckStatus) { DARABONBA_PTR_SET_RVALUE(precheckStatus_, precheckStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // structureInitializationStatus Field Functions 
    bool hasStructureInitializationStatus() const { return this->structureInitializationStatus_ != nullptr;};
    void deleteStructureInitializationStatus() { this->structureInitializationStatus_ = nullptr;};
    inline const DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus & structureInitializationStatus() const { DARABONBA_PTR_GET_CONST(structureInitializationStatus_, DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus structureInitializationStatus() { DARABONBA_PTR_GET(structureInitializationStatus_, DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setStructureInitializationStatus(const DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus & structureInitializationStatus) { DARABONBA_PTR_SET_VALUE(structureInitializationStatus_, structureInitializationStatus) };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setStructureInitializationStatus(DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus && structureInitializationStatus) { DARABONBA_PTR_SET_RVALUE(structureInitializationStatus_, structureInitializationStatus) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status of full data synchronization.
    std::shared_ptr<DescribeSynchronizationObjectModifyStatusResponseBodyDataInitializationStatus> dataInitializationStatus_ = nullptr;
    // The status of incremental data synchronization.
    // 
    // >  This parameter and its sub-parameters will be removed in the future.
    std::shared_ptr<DescribeSynchronizationObjectModifyStatusResponseBodyDataSynchronizationStatus> dataSynchronizationStatus_ = nullptr;
    // The error code returned if the call failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the call failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The error message returned if the task failed to modify the objects to be synchronized.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The precheck status.
    std::shared_ptr<DescribeSynchronizationObjectModifyStatusResponseBodyPrecheckStatus> precheckStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the task that changes the objects to be synchronized. Valid values:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Prechecking**: The task is being prechecked.
    // *   **PrecheckFailed**: The task failed to pass the precheck.
    // *   **Migrating**: The task is running.
    // *   **Failed**: The task failed.
    // *   **Finished**: The task is completed.
    std::shared_ptr<string> status_ = nullptr;
    // The status of schema synchronization.
    std::shared_ptr<DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus> structureInitializationStatus_ = nullptr;
    // Indicates whether the call was successful.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
