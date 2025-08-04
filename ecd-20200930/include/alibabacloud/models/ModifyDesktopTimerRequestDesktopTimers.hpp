// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPTIMERREQUESTDESKTOPTIMERS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPTIMERREQUESTDESKTOPTIMERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopTimerRequestDesktopTimers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopTimerRequestDesktopTimers& obj) { 
      DARABONBA_PTR_TO_JSON(AllowClientSetting, allowClientSetting_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(Enforce, enforce_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(ResetType, resetType_);
      DARABONBA_PTR_TO_JSON(TimerType, timerType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopTimerRequestDesktopTimers& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowClientSetting, allowClientSetting_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(Enforce, enforce_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
      DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
    };
    ModifyDesktopTimerRequestDesktopTimers() = default ;
    ModifyDesktopTimerRequestDesktopTimers(const ModifyDesktopTimerRequestDesktopTimers &) = default ;
    ModifyDesktopTimerRequestDesktopTimers(ModifyDesktopTimerRequestDesktopTimers &&) = default ;
    ModifyDesktopTimerRequestDesktopTimers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopTimerRequestDesktopTimers() = default ;
    ModifyDesktopTimerRequestDesktopTimers& operator=(const ModifyDesktopTimerRequestDesktopTimers &) = default ;
    ModifyDesktopTimerRequestDesktopTimers& operator=(ModifyDesktopTimerRequestDesktopTimers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowClientSetting_ != nullptr
        && this->cronExpression_ != nullptr && this->enforce_ != nullptr && this->interval_ != nullptr && this->operationType_ != nullptr && this->resetType_ != nullptr
        && this->timerType_ != nullptr; };
    // allowClientSetting Field Functions 
    bool hasAllowClientSetting() const { return this->allowClientSetting_ != nullptr;};
    void deleteAllowClientSetting() { this->allowClientSetting_ = nullptr;};
    inline bool allowClientSetting() const { DARABONBA_PTR_GET_DEFAULT(allowClientSetting_, false) };
    inline ModifyDesktopTimerRequestDesktopTimers& setAllowClientSetting(bool allowClientSetting) { DARABONBA_PTR_SET_VALUE(allowClientSetting_, allowClientSetting) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline ModifyDesktopTimerRequestDesktopTimers& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // enforce Field Functions 
    bool hasEnforce() const { return this->enforce_ != nullptr;};
    void deleteEnforce() { this->enforce_ = nullptr;};
    inline bool enforce() const { DARABONBA_PTR_GET_DEFAULT(enforce_, false) };
    inline ModifyDesktopTimerRequestDesktopTimers& setEnforce(bool enforce) { DARABONBA_PTR_SET_VALUE(enforce_, enforce) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline ModifyDesktopTimerRequestDesktopTimers& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline ModifyDesktopTimerRequestDesktopTimers& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // resetType Field Functions 
    bool hasResetType() const { return this->resetType_ != nullptr;};
    void deleteResetType() { this->resetType_ = nullptr;};
    inline string resetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
    inline ModifyDesktopTimerRequestDesktopTimers& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


    // timerType Field Functions 
    bool hasTimerType() const { return this->timerType_ != nullptr;};
    void deleteTimerType() { this->timerType_ = nullptr;};
    inline string timerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
    inline ModifyDesktopTimerRequestDesktopTimers& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


  protected:
    // Specifies whether to allow end users to configure the scheduled task.
    std::shared_ptr<bool> allowClientSetting_ = nullptr;
    // The cron expression of the schedule.
    // 
    // > The time must be in UTC. For example, for 24:00 (UTC+8), you must set the value to 0 0 16 ? \\* 1,2,3,4,5,6,7
    std::shared_ptr<string> cronExpression_ = nullptr;
    // Specifies whether to forcibly execute the scheduled task.
    // 
    // Valid values:
    // 
    // *   true: forcibly executes the scheduled task regardless of the status and connection of the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false: does not forcibly execute the scheduled task.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> enforce_ = nullptr;
    // The interval at which the scheduled task is executed. Unit: minutes.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The operations that scheduled tasks support. This parameter is valid only when TimerType is set to NoConnect.
    // 
    // Valid values:
    // 
    // *   Hibernate: hibernates the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Shutdown: stops the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> operationType_ = nullptr;
    // The reset type of the cloud computers.
    // 
    // Valid values:
    // 
    // *   RESET_TYPE_SYSTE: resets the system disk.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   RESET_TYPE_BOTH: resets data and user disks.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> resetType_ = nullptr;
    // The type of the scheduled task.
    // 
    // Valid values:
    // 
    // *   NoOperationDisconnect: Disconnects the cloud computers without performing operations on the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   LogoutShutdown: Stops the cloud computers when end users log out Alibaba Cloud Workspace clients.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   NoConnect: Disconnects the cloud computers when end users perform one of the actions that is specified by the OperationType parameter.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   TimerBoot: Starts the cloud computers on schedule.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   TimerReset: Resets the cloud computers on schedule.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   LoginAutoConnect: automatically connects to the cloud computers when end users log on to Alibaba Cloud Workspace clients.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   NoOperationShutdown: Stops the cloud computers without performing operations on the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   TimerShutdown: Stops the cloud computers on schedule.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   NoOperationReboot: Restarts the cloud computers without performing operations on the cloud computers.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   TimerReboot: Restarts the cloud computers on schedule.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> timerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
