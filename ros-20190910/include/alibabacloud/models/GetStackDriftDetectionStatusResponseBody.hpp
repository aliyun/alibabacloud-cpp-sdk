// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKDRIFTDETECTIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKDRIFTDETECTIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackDriftDetectionStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackDriftDetectionStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DriftDetectionId, driftDetectionId_);
      DARABONBA_PTR_TO_JSON(DriftDetectionStatus, driftDetectionStatus_);
      DARABONBA_PTR_TO_JSON(DriftDetectionStatusReason, driftDetectionStatusReason_);
      DARABONBA_PTR_TO_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_TO_JSON(DriftedStackResourceCount, driftedStackResourceCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackDriftStatus, stackDriftStatus_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackDriftDetectionStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DriftDetectionId, driftDetectionId_);
      DARABONBA_PTR_FROM_JSON(DriftDetectionStatus, driftDetectionStatus_);
      DARABONBA_PTR_FROM_JSON(DriftDetectionStatusReason, driftDetectionStatusReason_);
      DARABONBA_PTR_FROM_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_FROM_JSON(DriftedStackResourceCount, driftedStackResourceCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackDriftStatus, stackDriftStatus_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
    };
    GetStackDriftDetectionStatusResponseBody() = default ;
    GetStackDriftDetectionStatusResponseBody(const GetStackDriftDetectionStatusResponseBody &) = default ;
    GetStackDriftDetectionStatusResponseBody(GetStackDriftDetectionStatusResponseBody &&) = default ;
    GetStackDriftDetectionStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackDriftDetectionStatusResponseBody() = default ;
    GetStackDriftDetectionStatusResponseBody& operator=(const GetStackDriftDetectionStatusResponseBody &) = default ;
    GetStackDriftDetectionStatusResponseBody& operator=(GetStackDriftDetectionStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->driftDetectionId_ != nullptr
        && this->driftDetectionStatus_ != nullptr && this->driftDetectionStatusReason_ != nullptr && this->driftDetectionTime_ != nullptr && this->driftedStackResourceCount_ != nullptr && this->requestId_ != nullptr
        && this->stackDriftStatus_ != nullptr && this->stackId_ != nullptr; };
    // driftDetectionId Field Functions 
    bool hasDriftDetectionId() const { return this->driftDetectionId_ != nullptr;};
    void deleteDriftDetectionId() { this->driftDetectionId_ = nullptr;};
    inline string driftDetectionId() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionId_, "") };
    inline GetStackDriftDetectionStatusResponseBody& setDriftDetectionId(string driftDetectionId) { DARABONBA_PTR_SET_VALUE(driftDetectionId_, driftDetectionId) };


    // driftDetectionStatus Field Functions 
    bool hasDriftDetectionStatus() const { return this->driftDetectionStatus_ != nullptr;};
    void deleteDriftDetectionStatus() { this->driftDetectionStatus_ = nullptr;};
    inline string driftDetectionStatus() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionStatus_, "") };
    inline GetStackDriftDetectionStatusResponseBody& setDriftDetectionStatus(string driftDetectionStatus) { DARABONBA_PTR_SET_VALUE(driftDetectionStatus_, driftDetectionStatus) };


    // driftDetectionStatusReason Field Functions 
    bool hasDriftDetectionStatusReason() const { return this->driftDetectionStatusReason_ != nullptr;};
    void deleteDriftDetectionStatusReason() { this->driftDetectionStatusReason_ = nullptr;};
    inline string driftDetectionStatusReason() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionStatusReason_, "") };
    inline GetStackDriftDetectionStatusResponseBody& setDriftDetectionStatusReason(string driftDetectionStatusReason) { DARABONBA_PTR_SET_VALUE(driftDetectionStatusReason_, driftDetectionStatusReason) };


    // driftDetectionTime Field Functions 
    bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
    void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
    inline string driftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
    inline GetStackDriftDetectionStatusResponseBody& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


    // driftedStackResourceCount Field Functions 
    bool hasDriftedStackResourceCount() const { return this->driftedStackResourceCount_ != nullptr;};
    void deleteDriftedStackResourceCount() { this->driftedStackResourceCount_ = nullptr;};
    inline int32_t driftedStackResourceCount() const { DARABONBA_PTR_GET_DEFAULT(driftedStackResourceCount_, 0) };
    inline GetStackDriftDetectionStatusResponseBody& setDriftedStackResourceCount(int32_t driftedStackResourceCount) { DARABONBA_PTR_SET_VALUE(driftedStackResourceCount_, driftedStackResourceCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackDriftDetectionStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackDriftStatus Field Functions 
    bool hasStackDriftStatus() const { return this->stackDriftStatus_ != nullptr;};
    void deleteStackDriftStatus() { this->stackDriftStatus_ = nullptr;};
    inline string stackDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(stackDriftStatus_, "") };
    inline GetStackDriftDetectionStatusResponseBody& setStackDriftStatus(string stackDriftStatus) { DARABONBA_PTR_SET_VALUE(stackDriftStatus_, stackDriftStatus) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetStackDriftDetectionStatusResponseBody& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


  protected:
    // The ID of the drift detection operation.
    std::shared_ptr<string> driftDetectionId_ = nullptr;
    // The drift detection status. Valid values:
    // 
    // *   DETECTION_COMPLETE: The drift detection operation has been completed for all resources that support drift detection in the stack.
    // *   DETECTION_FAILED: The stack drift detection operation has failed for at least one resource in the stack.
    // *   DETECTION_IN_PROGRESS: The stack drift detection operation is in progress.
    std::shared_ptr<string> driftDetectionStatus_ = nullptr;
    // The reason why the stack drift detection operation has its current status.
    std::shared_ptr<string> driftDetectionStatusReason_ = nullptr;
    // The time when the stack drift detection operation was initiated.
    std::shared_ptr<string> driftDetectionTime_ = nullptr;
    // The total number of stack resources that have drifted.
    std::shared_ptr<int32_t> driftedStackResourceCount_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The drift status of the stack. Valid values:
    // 
    // *   DRIFTED: The actual configuration of the stack differs, or has drifted, from its expected template configuration. A stack is considered to have drifted if one or more of its resources have drifted.
    // *   NOT_CHECKED: Resource Orchestration Service (ROS) has not checked whether the actual configuration of the resource differs from its expected template configuration.
    // *   IN_SYNC: The current configuration of each supported resource matches its expected template configuration. A stack with no resources that support drift detection also has a status of IN_SYNC.
    std::shared_ptr<string> stackDriftStatus_ = nullptr;
    // The ID of the stack.
    std::shared_ptr<string> stackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
