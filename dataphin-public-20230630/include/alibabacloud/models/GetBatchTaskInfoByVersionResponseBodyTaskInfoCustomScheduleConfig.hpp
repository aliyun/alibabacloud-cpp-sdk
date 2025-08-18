// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTASKINFOBYVERSIONRESPONSEBODYTASKINFOCUSTOMSCHEDULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTASKINFOBYVERSIONRESPONSEBODYTASKINFOCUSTOMSCHEDULECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IntervalUnit, intervalUnit_);
      DARABONBA_PTR_TO_JSON(SchedulePeriod, schedulePeriod_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IntervalUnit, intervalUnit_);
      DARABONBA_PTR_FROM_JSON(SchedulePeriod, schedulePeriod_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig() = default ;
    GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig(const GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig &) = default ;
    GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig(GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig &&) = default ;
    GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig() = default ;
    GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig& operator=(const GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig &) = default ;
    GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig& operator=(GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->interval_ != nullptr && this->intervalUnit_ != nullptr && this->schedulePeriod_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // intervalUnit Field Functions 
    bool hasIntervalUnit() const { return this->intervalUnit_ != nullptr;};
    void deleteIntervalUnit() { this->intervalUnit_ = nullptr;};
    inline string intervalUnit() const { DARABONBA_PTR_GET_DEFAULT(intervalUnit_, "") };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig& setIntervalUnit(string intervalUnit) { DARABONBA_PTR_SET_VALUE(intervalUnit_, intervalUnit) };


    // schedulePeriod Field Functions 
    bool hasSchedulePeriod() const { return this->schedulePeriod_ != nullptr;};
    void deleteSchedulePeriod() { this->schedulePeriod_ = nullptr;};
    inline string schedulePeriod() const { DARABONBA_PTR_GET_DEFAULT(schedulePeriod_, "") };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig& setSchedulePeriod(string schedulePeriod) { DARABONBA_PTR_SET_VALUE(schedulePeriod_, schedulePeriod) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetBatchTaskInfoByVersionResponseBodyTaskInfoCustomScheduleConfig& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<string> intervalUnit_ = nullptr;
    std::shared_ptr<string> schedulePeriod_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
