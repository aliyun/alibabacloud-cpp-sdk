// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICECRONSCALERRESPONSEBODYSCALEJOBS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICECRONSCALERRESPONSEBODYSCALEJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceCronScalerResponseBodyScaleJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceCronScalerResponseBodyScaleJobs& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LastProbeTime, lastProbeTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TargetSize, targetSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceCronScalerResponseBodyScaleJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LastProbeTime, lastProbeTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TargetSize, targetSize_);
    };
    DescribeServiceCronScalerResponseBodyScaleJobs() = default ;
    DescribeServiceCronScalerResponseBodyScaleJobs(const DescribeServiceCronScalerResponseBodyScaleJobs &) = default ;
    DescribeServiceCronScalerResponseBodyScaleJobs(DescribeServiceCronScalerResponseBodyScaleJobs &&) = default ;
    DescribeServiceCronScalerResponseBodyScaleJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceCronScalerResponseBodyScaleJobs() = default ;
    DescribeServiceCronScalerResponseBodyScaleJobs& operator=(const DescribeServiceCronScalerResponseBodyScaleJobs &) = default ;
    DescribeServiceCronScalerResponseBodyScaleJobs& operator=(DescribeServiceCronScalerResponseBodyScaleJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->lastProbeTime_ == nullptr && return this->message_ == nullptr && return this->name_ == nullptr && return this->schedule_ == nullptr && return this->state_ == nullptr
        && return this->targetSize_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeServiceCronScalerResponseBodyScaleJobs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastProbeTime Field Functions 
    bool hasLastProbeTime() const { return this->lastProbeTime_ != nullptr;};
    void deleteLastProbeTime() { this->lastProbeTime_ = nullptr;};
    inline string lastProbeTime() const { DARABONBA_PTR_GET_DEFAULT(lastProbeTime_, "") };
    inline DescribeServiceCronScalerResponseBodyScaleJobs& setLastProbeTime(string lastProbeTime) { DARABONBA_PTR_SET_VALUE(lastProbeTime_, lastProbeTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeServiceCronScalerResponseBodyScaleJobs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeServiceCronScalerResponseBodyScaleJobs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline DescribeServiceCronScalerResponseBodyScaleJobs& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeServiceCronScalerResponseBodyScaleJobs& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // targetSize Field Functions 
    bool hasTargetSize() const { return this->targetSize_ != nullptr;};
    void deleteTargetSize() { this->targetSize_ = nullptr;};
    inline int32_t targetSize() const { DARABONBA_PTR_GET_DEFAULT(targetSize_, 0) };
    inline DescribeServiceCronScalerResponseBodyScaleJobs& setTargetSize(int32_t targetSize) { DARABONBA_PTR_SET_VALUE(targetSize_, targetSize) };


  protected:
    // The time when the most recent CronHPA job was created. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the most recent CronHPA job ran. The time is displayed in UTC.
    std::shared_ptr<string> lastProbeTime_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the CronHPA job.
    std::shared_ptr<string> name_ = nullptr;
    // The cron expression that is used to configure the execution time of the CronHPA job.
    std::shared_ptr<string> schedule_ = nullptr;
    // The status of the most recent CronHPA job.
    std::shared_ptr<string> state_ = nullptr;
    // The number of instances that you expect to configure for the CronHPA job.
    std::shared_ptr<int32_t> targetSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
