// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKGROUPOPERATIONRESPONSEBODYSTACKGROUPOPERATIONSTACKGROUPDRIFTDETECTIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKGROUPOPERATIONRESPONSEBODYSTACKGROUPOPERATIONSTACKGROUPDRIFTDETECTIONDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CancelledStackInstancesCount, cancelledStackInstancesCount_);
      DARABONBA_PTR_TO_JSON(DriftDetectionStatus, driftDetectionStatus_);
      DARABONBA_PTR_TO_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_TO_JSON(DriftedStackInstancesCount, driftedStackInstancesCount_);
      DARABONBA_PTR_TO_JSON(FailedStackInstancesCount, failedStackInstancesCount_);
      DARABONBA_PTR_TO_JSON(InProgressStackInstancesCount, inProgressStackInstancesCount_);
      DARABONBA_PTR_TO_JSON(InSyncStackInstancesCount, inSyncStackInstancesCount_);
      DARABONBA_PTR_TO_JSON(StackGroupDriftStatus, stackGroupDriftStatus_);
      DARABONBA_PTR_TO_JSON(TotalStackInstancesCount, totalStackInstancesCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CancelledStackInstancesCount, cancelledStackInstancesCount_);
      DARABONBA_PTR_FROM_JSON(DriftDetectionStatus, driftDetectionStatus_);
      DARABONBA_PTR_FROM_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_FROM_JSON(DriftedStackInstancesCount, driftedStackInstancesCount_);
      DARABONBA_PTR_FROM_JSON(FailedStackInstancesCount, failedStackInstancesCount_);
      DARABONBA_PTR_FROM_JSON(InProgressStackInstancesCount, inProgressStackInstancesCount_);
      DARABONBA_PTR_FROM_JSON(InSyncStackInstancesCount, inSyncStackInstancesCount_);
      DARABONBA_PTR_FROM_JSON(StackGroupDriftStatus, stackGroupDriftStatus_);
      DARABONBA_PTR_FROM_JSON(TotalStackInstancesCount, totalStackInstancesCount_);
    };
    GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail() = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail(const GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail &) = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail(GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail &&) = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail() = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail& operator=(const GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail &) = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail& operator=(GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cancelledStackInstancesCount_ != nullptr
        && this->driftDetectionStatus_ != nullptr && this->driftDetectionTime_ != nullptr && this->driftedStackInstancesCount_ != nullptr && this->failedStackInstancesCount_ != nullptr && this->inProgressStackInstancesCount_ != nullptr
        && this->inSyncStackInstancesCount_ != nullptr && this->stackGroupDriftStatus_ != nullptr && this->totalStackInstancesCount_ != nullptr; };
    // cancelledStackInstancesCount Field Functions 
    bool hasCancelledStackInstancesCount() const { return this->cancelledStackInstancesCount_ != nullptr;};
    void deleteCancelledStackInstancesCount() { this->cancelledStackInstancesCount_ = nullptr;};
    inline int32_t cancelledStackInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(cancelledStackInstancesCount_, 0) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail& setCancelledStackInstancesCount(int32_t cancelledStackInstancesCount) { DARABONBA_PTR_SET_VALUE(cancelledStackInstancesCount_, cancelledStackInstancesCount) };


    // driftDetectionStatus Field Functions 
    bool hasDriftDetectionStatus() const { return this->driftDetectionStatus_ != nullptr;};
    void deleteDriftDetectionStatus() { this->driftDetectionStatus_ = nullptr;};
    inline string driftDetectionStatus() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionStatus_, "") };
    inline GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail& setDriftDetectionStatus(string driftDetectionStatus) { DARABONBA_PTR_SET_VALUE(driftDetectionStatus_, driftDetectionStatus) };


    // driftDetectionTime Field Functions 
    bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
    void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
    inline string driftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
    inline GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


    // driftedStackInstancesCount Field Functions 
    bool hasDriftedStackInstancesCount() const { return this->driftedStackInstancesCount_ != nullptr;};
    void deleteDriftedStackInstancesCount() { this->driftedStackInstancesCount_ = nullptr;};
    inline int32_t driftedStackInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(driftedStackInstancesCount_, 0) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail& setDriftedStackInstancesCount(int32_t driftedStackInstancesCount) { DARABONBA_PTR_SET_VALUE(driftedStackInstancesCount_, driftedStackInstancesCount) };


    // failedStackInstancesCount Field Functions 
    bool hasFailedStackInstancesCount() const { return this->failedStackInstancesCount_ != nullptr;};
    void deleteFailedStackInstancesCount() { this->failedStackInstancesCount_ = nullptr;};
    inline int32_t failedStackInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(failedStackInstancesCount_, 0) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail& setFailedStackInstancesCount(int32_t failedStackInstancesCount) { DARABONBA_PTR_SET_VALUE(failedStackInstancesCount_, failedStackInstancesCount) };


    // inProgressStackInstancesCount Field Functions 
    bool hasInProgressStackInstancesCount() const { return this->inProgressStackInstancesCount_ != nullptr;};
    void deleteInProgressStackInstancesCount() { this->inProgressStackInstancesCount_ = nullptr;};
    inline int32_t inProgressStackInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(inProgressStackInstancesCount_, 0) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail& setInProgressStackInstancesCount(int32_t inProgressStackInstancesCount) { DARABONBA_PTR_SET_VALUE(inProgressStackInstancesCount_, inProgressStackInstancesCount) };


    // inSyncStackInstancesCount Field Functions 
    bool hasInSyncStackInstancesCount() const { return this->inSyncStackInstancesCount_ != nullptr;};
    void deleteInSyncStackInstancesCount() { this->inSyncStackInstancesCount_ = nullptr;};
    inline int32_t inSyncStackInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(inSyncStackInstancesCount_, 0) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail& setInSyncStackInstancesCount(int32_t inSyncStackInstancesCount) { DARABONBA_PTR_SET_VALUE(inSyncStackInstancesCount_, inSyncStackInstancesCount) };


    // stackGroupDriftStatus Field Functions 
    bool hasStackGroupDriftStatus() const { return this->stackGroupDriftStatus_ != nullptr;};
    void deleteStackGroupDriftStatus() { this->stackGroupDriftStatus_ = nullptr;};
    inline string stackGroupDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(stackGroupDriftStatus_, "") };
    inline GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail& setStackGroupDriftStatus(string stackGroupDriftStatus) { DARABONBA_PTR_SET_VALUE(stackGroupDriftStatus_, stackGroupDriftStatus) };


    // totalStackInstancesCount Field Functions 
    bool hasTotalStackInstancesCount() const { return this->totalStackInstancesCount_ != nullptr;};
    void deleteTotalStackInstancesCount() { this->totalStackInstancesCount_ = nullptr;};
    inline int32_t totalStackInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(totalStackInstancesCount_, 0) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationStackGroupDriftDetectionDetail& setTotalStackInstancesCount(int32_t totalStackInstancesCount) { DARABONBA_PTR_SET_VALUE(totalStackInstancesCount_, totalStackInstancesCount) };


  protected:
    // The number of stack instances for which drift detection was canceled.
    std::shared_ptr<int32_t> cancelledStackInstancesCount_ = nullptr;
    // The drift detection state.
    // 
    // Valid values:
    // 
    // *   COMPLETED: Drift detection is performed on the stack group and all stack instances passed the drift detection.
    // *   FAILED: Drift detection is performed on the stack group. The number of stack instances that failed the drift detection exceeds the specified threshold.
    // *   PARTIAL_SUCCESS: Drift detection is performed on the stack group. The number of stack instances that failed the drift detection does not exceed the specified threshold.
    // *   IN_PROGRESS: Drift detection is being performed on the stack group.
    // *   STOPPED: Drift detection is canceled for the stack group.
    std::shared_ptr<string> driftDetectionStatus_ = nullptr;
    // The time when drift detection was performed.
    std::shared_ptr<string> driftDetectionTime_ = nullptr;
    // The number of stack instances that have drifted.
    std::shared_ptr<int32_t> driftedStackInstancesCount_ = nullptr;
    // The number of stack instances that failed drift detection.
    std::shared_ptr<int32_t> failedStackInstancesCount_ = nullptr;
    // The number of stack instances on which drift detection was being performed.
    std::shared_ptr<int32_t> inProgressStackInstancesCount_ = nullptr;
    // The number of stack instances that were being synchronized.
    std::shared_ptr<int32_t> inSyncStackInstancesCount_ = nullptr;
    // The drift state of the stack group.
    // 
    // Valid values:
    // 
    // *   DRIFTED: At least one stack instance in the stack group has drifted.
    // *   NOT_CHECKED: No successful drift detection is performed in the stack group.
    // *   IN_SYNC: All the stack instances in the stack group are being synchronized.
    std::shared_ptr<string> stackGroupDriftStatus_ = nullptr;
    // The number of stack instances.
    std::shared_ptr<int32_t> totalStackInstancesCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
