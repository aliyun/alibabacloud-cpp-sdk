// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGHISTORYRESPONSEBODYDATASPECHISTORY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGHISTORYRESPONSEBODYDATASPECHISTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeAutoScalingHistoryResponseBodyDataSpecHistory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoScalingHistoryResponseBodyDataSpecHistory& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(OriginCore, originCore_);
      DARABONBA_PTR_TO_JSON(OriginInstanceClass, originInstanceClass_);
      DARABONBA_PTR_TO_JSON(OriginMemory, originMemory_);
      DARABONBA_PTR_TO_JSON(ScaleType, scaleType_);
      DARABONBA_PTR_TO_JSON(TargetCore, targetCore_);
      DARABONBA_PTR_TO_JSON(TargetInstanceClass, targetInstanceClass_);
      DARABONBA_PTR_TO_JSON(TargetMemory, targetMemory_);
      DARABONBA_PTR_TO_JSON(TaskExcuteStatus, taskExcuteStatus_);
      DARABONBA_PTR_TO_JSON(TaskTime, taskTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoScalingHistoryResponseBodyDataSpecHistory& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(OriginCore, originCore_);
      DARABONBA_PTR_FROM_JSON(OriginInstanceClass, originInstanceClass_);
      DARABONBA_PTR_FROM_JSON(OriginMemory, originMemory_);
      DARABONBA_PTR_FROM_JSON(ScaleType, scaleType_);
      DARABONBA_PTR_FROM_JSON(TargetCore, targetCore_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceClass, targetInstanceClass_);
      DARABONBA_PTR_FROM_JSON(TargetMemory, targetMemory_);
      DARABONBA_PTR_FROM_JSON(TaskExcuteStatus, taskExcuteStatus_);
      DARABONBA_PTR_FROM_JSON(TaskTime, taskTime_);
    };
    DescribeAutoScalingHistoryResponseBodyDataSpecHistory() = default ;
    DescribeAutoScalingHistoryResponseBodyDataSpecHistory(const DescribeAutoScalingHistoryResponseBodyDataSpecHistory &) = default ;
    DescribeAutoScalingHistoryResponseBodyDataSpecHistory(DescribeAutoScalingHistoryResponseBodyDataSpecHistory &&) = default ;
    DescribeAutoScalingHistoryResponseBodyDataSpecHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoScalingHistoryResponseBodyDataSpecHistory() = default ;
    DescribeAutoScalingHistoryResponseBodyDataSpecHistory& operator=(const DescribeAutoScalingHistoryResponseBodyDataSpecHistory &) = default ;
    DescribeAutoScalingHistoryResponseBodyDataSpecHistory& operator=(DescribeAutoScalingHistoryResponseBodyDataSpecHistory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->originCore_ != nullptr && this->originInstanceClass_ != nullptr && this->originMemory_ != nullptr && this->scaleType_ != nullptr && this->targetCore_ != nullptr
        && this->targetInstanceClass_ != nullptr && this->targetMemory_ != nullptr && this->taskExcuteStatus_ != nullptr && this->taskTime_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeAutoScalingHistoryResponseBodyDataSpecHistory& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // originCore Field Functions 
    bool hasOriginCore() const { return this->originCore_ != nullptr;};
    void deleteOriginCore() { this->originCore_ = nullptr;};
    inline int32_t originCore() const { DARABONBA_PTR_GET_DEFAULT(originCore_, 0) };
    inline DescribeAutoScalingHistoryResponseBodyDataSpecHistory& setOriginCore(int32_t originCore) { DARABONBA_PTR_SET_VALUE(originCore_, originCore) };


    // originInstanceClass Field Functions 
    bool hasOriginInstanceClass() const { return this->originInstanceClass_ != nullptr;};
    void deleteOriginInstanceClass() { this->originInstanceClass_ = nullptr;};
    inline string originInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(originInstanceClass_, "") };
    inline DescribeAutoScalingHistoryResponseBodyDataSpecHistory& setOriginInstanceClass(string originInstanceClass) { DARABONBA_PTR_SET_VALUE(originInstanceClass_, originInstanceClass) };


    // originMemory Field Functions 
    bool hasOriginMemory() const { return this->originMemory_ != nullptr;};
    void deleteOriginMemory() { this->originMemory_ = nullptr;};
    inline double originMemory() const { DARABONBA_PTR_GET_DEFAULT(originMemory_, 0.0) };
    inline DescribeAutoScalingHistoryResponseBodyDataSpecHistory& setOriginMemory(double originMemory) { DARABONBA_PTR_SET_VALUE(originMemory_, originMemory) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string scaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline DescribeAutoScalingHistoryResponseBodyDataSpecHistory& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // targetCore Field Functions 
    bool hasTargetCore() const { return this->targetCore_ != nullptr;};
    void deleteTargetCore() { this->targetCore_ = nullptr;};
    inline int32_t targetCore() const { DARABONBA_PTR_GET_DEFAULT(targetCore_, 0) };
    inline DescribeAutoScalingHistoryResponseBodyDataSpecHistory& setTargetCore(int32_t targetCore) { DARABONBA_PTR_SET_VALUE(targetCore_, targetCore) };


    // targetInstanceClass Field Functions 
    bool hasTargetInstanceClass() const { return this->targetInstanceClass_ != nullptr;};
    void deleteTargetInstanceClass() { this->targetInstanceClass_ = nullptr;};
    inline string targetInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceClass_, "") };
    inline DescribeAutoScalingHistoryResponseBodyDataSpecHistory& setTargetInstanceClass(string targetInstanceClass) { DARABONBA_PTR_SET_VALUE(targetInstanceClass_, targetInstanceClass) };


    // targetMemory Field Functions 
    bool hasTargetMemory() const { return this->targetMemory_ != nullptr;};
    void deleteTargetMemory() { this->targetMemory_ = nullptr;};
    inline double targetMemory() const { DARABONBA_PTR_GET_DEFAULT(targetMemory_, 0.0) };
    inline DescribeAutoScalingHistoryResponseBodyDataSpecHistory& setTargetMemory(double targetMemory) { DARABONBA_PTR_SET_VALUE(targetMemory_, targetMemory) };


    // taskExcuteStatus Field Functions 
    bool hasTaskExcuteStatus() const { return this->taskExcuteStatus_ != nullptr;};
    void deleteTaskExcuteStatus() { this->taskExcuteStatus_ = nullptr;};
    inline bool taskExcuteStatus() const { DARABONBA_PTR_GET_DEFAULT(taskExcuteStatus_, false) };
    inline DescribeAutoScalingHistoryResponseBodyDataSpecHistory& setTaskExcuteStatus(bool taskExcuteStatus) { DARABONBA_PTR_SET_VALUE(taskExcuteStatus_, taskExcuteStatus) };


    // taskTime Field Functions 
    bool hasTaskTime() const { return this->taskTime_ != nullptr;};
    void deleteTaskTime() { this->taskTime_ = nullptr;};
    inline int64_t taskTime() const { DARABONBA_PTR_GET_DEFAULT(taskTime_, 0L) };
    inline DescribeAutoScalingHistoryResponseBodyDataSpecHistory& setTaskTime(int64_t taskTime) { DARABONBA_PTR_SET_VALUE(taskTime_, taskTime) };


  protected:
    // The error code returned by the scaling task. Valid values:
    // 
    // *   **Insufficient_Balance**: The account has insufficient balance or an unpaid order.
    // *   **REACH_SPEC_UPPERBOUND**: The instance type reaches the upper limit.
    // *   **Control_Error_Timeout_Msg**: The management task timed out.
    // *   **Invoke_Rds_Api_Error_Msg**: Failed to call the ApsaraDB RDS API.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The original number of CPU cores of the instance.
    std::shared_ptr<int32_t> originCore_ = nullptr;
    // The original instance type.
    std::shared_ptr<string> originInstanceClass_ = nullptr;
    // The original memory size of the instance. Unit: GB.
    std::shared_ptr<double> originMemory_ = nullptr;
    // The type of the automatic performance scaling task. Valid values:
    // 
    // *   **SCALE_UP**: automatic instance type scale-up task.
    // *   **SCALE_DOWN**: automatic instance type scale-down task.
    std::shared_ptr<string> scaleType_ = nullptr;
    // The destination number of CPU cores of the instance.
    std::shared_ptr<int32_t> targetCore_ = nullptr;
    // The destination instance type.
    std::shared_ptr<string> targetInstanceClass_ = nullptr;
    // The destination memory size of the instance. Unit: GB.
    std::shared_ptr<double> targetMemory_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **true**: The task was successful.
    // *   **false**: The task failed.
    std::shared_ptr<bool> taskExcuteStatus_ = nullptr;
    // The time when the task was run. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> taskTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
