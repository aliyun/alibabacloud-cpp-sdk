// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONFIGGROUPREQUESTCONFIGTIMERS_HPP_
#define ALIBABACLOUD_MODELS_CREATECONFIGGROUPREQUESTCONFIGTIMERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateConfigGroupRequestConfigTimersSegmentTimers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateConfigGroupRequestConfigTimers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConfigGroupRequestConfigTimers& obj) { 
      DARABONBA_PTR_TO_JSON(AllowClientSetting, allowClientSetting_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(Enforce, enforce_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(NotificationTime, notificationTime_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(ProcessWhitelist, processWhitelist_);
      DARABONBA_PTR_TO_JSON(ResetType, resetType_);
      DARABONBA_PTR_TO_JSON(SegmentTimers, segmentTimers_);
      DARABONBA_PTR_TO_JSON(TimerType, timerType_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConfigGroupRequestConfigTimers& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowClientSetting, allowClientSetting_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(Enforce, enforce_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(NotificationTime, notificationTime_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(ProcessWhitelist, processWhitelist_);
      DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
      DARABONBA_PTR_FROM_JSON(SegmentTimers, segmentTimers_);
      DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
    };
    CreateConfigGroupRequestConfigTimers() = default ;
    CreateConfigGroupRequestConfigTimers(const CreateConfigGroupRequestConfigTimers &) = default ;
    CreateConfigGroupRequestConfigTimers(CreateConfigGroupRequestConfigTimers &&) = default ;
    CreateConfigGroupRequestConfigTimers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConfigGroupRequestConfigTimers() = default ;
    CreateConfigGroupRequestConfigTimers& operator=(const CreateConfigGroupRequestConfigTimers &) = default ;
    CreateConfigGroupRequestConfigTimers& operator=(CreateConfigGroupRequestConfigTimers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowClientSetting_ != nullptr
        && this->cronExpression_ != nullptr && this->enforce_ != nullptr && this->interval_ != nullptr && this->notificationTime_ != nullptr && this->operationType_ != nullptr
        && this->processWhitelist_ != nullptr && this->resetType_ != nullptr && this->segmentTimers_ != nullptr && this->timerType_ != nullptr && this->triggerType_ != nullptr; };
    // allowClientSetting Field Functions 
    bool hasAllowClientSetting() const { return this->allowClientSetting_ != nullptr;};
    void deleteAllowClientSetting() { this->allowClientSetting_ = nullptr;};
    inline bool allowClientSetting() const { DARABONBA_PTR_GET_DEFAULT(allowClientSetting_, false) };
    inline CreateConfigGroupRequestConfigTimers& setAllowClientSetting(bool allowClientSetting) { DARABONBA_PTR_SET_VALUE(allowClientSetting_, allowClientSetting) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline CreateConfigGroupRequestConfigTimers& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // enforce Field Functions 
    bool hasEnforce() const { return this->enforce_ != nullptr;};
    void deleteEnforce() { this->enforce_ = nullptr;};
    inline bool enforce() const { DARABONBA_PTR_GET_DEFAULT(enforce_, false) };
    inline CreateConfigGroupRequestConfigTimers& setEnforce(bool enforce) { DARABONBA_PTR_SET_VALUE(enforce_, enforce) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline CreateConfigGroupRequestConfigTimers& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // notificationTime Field Functions 
    bool hasNotificationTime() const { return this->notificationTime_ != nullptr;};
    void deleteNotificationTime() { this->notificationTime_ = nullptr;};
    inline int32_t notificationTime() const { DARABONBA_PTR_GET_DEFAULT(notificationTime_, 0) };
    inline CreateConfigGroupRequestConfigTimers& setNotificationTime(int32_t notificationTime) { DARABONBA_PTR_SET_VALUE(notificationTime_, notificationTime) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline CreateConfigGroupRequestConfigTimers& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // processWhitelist Field Functions 
    bool hasProcessWhitelist() const { return this->processWhitelist_ != nullptr;};
    void deleteProcessWhitelist() { this->processWhitelist_ = nullptr;};
    inline const vector<string> & processWhitelist() const { DARABONBA_PTR_GET_CONST(processWhitelist_, vector<string>) };
    inline vector<string> processWhitelist() { DARABONBA_PTR_GET(processWhitelist_, vector<string>) };
    inline CreateConfigGroupRequestConfigTimers& setProcessWhitelist(const vector<string> & processWhitelist) { DARABONBA_PTR_SET_VALUE(processWhitelist_, processWhitelist) };
    inline CreateConfigGroupRequestConfigTimers& setProcessWhitelist(vector<string> && processWhitelist) { DARABONBA_PTR_SET_RVALUE(processWhitelist_, processWhitelist) };


    // resetType Field Functions 
    bool hasResetType() const { return this->resetType_ != nullptr;};
    void deleteResetType() { this->resetType_ = nullptr;};
    inline string resetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
    inline CreateConfigGroupRequestConfigTimers& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


    // segmentTimers Field Functions 
    bool hasSegmentTimers() const { return this->segmentTimers_ != nullptr;};
    void deleteSegmentTimers() { this->segmentTimers_ = nullptr;};
    inline const vector<Models::CreateConfigGroupRequestConfigTimersSegmentTimers> & segmentTimers() const { DARABONBA_PTR_GET_CONST(segmentTimers_, vector<Models::CreateConfigGroupRequestConfigTimersSegmentTimers>) };
    inline vector<Models::CreateConfigGroupRequestConfigTimersSegmentTimers> segmentTimers() { DARABONBA_PTR_GET(segmentTimers_, vector<Models::CreateConfigGroupRequestConfigTimersSegmentTimers>) };
    inline CreateConfigGroupRequestConfigTimers& setSegmentTimers(const vector<Models::CreateConfigGroupRequestConfigTimersSegmentTimers> & segmentTimers) { DARABONBA_PTR_SET_VALUE(segmentTimers_, segmentTimers) };
    inline CreateConfigGroupRequestConfigTimers& setSegmentTimers(vector<Models::CreateConfigGroupRequestConfigTimersSegmentTimers> && segmentTimers) { DARABONBA_PTR_SET_RVALUE(segmentTimers_, segmentTimers) };


    // timerType Field Functions 
    bool hasTimerType() const { return this->timerType_ != nullptr;};
    void deleteTimerType() { this->timerType_ = nullptr;};
    inline string timerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
    inline CreateConfigGroupRequestConfigTimers& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline CreateConfigGroupRequestConfigTimers& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // Specifies whether to allow end users to configure the scheduled task.
    std::shared_ptr<bool> allowClientSetting_ = nullptr;
    // The cron expression specified in the scheduled task.
    // 
    // >  The time must be in UTC. For example, for 24:00 (UTC+8), you must set the value to 0 0 16 ? \\* 1,2,3,4,5,6,7
    std::shared_ptr<string> cronExpression_ = nullptr;
    // Specifies whether to forcefully execute the scheduled task.
    std::shared_ptr<bool> enforce_ = nullptr;
    // The interval at which the scheduled task is executed. Unit: minutes.
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<int32_t> notificationTime_ = nullptr;
    // The type of the scheduled operation. If you set TimerType to NoConnect, you can specify this parameter.
    // 
    // Valid values:
    // 
    // *   Hibernate: scheduled hibernation.
    // *   Shutdown: scheduled shutdown.
    std::shared_ptr<string> operationType_ = nullptr;
    // The process whitelist. If whitelisted processes are running, the scheduled task does not take effect.
    std::shared_ptr<vector<string>> processWhitelist_ = nullptr;
    // The reset option.
    // 
    // Valid values:
    // 
    // *   RESET_TYPE_SYSTEM: resets only the system disk.
    // *   RESET_TYPE_USER_DISK: resets only the data disk.
    // *   RESET_TYPE_BOTH: resets the system and data disks.
    std::shared_ptr<string> resetType_ = nullptr;
    std::shared_ptr<vector<Models::CreateConfigGroupRequestConfigTimersSegmentTimers>> segmentTimers_ = nullptr;
    // The scheduled task type.
    // 
    // Valid values:
    // 
    // *   NoOperationDisconnect: scheduled disconnection upon inactivity.
    // *   NoConnect: scheduled disconnection upon specified operation (OperationType).
    // *   TimerBoot: scheduled start.
    // *   TimerReset: scheduled reset.
    // *   NoOperationShutdown: scheduled shutdown upon inactivity.
    // *   NoOperationHibernate: scheduled hibernation upon inactivity.
    // *   TimerShutdown: scheduled shutdown.
    // *   NoOperationReboot: scheduled restart upon inactivity.
    // *   TimerReboot: scheduled restart.
    // 
    // This parameter is required.
    std::shared_ptr<string> timerType_ = nullptr;
    // The method to trigger the scheduled task upon inactivity.
    // 
    // Valid values:
    // 
    // *   Advanced: intelligent detection.
    // *   Standard: standard detection.
    std::shared_ptr<string> triggerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
