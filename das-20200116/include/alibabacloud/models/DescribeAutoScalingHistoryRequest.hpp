// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeAutoScalingHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoScalingHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoScalingTaskType, autoScalingTaskType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoScalingHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoScalingTaskType, autoScalingTaskType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeAutoScalingHistoryRequest() = default ;
    DescribeAutoScalingHistoryRequest(const DescribeAutoScalingHistoryRequest &) = default ;
    DescribeAutoScalingHistoryRequest(DescribeAutoScalingHistoryRequest &&) = default ;
    DescribeAutoScalingHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoScalingHistoryRequest() = default ;
    DescribeAutoScalingHistoryRequest& operator=(const DescribeAutoScalingHistoryRequest &) = default ;
    DescribeAutoScalingHistoryRequest& operator=(DescribeAutoScalingHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoScalingTaskType_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->startTime_ == nullptr; };
    // autoScalingTaskType Field Functions 
    bool hasAutoScalingTaskType() const { return this->autoScalingTaskType_ != nullptr;};
    void deleteAutoScalingTaskType() { this->autoScalingTaskType_ = nullptr;};
    inline string getAutoScalingTaskType() const { DARABONBA_PTR_GET_DEFAULT(autoScalingTaskType_, "") };
    inline DescribeAutoScalingHistoryRequest& setAutoScalingTaskType(string autoScalingTaskType) { DARABONBA_PTR_SET_VALUE(autoScalingTaskType_, autoScalingTaskType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeAutoScalingHistoryRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAutoScalingHistoryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeAutoScalingHistoryRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The type of the auto scaling task that you want to query. Set the value to **SPEC**, which indicates that you can query the history of only automatic performance scaling tasks.
    // 
    // This parameter is required.
    shared_ptr<string> autoScalingTaskType_ {};
    // The end of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // > The end time must be later than the start time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The instance ID.
    // 
    // > Only ApsaraDB RDS for MySQL instances are supported.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The beginning of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // > The maximum time range that can be specified is 45 days.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
