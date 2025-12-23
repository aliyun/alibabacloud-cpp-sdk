// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETIMERGROUPRESPONSEBODYDATACONFIGTIMERSSEGMENTTIMERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETIMERGROUPRESPONSEBODYDATACONFIGTIMERSSEGMENTTIMERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& obj) { 
      DARABONBA_PTR_TO_JSON(AppointmentTimer, appointmentTimer_);
      DARABONBA_PTR_TO_JSON(EndCronExpression, endCronExpression_);
      DARABONBA_PTR_TO_JSON(Enforce, enforce_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(LockScreenTime, lockScreenTime_);
      DARABONBA_PTR_TO_JSON(NotificationTime, notificationTime_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(ProcessWhitelist, processWhitelist_);
      DARABONBA_PTR_TO_JSON(ResetType, resetType_);
      DARABONBA_PTR_TO_JSON(StartCronExpression, startCronExpression_);
      DARABONBA_PTR_TO_JSON(TimerOrder, timerOrder_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& obj) { 
      DARABONBA_PTR_FROM_JSON(AppointmentTimer, appointmentTimer_);
      DARABONBA_PTR_FROM_JSON(EndCronExpression, endCronExpression_);
      DARABONBA_PTR_FROM_JSON(Enforce, enforce_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(LockScreenTime, lockScreenTime_);
      DARABONBA_PTR_FROM_JSON(NotificationTime, notificationTime_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(ProcessWhitelist, processWhitelist_);
      DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
      DARABONBA_PTR_FROM_JSON(StartCronExpression, startCronExpression_);
      DARABONBA_PTR_FROM_JSON(TimerOrder, timerOrder_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
    };
    DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers() = default ;
    DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers(const DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers &) = default ;
    DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers(DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers &&) = default ;
    DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers() = default ;
    DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& operator=(const DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers &) = default ;
    DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& operator=(DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appointmentTimer_ == nullptr
        && return this->endCronExpression_ == nullptr && return this->enforce_ == nullptr && return this->imageId_ == nullptr && return this->interval_ == nullptr && return this->lockScreenTime_ == nullptr
        && return this->notificationTime_ == nullptr && return this->operationType_ == nullptr && return this->processWhitelist_ == nullptr && return this->resetType_ == nullptr && return this->startCronExpression_ == nullptr
        && return this->timerOrder_ == nullptr && return this->timezone_ == nullptr && return this->triggerType_ == nullptr; };
    // appointmentTimer Field Functions 
    bool hasAppointmentTimer() const { return this->appointmentTimer_ != nullptr;};
    void deleteAppointmentTimer() { this->appointmentTimer_ = nullptr;};
    inline int64_t appointmentTimer() const { DARABONBA_PTR_GET_DEFAULT(appointmentTimer_, 0L) };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setAppointmentTimer(int64_t appointmentTimer) { DARABONBA_PTR_SET_VALUE(appointmentTimer_, appointmentTimer) };


    // endCronExpression Field Functions 
    bool hasEndCronExpression() const { return this->endCronExpression_ != nullptr;};
    void deleteEndCronExpression() { this->endCronExpression_ = nullptr;};
    inline string endCronExpression() const { DARABONBA_PTR_GET_DEFAULT(endCronExpression_, "") };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setEndCronExpression(string endCronExpression) { DARABONBA_PTR_SET_VALUE(endCronExpression_, endCronExpression) };


    // enforce Field Functions 
    bool hasEnforce() const { return this->enforce_ != nullptr;};
    void deleteEnforce() { this->enforce_ = nullptr;};
    inline bool enforce() const { DARABONBA_PTR_GET_DEFAULT(enforce_, false) };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setEnforce(bool enforce) { DARABONBA_PTR_SET_VALUE(enforce_, enforce) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // lockScreenTime Field Functions 
    bool hasLockScreenTime() const { return this->lockScreenTime_ != nullptr;};
    void deleteLockScreenTime() { this->lockScreenTime_ = nullptr;};
    inline int32_t lockScreenTime() const { DARABONBA_PTR_GET_DEFAULT(lockScreenTime_, 0) };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setLockScreenTime(int32_t lockScreenTime) { DARABONBA_PTR_SET_VALUE(lockScreenTime_, lockScreenTime) };


    // notificationTime Field Functions 
    bool hasNotificationTime() const { return this->notificationTime_ != nullptr;};
    void deleteNotificationTime() { this->notificationTime_ = nullptr;};
    inline int32_t notificationTime() const { DARABONBA_PTR_GET_DEFAULT(notificationTime_, 0) };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setNotificationTime(int32_t notificationTime) { DARABONBA_PTR_SET_VALUE(notificationTime_, notificationTime) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // processWhitelist Field Functions 
    bool hasProcessWhitelist() const { return this->processWhitelist_ != nullptr;};
    void deleteProcessWhitelist() { this->processWhitelist_ = nullptr;};
    inline const vector<string> & processWhitelist() const { DARABONBA_PTR_GET_CONST(processWhitelist_, vector<string>) };
    inline vector<string> processWhitelist() { DARABONBA_PTR_GET(processWhitelist_, vector<string>) };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setProcessWhitelist(const vector<string> & processWhitelist) { DARABONBA_PTR_SET_VALUE(processWhitelist_, processWhitelist) };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setProcessWhitelist(vector<string> && processWhitelist) { DARABONBA_PTR_SET_RVALUE(processWhitelist_, processWhitelist) };


    // resetType Field Functions 
    bool hasResetType() const { return this->resetType_ != nullptr;};
    void deleteResetType() { this->resetType_ = nullptr;};
    inline string resetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


    // startCronExpression Field Functions 
    bool hasStartCronExpression() const { return this->startCronExpression_ != nullptr;};
    void deleteStartCronExpression() { this->startCronExpression_ = nullptr;};
    inline string startCronExpression() const { DARABONBA_PTR_GET_DEFAULT(startCronExpression_, "") };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setStartCronExpression(string startCronExpression) { DARABONBA_PTR_SET_VALUE(startCronExpression_, startCronExpression) };


    // timerOrder Field Functions 
    bool hasTimerOrder() const { return this->timerOrder_ != nullptr;};
    void deleteTimerOrder() { this->timerOrder_ = nullptr;};
    inline int32_t timerOrder() const { DARABONBA_PTR_GET_DEFAULT(timerOrder_, 0) };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setTimerOrder(int32_t timerOrder) { DARABONBA_PTR_SET_VALUE(timerOrder_, timerOrder) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline DescribeTimerGroupResponseBodyDataConfigTimersSegmentTimers& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    std::shared_ptr<int64_t> appointmentTimer_ = nullptr;
    std::shared_ptr<string> endCronExpression_ = nullptr;
    std::shared_ptr<bool> enforce_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<int32_t> lockScreenTime_ = nullptr;
    std::shared_ptr<int32_t> notificationTime_ = nullptr;
    std::shared_ptr<string> operationType_ = nullptr;
    std::shared_ptr<vector<string>> processWhitelist_ = nullptr;
    std::shared_ptr<string> resetType_ = nullptr;
    std::shared_ptr<string> startCronExpression_ = nullptr;
    std::shared_ptr<int32_t> timerOrder_ = nullptr;
    std::shared_ptr<string> timezone_ = nullptr;
    std::shared_ptr<string> triggerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
